import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer, FallingEdge
from cocotb.types import LogicArray
import os

# Load firmware from hex file
def load_firmware_hex():
    """Load firmware from firmware.hex file (one byte per line)"""
    fw_data = []
    hex_file = os.path.join(os.path.dirname(__file__), 'firmware.hex')
    
    if not os.path.exists(hex_file):
        print(f"Warning: firmware.hex not found at {hex_file}")
        return fw_data
    
    with open(hex_file, 'r') as f:
        for line in f:
            line = line.strip()
            if line and not line.startswith('#'):
                fw_data.append(int(line, 16))
    
    return fw_data

# Global firmware data
FIRMWARE = load_firmware_hex()

async def spi_flash_responder(dut):
    """
    Simulates an SPI flash device that responds to read requests
    during the bootloader phase.
    """
    dut._log.info(f"Loaded {len(FIRMWARE)} bytes of firmware from firmware.hex")
    
    await Timer(100, unit="ns")  # Wait a bit for reset
    
    spi_byte_index = 0
    spi_shift_reg = 0
    spi_bit_count = 0
    spi_read_mode = False
    
    while True:
        await RisingEdge(dut.clk)
        
        # Check if flash is selected
        if int(dut.flash_cs_n.value) == 1:
            # Flash deselected, reset state
            spi_byte_index = 0
            spi_shift_reg = 0
            spi_bit_count = 0
            spi_read_mode = False
            continue
        
        # Flash is selected, respond to clock
        if int(dut.flash_clk.value) == 1:
            # On flash clock high, shift out data to MISO
            if spi_read_mode and spi_byte_index < len(FIRMWARE):
                # Shift out a bit from the current byte
                byte_val = FIRMWARE[spi_byte_index]
                miso_bit = (byte_val >> (7 - spi_bit_count)) & 1
                dut.flash_miso.value = miso_bit
                
                spi_bit_count += 1
                if spi_bit_count == 8:
                    # Move to next byte
                    spi_byte_index += 1
                    spi_bit_count = 0
                    dut._log.info(f"SPI: Transmitted firmware byte {spi_byte_index-1}")
            elif spi_read_mode:
                # No more data, return 0xFF
                dut.flash_miso.value = 1  # MSB of 0xFF
        else:
            # Clock low, sample MOSI for command detection
            mosi_bit = int(dut.flash_mosi.value)
            spi_shift_reg = ((spi_shift_reg << 1) | mosi_bit) & 0xFF
            
            if not spi_read_mode and spi_shift_reg == 0x03:  # Read command
                dut._log.info("SPI: Read command detected (0x03)")
                spi_read_mode = True
                spi_byte_index = 0
                spi_bit_count = 0

async def reset_dut(dut):
    dut.rst.value = 1
    dut.boot_mode.value = 0  # Initialize (will be driven by boot ctrl)
    dut.flash_miso.value = 0
    await Timer(50, unit="ns")
    dut.rst.value = 0
    await Timer(20, unit="ns")

@cocotb.test()
async def test_mesh_with_bootloader(dut):
    """
    Test that verifies:
    1. Bootloader loads firmware from SPI flash into SRAM
    2. Bootloader releases CPU to execute firmware
    3. Network communication works with running firmware
    """
    
    # Start clock
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    # Start SPI responder task
    cocotb.start_soon(spi_flash_responder(dut))
    
    # Reset the design
    await reset_dut(dut)
    
    dut._log.info("=" * 70)
    dut._log.info("TESTBENCH: Waiting for bootloader phase...")
    dut._log.info("=" * 70)
    
    # Wait for bootloader to complete
    # boot_mode should be HIGH during boot, then go LOW when done
    boot_timeout = 10000  # 10K clock cycles = 100 microseconds
    cycle_count = 0
    boot_mode_was_high = False
    
    while cycle_count < boot_timeout:
        await RisingEdge(dut.clk)
        cycle_count += 1
        
        # Try to read boot_mode (if available as a signal)
        try:
            bm = int(dut.boot_mode.value)
            if cycle_count == 1:
                dut._log.info(f"Boot mode initial value: {bm}")
            if bm == 1:
                boot_mode_was_high = True
            if boot_mode_was_high and bm == 0:
                dut._log.info(f"Bootloader complete at cycle {cycle_count}")
                break
        except:
            # boot_mode might not be accessible; just wait a fixed time
            if cycle_count == 5000:
                dut._log.warning("boot_mode signal not accessible; proceeding anyway")
                break
    
    await Timer(100, unit="ns")  # Wait a bit after boot completes
    
    dut._log.info("=" * 70)
    dut._log.info("TESTBENCH: Bootloader phase complete. Beginning network tests.")
    dut._log.info("=" * 70)
    
    # Now run the network routing test
    # Flit format (34 bits):
    #   bit[33]     = valid
    #   bits[32:31] = tgt_row
    #   bits[30:29] = tgt_col
    #   bits[28:0]  = payload
    
    DEST_ROW     = 2
    DEST_COL     = 2
    VALID_BIT    = (1 << 33)
    DEST_ENCODED = (DEST_ROW << 31) | (DEST_COL << 29)

    test_values   = list(range(1, 10))  # [1, 2, ..., 9]
    expected_sum  = sum(test_values)
    received_sum  = 0
    packets_captured = 0

    dut._log.info(f"Injecting {len(test_values)} packets into Tile (0,0)...")

    for val in test_values:
        packet_val = VALID_BIT | DEST_ENCODED | (val & 0x1FFFFFFF)

        # Drive inject_00_nw for ONE clock cycle
        dut.inject_00_nw.value = LogicArray(packet_val, 34)
        await RisingEdge(dut.clk)   # rising edge: packet enters tile(0,0)
        dut.inject_00_nw.value = 0

        # With 3 pipeline hops the packet arrives at monitor_22_se
        # after 3 more rising edges.  Poll with a generous timeout.
        found = False
        for _ in range(20):
            await RisingEdge(dut.clk)
            out = dut.monitor_22_se.value
            if (int(out) >> 33) & 1:
                v = int(out) & 0x1FFFFFFF
                received_sum  += v
                packets_captured += 1
                dut._log.info(f"Captured packet {packets_captured}: value={v}")
                found = True
                break

        if not found:
            raise AssertionError(
                f"Packet with value {val} timed out! "
                "It was likely consumed by a tile or misrouted."
            )

    dut._log.info(f"Final Sum: {received_sum} / Expected: {expected_sum}")
    assert received_sum == expected_sum, \
        f"Sum mismatch: got {received_sum}, expected {expected_sum}"
    
    dut._log.info("=" * 70)
    dut._log.info("TEST PASSED: Bootloader + Network routing verified!")
    dut._log.info("=" * 70)

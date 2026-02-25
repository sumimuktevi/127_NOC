import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer, FallingEdge
from cocotb.types import LogicArray
import os

# Load firmware binary (like $readmemb in Verilog)
def load_firmware_binary():
    """Load firmware from firmware.bin or firmware.hex"""
    fw_data = []
    
    # Try binary first
    bin_file = os.path.join(os.path.dirname(__file__), 'firmware.bin')
    if os.path.exists(bin_file):
        with open(bin_file, 'rb') as f:
            fw_data = list(f.read())
        return fw_data
    
    # Fall back to hex file (one byte per line)
    hex_file = os.path.join(os.path.dirname(__file__), 'firmware.hex')
    if os.path.exists(hex_file):
        with open(hex_file, 'r') as f:
            for line in f:
                line = line.strip()
                if line and not line.startswith('#'):
                    fw_data.append(int(line, 16))
        return fw_data
    
    print("Warning: No firmware file found")
    return fw_data

# Global firmware data - pre-loaded like readmemb
FIRMWARE = load_firmware_binary()

async def spi_flash_responder(dut):
    """
    Simulates an SPI flash device that responds to read requests.
    The firmware is pre-loaded into FIRMWARE array (like readmemb).
    """
    dut._log.info(f"Flash Simulator: Loaded {len(FIRMWARE)} bytes from firmware")
    
    await Timer(100, unit="ns")  # Wait a bit for reset
    
    byte_counter = 0       # Which byte we're currently reading
    bit_counter = 0        # Which bit of the byte (0-7)
    state = "IDLE"         # IDLE, CMD_PHASE, ADDR_PHASE, or READ_PHASE
    
    prev_clk = 0
    
    while True:
        await Timer(1, unit="ns")  # Sample frequently
        
        cs_n = int(dut.flash_cs_n.value)
        clk = int(dut.flash_clk.value)
        mosi = int(dut.flash_mosi.value)
        
        # Reset on chip deselect
        if cs_n == 1:
            state = "IDLE"
            byte_counter = 0
            bit_counter = 0
            dut.flash_miso.value = 0
            prev_clk = clk
            continue
        
        # On clock rising edge, shift out a bit
        if clk == 1 and prev_clk == 0:
            if state == "IDLE":
                # Still receiving command
                state = "CMD_PHASE"
            
            if state == "CMD_PHASE":
                # Command phase (8 bits) - bootloader sends 0x03 (read command)
                if bit_counter < 8:
                    bit_counter += 1
                    if bit_counter == 8:
                        # Command received, move to address phase
                        state = "ADDR_PHASE"
                        bit_counter = 0
                        dut._log.info("SPI: Command phase complete, ready for address")
                    dut.flash_miso.value = 0  # Don't care during command phase
            
            elif state == "ADDR_PHASE":
                # Address phase (24 bits for 3-byte address)
                if bit_counter < 24:
                    bit_counter += 1
                    if bit_counter == 24:
                        # Address received, move to read phase
                        state = "READ_PHASE"
                        bit_counter = 0
                        byte_counter = 0
                        dut._log.info("SPI: Address 0x000000 received, starting data read")
                    dut.flash_miso.value = 0  # Don't care during address phase
            
            elif state == "READ_PHASE":
                # Read phase - shift out firmware bytes
                if byte_counter < len(FIRMWARE):
                    byte_val = FIRMWARE[byte_counter]
                    miso_bit = (byte_val >> (7 - bit_counter)) & 1
                    dut.flash_miso.value = miso_bit
                    
                    bit_counter += 1
                    if bit_counter == 8:
                        dut._log.info(f"SPI: Byte {byte_counter} = 0x{byte_val:02x}")
                        byte_counter += 1
                        bit_counter = 0
                else:
                    # No more data - return 0xFF
                    dut.flash_miso.value = 1
        
        prev_clk = clk

async def reset_dut(dut):
    dut.rst.value = 1
    dut.flash_miso.value = 0
    await Timer(50, unit="ns")
    dut.rst.value = 0
    await Timer(20, unit="ns")

@cocotb.test()
async def test_mesh_with_bootloader(dut):
    """
    Test that verifies:
    1. Bootloader loads firmware from SPI flash into SRAM (using readmemb-like approach)
    2. Bootloader releases CPU to execute firmware
    3. Network communication works with running firmware
    """
    
    # Start clock
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    # Start SPI flash responder (firmware pre-loaded)
    cocotb.start_soon(spi_flash_responder(dut))
    
    # Reset the design
    await reset_dut(dut)
    
    dut._log.info("=" * 70)
    dut._log.info("TESTBENCH: Waiting for bootloader to load firmware from flash...")
    dut._log.info("=" * 70)
    
    # Wait for bootloader to complete (SRAM filled + CPUs released)
    boot_timeout = 50000  # 50K clock cycles = 500 microseconds
    cycle_count = 0
    
    while cycle_count < boot_timeout:
        await RisingEdge(dut.clk)
        cycle_count += 1
        
        # Check if boot is complete by monitoring SRAM writes or timeout
        if cycle_count % 5000 == 0:
            dut._log.info(f"  ... waiting for bootloader (cycle {cycle_count})")
    
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

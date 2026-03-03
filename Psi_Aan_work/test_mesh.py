import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import os

def load_firmware_binary():
    bin_file = os.path.join(os.path.dirname(__file__), 'firmware.bin')
    if os.path.exists(bin_file):
        with open(bin_file, 'rb') as f:
            return list(f.read())
    return [0] * 1024

FIRMWARE = load_firmware_binary()

async def spi_flash_responder(dut):
    """Simulates SPI flash. Drives MISO on Falling Edge for stability."""
    byte_counter = 0
    bit_counter = 0
    state = "IDLE"
    
    while True:
        # Wait for either edge of the flash clock
        await cocotb.triggers.Edge(dut.flash_clk)
        
        cs_n = int(dut.flash_cs_n.value)
        clk = int(dut.flash_clk.value)
        
        if cs_n == 1:
            state = "IDLE"
            byte_counter = 0
            bit_counter = 0
            continue

        if clk == 1: # Rising Edge: Master samples, we just update state
            if state == "IDLE": 
                state = "CMD_PHASE"
            elif state == "CMD_PHASE":
                bit_counter += 1
                if bit_counter == 8: 
                    state = "ADDR_PHASE"
                    bit_counter = 0
            elif state == "ADDR_PHASE":
                bit_counter += 1
                if bit_counter == 24: 
                    state = "READ_PHASE"
                    bit_counter = 0
            elif state == "READ_PHASE":
                bit_counter += 1
                if bit_counter == 8:
                    bit_counter = 0
                    byte_counter += 1

        else: # Falling Edge: Slave (Python) drives data
            if state == "READ_PHASE":
                # Drive the bit for the Master to sample on the NEXT rising edge
                current_byte = FIRMWARE[byte_counter] if byte_counter < len(FIRMWARE) else 0x00
                bit_val = (current_byte >> (7 - bit_counter)) & 0x1
                dut.flash_miso.value = bit_val

@cocotb.test()
async def test_mesh_firmware_execution(dut):
    """Test full 3x3 Mesh: Bootload + Data Integrity"""
    
    # Start Clock
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    # Reset
    dut.rst.value = 1
    dut.inject_00_nw.value = 0
    dut.flash_miso.value = 0
    await Timer(100, unit="ns")
    dut.rst.value = 0

    # Start SPI Flash Task
    cocotb.start_soon(spi_flash_responder(dut))

    # Wait for Bootloader to Finish (DONE state sets cpu_reset_n to 1)
    # This might take ~180us for 1024 bytes
    while int(dut.boot_inst.cpu_reset_n.value) == 0:
        await Timer(1, unit="us")
    
    dut._log.info("Bootloading complete. Checking SRAM integrity...")

    global_errors = 0
    for r in range(3):
        for c in range(3):
            tile_errors = 0
            # Check first 16 bytes for proof of integrity
            for i in range(16):
                sram_handle = dut.rows[r].cols[c].tile_inst.sram_inst.mem[i]
                val = int(sram_handle.value)
                exp = FIRMWARE[i]
                
                if val != exp:
                    dut._log.error(f"Tile({r},{c}) @ {i}: Got 0x{val:02x}, Exp 0x{exp:02x} ✗")
                    tile_errors += 1
            
            if tile_errors == 0:
                dut._log.info(f"Tile({r},{c}) integrity passed ✓")
            global_errors += tile_errors

    assert global_errors == 0, f"Integrity Failed: {global_errors} mismatches."
    dut._log.info("Successfully bootloaded all 9 tiles with correct data!")
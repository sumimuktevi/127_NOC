import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import os

def load_firmware_binary():
    fw_data = []
    bin_file = os.path.join(os.path.dirname(__file__), 'firmware.bin')
    if os.path.exists(bin_file):
        with open(bin_file, 'rb') as f:
            fw_data = list(f.read())
    return fw_data

FIRMWARE = load_firmware_binary()

async def spi_flash_responder(dut):
    """Simulates SPI flash. Drives MISO on Falling Edge."""
    byte_counter, bit_counter = 0, 0
    state, prev_clk = "IDLE", 0
    while True:
        await Timer(1, unit="ns")
        cs_n = int(dut.flash_cs_n.value)
        clk = int(dut.flash_clk.value)
        if cs_n == 1:
            state, prev_clk = "IDLE", clk
            continue
        if clk == 1 and prev_clk == 0: # Rising Edge
            if state == "IDLE": state = "CMD_PHASE"
            if state == "CMD_PHASE":
                bit_counter += 1
                if bit_counter == 8: state = "ADDR_PHASE"; bit_counter = 0
            elif state == "ADDR_PHASE":
                bit_counter += 1
                if bit_counter == 24: state = "READ_PHASE"; bit_counter = 0; byte_counter = 0
        elif clk == 0 and prev_clk == 1: # Falling Edge
            if state == "READ_PHASE" and byte_counter < len(FIRMWARE):
                byte_val = FIRMWARE[byte_counter]
                dut.flash_miso.value = (byte_val >> (7 - bit_counter)) & 1
                bit_counter += 1
                if bit_counter == 8: byte_counter += 1; bit_counter = 0
        prev_clk = clk

async def reset_dut(dut):
    dut.rst.value = 1
    await Timer(100, unit="ns")
    dut.rst.value = 0

@cocotb.test()
async def test_mesh_firmware_execution(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    cocotb.start_soon(spi_flash_responder(dut))
    await reset_dut(dut)
    
    # Wait for bootload process to finish
    await Timer(185, unit="us") 

    dut._log.info("--- STARTING GLOBAL DATA INTEGRITY CHECK (9 TILES) ---")
    global_errors = 0
    
    for r in range(3):
        for c in range(3):
            tile_errors = 0
            check_len = 8 # Checking first 8 bytes for proof of integrity
            
            for i in range(check_len):
                try:
                    # UPDATED PATH: Based on your log 'mesh_3x3.rows[r].cols[c].tile_inst.sram_inst'
                    # We use .mem because that's the array inside gf180mcu_fd_ip_sram...
                    sram_handle = dut.rows[r].cols[c].tile_inst.sram_inst.mem[i]
                    val = int(sram_handle.value)
                    exp = FIRMWARE[i]
                    
                    if val == exp:
                        dut._log.info(f"Tile({r},{c}) @ {i}: 0x{val:02x} == 0x{exp:02x} ✓")
                    else:
                        dut._log.error(f"Tile({r},{c}) @ {i}: 0x{val:02x} != 0x{exp:02x} ✗")
                        tile_errors += 1
                except Exception as e:
                    dut._log.error(f"Failed to access Tile({r},{c}) SRAM: {e}")
                    tile_errors += 1
            
            if tile_errors > 0:
                global_errors += tile_errors
            else:
                dut._log.info(f"Tile ({r},{c}): FULL MATCH")

    if global_errors == 0:
        dut._log.info("✓ SUCCESS: All 9 tiles verified.")
    else:
        raise AssertionError(f"Integrity Failed: {global_errors} mismatches.")
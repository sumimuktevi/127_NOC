# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import RisingEdge, FallingEdge, Timer
# import os

# def load_firmware_binary():
#     bin_file = os.path.join(os.path.dirname(__file__), 'firmware.bin')
#     if os.path.exists(bin_file):
#         with open(bin_file, 'rb') as f:
#             return list(f.read())
#     return [0] * 1024

# FIRMWARE = load_firmware_binary()

# async def spi_flash_responder(dut):
#     """Simulates SPI flash. Drives MISO on Falling Edge for stability."""
#     byte_counter = 0
#     bit_counter = 0
#     state = "IDLE"
    
#     while True:
#         # Wait for either edge of the flash clock
#         await cocotb.triggers.Edge(dut.flash_clk)
        
#         cs_n = int(dut.flash_cs_n.value)
#         clk = int(dut.flash_clk.value)
        
#         if cs_n == 1:
#             state = "IDLE"
#             byte_counter = 0
#             bit_counter = 0
#             continue

#         if clk == 1: # Rising Edge: Master samples, we just update state
#             if state == "IDLE": 
#                 state = "CMD_PHASE"
#             elif state == "CMD_PHASE":
#                 bit_counter += 1
#                 if bit_counter == 8: 
#                     state = "ADDR_PHASE"
#                     bit_counter = 0
#             elif state == "ADDR_PHASE":
#                 bit_counter += 1
#                 if bit_counter == 24: 
#                     state = "READ_PHASE"
#                     bit_counter = 0
#             elif state == "READ_PHASE":
#                 bit_counter += 1
#                 if bit_counter == 8:
#                     bit_counter = 0
#                     byte_counter += 1

#         else: # Falling Edge: Slave (Python) drives data
#             if state == "READ_PHASE":
#                 # Drive the bit for the Master to sample on the NEXT rising edge
#                 current_byte = FIRMWARE[byte_counter] if byte_counter < len(FIRMWARE) else 0x00
#                 bit_val = (current_byte >> (7 - bit_counter)) & 0x1
#                 dut.flash_miso.value = bit_val

# @cocotb.test()
# async def test_mesh_firmware_execution(dut):
#     """Test full 3x3 Mesh: Bootload + Data Integrity"""
    
#     # Start Clock
#     cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
#     # Reset
#     dut.rst.value = 1
#     dut.inject_00_nw.value = 0
#     dut.flash_miso.value = 0
#     await Timer(100, unit="ns")
#     dut.rst.value = 0

#     # Start SPI Flash Task
#     cocotb.start_soon(spi_flash_responder(dut))

#     # Wait for Bootloader to Finish (DONE state sets cpu_reset_n to 1)
#     # This might take ~180us for 1024 bytes
#     while int(dut.boot_inst.cpu_reset_n.value) == 0:
#         await Timer(1, unit="us")
    
#     dut._log.info("Bootloading complete. Checking SRAM integrity...")

#     global_errors = 0
#     for r in range(3):
#         for c in range(3):
#             tile_errors = 0
#             # Check first 16 bytes for proof of integrity
#             for i in range(16):
#                 sram_handle = dut.rows[r].cols[c].tile_inst.sram_inst.mem[i]
#                 val = int(sram_handle.value)
#                 exp = FIRMWARE[i]
                
#                 if val != exp:
#                     dut._log.error(f"Tile({r},{c}) @ {i}: Got 0x{val:02x}, Exp 0x{exp:02x} ✗")
#                     tile_errors += 1
            
#             if tile_errors == 0:
#                 dut._log.info(f"Tile({r},{c}) integrity passed ✓")
#             global_errors += tile_errors

#     assert global_errors == 0, f"Integrity Failed: {global_errors} mismatches."
#     dut._log.info("Successfully bootloaded all 9 tiles with correct data!")

# test_mesh.py
#
# Cocotb testbench for SERV Mesh:
#  1) SPI flash model to feed firmware.bin
#  2) Wait for bootloader DONE (cpu_reset_n goes high)
#  3) (Optional) quick bootload integrity check (first N bytes)
#  4) Print GoL grid at Iteration 0/1/2 so you can visually compare
#
# Notes:
# - Your SRAM mem array is [1023:0] (1024 entries). That means the *Python index*
#   is NOT the CPU address. We map: mem_index = cpu_addr - SRAM_BASE_ADDR
# - Adjust HIER_* strings below if your instance names differ.
#
# Works regardless of GF180 vs Sky130; only hierarchy + memory mapping matters.

# test_mesh.py
#
# Cocotb testbench for SERV Mesh:
#  - SPI flash model streams firmware.bin
#  - Wait for bootloader to release CPU reset
#  - Print ONLY Iteration 0:
#       EXPECTED (seeded blinker) vs ACTUAL (SRAM)
#    using '.' = alive, '#' = dead
#  - Includes a hex dump of SRAM_GRID_BASE region for tile(0,0)
#
# IMPORTANT:
#  - This assumes your C code uses:
#       SRAM_GRID_BASE = 0x2C0
#       SRAM_NEXT_GEN  = 0x324
#       BUF_N/S/W/E    = 0x388..0x3B8
#  - SRAM is 1KB at CPU addresses 0x000..0x3FF (linker ORIGIN=0 LENGTH=1024)
#
# Notes:
#  - Auto-detects if sram_inst.mem[] is byte-wide or word-wide and reads bytes correctly.
#  - Fixes cocotb deprecation: get_sim_time(unit="ns") and uses flash_clk.value_change.

import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer

# ============================================================
# CONFIG (matches linker: SRAM ORIGIN=0x0 LENGTH=1024 bytes)
# ============================================================

SIZE = 10

# Must match your C defines
SRAM_GRID_BASE = 0x000002C0
SRAM_NEXT_GEN  = 0x00000324
BUF_N          = 0x00000388
BUF_S          = 0x00000398
BUF_W          = 0x000003A8
BUF_E          = 0x000003B8

# Mesh dimensions (for printing)
MESH_R = 3
MESH_C = 3

FIRMWARE_BIN_NAME = "firmware.bin"

# GF180 SRAM macro behavior: becomes “operational” later in sim
RESET_HOLD_MS = 2
POST_BOOT_WAIT_MS = 1

# ============================================================
# Firmware Loader
# ============================================================

def load_firmware_binary():
    bin_file = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    if os.path.exists(bin_file):
        with open(bin_file, "rb") as f:
            return list(f.read())
    return [0] * 1024

FIRMWARE = load_firmware_binary()

# ============================================================
# SPI Flash Model
# ============================================================

async def spi_flash_responder(dut):
    """
    Minimal SPI flash responder:
    - Watches flash_clk transitions while CS is low
    - After cmd+addr, drives MISO on falling edge (stable before rising edge sample)

    Uses dut.flash_clk.value_change (avoids Edge() deprecation warning).
    """
    byte_counter = 0
    bit_counter = 0
    state = "IDLE"

    while True:
        await dut.flash_clk.value_change

        cs_n = int(dut.flash_cs_n.value)
        clk  = int(dut.flash_clk.value)

        if cs_n == 1:
            state = "IDLE"
            byte_counter = 0
            bit_counter = 0
            continue

        if clk == 1:
            # Rising: master samples; we advance protocol state
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
        else:
            # Falling: drive next bit for next rising edge
            if state == "READ_PHASE":
                current_byte = FIRMWARE[byte_counter] if byte_counter < len(FIRMWARE) else 0x00
                bit_val = (current_byte >> (7 - bit_counter)) & 0x1
                dut.flash_miso.value = bit_val

# ============================================================
# DUT hierarchy helpers
# ============================================================

def get_tile(dut, r, c):
    return dut.rows[r].cols[c].tile_inst

def sram_read_byte(tile, cpu_addr: int) -> int:
    """
    Read a BYTE at CPU byte address cpu_addr from tile SRAM.

    Auto-detect element width:
      - If mem[0] is <=8 bits: byte-addressed
      - Else: word-addressed (e.g., 32-bit), extract byte lane (little-endian)
    """
    mem = tile.sram_inst.mem
    elem_bits = len(mem[0])  # e.g. 8 or 32

    if elem_bits <= 8:
        # mem[index] corresponds to byte address index
        return int(mem[cpu_addr].value) & 0xFF

    # Word memory
    bytes_per_word = elem_bits // 8
    word_index = cpu_addr // bytes_per_word
    byte_lane = cpu_addr % bytes_per_word

    word = int(mem[word_index].value)
    # Assume little-endian byte lanes (RISC-V common)
    return (word >> (8 * byte_lane)) & 0xFF

# ============================================================
# Debug + printing helpers
# ============================================================

def dump_region(tile, base, count_bytes=64):
    print(f"\nDUMP @ 0x{base:04x} ({count_bytes} bytes):")
    for off in range(0, count_bytes, 16):
        chunk = [sram_read_byte(tile, base + off + i) for i in range(16)]
        print(f"0x{base+off:04x}: " + " ".join(f"{b:02x}" for b in chunk))

def expected_blinker_iter0():
    exp = [[0 for _ in range(SIZE)] for _ in range(SIZE)]
    cx = SIZE // 2
    cy = SIZE // 2
    exp[cy-1][cx] = 1
    exp[cy][cx]   = 1
    exp[cy+1][cx] = 1
    return exp

def print_expected_vs_actual_seed(dut, r, c):
    tile = get_tile(dut, r, c)
    exp = expected_blinker_iter0()

    print("\n===================================================")
    print(f"TILE ({r},{c})  ITER 0")
    print("EXPECTED (seed)         ACTUAL (SRAM)")
    print("---------------------------------------------------")

    for y in range(SIZE):
        exp_row = ""
        act_row = ""
        for x in range(SIZE):
            exp_row += "." if exp[y][x] else "#"
            addr = SRAM_GRID_BASE + (y * SIZE + x)
            v = sram_read_byte(tile, addr)
            act_row += "." if v == 1 else "#"
        print(f"{exp_row}    {act_row}")

    print("===================================================\n")

# ============================================================
# TEST (Iteration 0 only)
# ============================================================

@cocotb.test()
async def test_iter0_seed_only(dut):
    # Start clock
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    # Reset + defaults
    dut.rst.value = 1
    dut.flash_miso.value = 0
    if hasattr(dut, "inject_00_nw"):
        dut.inject_00_nw.value = 0

    # Hold reset long enough for GF180 SRAM macro to become operational
    await Timer(RESET_HOLD_MS, unit="ms")
    dut.rst.value = 0

    # Start SPI flash model (loads firmware.bin)
    cocotb.start_soon(spi_flash_responder(dut))

    # Wait for bootloader to release CPU
    while int(dut.boot_inst.cpu_reset_n.value) == 0:
        await Timer(10, unit="us")

    dut._log.info("Boot complete.")
    
    # **DIAGNOSTIC**: Check if firmware was actually loaded
    dut._log.info(f"Firmware loaded: {len(FIRMWARE)} bytes")
    dut._log.info(f"First 16 bytes of FIRMWARE: {FIRMWARE[:16]}")
    dut._log.info(f"cpu_reset_n after boot: {int(dut.boot_inst.cpu_reset_n.value)}")
    
    # **DIAGNOSTIC**: Bootload integrity check
    tile00 = get_tile(dut, 0, 0)
    bootload_errors = 0
    for i in range(min(16, len(FIRMWARE))):
        sram_val = sram_read_byte(tile00, i)
        fw_val = FIRMWARE[i]
        if sram_val != fw_val:
            dut._log.error(f"Bootload mismatch @ {i}: SRAM=0x{sram_val:02x}, FW=0x{fw_val:02x}")
            bootload_errors += 1
    
    if bootload_errors == 0 and len(FIRMWARE) > 0:
        dut._log.info("✓ Bootload integrity check PASSED")
    else:
        dut._log.warning(f"✗ Bootload integrity check FAILED ({bootload_errors} mismatches)")
    
    # Give firmware extra time to initialize the grid
    dut._log.info("Waiting 10ms for firmware to initialize...")
    try:
        await Timer(10, unit="ms")
    except Exception as e:
        dut._log.warning(f"Timer raised: {e}")
    dut._log.info(f"cpu_reset_n after wait: {int(dut.boot_inst.cpu_reset_n.value)}")

    # Log SRAM mem element width (helps confirm byte vs word)
    try:
        dut._log.info(f"SRAM mem element width = {len(tile00.sram_inst.mem[0])} bits")
    except Exception:
        pass

    # **DIAGNOSTIC**: Search for non-zero bytes (lightweight)
    dut._log.info("\nSearching for non-zero bytes in SRAM...")
    non_zero_count = 0
    first_nonzero_addr = -1
    for addr in range(256):  # Sample first 256 bytes only
        val = sram_read_byte(tile00, addr)
        if val != 0:
            non_zero_count += 1
            if first_nonzero_addr == -1:
                first_nonzero_addr = addr
                dut._log.info(f"  First non-zero @ 0x{addr:04x}: 0x{val:02x}")
    
    if non_zero_count == 0:
        dut._log.warning("SRAM first 256 bytes are ALL ZERO - firmware didn't initialize anything!")
    else:
        dut._log.info(f"Found {non_zero_count} non-zero bytes in first 256 bytes")
    
    dut._log.info(f"\nDumping SRAM_GRID_BASE (0x{SRAM_GRID_BASE:04x})...")
    dump_region(tile00, SRAM_GRID_BASE, 64)

    # Print Expected vs Actual for Iteration 0 (seed check)
    print("\n\n******** ITERATION 0: EXPECTED (seed) vs ACTUAL (SRAM) ********")
    for r in range(MESH_R):
        for c in range(MESH_C):
            print_expected_vs_actual_seed(dut, r, c)
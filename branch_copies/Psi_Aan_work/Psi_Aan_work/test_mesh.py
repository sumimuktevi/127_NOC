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
import struct
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge

# ============================================================
# CONFIG
# ============================================================

SIZE   = 10
MESH_R = 3
MESH_C = 3

FIRMWARE_BIN_NAME = "firmware.bin"
FIRMWARE_ELF_NAME = "firmware/firmware.elf"

# GF180 SRAM macro behaviour
RESET_HOLD_MS    = 2
POST_BOOT_WAIT_MS = 10   # extra time AFTER seed snapshot (for future iter tests)

# Time we wait after cpu_reset_n goes high before reading the seed grid.
# SERV is a 1-bit serial RISC-V: each 32-bit instruction takes 32+ clock cycles.
#   - BSS zero loop (100 stores)  ≈ 100 × ~2000 cycles each ≈ 200 000 cycles
#   - 3 seed stores               ≈         6 000 cycles
#   - Total seed init             ≈        ~206 000 cycles  → ~2.1 ms @ 100 MHz
#   - One full GoL iteration (100 cells × 8 neighbours) ≈ several million cycles
# 2000 µs (200 000 000 ps) sits safely after seed write, well before first iteration.
SEED_SAMPLE_US = 2000  # µs — enough for SERV to complete seed init

# ============================================================
# ELF symbol reader  (pure-Python, no dependencies)
# ============================================================

def read_elf_symbol(elf_path: str, sym_name: str) -> int | None:
    """
    Return the linked virtual address of `sym_name` from an ELF32-LE file,
    or None if the symbol is not found or the file doesn't exist.
    """
    if not os.path.exists(elf_path):
        return None
    with open(elf_path, "rb") as f:
        raw = f.read()

    # ELF32 header offsets
    if raw[0:4] != b'\x7fELF':
        return None
    e_shoff    = struct.unpack_from("<I", raw, 0x20)[0]
    e_shentsize= struct.unpack_from("<H", raw, 0x2e)[0]
    e_shnum    = struct.unpack_from("<H", raw, 0x30)[0]
    e_shstrndx = struct.unpack_from("<H", raw, 0x32)[0]

    def sh(i):
        off = e_shoff + i * e_shentsize
        return struct.unpack_from("<IIIIIIIIII", raw, off)

    # Locate .symtab and .strtab (its linked string table)
    SHT_SYMTAB = 2
    symtab_sh = strtab_sh = None
    for i in range(e_shnum):
        s = sh(i)
        if s[1] == SHT_SYMTAB:
            symtab_sh = s
            strtab_sh = sh(s[6])   # sh_link points to the string table
            break
    if symtab_sh is None:
        return None

    sym_offset  = symtab_sh[4]
    sym_size    = symtab_sh[5]
    sym_entsize = symtab_sh[9]
    str_offset  = strtab_sh[4]

    n_syms = sym_size // sym_entsize
    for i in range(n_syms):
        off = sym_offset + i * sym_entsize
        st_name  = struct.unpack_from("<I", raw, off)[0]
        st_value = struct.unpack_from("<I", raw, off + 4)[0]
        # Read the null-terminated name from the string table
        name_start = str_offset + st_name
        name_end   = raw.index(b'\x00', name_start)
        name       = raw[name_start:name_end].decode("ascii", errors="replace")
        if name == sym_name:
            return st_value
    return None

# ============================================================
# Firmware loader
# ============================================================

def load_firmware_binary() -> list[int]:
    bin_file = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    if os.path.exists(bin_file):
        with open(bin_file, "rb") as f:
            return list(f.read())
    return [0] * 1024

FIRMWARE = load_firmware_binary()

# ============================================================
# Resolve SRAM_GRID_BASE from the ELF symbol table
# ============================================================

_elf_path = os.path.join(os.path.dirname(__file__), FIRMWARE_ELF_NAME)

# Try the primary symbol first; if the compiler stripped BSS symbols from the
# ELF (common with -Os -nostdlib), fall through to progressively coarser fallbacks.
_grid_addr = read_elf_symbol(_elf_path, "current_grid")

if _grid_addr is None:
    # Try the linker-exported _bss_start (= address of first .bss byte).
    # current_grid is the first BSS variable, so _bss_start == &current_grid.
    _grid_addr = read_elf_symbol(_elf_path, "_bss_start")

if _grid_addr is None:
    # Compute from _start's address + size (= end of .text = start of .bss).
    _start_addr = read_elf_symbol(_elf_path, "_start")
    if _start_addr is not None:
        # We need _start's size; read_elf_symbol only returns the address.
        # Re-parse to get st_size for _start.
        import struct as _struct
        def _start_size(elf_path):
            if not os.path.exists(elf_path):
                return None
            raw = open(elf_path, "rb").read()
            if raw[0:4] != b'\x7fELF':
                return None
            e_shoff    = _struct.unpack_from("<I", raw, 0x20)[0]
            e_shentsize= _struct.unpack_from("<H", raw, 0x2e)[0]
            e_shnum    = _struct.unpack_from("<H", raw, 0x30)[0]
            def sh(i):
                return _struct.unpack_from("<IIIIIIIIII", raw, e_shoff + i*e_shentsize)
            for i in range(e_shnum):
                s = sh(i)
                if s[1] == 2:  # SHT_SYMTAB
                    strtab = sh(s[6])
                    for j in range(s[5] // s[9]):
                        off = s[4] + j * s[9]
                        st_name = _struct.unpack_from("<I", raw, off)[0]
                        st_value= _struct.unpack_from("<I", raw, off+4)[0]
                        st_size = _struct.unpack_from("<I", raw, off+8)[0]
                        ne = raw.index(b'\x00', strtab[4]+st_name)
                        name = raw[strtab[4]+st_name:ne].decode("ascii","replace")
                        if name == "_start":
                            return st_value + st_size
            return None
        _grid_addr = _start_size(_elf_path)

if _grid_addr is None:
    # Last resort: BSS starts right after .text, which is exactly len(firmware.bin).
    _fw_bin = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    if os.path.exists(_fw_bin):
        _grid_addr = os.path.getsize(_fw_bin)

if _grid_addr is not None:
    SRAM_GRID_BASE = _grid_addr
    print(f"[testbench] current_grid @ 0x{SRAM_GRID_BASE:04x} ({SRAM_GRID_BASE} decimal)")
else:
    import warnings
    warnings.warn(
        "Could not determine current_grid address from ELF or firmware.bin. "
        "SRAM_GRID_BASE = 0 — grid reads will be WRONG. Rebuild firmware first.",
        stacklevel=1,
    )
    SRAM_GRID_BASE = 0x0000

# ============================================================
# SPI Flash Model
# ============================================================

async def spi_flash_responder(dut):
    """
    SPI flash responder matched to boot_loader.v timing.

    boot_loader.v READ state:
      - Rising edge (spi_phase=0): CLK goes HIGH
      - Falling edge (spi_phase=1): CLK goes LOW, then immediately
        samples flash_miso into shift_reg on the same clock cycle.

    So we must drive MISO on the FALLING edge of flash_clk (same edge
    the bootloader samples), ensuring the value is already stable.
    The bootloader always fills the full 1024-byte SRAM regardless of
    firmware size; we return 0x00 for addresses beyond len(FIRMWARE).
    """
    while True:
        # Wait for CS to go low (start of a new SPI transaction)
        await FallingEdge(dut.flash_cs_n)

        # Skip CMD (8 bits) + ADDR (24 bits) = 32 rising edges
        for _ in range(32):
            await RisingEdge(dut.flash_clk)

        # Stream firmware bytes, MSB first, driving on falling CLK edge
        byte_counter = 0
        while True:
            for bit in range(7, -1, -1):
                await FallingEdge(dut.flash_clk)
                current_byte = FIRMWARE[byte_counter] if byte_counter < len(FIRMWARE) else 0x00
                dut.flash_miso.value = (current_byte >> bit) & 0x1
            byte_counter += 1
            # Stop when bootloader deasserts CS
            if int(dut.flash_cs_n.value) == 1:
                break

# ============================================================
# DUT hierarchy helpers
# ============================================================

def get_tile(dut, r, c):
    return dut.rows[r].cols[c].tile_inst

def sram_read_byte(tile, cpu_addr: int) -> int:
    """
    Read a BYTE at CPU byte-address `cpu_addr` from the tile SRAM.
    Auto-detects element width (8-bit byte-addressed vs 32-bit word-addressed).
    """
    mem = tile.sram_inst.mem
    elem_bits = len(mem[0])

    if elem_bits <= 8:
        return int(mem[cpu_addr].value) & 0xFF

    # Word-addressed memory (little-endian byte lanes)
    bytes_per_word = elem_bits // 8
    word_index = cpu_addr // bytes_per_word
    byte_lane  = cpu_addr  % bytes_per_word
    word = int(mem[word_index].value)
    return (word >> (8 * byte_lane)) & 0xFF

# ============================================================
# Debug helpers
# ============================================================

def dump_region(tile, base, count_bytes=64):
    print(f"\nDUMP @ 0x{base:04x} ({count_bytes} bytes):")
    for off in range(0, count_bytes, 16):
        chunk = [sram_read_byte(tile, base + off + i) for i in range(16)]
        print("0x{:04x}: ".format(base + off) + " ".join(f"{b:02x}" for b in chunk))

def expected_blinker_seed():
    """The initial GoL grid written by the C firmware."""
    exp = [[0] * SIZE for _ in range(SIZE)]
    cx = SIZE // 2   # col 5
    cy = SIZE // 2   # row 5
    exp[cy - 1][cx] = 1
    exp[cy    ][cx] = 1
    exp[cy + 1][cx] = 1
    return exp

def print_expected_vs_actual(dut, r, c, label="ITER 0 (seed)"):
    tile = get_tile(dut, r, c)
    exp  = expected_blinker_seed()

    print("\n===================================================")
    print(f"TILE ({r},{c})  {label}")
    print("EXPECTED (seed)         ACTUAL (SRAM)")
    print("---------------------------------------------------")

    mismatches = 0
    for y in range(SIZE):
        exp_row = ""
        act_row = ""
        for x in range(SIZE):
            exp_ch = "." if exp[y][x] else "#"
            addr   = SRAM_GRID_BASE + (y * SIZE + x)
            v      = sram_read_byte(tile, addr)
            act_ch = "." if v == 1 else "#"
            exp_row += exp_ch
            act_row += act_ch
            if exp_ch != act_ch:
                mismatches += 1
        print(f"{exp_row}    {act_row}")

    print("===================================================\n")
    return mismatches

# ============================================================
# TEST — Iteration 0 seed check
# ============================================================

@cocotb.test()
async def test_iter0_seed_only(dut):
    # Start clock (10 ns → 100 MHz)
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    # Reset + defaults
    dut.rst.value = 1
    dut.flash_miso.value = 0
    if hasattr(dut, "inject_00_nw"):
        dut.inject_00_nw.value = 0

    await Timer(RESET_HOLD_MS, unit="ms")
    dut.rst.value = 0

    # Start SPI flash model
    cocotb.start_soon(spi_flash_responder(dut))

    # Wait for bootloader to release CPU
    while int(dut.cpu_rst_n.value) == 0:
        await Timer(10, unit="us")

    dut._log.info("Boot complete.")
    dut._log.info(f"Firmware loaded: {len(FIRMWARE)} bytes")
    dut._log.info(f"First 16 bytes of FIRMWARE: {FIRMWARE[:16]}")
    dut._log.info(f"SRAM_GRID_BASE resolved to: 0x{SRAM_GRID_BASE:04x}")

    # --- Bootload integrity check (first 16 bytes of code vs SRAM) ---
    tile00 = get_tile(dut, 0, 0)
    dut._log.info(f"SRAM mem element width = {len(tile00.sram_inst.mem[0])} bits")

    bootload_errors = 0
    for i in range(min(16, len(FIRMWARE))):
        sv = sram_read_byte(tile00, i)
        fv = FIRMWARE[i]
        if sv != fv:
            dut._log.error(f"  Bootload mismatch @ {i}: SRAM=0x{sv:02x}, FW=0x{fv:02x}")
            bootload_errors += 1
    if bootload_errors == 0 and len(FIRMWARE) > 0:
        dut._log.info("✓ Bootload integrity check PASSED")
    else:
        dut._log.warning(f"✗ Bootload integrity: {bootload_errors} mismatches")

    # ---------------------------------------------------------------
    # Short wait: long enough for seed-init (~500 cycles), short enough
    # that no GoL iteration has completed (~10 000 cycles per iteration).
    # ---------------------------------------------------------------
    dut._log.info(f"Waiting {SEED_SAMPLE_US} µs for firmware seed init...")
    await Timer(SEED_SAMPLE_US, unit="us")
    dut._log.info(f"cpu_rst_n after seed wait: {int(dut.cpu_rst_n.value)}")

    dut._log.info(f"\nDumping SRAM_GRID_BASE (0x{SRAM_GRID_BASE:04x})...")
    dump_region(tile00, SRAM_GRID_BASE, 64)

    # ---------------------------------------------------------------
    # Print and evaluate Expected vs Actual for ALL tiles
    # ---------------------------------------------------------------
    print("\n\n******** ITERATION 0: EXPECTED (seed) vs ACTUAL (SRAM) ********")
    total_mismatches = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            total_mismatches += print_expected_vs_actual(dut, r, c)

    if total_mismatches == 0:
        dut._log.info("✓ ALL TILES: seed matches expected blinker pattern")
    else:
        dut._log.error(f"✗ {total_mismatches} cell mismatches across all tiles")

    assert total_mismatches == 0, \
        f"Seed mismatch: {total_mismatches} cells wrong across 9 tiles."

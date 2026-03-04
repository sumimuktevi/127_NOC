# import os
# import struct
# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import Timer, RisingEdge, FallingEdge

# # ============================================================
# # CONFIG
# # ============================================================

# SIZE   = 10
# MESH_R = 3
# MESH_C = 3

# FIRMWARE_BIN_NAME = "firmware.bin"
# FIRMWARE_ELF_NAME = "firmware/firmware.elf"

# # GF180 SRAM macro behaviour
# RESET_HOLD_MS    = 2
# POST_BOOT_WAIT_MS = 10   # extra time AFTER seed snapshot (for future iter tests)

# # Time we wait after cpu_reset_n goes high before reading the seed grid.
# # SERV is a 1-bit serial RISC-V: each 32-bit instruction takes 32+ clock cycles.
# #   - BSS zero loop (100 stores)  ≈ 100 × ~2000 cycles each ≈ 200 000 cycles
# #   - 3 seed stores               ≈         6 000 cycles
# #   - Total seed init             ≈        ~206 000 cycles  → ~2.1 ms @ 100 MHz
# #   - One full GoL iteration (100 cells × 8 neighbours) ≈ several million cycles
# # 2000 µs (200 000 000 ps) sits safely after seed write, well before first iteration.
# SEED_SAMPLE_US = 2000  # µs — enough for SERV to complete seed init

# # ============================================================
# # ELF symbol reader  (pure-Python, no dependencies)
# # ============================================================

# def read_elf_symbol(elf_path: str, sym_name: str) -> int | None:
#     """
#     Return the linked virtual address of `sym_name` from an ELF32-LE file,
#     or None if the symbol is not found or the file doesn't exist.
#     """
#     if not os.path.exists(elf_path):
#         return None
#     with open(elf_path, "rb") as f:
#         raw = f.read()

#     # ELF32 header offsets
#     if raw[0:4] != b'\x7fELF':
#         return None
#     e_shoff    = struct.unpack_from("<I", raw, 0x20)[0]
#     e_shentsize= struct.unpack_from("<H", raw, 0x2e)[0]
#     e_shnum    = struct.unpack_from("<H", raw, 0x30)[0]
#     e_shstrndx = struct.unpack_from("<H", raw, 0x32)[0]

#     def sh(i):
#         off = e_shoff + i * e_shentsize
#         return struct.unpack_from("<IIIIIIIIII", raw, off)

#     # Locate .symtab and .strtab (its linked string table)
#     SHT_SYMTAB = 2
#     symtab_sh = strtab_sh = None
#     for i in range(e_shnum):
#         s = sh(i)
#         if s[1] == SHT_SYMTAB:
#             symtab_sh = s
#             strtab_sh = sh(s[6])   # sh_link points to the string table
#             break
#     if symtab_sh is None:
#         return None

#     sym_offset  = symtab_sh[4]
#     sym_size    = symtab_sh[5]
#     sym_entsize = symtab_sh[9]
#     str_offset  = strtab_sh[4]

#     n_syms = sym_size // sym_entsize
#     for i in range(n_syms):
#         off = sym_offset + i * sym_entsize
#         st_name  = struct.unpack_from("<I", raw, off)[0]
#         st_value = struct.unpack_from("<I", raw, off + 4)[0]
#         # Read the null-terminated name from the string table
#         name_start = str_offset + st_name
#         name_end   = raw.index(b'\x00', name_start)
#         name       = raw[name_start:name_end].decode("ascii", errors="replace")
#         if name == sym_name:
#             return st_value
#     return None

# # ============================================================
# # Firmware loader
# # ============================================================

# def load_firmware_binary() -> list[int]:
#     bin_file = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
#     if os.path.exists(bin_file):
#         with open(bin_file, "rb") as f:
#             return list(f.read())
#     return [0] * 1024

# FIRMWARE = load_firmware_binary()

# # ============================================================
# # Resolve SRAM_GRID_BASE from the ELF symbol table
# # ============================================================

# _elf_path = os.path.join(os.path.dirname(__file__), FIRMWARE_ELF_NAME)

# # Try the primary symbol first; if the compiler stripped BSS symbols from the
# # ELF (common with -Os -nostdlib), fall through to progressively coarser fallbacks.
# _grid_addr = read_elf_symbol(_elf_path, "current_grid")

# if _grid_addr is None:
#     # Try the linker-exported _bss_start (= address of first .bss byte).
#     # current_grid is the first BSS variable, so _bss_start == &current_grid.
#     _grid_addr = read_elf_symbol(_elf_path, "_bss_start")

# if _grid_addr is None:
#     # Compute from _start's address + size (= end of .text = start of .bss).
#     _start_addr = read_elf_symbol(_elf_path, "_start")
#     if _start_addr is not None:
#         # We need _start's size; read_elf_symbol only returns the address.
#         # Re-parse to get st_size for _start.
#         import struct as _struct
#         def _start_size(elf_path):
#             if not os.path.exists(elf_path):
#                 return None
#             raw = open(elf_path, "rb").read()
#             if raw[0:4] != b'\x7fELF':
#                 return None
#             e_shoff    = _struct.unpack_from("<I", raw, 0x20)[0]
#             e_shentsize= _struct.unpack_from("<H", raw, 0x2e)[0]
#             e_shnum    = _struct.unpack_from("<H", raw, 0x30)[0]
#             def sh(i):
#                 return _struct.unpack_from("<IIIIIIIIII", raw, e_shoff + i*e_shentsize)
#             for i in range(e_shnum):
#                 s = sh(i)
#                 if s[1] == 2:  # SHT_SYMTAB
#                     strtab = sh(s[6])
#                     for j in range(s[5] // s[9]):
#                         off = s[4] + j * s[9]
#                         st_name = _struct.unpack_from("<I", raw, off)[0]
#                         st_value= _struct.unpack_from("<I", raw, off+4)[0]
#                         st_size = _struct.unpack_from("<I", raw, off+8)[0]
#                         ne = raw.index(b'\x00', strtab[4]+st_name)
#                         name = raw[strtab[4]+st_name:ne].decode("ascii","replace")
#                         if name == "_start":
#                             return st_value + st_size
#             return None
#         _grid_addr = _start_size(_elf_path)

# if _grid_addr is None:
#     # Last resort: BSS starts right after .text, which is exactly len(firmware.bin).
#     _fw_bin = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
#     if os.path.exists(_fw_bin):
#         _grid_addr = os.path.getsize(_fw_bin)

# if _grid_addr is not None:
#     SRAM_GRID_BASE = _grid_addr
#     print(f"[testbench] current_grid @ 0x{SRAM_GRID_BASE:04x} ({SRAM_GRID_BASE} decimal)")
# else:
#     import warnings
#     warnings.warn(
#         "Could not determine current_grid address from ELF or firmware.bin. "
#         "SRAM_GRID_BASE = 0 — grid reads will be WRONG. Rebuild firmware first.",
#         stacklevel=1,
#     )
#     SRAM_GRID_BASE = 0x0000

# # ============================================================
# # SPI Flash Model
# # ============================================================

# async def spi_flash_responder(dut):
#     """
#     SPI flash responder matched to boot_loader.v timing.

#     boot_loader.v READ state:
#       - Rising edge (spi_phase=0): CLK goes HIGH
#       - Falling edge (spi_phase=1): CLK goes LOW, then immediately
#         samples flash_miso into shift_reg on the same clock cycle.

#     So we must drive MISO on the FALLING edge of flash_clk (same edge
#     the bootloader samples), ensuring the value is already stable.
#     The bootloader always fills the full 1024-byte SRAM regardless of
#     firmware size; we return 0x00 for addresses beyond len(FIRMWARE).
#     """
#     while True:
#         # Wait for CS to go low (start of a new SPI transaction)
#         await FallingEdge(dut.flash_cs_n)

#         # Skip CMD (8 bits) + ADDR (24 bits) = 32 rising edges
#         for _ in range(32):
#             await RisingEdge(dut.flash_clk)

#         # Stream firmware bytes, MSB first, driving on falling CLK edge
#         byte_counter = 0
#         while True:
#             for bit in range(7, -1, -1):
#                 await FallingEdge(dut.flash_clk)
#                 current_byte = FIRMWARE[byte_counter] if byte_counter < len(FIRMWARE) else 0x00
#                 dut.flash_miso.value = (current_byte >> bit) & 0x1
#             byte_counter += 1
#             # Stop when bootloader deasserts CS
#             if int(dut.flash_cs_n.value) == 1:
#                 break

# # ============================================================
# # DUT hierarchy helpers
# # ============================================================

# def get_tile(dut, r, c):
#     return dut.rows[r].cols[c].tile_inst

# def sram_read_byte(tile, cpu_addr: int) -> int:
#     """
#     Read a BYTE at CPU byte-address `cpu_addr` from the tile SRAM.
#     Auto-detects element width (8-bit byte-addressed vs 32-bit word-addressed).
#     """
#     mem = tile.sram_inst.mem
#     elem_bits = len(mem[0])

#     if elem_bits <= 8:
#         return int(mem[cpu_addr].value) & 0xFF

#     # Word-addressed memory (little-endian byte lanes)
#     bytes_per_word = elem_bits // 8
#     word_index = cpu_addr // bytes_per_word
#     byte_lane  = cpu_addr  % bytes_per_word
#     word = int(mem[word_index].value)
#     return (word >> (8 * byte_lane)) & 0xFF

# # ============================================================
# # Debug helpers
# # ============================================================

# def dump_region(tile, base, count_bytes=64):
#     print(f"\nDUMP @ 0x{base:04x} ({count_bytes} bytes):")
#     for off in range(0, count_bytes, 16):
#         chunk = [sram_read_byte(tile, base + off + i) for i in range(16)]
#         print("0x{:04x}: ".format(base + off) + " ".join(f"{b:02x}" for b in chunk))

# def expected_blinker_seed():
#     """The initial GoL grid written by the C firmware."""
#     exp = [[0] * SIZE for _ in range(SIZE)]
#     cx = SIZE // 2   # col 5
#     cy = SIZE // 2   # row 5
#     exp[cy - 1][cx] = 1
#     exp[cy    ][cx] = 1
#     exp[cy + 1][cx] = 1
#     return exp

# def print_expected_vs_actual(dut, r, c, label="ITER 0 (seed)"):
#     tile = get_tile(dut, r, c)
#     exp  = expected_blinker_seed()

#     print("\n===================================================")
#     print(f"TILE ({r},{c})  {label}")
#     print("EXPECTED (seed)         ACTUAL (SRAM)")
#     print("---------------------------------------------------")

#     mismatches = 0
#     for y in range(SIZE):
#         exp_row = ""
#         act_row = ""
#         for x in range(SIZE):
#             exp_ch = "." if exp[y][x] else "#"
#             addr   = SRAM_GRID_BASE + (y * SIZE + x)
#             v      = sram_read_byte(tile, addr)
#             act_ch = "." if v == 1 else "#"
#             exp_row += exp_ch
#             act_row += act_ch
#             if exp_ch != act_ch:
#                 mismatches += 1
#         print(f"{exp_row}    {act_row}")

#     print("===================================================\n")
#     return mismatches

# # ============================================================
# # TEST — Iteration 0 seed check
# # ============================================================

# @cocotb.test()
# async def test_iter0_seed_only(dut):
#     # Start clock (10 ns → 100 MHz)
#     cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

#     # Reset + defaults
#     dut.rst.value = 1
#     dut.flash_miso.value = 0
#     if hasattr(dut, "inject_00_nw"):
#         dut.inject_00_nw.value = 0

#     await Timer(RESET_HOLD_MS, unit="ms")
#     dut.rst.value = 0

#     # Start SPI flash model
#     cocotb.start_soon(spi_flash_responder(dut))

#     # Wait for bootloader to release CPU
#     while int(dut.cpu_rst_n.value) == 0:
#         await Timer(10, unit="us")

#     dut._log.info("Boot complete.")
#     dut._log.info(f"Firmware loaded: {len(FIRMWARE)} bytes")
#     dut._log.info(f"First 16 bytes of FIRMWARE: {FIRMWARE[:16]}")
#     dut._log.info(f"SRAM_GRID_BASE resolved to: 0x{SRAM_GRID_BASE:04x}")

#     # --- Bootload integrity check (first 16 bytes of code vs SRAM) ---
#     tile00 = get_tile(dut, 0, 0)
#     dut._log.info(f"SRAM mem element width = {len(tile00.sram_inst.mem[0])} bits")

#     bootload_errors = 0
#     for i in range(min(16, len(FIRMWARE))):
#         sv = sram_read_byte(tile00, i)
#         fv = FIRMWARE[i]
#         if sv != fv:
#             dut._log.error(f"  Bootload mismatch @ {i}: SRAM=0x{sv:02x}, FW=0x{fv:02x}")
#             bootload_errors += 1
#     if bootload_errors == 0 and len(FIRMWARE) > 0:
#         dut._log.info("✓ Bootload integrity check PASSED")
#     else:
#         dut._log.warning(f"✗ Bootload integrity: {bootload_errors} mismatches")

#     # ---------------------------------------------------------------
#     # Short wait: long enough for seed-init (~500 cycles), short enough
#     # that no GoL iteration has completed (~10 000 cycles per iteration).
#     # ---------------------------------------------------------------
#     dut._log.info(f"Waiting {SEED_SAMPLE_US} µs for firmware seed init...")
#     await Timer(SEED_SAMPLE_US, unit="us")
#     dut._log.info(f"cpu_rst_n after seed wait: {int(dut.cpu_rst_n.value)}")

#     dut._log.info(f"\nDumping SRAM_GRID_BASE (0x{SRAM_GRID_BASE:04x})...")
#     dump_region(tile00, SRAM_GRID_BASE, 64)

#     # ---------------------------------------------------------------
#     # Print and evaluate Expected vs Actual for ALL tiles
#     # ---------------------------------------------------------------
#     print("\n\n******** ITERATION 0: EXPECTED (seed) vs ACTUAL (SRAM) ********")
#     total_mismatches = 0
#     for r in range(MESH_R):
#         for c in range(MESH_C):
#             total_mismatches += print_expected_vs_actual(dut, r, c)

#     if total_mismatches == 0:
#         dut._log.info("✓ ALL TILES: seed matches expected blinker pattern")
#     else:
#         dut._log.error(f"✗ {total_mismatches} cell mismatches across all tiles")

#     assert total_mismatches == 0, \
#         f"Seed mismatch: {total_mismatches} cells wrong across 9 tiles."
 





"""
test_mesh.py  —  CoCotb testbench for the 3×3 RISC-V mesh
===========================================================

Integration plan
----------------
  • SPI boot phase  : spi_flash_responder() mimics a real SPI flash and feeds
                      firmware to boot_controller exactly as Paul's driver does.
  • Post-boot phase : spi_write_packet() drives flash_mosi / flash_clk /
                      flash_cs_n with Paul's SPI protocol so the gateway can
                      decode every 32-bit packet and broadcast Wishbone writes
                      to the correct mesh tile.

Boot + firmware sequencing (critical — must match original test_mesh.py)
-------------------------------------------------------------------------
  Phase 1 — Hardware boot (boot_controller):
    rst is held HIGH for RESET_HOLD_MS, then released.
    spi_flash_responder feeds the firmware binary over SPI.
    We poll cpu_rst_n — the boot_controller asserts it HIGH when loading
    is complete.  Only then does the SERV CPU begin executing.

  Phase 2 — C firmware execution (SERV RISC-V):
    SERV is a 1-bit serial core — each 32-bit instruction takes 32+ cycles.
    The firmware's BSS zero-loop + seed/image stores take ~206 000 cycles
    (≈ 2.1 ms at 100 MHz) before the program data is fully written to SRAM.
    We wait SEED_SAMPLE_US µs after cpu_rst_n goes HIGH to let the firmware
    finish, then — and only then — the host may inject data via SPI.

  Phase 3 — Host SPI injection (gateway / Wishbone):
    Only runs after Phase 2.  Uses Paul's spi_write_packet() driver.

Four tests (run in order by cocotb):
  1. test_memory_dump          – dump every core's SRAM after firmware init
                                 and compare against the ideal PBM image;
                                 write result to dump_result.pbm.
  2. test_image_load           – after firmware finishes, load a PBM image
                                 via SPI and verify each tile's SRAM slice.
  3. test_noc_sram_write       – after firmware finishes, write a known
                                 pattern into every core via poke_core_memory
                                 and verify all bytes landed correctly.
  4. test_output_verification  – full pipeline: boot → firmware → host load
                                 → execution → dump → write output_result.pbm.
"""

import os
import struct
import cocotb
import numpy as np
from cocotb.clock    import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge

# ─────────────────────────────────────────────
#  CONFIG
# ─────────────────────────────────────────────
SIZE   = 10          # pixels per tile side
MESH_R = 3
MESH_C = 3
FIRMWARE_BIN_NAME = "firmware.bin"
FIRMWARE_ELF_NAME = "firmware/firmware.elf"
INPUT_PBM  = "test3_paul.pbm"   # 30×30 PBM sliced 3×3 for injection
OUTPUT_PBM = "output_result.pbm"

# Timing constants — matched exactly to the original test_mesh.py comments.
RESET_HOLD_MS  = 2     # ms — reset hold time
SEED_SAMPLE_US = 2000  # µs — firmware execution wait after cpu_rst_n HIGH

# NOTE on OUTPUT_ARCH(riscv) and the linker script
# ─────────────────────────────────────────────────
# The linker script bundles .text + .data into one block copied from Flash to
# SRAM by the bootloader.  current_grid and next_grid are in .data, so they
# live at known addresses INSIDE the firmware binary — NOT at the start of .bss.
#
# SRAM_IMAGE_BASE (= address of current_grid, the host-writable pixel buffer)
# and SRAM_OUTPUT_BASE (= address of next_grid, the firmware output buffer)
# MUST be read from the ELF symbol table.  A hardcoded value like 128 is wrong
# and will cause the SPI writes to overwrite firmware code in .text.
#
# Resolution order:
#   1. ELF symbol "current_grid"   → SRAM_IMAGE_BASE
#   2. ELF symbol "_bss_start"     → fallback (grid is first .data variable)
#   3. len(firmware.bin)           → last resort (BSS start approximation)
# (All resolved below after FIRMWARE and ELF path are defined.)

# ─────────────────────────────────────────────
#  ELF SYMBOL READER  (pure-Python, no deps)
#  Taken verbatim from the original test_mesh.py
# ─────────────────────────────────────────────
def read_elf_symbol(elf_path: str, sym_name: str):
    """Return the linked virtual address of sym_name from an ELF32-LE file,
    or None if not found / file does not exist."""
    if not os.path.exists(elf_path):
        return None
    with open(elf_path, "rb") as f:
        raw = f.read()
    if raw[0:4] != b'\x7fELF':
        return None
    e_shoff     = struct.unpack_from("<I", raw, 0x20)[0]
    e_shentsize = struct.unpack_from("<H", raw, 0x2e)[0]
    e_shnum     = struct.unpack_from("<H", raw, 0x30)[0]

    def sh(i):
        return struct.unpack_from("<IIIIIIIIII", raw, e_shoff + i * e_shentsize)

    SHT_SYMTAB = 2
    symtab_sh = strtab_sh = None
    for i in range(e_shnum):
        s = sh(i)
        if s[1] == SHT_SYMTAB:
            symtab_sh = s
            strtab_sh = sh(s[6])
            break
    if symtab_sh is None:
        return None

    sym_offset  = symtab_sh[4]
    sym_size    = symtab_sh[5]
    sym_entsize = symtab_sh[9]
    str_offset  = strtab_sh[4]

    for i in range(sym_size // sym_entsize):
        off      = sym_offset + i * sym_entsize
        st_name  = struct.unpack_from("<I", raw, off)[0]
        st_value = struct.unpack_from("<I", raw, off + 4)[0]
        name_end = raw.index(b'\x00', str_offset + st_name)
        name     = raw[str_offset + st_name:name_end].decode("ascii", errors="replace")
        if name == sym_name:
            return st_value
    return None


# ─────────────────────────────────────────────
#  FIRMWARE LOADER
# ─────────────────────────────────────────────
def load_firmware_binary() -> list:
    bin_file = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    if os.path.exists(bin_file):
        with open(bin_file, "rb") as f:
            return list(f.read())
    return [0] * 1024

FIRMWARE = load_firmware_binary()

# ─────────────────────────────────────────────────────────────────────────────
#  ADDRESS RESOLUTION  (all three bases from ELF symbol table)
#
#  With OUTPUT_ARCH(riscv) and the project linker script:
#    .text + .data  → copied from Flash to SRAM by bootloader (firmware.bin)
#    .bss           → zero-init by CPU at startup (NOT in firmware.bin)
#
#  current_grid and next_grid are in .data → their addresses are INSIDE the
#  firmware binary, below len(firmware.bin).  SRAM_IMAGE_BASE = 128 was wrong;
#  it must come from the ELF.
# ─────────────────────────────────────────────────────────────────────────────
_elf_path = os.path.join(os.path.dirname(__file__), FIRMWARE_ELF_NAME)

# ── SRAM_GRID_BASE  (= &current_grid, where firmware wrote its seed grid) ────
_grid_addr = read_elf_symbol(_elf_path, "current_grid")
if _grid_addr is None:
    _grid_addr = read_elf_symbol(_elf_path, "_bss_start")
if _grid_addr is None:
    _fw_bin = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    if os.path.exists(_fw_bin):
        _grid_addr = os.path.getsize(_fw_bin)

if _grid_addr is not None:
    SRAM_GRID_BASE = _grid_addr
    print(f"[testbench] current_grid  @ 0x{SRAM_GRID_BASE:04x} ({SRAM_GRID_BASE})")
else:
    import warnings
    warnings.warn("Could not resolve current_grid — SRAM_GRID_BASE = 0x0000", stacklevel=1)
    SRAM_GRID_BASE = 0x0000

# ── SRAM_IMAGE_BASE  (= &current_grid = host-writable pixel input buffer) ────
# current_grid IS the input buffer — the host writes here, firmware reads here.
# This is the same address as SRAM_GRID_BASE.
# If the firmware uses a separate "image_in" or "input_grid" symbol, add it here.
_image_addr = read_elf_symbol(_elf_path, "current_grid")
if _image_addr is None:
    _image_addr = SRAM_GRID_BASE   # same buffer
SRAM_IMAGE_BASE = _image_addr
print(f"[testbench] SRAM_IMAGE_BASE @ 0x{SRAM_IMAGE_BASE:04x} ({SRAM_IMAGE_BASE})")

# ── SRAM_OUTPUT_BASE  (= &next_grid, where firmware writes its output) ───────
_out_addr = read_elf_symbol(_elf_path, "next_grid")
if _out_addr is None:
    # next_grid immediately follows current_grid in .data:
    #   current_grid is SIZE*SIZE bytes = 100 bytes, aligned to 4 → 100 bytes
    _out_addr = SRAM_IMAGE_BASE + SIZE * SIZE
SRAM_OUTPUT_BASE = _out_addr
print(f"[testbench] SRAM_OUTPUT_BASE@ 0x{SRAM_OUTPUT_BASE:04x} ({SRAM_OUTPUT_BASE})")


# ─────────────────────────────────────────────
#  PBM HELPERS
# ─────────────────────────────────────────────
def load_pbm_slices(filename: str) -> dict:
    """
    Load a 30×30 bitmap file and return {(tile_row, tile_col): [100 pixels]}.

    Handles two formats:
      A) Standard P1 PBM — starts with 'P1', then optional '#' comments,
         then 'W H', then pixel values 0/1 whitespace-separated.
      B) Headerless / raw-row format — each line is exactly W characters of
         '0' and '1' with no spaces (e.g. '000000000000000000000000000000').
         First token is '000...' not 'P1'.  Paul's PBM generator uses this.

    Both are decoded to a (30,30) numpy array of uint8 and sliced into the
    3×3 tile grid.
    """
    full_path = os.path.join(os.path.dirname(__file__), filename)

    with open(full_path, "r") as fh:
        raw = fh.read()

    # ── Detect format from first non-empty, non-comment line ─────────────────
    first_token = ""
    for line in raw.splitlines():
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        first_token = line.split()[0]
        break

    pixels = []

    if first_token == "P1":
        # Standard P1: tokenise, skip magic + optional comments, read W H then pixels
        tokens = []
        for line in raw.splitlines():
            line = line.strip()
            if line.startswith("#"):
                continue
            tokens.extend(line.split())
        # tokens[0]='P1', tokens[1]=W, tokens[2]=H, tokens[3:]=pixels
        w = int(tokens[1])
        h = int(tokens[2])
        pixels = [int(t) for t in tokens[3: 3 + w * h]]

    else:
        # Headerless format: each non-empty, non-comment line is a row of '0'/'1' chars.
        # Lines may be space-separated tokens OR a single concatenated string.
        rows = []
        for line in raw.splitlines():
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            # If the line contains spaces, split into tokens; otherwise treat as
            # a single run of digit characters.
            if " " in line or "\t" in line:
                row_pixels = [int(t) for t in line.split() if t in ("0", "1")]
            else:
                row_pixels = [int(ch) for ch in line if ch in ("0", "1")]
            if row_pixels:
                rows.append(row_pixels)

        h = len(rows)
        w = max(len(r) for r in rows) if rows else 0
        pixels = [px for row in rows for px in row]

    if len(pixels) != w * h:
        raise ValueError(
            f"PBM pixel count mismatch in {full_path!r}: "
            f"expected {w}×{h}={w*h}, got {len(pixels)}"
        )

    img = np.array(pixels, dtype=np.uint8).reshape(h, w)

    slices = {}
    for r in range(MESH_R):
        for c in range(MESH_C):
            slices[(r, c)] = img[r*SIZE:(r+1)*SIZE, c*SIZE:(c+1)*SIZE].flatten().tolist()
    return slices


def save_pbm(filename: str, pixel_grid: list):
    """
    Write a 30×30 list-of-lists (or flat 900-element list) to a P1 PBM file.
    """
    full_path = os.path.join(os.path.dirname(__file__), filename)
    flat = []
    for row in pixel_grid:
        if isinstance(row, (list, np.ndarray)):
            flat.extend(int(v) for v in row)
        else:
            flat.append(int(row))

    with open(full_path, "w") as fh:
        fh.write("P1\n")
        fh.write(f"# generated by test_mesh.py\n")
        fh.write(f"30 30\n")
        for i, v in enumerate(flat):
            fh.write(f"{v}")
            fh.write("\n" if (i + 1) % 30 == 0 else " ")

    print(f"[PBM] Wrote {full_path}")


def assemble_pbm_from_tiles(tile_data: dict) -> list:
    """
    Reconstruct a 30-row list (each row = 30 pixels) from the 3×3 tile dict.
    tile_data: {(r,c): flat 100-pixel list}
    """
    rows = []
    for tile_r in range(MESH_R):
        for pixel_r in range(SIZE):
            row_pixels = []
            for tile_c in range(MESH_C):
                chunk = tile_data[(tile_r, tile_c)]
                row_pixels.extend(chunk[pixel_r*SIZE:(pixel_r+1)*SIZE])
            rows.append(row_pixels)
    return rows


# ─────────────────────────────────────────────
#  SPI BOOT RESPONDER  (Paul's flash protocol)
# ─────────────────────────────────────────────
async def spi_flash_responder(dut):
    """
    Mimics a SPI NOR flash responding to the boot_controller.

    boot_controller READ sequence:
      1. Assert CS low
      2. Clock out 8-bit command (0x03 READ) + 24-bit address = 32 rising edges
      3. Clock in data, MSB first.  The controller latches MISO on the
         FALLING edge of flash_clk.

    We therefore drive MISO BEFORE each falling edge so it is stable when
    the controller samples it.
    """
    while True:
        await FallingEdge(dut.flash_cs_n)          # wait for CS assertion

        # Skip CMD + ADDR (32 rising edges)
        for _ in range(32):
            await RisingEdge(dut.flash_clk)

        byte_idx = 0
        while int(dut.flash_cs_n.value) == 0:
            byte_val = FIRMWARE[byte_idx] if byte_idx < len(FIRMWARE) else 0x00
            for bit in range(7, -1, -1):
                await FallingEdge(dut.flash_clk)
                dut.flash_miso.value = (byte_val >> bit) & 0x1
            byte_idx += 1


# ─────────────────────────────────────────────
#  SPI WRITE PACKET  (Paul's host→chip driver)
# ─────────────────────────────────────────────
async def spi_write_packet(dut, data: int, clk_half_ns: int = 25):
    """
    Transmit a 32-bit packet to the gateway via the dedicated host SPI pins:
      spi_cs_n, spi_clk, spi_mosi  (input ports on mesh_3x3).

    Gateway shift-register timing (gateway.v):
      The gateway samples mosi on posedge clk while cs=LOW, shifting:
          shift_reg_in <= {shift_reg_in[30:0], mosi}
      On the SAME posedge clk where cs goes HIGH, it shifts one final time
      (clocking in whatever mosi is at that moment) before the state machine
      latches shift_reg_in.  This means:
        - mosi MUST be 0 when CS rises, so the spurious final shift clocks in 0
          (which only corrupts bit 0, which is outside the opcode/dest fields)
        - CS must rise AWAY from posedge clk (mid-period) so the state machine
          sees the clean, fully-shifted value on the NEXT posedge

    Protocol:
      1. Align to a system clock rising edge (deterministic start)
      2. After half a clock period, assert CS low (mid-period → gate samples
         first mosi bit on the next rising edge)
      3. Drive 32 bits, each stable for one full clk_half_ns period either side
         of a system clock edge
      4. Set mosi=0, then deassert CS mid-period (after a half system clk delay)
      5. Wait 8 system clock cycles for the full pipeline flush:
           +1: IDLE latches shift_reg, asserts STB → ACK_WAIT
           +2: tile registers ack_o=1
           +3: ACK_WAIT clears STB → IDLE
           +4..+8: margin
    """
    # Step 1: align to system clock rising edge for determinism
    await RisingEdge(dut.clk)

    # Step 2: assert CS low mid-period (5 ns after rising edge, clock period=10 ns)
    await Timer(5, "ns")
    dut.spi_cs_n.value = 0
    dut.spi_mosi.value = 0

    # Step 3: clock 32 bits — each bit is stable for clk_half_ns on each side
    for bit in range(31, -1, -1):
        await Timer(clk_half_ns, "ns")
        dut.spi_mosi.value = (data >> bit) & 1
        dut.spi_clk.value  = 1
        await Timer(clk_half_ns, "ns")
        dut.spi_clk.value  = 0

    # Step 4: hold mosi=0, deassert CS mid-period so no stray bit is clocked in
    await Timer(clk_half_ns, "ns")
    dut.spi_mosi.value = 0   # must be 0 before CS rises (spurious final shift)
    dut.spi_cs_n.value = 1

    # Step 5: wait for full pipeline flush (8 system clock cycles)
    for _ in range(8):
        await RisingEdge(dut.clk)


# ─────────────────────────────────────────────
#  PACKET BUILDER
# ─────────────────────────────────────────────
def make_write_packet(core_col: int, core_row: int,
                      sram_addr: int, byte_val: int) -> int:
    """
    Build a 32-bit gateway packet:
      [31:28] opcode  = 0x1 (WRITE)
      [27:26] core_x  = col
      [25:24] core_y  = row
      [23:16] addr    (8-bit SRAM offset)
      [15:8]  reserved = 0
      [7:0]   data
    """
    return ((0x1       << 28)
          | (core_col  << 26)
          | (core_row  << 24)
          | ((sram_addr & 0xFF) << 16)
          | (byte_val  & 0xFF))


# ─────────────────────────────────────────────
#  HIERARCHY / SRAM ACCESS HELPERS
# ─────────────────────────────────────────────
def _get_tile_sram(dut, tile_r: int, tile_c: int):
    """
    Return the sram_inst handle for tile (tile_r, tile_c).

    The simulator log confirms the exact hierarchy is:
        mesh_3x3.TILE_ROW[r].TILE_COL[c].tile_inst.sram_inst

    In cocotb v2 / Verilator, generate-for arrays are exposed as array
    objects accessed with Python [] indexing, not as attribute strings like
    "TILE_ROW__0__".  So the correct access is:

        dut.TILE_ROW[r].TILE_COL[c].tile_inst.sram_inst

    We keep a short list of fallbacks for other simulators (Icarus, older
    Verilator builds that flatten the hierarchy differently).
    """
    candidates = [
        # ── PRIMARY (confirmed by simulator log) ────────────────────────────
        # cocotb v2 + Verilator: generate arrays accessed with __getitem__
        lambda: dut.TILE_ROW[tile_r].TILE_COL[tile_c].tile_inst.sram_inst,

        # ── Icarus vvp / older cocotb: named generate blocks via rows/cols ──
        lambda: dut.rows[tile_r].cols[tile_c].tile_inst.sram_inst,

        # ── Some Verilator builds flatten with double-underscore separators ──
        lambda: getattr(dut, f"TILE_ROW__{tile_r}__TILE_COL__{tile_c}__tile_inst").sram_inst,

        # ── All-lowercase variant ────────────────────────────────────────────
        lambda: getattr(dut, f"tile_row__{tile_r}__tile_col__{tile_c}__tile_inst").sram_inst,

        # ── Fully flat names (some older tools) ─────────────────────────────
        lambda: getattr(dut, f"tile_{tile_r}_{tile_c}").sram_inst,
    ]

    last_err = None
    for fn in candidates:
        try:
            return fn()
        except (AttributeError, TypeError, KeyError) as e:
            last_err = e
            continue

    raise AttributeError(
        f"Cannot locate sram_inst for tile ({tile_r},{tile_c}).\n"
        f"Last error: {last_err}\n"
        f"Expected path: dut.TILE_ROW[{tile_r}].TILE_COL[{tile_c}].tile_inst.sram_inst\n"
        f"Check that your mesh_3x3.v generate blocks are named TILE_ROW / TILE_COL "
        f"and the tile instance inside is named tile_inst."
    )


def sram_read_byte(sram, addr: int) -> int:
    """Read one byte from an SRAM mem handle at the given byte address."""
    mem = sram.mem
    elem_bits = len(mem[0])
    if elem_bits <= 8:
        return int(mem[addr].value) & 0xFF
    # Word-addressed (32-bit elements, little-endian lanes)
    bpw       = elem_bits // 8
    word_idx  = addr // bpw
    byte_lane = addr  % bpw
    return (int(mem[word_idx].value) >> (8 * byte_lane)) & 0xFF


def dump_tile_sram(dut, tile_r: int, tile_c: int,
                   base: int = SRAM_IMAGE_BASE, length: int = SIZE*SIZE) -> list:
    """Return `length` bytes starting at `base` from tile (tile_r, tile_c)."""
    sram = _get_tile_sram(dut, tile_r, tile_c)
    return [sram_read_byte(sram, base + i) for i in range(length)]


# ─────────────────────────────────────────────
#  DIRECT TESTBENCH SRAM WRITE  (poke_core_memory replacement)
# ─────────────────────────────────────────────
async def poke_core_memory(dut, tile_r: int, tile_c: int,
                           data: list, base: int = SRAM_IMAGE_BASE):
    """
    Write `data` (list of byte values) directly into tile (tile_r, tile_c)'s
    SRAM starting at `base`, using the gateway SPI path so we go through the
    actual DUT logic rather than bypassing it.

    This replaces the old poke_core_memory that touched SRAM directly.
    We use spi_write_packet() — Paul's host-to-chip SPI driver — for a more
    accurate integration test.
    """
    for offset, val in enumerate(data):
        pkt = make_write_packet(tile_c, tile_r, base + offset, val & 0xFF)
        await spi_write_packet(dut, pkt)


# ─────────────────────────────────────────────
#  COMMON RESET / BOOT + FIRMWARE WAIT
# ─────────────────────────────────────────────
async def reset_and_boot(dut):
    """
    Full two-phase startup.  Every test must call this before touching SRAM
    or sending any host SPI packets.

    Phase 1 — Hardware bootloader
    ──────────────────────────────
    • Hold rst HIGH for RESET_HOLD_MS (matches GF180 SRAM macro requirement).
    • Release rst; the boot_controller starts reading firmware from the SPI
      flash model and writing it into every tile's SRAM.
    • Poll cpu_rst_n every 10 µs.  The boot_controller asserts it HIGH once
      loading is complete and the SERV CPU may begin executing.

    Phase 2 — C firmware execution
    ────────────────────────────────
    • After cpu_rst_n goes HIGH the SERV core starts running but it is a 1-bit
      serial CPU — each 32-bit instruction costs 32+ clock cycles.
    • The firmware's BSS zero loop + data stores take ~206 000 cycles (≈ 2.1 ms
      at 100 MHz) before all initialisation data is in SRAM.
    • We wait SEED_SAMPLE_US µs (2000 µs) — safely after the last firmware
      store, well before a full GoL iteration — before returning.

    Only after BOTH phases return is it safe for the host to inject data via SPI.
    """
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    # ── Defaults ──────────────────────────────────────────────────────────────
    dut.rst.value        = 1
    dut.flash_miso.value = 0
    # flash_cs_n / flash_clk / flash_mosi are OUTPUT ports driven by
    # boot_controller — do NOT drive them from the testbench.

    # Host SPI pins (dedicated inputs to the gateway — separate from flash_*)
    dut.spi_cs_n.value   = 1   # idle HIGH (deasserted)
    dut.spi_clk.value    = 0
    dut.spi_mosi.value   = 0

    if hasattr(dut, "inject_00_nw"):
        dut.inject_00_nw.value = 0

    # ── Phase 1a : hold reset ─────────────────────────────────────────────────
    await Timer(RESET_HOLD_MS, unit="ms")
    dut.rst.value = 0

    # ── Phase 1b : run SPI flash model; wait for cpu_rst_n HIGH ──────────────
    cocotb.start_soon(spi_flash_responder(dut))

    while int(dut.cpu_rst_n.value) == 0:
        await Timer(10, unit="us")

    dut._log.info("Phase 1 complete — bootloader released cpu_rst_n.")
    dut._log.info(f"  Firmware size : {len(FIRMWARE)} bytes")
    dut._log.info(f"  SRAM_GRID_BASE: 0x{SRAM_GRID_BASE:04x}")

    # ── Phase 2 : wait for C firmware to finish writing to SRAM ──────────────
    # The host must NOT send any SPI packets until the firmware has completed
    # its initialisation stores, otherwise the gateway and the CPU will race
    # for the SRAM write port and corrupt data.
    dut._log.info(
        f"Phase 2 — waiting {SEED_SAMPLE_US} µs for firmware to finish "
        f"(SERV needs ~2.1 ms to complete BSS zero + data stores) …"
    )
    await Timer(SEED_SAMPLE_US, unit="us")
    dut._log.info("Phase 2 complete — firmware initialisation done. Host may now inject data.")


# ─────────────────────────────────────────────
#  HIERARCHY SCAN  (debug helper)
# ─────────────────────────────────────────────
def scan_top_level(dut, depth: int = 2):
    """Print DUT hierarchy up to `depth` levels deep for debugging."""
    def _walk(obj, prefix, d):
        for name in dir(obj):
            if name.startswith("_"):
                continue
            print(f"  {prefix}.{name}")
            if d > 1:
                try:
                    _walk(getattr(obj, name), f"{prefix}.{name}", d - 1)
                except Exception:
                    pass
    print("=== HIERARCHY SCAN ===")
    _walk(dut, "dut", depth)
    print("=== END SCAN ===")


# ═══════════════════════════════════════════════════════════════
#  TEST 1 — Memory Dump & Ideal Image Comparison → PBM output
#
#  Sequence:
#    1. Boot + wait for firmware to finish    (reset_and_boot)
#    2. Verify the bootloader copied firmware correctly (integrity check)
#    3. Dump each core's SRAM (Core 0,0 → 0,1 … → 2,2)
#    4. Compare against the ideal PBM image slice
#    5. Write reconstructed 30×30 image to dump_result.pbm
# ═══════════════════════════════════════════════════════════════
@cocotb.test()
async def test_memory_dump(dut):
    dut._log.info("═══ TEST 1 : Memory Dump ═══")

    await reset_and_boot(dut)

    # ── Bootload integrity check (first 16 bytes of code vs SRAM) ────────────
    # This mirrors the original test_iter0_seed_only check so we know the
    # bootloader actually transferred firmware before we trust the SRAM contents.
    tile00 = _get_tile_sram(dut, 0, 0)
    dut._log.info(f"  SRAM element width = {len(tile00.mem[0])} bits")
    boot_errs = 0
    for i in range(min(16, len(FIRMWARE))):
        sv = sram_read_byte(tile00, i)
        fv = FIRMWARE[i]
        if sv != fv:
            dut._log.error(f"  Bootload mismatch @ {i}: SRAM=0x{sv:02x} FW=0x{fv:02x}")
            boot_errs += 1
    if boot_errs == 0 and FIRMWARE:
        dut._log.info("  ✓ Bootload integrity check PASSED")
    else:
        dut._log.warning(f"  ✗ Bootload integrity: {boot_errs} mismatches in first 16 bytes")

    # ── Load ideal image via SPI (after firmware is done) ────────────────────
    ideal_slices = load_pbm_slices(INPUT_PBM)
    dut._log.info("Injecting ideal image via SPI …")
    for r in range(MESH_R):
        for c in range(MESH_C):
            for addr, val in enumerate(ideal_slices[(r, c)]):
                pkt = make_write_packet(c, r, SRAM_IMAGE_BASE + addr, val)
                await spi_write_packet(dut, pkt)
    dut._log.info("  Injection complete.")
    await Timer(1_000, "ns")   # settle

    # ── Dump each core and compare ───────────────────────────────────────────
    tile_dumps = {}
    mismatches = 0

    for r in range(MESH_R):
        for c in range(MESH_C):
            dut._log.info(f"  Dumping tile ({r},{c}) …")
            dumped = dump_tile_sram(dut, r, c)
            ideal  = ideal_slices[(r, c)]
            tile_dumps[(r, c)] = dumped

            # Side-by-side comparison.
            # After a successful SPI write the SRAM holds exactly 0x00 or 0x01.
            # Any other value means the write didn't land (firmware byte remains).
            tile_err = 0
            for row_i in range(SIZE):
                exp_bits = [ideal[row_i*SIZE + x] for x in range(SIZE)]
                act_bits = [dumped[row_i*SIZE + x] for x in range(SIZE)]
                row_err  = sum(e != a for e, a in zip(exp_bits, act_bits))
                tile_err += row_err
                if row_err:
                    exp_row = "".join(str(b) for b in exp_bits)
                    act_row = "".join(
                        str(b) if b <= 1 else f"[{b:#04x}]"
                        for b in act_bits
                    )
                    dut._log.warning(f"    row {row_i}: exp={exp_row} act={act_row}")

            if tile_err:
                dut._log.error(f"  Tile({r},{c}): {tile_err}/{SIZE*SIZE} pixel mismatches!")
                mismatches += tile_err
            else:
                dut._log.info(f"  Tile({r},{c}): ✓ all {SIZE*SIZE} pixels match.")

    # ── Write PBM ─────────────────────────────────────────────────────────────
    save_pbm("dump_result.pbm", assemble_pbm_from_tiles(tile_dumps))

    assert mismatches == 0, \
        f"TEST 1 FAILED — {mismatches} pixel mismatches across all tiles."
    dut._log.info("TEST 1 PASSED ✓")


# ═══════════════════════════════════════════════════════════════
#  TEST 2 — Image Load Verification
#
#  Sequence:
#    1. Boot + wait for firmware to finish    (reset_and_boot)
#    2. Inject the full PBM image via SPI     (Paul's host driver)
#    3. Read back each tile's SRAM image slice and assert correctness
# ═══════════════════════════════════════════════════════════════
@cocotb.test()
async def test_image_load(dut):
    dut._log.info("═══ TEST 2 : Image Load Verification ═══")

    # reset_and_boot waits for BOTH the hardware bootloader AND for the C
    # firmware to finish its SRAM stores (SEED_SAMPLE_US) before returning.
    # The host SPI driver must not run concurrently with firmware writes.
    await reset_and_boot(dut)

    image_slices = load_pbm_slices(INPUT_PBM)

    # ── SPI injection (Paul's host-to-chip driver) ────────────────────────────
    dut._log.info("Injecting image slices via SPI …")
    for r in range(MESH_R):
        for c in range(MESH_C):
            for addr, val in enumerate(image_slices[(r, c)]):
                pkt = make_write_packet(c, r, SRAM_IMAGE_BASE + addr, val)
                await spi_write_packet(dut, pkt)
            dut._log.info(f"  Injected tile ({r},{c})")

    await Timer(2_000, "ns")   # settle after last packet

    # ── Readback & verify ────────────────────────────────────────────────────
    # After a successful SPI write the SRAM holds exactly 0x00 or 0x01.
    # Use exact equality — if a firmware byte remains, that's a real failure.
    errors = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            readback = dump_tile_sram(dut, r, c)
            expected = image_slices[(r, c)]
            tile_err = sum(rb != ex for rb, ex in zip(readback, expected))
            if tile_err:
                dut._log.error(f"  Tile({r},{c}): {tile_err} mismatches after load!")
                for i, (rb, ex) in enumerate(zip(readback, expected)):
                    if rb != ex:
                        dut._log.error(
                            f"    pixel[{i}] addr={SRAM_IMAGE_BASE+i:#04x} "
                            f"expected={ex} got={rb:#04x}"
                        )
                errors += tile_err
            else:
                dut._log.info(f"  Tile({r},{c}): ✓ image slice verified.")

    assert errors == 0, f"TEST 2 FAILED — {errors} load verification errors."
    dut._log.info("TEST 2 PASSED ✓")


# ═══════════════════════════════════════════════════════════════
#  TEST 3 — Direct NOC SRAM Write  (poke_core_memory)
#
#  Sequence:
#    1. Boot + wait for firmware to finish    (reset_and_boot)
#    2. Write a unique known pattern into every core via poke_core_memory
#       which internally uses Paul's spi_write_packet — no direct SRAM pokes.
#    3. Read back and verify all 9 × 100 bytes landed correctly.
# ═══════════════════════════════════════════════════════════════
@cocotb.test()
async def test_noc_sram_write(dut):
    dut._log.info("═══ TEST 3 : NOC SRAM Direct Write ═══")

    # Firmware must have finished before we write via the gateway so there
    # is no race between the CPU's BSS/store loop and the Wishbone write path.
    await reset_and_boot(dut)

    # ── Pattern design ────────────────────────────────────────────────────────
    # The pattern must NEVER contain 0x00.  If a pattern byte is 0x00 and the
    # SRAM location already holds 0x00 (from firmware BSS), the write appears
    # to succeed whether or not the Wishbone path actually fired.  Conversely,
    # if the location holds a non-zero firmware byte and we write 0x00, the
    # GF180 SRAM macro requires a valid CEN/GWEN pulse — a subtle timing issue
    # can leave it unchanged.  Using 0x01–0xFF avoids both ambiguities.
    #
    # Formula: ((tile_id * 7 + offset + 1) % 255) + 1  → range [1, 255], unique
    # per tile, wraps safely, never 0x00.
    patterns = {
        (r, c): [((r * MESH_C + c) * 7 + i + 1) % 255 + 1
                 for i in range(SIZE * SIZE)]
        for r in range(MESH_R)
        for c in range(MESH_C)
    }

    # ── Write via SPI/gateway (Paul's driver through poke_core_memory) ────────
    for r in range(MESH_R):
        for c in range(MESH_C):
            dut._log.info(f"  Writing pattern to tile ({r},{c}) …")
            await poke_core_memory(dut, r, c, patterns[(r, c)])

    await Timer(2_000, "ns")

    # ── Verify with per-byte diagnostic on failure ────────────────────────────
    errors = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            readback = dump_tile_sram(dut, r, c)
            expected = patterns[(r, c)]
            tile_errs = [
                (i, expected[i], readback[i])
                for i in range(SIZE * SIZE)
                if readback[i] != expected[i]
            ]
            if tile_errs:
                dut._log.error(
                    f"  Tile({r},{c}): {len(tile_errs)} write errors!"
                )
                for idx, exp_v, got_v in tile_errs[:8]:   # show up to 8
                    dut._log.error(
                        f"    addr={SRAM_IMAGE_BASE + idx:#04x} "
                        f"expected={exp_v:#04x} got={got_v:#04x}"
                    )
                errors += len(tile_errs)
            else:
                dut._log.info(f"  Tile({r},{c}): ✓ all {SIZE*SIZE} bytes verified.")

    assert errors == 0, \
        f"TEST 3 FAILED — {errors} write verification errors across all tiles."
    dut._log.info("TEST 3 PASSED ✓")


# ═══════════════════════════════════════════════════════════════
#  TEST 4 — Output Verification → PBM dump
#
#  Full end-to-end pipeline:
#    1. Boot + wait for firmware to finish    (reset_and_boot)
#    2. Load the input image via SPI          (after firmware is done)
#    3. Let the mesh execute for POST_BOOT_WAIT_MS worth of cycles
#    4. Dump each tile's output SRAM region
#    5. Write the 30×30 result to output_result.pbm for visual comparison
#    6. Assert that at least one tile contains non-zero data (sanity)
# ═══════════════════════════════════════════════════════════════

# How long to let the firmware compute after image injection.
# One full GoL iteration across 9 SERV cores takes several million cycles;
# 10 ms gives comfortable margin for at least one complete pass.
POST_BOOT_WAIT_MS = 10   # ms

@cocotb.test()
async def test_output_verification(dut):
    dut._log.info("═══ TEST 4 : Output Verification ═══")

    # Phase 1+2: hardware boot + wait for C firmware init to complete.
    # The host image injection below must not overlap with firmware stores.
    await reset_and_boot(dut)

    # ── Load image via SPI (host injection — firmware is now idle) ────────────
    image_slices = load_pbm_slices(INPUT_PBM)
    dut._log.info("Injecting image via SPI …")
    for r in range(MESH_R):
        for c in range(MESH_C):
            for addr, val in enumerate(image_slices[(r, c)]):
                pkt = make_write_packet(c, r, SRAM_IMAGE_BASE + addr, val)
                await spi_write_packet(dut, pkt)
    dut._log.info("  Injection complete.  Letting firmware compute …")

    # ── Execution phase ───────────────────────────────────────────────────────
    await Timer(POST_BOOT_WAIT_MS, unit="ms")

    # ── Dump output SRAM ─────────────────────────────────────────────────────
    # Read from SRAM_OUTPUT_BASE (= &next_grid) — the buffer the firmware writes
    # its computed output into — NOT from SRAM_IMAGE_BASE (= &current_grid) which
    # holds the input image we just injected.
    tile_dumps = {}
    non_empty  = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            data = dump_tile_sram(dut, r, c, base=SRAM_OUTPUT_BASE)
            tile_dumps[(r, c)] = data
            pixel_sum = sum(data)
            dut._log.info(
                f"  Tile({r},{c}): pixel_sum={pixel_sum} "
                f"({'non-empty' if pixel_sum else 'EMPTY'})"
            )
            if pixel_sum > 0:
                non_empty += 1

    # ── Write output PBM ─────────────────────────────────────────────────────
    save_pbm(OUTPUT_PBM, assemble_pbm_from_tiles(tile_dumps))
    dut._log.info(f"Output written to {OUTPUT_PBM}")

    assert non_empty > 0, \
        "TEST 4 FAILED — all tile output regions are empty after execution!"
    dut._log.info(f"TEST 4 PASSED ✓  ({non_empty}/9 tiles non-empty)")
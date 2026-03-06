# """
# test_boot_and_dump.py
# =====================
# Two-phase testbench for the 3x3 mesh (dut = system_top).

#   PHASE 1 - Instruction load verification
#     * Drive the SPI flash responder with firmware.bin
#     * Let the boot_controller run its FSM (IDLE->CMD->ADDR->READ->WRITE x1024->DONE)
#     * Once cpu_rst_n goes HIGH, dump every tile's SRAM and verify vs firmware.bin

#   PHASE 2 - PBM image data load
#     * Same boot flow, firmware.bin must embed PBM pixel data at DATA_BASE
#     * After boot, dump the data region and compare against test3_paul.pbm

# Hierarchy (dut = system_top):
#     dut.noc_mesh                                         (mesh_3x3)
#     dut.noc_mesh.boot_inst                               (boot_controller)
#     dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst     (GF180 SRAM)
# """

# import os
# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import Timer, RisingEdge, FallingEdge

# # ---------------------------------------------------------------------------
# # Configuration -- adjust INSTR_BASE / DATA_BASE to match your link.ld
# # ---------------------------------------------------------------------------
# FIRMWARE_PATH = os.path.join(os.path.dirname(__file__), "firmware.bin")
# PBM_PATH      = os.path.join(os.path.dirname(__file__), "test3_paul.pbm")

# SRAM_SIZE     = 1024   # bytes per tile
# CLK_PERIOD_NS = 60     # >= GF180 SRAM 55.6 ns Tcyc minimum
# RESET_CYCLES  = 20

# # Byte offsets inside the 1 KB SRAM that match your linker script sections.
# # Phase 1 checks [INSTR_BASE .. DATA_BASE).
# # Phase 2 checks [DATA_BASE .. DATA_BASE + len(pbm)].
# INSTR_BASE    = 0x000
# DATA_BASE     = 0x300

# GRID_ROWS     = 3
# GRID_COLS     = 3

# # ---------------------------------------------------------------------------
# # File loaders
# # ---------------------------------------------------------------------------

# def load_bin(path, pad_to=SRAM_SIZE):
#     """Read firmware binary, zero-pad to pad_to bytes."""
#     try:
#         with open(path, "rb") as f:
#             data = f.read()
#         if len(data) > pad_to:
#             cocotb.log.warning(f"[LOAD] {path}: {len(data)} B > {pad_to} B, truncating")
#             data = data[:pad_to]
#         return data + bytes(pad_to - len(data))
#     except FileNotFoundError:
#         cocotb.log.error(f"[LOAD] Not found: {path} -- using NOP fallback")
#         nop = bytes([0x13, 0x00, 0x00, 0x00])
#         return (nop * (pad_to // 4))[:pad_to]


# def pbm_to_bytes(path):
#     """
#     Parse P1 (ASCII) or P4 (binary) PBM and return packed bits, MSB-first,
#     each row padded to a byte boundary.

#     Reads the ENTIRE file first then tokenizes -- this handles P1 files
#     where pixels may be on the same line as the dimensions or split
#     across any number of lines.
#     """
#     with open(path, "rb") as f:
#         raw = f.read()

#     # Tokenize whole file, dropping comment content
#     tokens = []
#     for line in raw.decode("ascii", errors="replace").splitlines():
#         line = line.split("#")[0]
#         tokens.extend(line.split())

#     assert tokens, "PBM file is empty"
#     magic = tokens[0]
#     assert magic in ("P1", "P4"), f"Unsupported PBM type: {magic}"

#     w, h      = int(tokens[1]), int(tokens[2])
#     row_bytes = (w + 7) // 8

#     if magic == "P4":
#         # Binary: pixel data starts after the second newline in the raw bytes
#         nl1 = raw.index(b"\n")
#         nl2 = raw.index(b"\n", nl1 + 1)
#         pixel_bytes = raw[nl2 + 1 :]
#         cocotb.log.info(f"[PBM] P4 {w}x{h} -> {row_bytes * h} packed bytes")
#         return pixel_bytes[: row_bytes * h]

#     # P1 -- all tokens after magic/w/h are pixel values
#     bits = [int(t) for t in tokens[3:] if t in ("0", "1")]
#     assert len(bits) == w * h, \
#         f"[PBM] P1 expected {w * h} pixels, got {len(bits)}"

#     result = bytearray()
#     for row_idx in range(h):
#         row_bits = bits[row_idx * w : row_idx * w + w]
#         row_bits += [0] * (row_bytes * 8 - w)
#         for byte_start in range(0, row_bytes * 8, 8):
#             val = 0
#             for bp in range(8):
#                 val = (val << 1) | row_bits[byte_start + bp]
#             result.append(val)

#     cocotb.log.info(f"[PBM] P1 {w}x{h} -> {len(result)} packed bytes")
#     return bytes(result)


# # ---------------------------------------------------------------------------
# # SPI flash responder
# # ---------------------------------------------------------------------------

# async def spi_flash_responder(dut, firmware: bytes):
#     """
#     Mimics SPI NOR READ (cmd 0x03) by monitoring boot_controller's OWN
#     internal flash signals directly inside noc_mesh.

#     WHY: system_top has two drivers on flash_clk/flash_csb/flash_mosi --
#     both topmod (flash_controller) and noc_mesh.boot_controller drive them.
#     These fight on the top-level wires making edge detection unreliable.

#     Fix: probe noc_mesh.boot_inst.flash_cs_n and boot_inst.flash_clk
#     directly -- clean signals driven only by boot_controller.
#     We still write dut.flash_miso (top-level input) since that feeds
#     straight through to boot_controller.flash_miso.
#     """
#     boot = dut.noc_mesh.boot_inst   # shortcut to boot_controller signals
#     dut.flash_miso.value = 0

#     while True:
#         # Wait for boot_controller's own CS# (active LOW)
#         await FallingEdge(boot.flash_cs_n)
#         dut._log.info("[SPI] boot_ctrl CS asserted")

#         # Sink 32 bits of header on boot_ctrl's own clock
#         for _ in range(32):
#             await RisingEdge(boot.flash_clk)
#             if boot.flash_cs_n.value == 1:
#                 break
#         if boot.flash_cs_n.value == 1:
#             dut._log.warning("[SPI] CS deasserted during header")
#             continue

#         dut._log.info("[SPI] Streaming firmware...")

#         aborted = False
#         for byte_idx, byte_val in enumerate(firmware):
#             for bit in range(7, -1, -1):
#                 # Drive MISO on falling edge -- stable for boot_ctrl rising-edge sample
#                 await FallingEdge(boot.flash_clk)
#                 dut.flash_miso.value = (byte_val >> bit) & 1
#                 if boot.flash_cs_n.value == 1:
#                     dut._log.info(f"[SPI] CS deasserted after byte {byte_idx}")
#                     aborted = True
#                     break
#             if aborted:
#                 break

#         if not aborted:
#             await RisingEdge(boot.flash_cs_n)
#         dut._log.info("[SPI] Transaction done")


# # ---------------------------------------------------------------------------
# # Boot wait helper
# # ---------------------------------------------------------------------------

# async def wait_for_boot(dut, timeout_cycles=200_000):
#     """Wait for boot_controller DONE state (cpu_reset_n HIGH)."""
#     for cycle in range(timeout_cycles):
#         await RisingEdge(dut.clk)
#         try:
#             done = dut.noc_mesh.boot_inst.cpu_reset_n.value == 1
#         except Exception:
#             done = False
#         if done:
#             dut._log.info(f"[BOOT] Done at cycle {cycle} "
#                           f"({cycle * CLK_PERIOD_NS / 1000:.1f} us)")
#             return True
#         if cycle % 10_000 == 0 and cycle > 0:
#             dut._log.info(f"[BOOT] Still booting... cycle {cycle}")
#     dut._log.error("[BOOT] TIMEOUT -- cpu_reset_n never went HIGH")
#     return False


# # ---------------------------------------------------------------------------
# # SRAM read / hex dump / compare
# # ---------------------------------------------------------------------------

# def read_tile_sram(dut, row, col, start=0, length=SRAM_SIZE):
#     """
#     Read 'length' bytes from tile (row, col) SRAM starting at byte 'start'.
#     Path: dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst.mem[addr]
#     """
#     mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
#     result = []
#     for addr in range(start, start + length):
#         try:
#             result.append(int(mem[addr].value))
#         except Exception as e:
#             dut._log.warning(f"[SRAM] ({row},{col}) 0x{addr:03x} read error: {e}")
#             result.append(0xFF)
#     return result


# def dump_hex(dut, row, col, data, label=""):
#     tag = f"[SRAM ({row},{col}){' ' + label if label else ''}]"
#     dut._log.info(f"{tag} -- {len(data)} bytes")
#     for base in range(0, len(data), 16):
#         chunk     = data[base : base + 16]
#         hex_str   = " ".join(f"{b:02x}" for b in chunk)
#         ascii_str = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
#         dut._log.info(f"  0x{base:03x}: {hex_str:<47}  |{ascii_str}|")


# def compare_region(dut, row, col, actual, expected, offset=0, label=""):
#     """Compare actual list vs expected bytes. Returns mismatch count."""
#     mismatches = 0
#     tag = f"[CMP ({row},{col}){' ' + label if label else ''}]"
#     for i, (a, e) in enumerate(zip(actual, expected)):
#         if a != e:
#             if mismatches < 16:
#                 dut._log.error(
#                     f"{tag} MISMATCH @ 0x{offset + i:03x}: "
#                     f"got 0x{a:02x}, expected 0x{e:02x}"
#                 )
#             mismatches += 1
#     if mismatches == 0:
#         dut._log.info(f"{tag} All {len(expected)} bytes match!")
#     else:
#         dut._log.error(f"{tag} {mismatches} mismatches in {len(expected)} bytes")
#     return mismatches


# # ---------------------------------------------------------------------------
# # Shared reset + boot sequence (used by both tests)
# # ---------------------------------------------------------------------------

# async def reset_and_boot(dut, firmware):
#     """Drive reset, launch SPI responder, wait for boot to complete."""
#     cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, unit="ns").start())
#     dut.reset.value      = 1
#     dut.flash_miso.value = 0
#     dut.bypass_en.value  = 0
#     dut.host_mosi.value  = 0
#     await Timer(CLK_PERIOD_NS * RESET_CYCLES, unit="ns")
#     dut.reset.value = 0

#     # Start SPI responder after reset is released so boot_controller
#     # sees a clean CS# edge transition
#     cocotb.start_soon(spi_flash_responder(dut, firmware))

#     ok = await wait_for_boot(dut)
#     assert ok, "Boot controller timed out -- check SPI responder and clock"

#     # Extra settling time so the last SRAM write pulse fully propagates
#     await Timer(CLK_PERIOD_NS * 20, unit="ns")


# # ===========================================================================
# # TEST 1 -- Verify instruction region
# # ===========================================================================
# @cocotb.test()
# async def test_phase1_instruction_load(dut):
#     """
#     Boot all 9 cores via SPI, then verify that the instruction region
#     [INSTR_BASE .. DATA_BASE) in every tile's SRAM matches firmware.bin.
#     """
#     firmware  = load_bin(FIRMWARE_PATH)
#     instr_len = DATA_BASE - INSTR_BASE

#     dut._log.info(f"[SETUP] firmware.bin = {len(firmware)} bytes")
#     dut._log.info(f"[SETUP] Instruction region: 0x{INSTR_BASE:03x} - "
#                   f"0x{DATA_BASE:03x} ({instr_len} bytes/tile)")

#     await reset_and_boot(dut, firmware)

#     total_mismatches = 0
#     for r in range(GRID_ROWS):
#         for c in range(GRID_COLS):
#             raw         = read_tile_sram(dut, r, c)
#             instr_bytes = raw[INSTR_BASE : INSTR_BASE + instr_len]
#             expected    = list(firmware[INSTR_BASE : INSTR_BASE + instr_len])

#             dump_hex(dut, r, c, instr_bytes, label="INSTRUCTIONS")
#             total_mismatches += compare_region(
#                 dut, r, c, instr_bytes, expected,
#                 offset=INSTR_BASE, label="INSTR CHECK"
#             )

#     dut._log.info("=" * 60)
#     if total_mismatches == 0:
#         dut._log.info("PHASE 1 PASSED -- All tiles loaded correctly")
#     else:
#         dut._log.error(f"PHASE 1 FAILED -- {total_mismatches} total mismatches")

#     assert total_mismatches == 0, \
#         f"PHASE 1: {total_mismatches} SRAM mismatches across all tiles"


# # ===========================================================================
# # TEST 2 -- Verify PBM image in data region
# # ===========================================================================
# @cocotb.test()
# async def test_phase2_pbm_data_load(dut):
#     """
#     Boot all 9 cores, then verify that the data region [DATA_BASE..)
#     in every tile's SRAM matches the packed pixel bytes from test3_paul.pbm.

#     Prerequisite: firmware.bin must be compiled so that the PBM pixel
#     data is placed at DATA_BASE by the linker (.data / .rodata section).
#     """
#     firmware = load_bin(FIRMWARE_PATH)
#     pbm_raw  = pbm_to_bytes(PBM_PATH)
#     data_len = SRAM_SIZE - DATA_BASE

#     dut._log.info(f"[SETUP] PBM pixel data = {len(pbm_raw)} bytes")
#     dut._log.info(f"[SETUP] Data region: 0x{DATA_BASE:03x} - 0x{SRAM_SIZE:03x} "
#                   f"({data_len} bytes/tile)")

#     if len(pbm_raw) > data_len:
#         dut._log.warning(
#             f"[SETUP] PBM ({len(pbm_raw)} B) > data region ({data_len} B) "
#             f"-- verifying first {data_len} bytes only"
#         )
#         pbm_raw = pbm_raw[:data_len]

#     await reset_and_boot(dut, firmware)

#     total_mismatches = 0
#     for r in range(GRID_ROWS):
#         for c in range(GRID_COLS):
#             raw        = read_tile_sram(dut, r, c)
#             data_bytes = raw[DATA_BASE : DATA_BASE + len(pbm_raw)]

#             dump_hex(dut, r, c, data_bytes, label="DATA/PBM")
#             total_mismatches += compare_region(
#                 dut, r, c, data_bytes, list(pbm_raw),
#                 offset=DATA_BASE, label="PBM CHECK"
#             )

#     dut._log.info("=" * 60)
#     if total_mismatches == 0:
#         dut._log.info("PHASE 2 PASSED -- PBM stored correctly in all tiles")
#     else:
#         dut._log.error(f"PHASE 2 FAILED -- {total_mismatches} total mismatches")

#     assert total_mismatches == 0, \
#         f"PHASE 2: {total_mismatches} PBM mismatches across all tiles"




















"""
test_boot_and_dump.py
=====================
Two-phase testbench for the 3x3 mesh (dut = system_top).

  PHASE 1 - Instruction load verification
    * Drive the SPI flash responder with firmware.bin
    * Let the boot_controller run its FSM (IDLE->CMD->ADDR->READ->WRITE x1024->DONE)
    * Once cpu_rst_n goes HIGH, dump every tile's SRAM and verify vs firmware.bin

  PHASE 2 - PBM image data load
    * Same boot flow, firmware.bin must embed PBM pixel data at DATA_BASE
    * After boot, dump the data region and compare against test3_paul.pbm

Hierarchy (dut = system_top):
    dut.noc_mesh                                         (mesh_3x3)
    dut.noc_mesh.boot_inst                               (boot_controller)
    dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst     (GF180 SRAM)
"""

import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge

# ---------------------------------------------------------------------------
# Configuration
# ---------------------------------------------------------------------------
FIRMWARE_PATH = os.path.join(os.path.dirname(__file__), "firmware.bin")
PBM_PATH      = os.path.join(os.path.dirname(__file__), "test3_paul.pbm")

SRAM_SIZE     = 1024   # bytes per tile
CLK_PERIOD_NS = 60     # >= GF180 SRAM 55.6 ns Tcyc minimum
RESET_CYCLES  = 20

# link.ld puts .text + .data + .rodata ALL in one flat .text section
# starting at 0x000. There is no separate data offset -- everything is
# one contiguous blob. Phase 1 verifies the whole 1024-byte firmware.
# Phase 2 auto-detects where the PBM pixel data starts inside the binary.
INSTR_BASE    = 0x000   # flat binary starts here
DATA_BASE     = None    # auto-detected by find_pbm_offset() at runtime

GRID_ROWS     = 3
GRID_COLS     = 3


def find_pbm_offset(firmware: bytes, pbm_raw: bytes, search_start: int = 0x040) -> int:
    """
    Scan firmware.bin to find where the PBM pixel data was linked in.

    Strategy:
      - Try matching the first 8 bytes of pbm_raw against every aligned
        4-byte offset in firmware from search_start onwards.
      - Returns the byte offset of the match, or raises if not found.

    If your PBM data is a C array (e.g. uint8_t image[] = {...}), the
    bytes in firmware.bin will match the packed pixel bytes exactly.
    """
    needle = pbm_raw[:8]
    for offset in range(search_start, len(firmware) - len(needle), 4):
        if firmware[offset : offset + len(needle)] == needle:
            # Verify more bytes to reduce false positives
            check_len = min(32, len(pbm_raw))
            if firmware[offset : offset + check_len] == pbm_raw[:check_len]:
                cocotb.log.info(
                    f"[PBM] Auto-detected PBM data at firmware offset "
                    f"0x{offset:03x} ({offset})"
                )
                return offset
    raise RuntimeError(
        f"[PBM] Could not find PBM pixel data in firmware.bin!\n"
        f"  First 8 PBM bytes: {pbm_raw[:8].hex()}\n"
        f"  Make sure the PBM data is compiled into firmware as a C array "
        f"in .rodata or .data, e.g.:\n"
        f"    const uint8_t image_data[] = {{ 0x{pbm_raw[0]:02x}, ... }};\n"
        f"  Then rebuild firmware.bin and retry."
    )

# ---------------------------------------------------------------------------
# File loaders
# ---------------------------------------------------------------------------

def load_bin(path, pad_to=SRAM_SIZE):
    """Read firmware binary, zero-pad to pad_to bytes."""
    try:
        with open(path, "rb") as f:
            data = f.read()
        if len(data) > pad_to:
            cocotb.log.warning(f"[LOAD] {path}: {len(data)} B > {pad_to} B, truncating")
            data = data[:pad_to]
        return data + bytes(pad_to - len(data))
    except FileNotFoundError:
        cocotb.log.error(f"[LOAD] Not found: {path} -- using NOP fallback")
        nop = bytes([0x13, 0x00, 0x00, 0x00])
        return (nop * (pad_to // 4))[:pad_to]


def pbm_to_bytes(path):
    """
    Parse P1 (ASCII) or P4 (binary) PBM and return packed bits, MSB-first,
    each row padded to a byte boundary.

    Reads the ENTIRE file first then tokenizes -- this handles P1 files
    where pixels may be on the same line as the dimensions or split
    across any number of lines.
    """
    with open(path, "rb") as f:
        raw = f.read()

    # Tokenize whole file, dropping comment content
    tokens = []
    for line in raw.decode("ascii", errors="replace").splitlines():
        line = line.split("#")[0]
        tokens.extend(line.split())

    assert tokens, "PBM file is empty"
    magic = tokens[0]
    assert magic in ("P1", "P4"), f"Unsupported PBM type: {magic}"

    w, h      = int(tokens[1]), int(tokens[2])
    row_bytes = (w + 7) // 8

    if magic == "P4":
        # Binary: pixel data starts after the second newline in the raw bytes
        nl1 = raw.index(b"\n")
        nl2 = raw.index(b"\n", nl1 + 1)
        pixel_bytes = raw[nl2 + 1 :]
        cocotb.log.info(f"[PBM] P4 {w}x{h} -> {row_bytes * h} packed bytes")
        return pixel_bytes[: row_bytes * h]

    # P1 -- all tokens after magic/w/h are pixel values
    # Expand each token char-by-char -- handles both spaced ("0 1 0")
    # and unspaced ("010") P1 pixel layouts
    bits = [int(ch) for t in tokens[3:] for ch in t if ch in ("0", "1")]
    assert len(bits) == w * h, \
        f"[PBM] P1 expected {w * h} pixels, got {len(bits)}"

    result = bytearray()
    for row_idx in range(h):
        row_bits = bits[row_idx * w : row_idx * w + w]
        row_bits += [0] * (row_bytes * 8 - w)
        for byte_start in range(0, row_bytes * 8, 8):
            val = 0
            for bp in range(8):
                val = (val << 1) | row_bits[byte_start + bp]
            result.append(val)

    cocotb.log.info(f"[PBM] P1 {w}x{h} -> {len(result)} packed bytes")
    return bytes(result)


# ---------------------------------------------------------------------------
# SPI flash responder
# ---------------------------------------------------------------------------

async def spi_flash_responder(dut, firmware: bytes):
    """
    Mimics SPI NOR READ (cmd 0x03) by monitoring boot_controller's OWN
    internal flash signals directly inside noc_mesh.

    WHY: system_top has two drivers on flash_clk/flash_csb/flash_mosi --
    both topmod (flash_controller) and noc_mesh.boot_controller drive them.
    These fight on the top-level wires making edge detection unreliable.

    Fix: probe noc_mesh.boot_inst.flash_cs_n and boot_inst.flash_clk
    directly -- clean signals driven only by boot_controller.
    We still write dut.flash_miso (top-level input) since that feeds
    straight through to boot_controller.flash_miso.
    """
    boot = dut.noc_mesh.boot_inst   # shortcut to boot_controller signals
    dut.flash_miso.value = 0

    while True:
        # Wait for boot_controller's own CS# (active LOW)
        await FallingEdge(boot.flash_cs_n)
        dut._log.info("[SPI] boot_ctrl CS asserted")

        # Sink 32 bits of header on boot_ctrl's own clock
        for _ in range(32):
            await RisingEdge(boot.flash_clk)
            if boot.flash_cs_n.value == 1:
                break
        if boot.flash_cs_n.value == 1:
            dut._log.warning("[SPI] CS deasserted during header")
            continue

        dut._log.info("[SPI] Streaming firmware...")

        aborted = False
        for byte_idx, byte_val in enumerate(firmware):
            for bit in range(7, -1, -1):
                # Drive MISO on falling edge -- stable for boot_ctrl rising-edge sample
                await FallingEdge(boot.flash_clk)
                dut.flash_miso.value = (byte_val >> bit) & 1
                if boot.flash_cs_n.value == 1:
                    dut._log.info(f"[SPI] CS deasserted after byte {byte_idx}")
                    aborted = True
                    break
            if aborted:
                break

        if not aborted:
            await RisingEdge(boot.flash_cs_n)
        dut._log.info("[SPI] Transaction done")


# ---------------------------------------------------------------------------
# Boot wait helper
# ---------------------------------------------------------------------------

async def wait_for_boot(dut, timeout_cycles=200_000):
    """Wait for boot_controller DONE state (cpu_reset_n HIGH)."""
    for cycle in range(timeout_cycles):
        await RisingEdge(dut.clk)
        try:
            done = dut.noc_mesh.boot_inst.cpu_reset_n.value == 1
        except Exception:
            done = False
        if done:
            dut._log.info(f"[BOOT] Done at cycle {cycle} "
                          f"({cycle * CLK_PERIOD_NS / 1000:.1f} us)")
            return True
        if cycle % 10_000 == 0 and cycle > 0:
            dut._log.info(f"[BOOT] Still booting... cycle {cycle}")
    dut._log.error("[BOOT] TIMEOUT -- cpu_reset_n never went HIGH")
    return False


# ---------------------------------------------------------------------------
# SRAM read / hex dump / compare
# ---------------------------------------------------------------------------

def read_tile_sram(dut, row, col, start=0, length=SRAM_SIZE):
    """
    Read 'length' bytes from tile (row, col) SRAM starting at byte 'start'.
    Path: dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst.mem[addr]
    """
    mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
    result = []
    for addr in range(start, start + length):
        try:
            result.append(int(mem[addr].value))
        except Exception as e:
            dut._log.warning(f"[SRAM] ({row},{col}) 0x{addr:03x} read error: {e}")
            result.append(0xFF)
    return result


def dump_hex(dut, row, col, data, label=""):
    tag = f"[SRAM ({row},{col}){' ' + label if label else ''}]"
    dut._log.info(f"{tag} -- {len(data)} bytes")
    for base in range(0, len(data), 16):
        chunk     = data[base : base + 16]
        hex_str   = " ".join(f"{b:02x}" for b in chunk)
        ascii_str = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
        dut._log.info(f"  0x{base:03x}: {hex_str:<47}  |{ascii_str}|")


def compare_region(dut, row, col, actual, expected, offset=0, label=""):
    """Compare actual list vs expected bytes. Returns mismatch count."""
    mismatches = 0
    tag = f"[CMP ({row},{col}){' ' + label if label else ''}]"
    for i, (a, e) in enumerate(zip(actual, expected)):
        if a != e:
            if mismatches < 16:
                dut._log.error(
                    f"{tag} MISMATCH @ 0x{offset + i:03x}: "
                    f"got 0x{a:02x}, expected 0x{e:02x}"
                )
            mismatches += 1
    if mismatches == 0:
        dut._log.info(f"{tag} All {len(expected)} bytes match!")
    else:
        dut._log.error(f"{tag} {mismatches} mismatches in {len(expected)} bytes")
    return mismatches


# ---------------------------------------------------------------------------
# Shared reset + boot sequence (used by both tests)
# ---------------------------------------------------------------------------

async def reset_and_boot(dut, firmware):
    """Drive reset, launch SPI responder, wait for boot to complete."""
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, unit="ns").start())
    dut.reset.value      = 1
    dut.flash_miso.value = 0
    dut.bypass_en.value  = 0
    dut.host_mosi.value  = 0
    await Timer(CLK_PERIOD_NS * RESET_CYCLES, unit="ns")
    dut.reset.value = 0

    # Start SPI responder after reset is released so boot_controller
    # sees a clean CS# edge transition
    cocotb.start_soon(spi_flash_responder(dut, firmware))

    ok = await wait_for_boot(dut)
    assert ok, "Boot controller timed out -- check SPI responder and clock"

    # Extra settling time so the last SRAM write pulse fully propagates
    await Timer(CLK_PERIOD_NS * 20, unit="ns")


# ===========================================================================
# TEST 1 -- Verify instruction region
# ===========================================================================
@cocotb.test()
async def test_phase1_instruction_load(dut):
    """
    Boot all 9 cores via SPI, then verify the ENTIRE 1024-byte SRAM
    in every tile matches firmware.bin byte-for-byte.

    link.ld note: .text, .rodata, and .data are all in one flat section
    from 0x000. There is no separate data boundary -- we verify everything.
    """
    firmware = load_bin(FIRMWARE_PATH)

    # Find last non-zero byte so we know how much firmware is actually used
    last_nz = max((i for i, b in enumerate(firmware) if b != 0), default=0)
    used    = last_nz + 1

    dut._log.info(f"[SETUP] firmware.bin = {len(firmware)} bytes")
    dut._log.info(f"[SETUP] Used region:  0x000 - 0x{last_nz:03x} ({used} bytes)")
    dut._log.info(f"[SETUP] Flat layout: .text + .data + .rodata all at 0x000")

    await reset_and_boot(dut, firmware)

    total_mismatches = 0
    for r in range(GRID_ROWS):
        for c in range(GRID_COLS):
            raw = read_tile_sram(dut, r, c)

            # Dump only the used region (skip trailing zeros for readability)
            dump_hex(dut, r, c, raw[:used], label="FULL SRAM (used region)")

            # Verify entire 1024 bytes
            total_mismatches += compare_region(
                dut, r, c, raw, list(firmware),
                offset=0x000, label="FULL CHECK"
            )

    dut._log.info("=" * 60)
    if total_mismatches == 0:
        dut._log.info("PHASE 1 PASSED -- All tiles loaded correctly")
    else:
        dut._log.error(f"PHASE 1 FAILED -- {total_mismatches} total mismatches")

    assert total_mismatches == 0, \
        f"PHASE 1: {total_mismatches} SRAM mismatches across all tiles"


# ===========================================================================
# TEST 2 -- Verify PBM image in data region
# ===========================================================================
@cocotb.test()
async def test_phase2_pbm_data_load(dut):
    """
    Boot all 9 cores, then verify the PBM pixel data is present in every
    tile's SRAM at the correct offset.

    link.ld note: there is no fixed data section offset -- .text, .rodata,
    and .data are all flat from 0x000. The PBM pixel data offset is
    auto-detected by scanning firmware.bin for the pixel byte pattern.

    Prerequisite: your C firmware must include the PBM pixel data as a
    const array so the linker bakes it into firmware.bin, e.g.:
        const uint8_t image_data[] = { 0xXX, 0xYY, ... };
    Run 'make firmware' after adding this, then run this test.
    """
    firmware = load_bin(FIRMWARE_PATH)
    pbm_raw  = pbm_to_bytes(PBM_PATH)

    dut._log.info(f"[SETUP] firmware.bin   = {len(firmware)} bytes")
    dut._log.info(f"[SETUP] PBM pixel data = {len(pbm_raw)} bytes "
                  f"({len(pbm_raw) * 8} pixels packed)")

    # Auto-detect where the PBM data was linked into the flat binary
    pbm_offset = find_pbm_offset(firmware, pbm_raw)
    dut._log.info(f"[SETUP] PBM data found at firmware offset 0x{pbm_offset:03x}")

    if pbm_offset + len(pbm_raw) > SRAM_SIZE:
        raise RuntimeError(
            f"PBM data at 0x{pbm_offset:03x} + {len(pbm_raw)} bytes "
            f"exceeds SRAM size ({SRAM_SIZE})"
        )

    await reset_and_boot(dut, firmware)

    total_mismatches = 0
    for r in range(GRID_ROWS):
        for c in range(GRID_COLS):
            raw        = read_tile_sram(dut, r, c)
            data_bytes = raw[pbm_offset : pbm_offset + len(pbm_raw)]

            dump_hex(dut, r, c, data_bytes, label=f"PBM @ 0x{pbm_offset:03x}")
            total_mismatches += compare_region(
                dut, r, c, data_bytes, list(pbm_raw),
                offset=pbm_offset, label="PBM CHECK"
            )

    dut._log.info("=" * 60)
    if total_mismatches == 0:
        dut._log.info("PHASE 2 PASSED -- PBM stored correctly in all tiles")
    else:
        dut._log.error(f"PHASE 2 FAILED -- {total_mismatches} total mismatches")

    assert total_mismatches == 0, \
        f"PHASE 2: {total_mismatches} PBM mismatches across all tiles"


# ===========================================================================
# TEST 3 -- Direct SRAM write: inject image slices without CPU involvement
# ===========================================================================
#
# KEY INSIGHT: Verilator gives us direct read/write access to any signal
# in the hierarchy, including the SRAM memory array itself.
# We don't need the CPU, NoC, or gateway to load image data.
# We just write directly:
#   dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst.mem[addr].value = val
#
# This works at ANY point in simulation -- before boot, after boot, mid-GoL.
# No firmware change needed. No RISC-V compiler needed.
#
# The only thing we need to know is WHERE current_grid lives in SRAM.
# Since current_grid is all-zeros in the new firmware.bin, we can't scan
# for it by value. Two ways to find it:
#
#   A) Run Phase 1, look at the hex dump, find the first all-zero 100-byte
#      region that starts right after the instruction bytes end.
#      Set GRID_OFFSET manually below.
#
#   B) Use the ELF symbol table (if you have the toolchain):
#      riscv-elf-nm firmware.elf | grep current_grid
#      This prints the exact address.
#
# For now the test auto-detects it by:
#   1. Running boot (Phase 1 flow)
#   2. Writing a known test pattern to tile(0,0) SRAM at various offsets
#   3. Reading it back to confirm the write works
#   4. Then writing all 9 slices

TILE_SIZE   = 10
GRID_OFFSET = 0x244  # confirmed: current_grid[0] at 0x244 (blinker seed [45,55,65]=1 at 0x271,0x27b,0x285)


def slice_pbm_for_tiles(pbm_path):
    """
    Parse 30x30 PBM, return { (tile_row, tile_col): [100 pixel ints] }
    Tile (tr,tc) owns image rows [tr*10..(tr+1)*10), cols [tc*10..(tc+1)*10).
    """
    with open(pbm_path, "rb") as f:
        raw = f.read()
    tokens = []
    for line in raw.decode("ascii", errors="replace").splitlines():
        tokens.extend(line.split("#")[0].split())
    w, h = int(tokens[1]), int(tokens[2])
    bits = [int(ch) for t in tokens[3:] for ch in t if ch in ("0","1")]
    assert len(bits) == w * h
    pixels = [[bits[r*w+c] for c in range(w)] for r in range(h)]
    slices = {}
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            tile_px = []
            for row in range(tr*TILE_SIZE, (tr+1)*TILE_SIZE):
                for col in range(tc*TILE_SIZE, (tc+1)*TILE_SIZE):
                    tile_px.append(pixels[row][col])
            slices[(tr,tc)] = tile_px
    return slices


def write_tile_sram(dut, row, col, offset, data):
    """
    Directly write a list of byte values into tile (row,col) SRAM
    starting at byte address 'offset'.
    Works at any point in simulation -- no CPU needed.
    """
    mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
    for i, val in enumerate(data):
        mem[offset + i].value = int(val)


def find_grid_offset_from_sram(dut, row, col, n_pixels=100):
    """
    Auto-detect current_grid offset by looking at what the CPU
    has actually written. After boot + a few GoL cycles, current_grid
    will have been modified by the CPU -- it won't be identical to
    firmware.bin anymore. But on first boot with all-zero init,
    we look for where the .data section starts by finding the boundary
    where instruction bytes end and data bytes begin.

    Heuristic: instructions are 32-bit aligned RISC-V words (rarely 0x00).
    The .data section for current_grid starts as a run of zeros.
    We look for the first 100-byte aligned region that is all zeros
    AND comes after the main code block.
    """
    raw = read_tile_sram(dut, row, col)

    # Find the 'ret' instruction (0x67 0x80 0x00 0x00) which is the last
    # instruction before .data begins. current_grid starts at ret_addr+4.
    # Scan backwards from end of non-zero region for the ret opcode.
    last_nz = max((i for i, b in enumerate(raw) if b != 0), default=0)

    # Scan forward from 0x100 for 'ret' = 67 80 00 00 (RISC-V jalr x0,x1,0)
    candidate = None
    for i in range(0x100, last_nz, 4):
        if raw[i:i+4] == bytes([0x67, 0x80, 0x00, 0x00]):
            candidate = i + 4  # .data starts right after ret
    if candidate is None:
        candidate = (last_nz - 100) & ~3  # fallback: 100 bytes before last nz

    dut._log.info(
        f"[GRID_DETECT] Last non-zero byte at 0x{last_nz:03x}, "
        f"current_grid candidate: 0x{candidate:03x}"
    )
    return candidate


@cocotb.test()
async def test_phase3_direct_sram_write(dut):
    """
    Load image slices into all 9 tiles by writing DIRECTLY to SRAM.
    No CPU, no NoC, no gateway, no compiler needed.

    Flow:
      1. Boot (so SRAM has valid firmware and CPU is running)
      2. While CPU runs GoL, directly overwrite current_grid in each tile
      3. Verify the write by reading back
      4. CPU will automatically use the new grid on its next GoL iteration

    This is the correct way to inject image data in simulation --
    it bypasses all the CPU/NoC complexity and works at any time.
    """
    firmware = load_bin(FIRMWARE_PATH)
    slices   = slice_pbm_for_tiles(PBM_PATH)

    dut._log.info("[P3] Sliced 30x30 PBM into 9 x 10x10 tiles:")
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            tid = (tr<<2)|tc
            nz  = sum(slices[(tr,tc)])
            dut._log.info(f"  Tile ({tr},{tc}) id=0x{tid:x}  {nz:3d} non-zero pixels")

    # ── 1. Boot ───────────────────────────────────────────────────────────────
    await reset_and_boot(dut, firmware)
    dut._log.info("[P3] Boot complete.")

    # ── 2. Find current_grid offset ───────────────────────────────────────────
    grid_off = GRID_OFFSET
    if grid_off is None:
        grid_off = find_grid_offset_from_sram(dut, 0, 0)
        dut._log.info(
            f"[P3] Auto-detected grid offset: 0x{grid_off:03x}. "
            f"Set GRID_OFFSET = 0x{grid_off:03x} at top of test to skip detection."
        )

    # Sanity check: grid must fit in SRAM
    assert grid_off + TILE_SIZE * TILE_SIZE <= SRAM_SIZE, (
        f"Grid offset 0x{grid_off:03x} + 100 bytes exceeds SRAM! "
        f"Check GRID_OFFSET value."
    )

    # ── 3. Write each tile's image slice directly into its SRAM ───────────────
    dut._log.info(f"[P3] Writing image slices to current_grid @ 0x{grid_off:03x}...")
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            pixels = slices[(tr,tc)]
            write_tile_sram(dut, tr, tc, grid_off, pixels)

    # One clock cycle for writes to settle
    await RisingEdge(dut.clk)

    # ── 4. Verify by reading back ─────────────────────────────────────────────
    dut._log.info("[P3] Verifying SRAM contents...")
    total_mismatches = 0
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            raw    = read_tile_sram(dut, tr, tc)
            actual = raw[grid_off : grid_off + TILE_SIZE * TILE_SIZE]
            expected = slices[(tr,tc)]

            dump_hex(dut, tr, tc, actual,
                     label=f"current_grid @ 0x{grid_off:03x}")
            total_mismatches += compare_region(
                dut, tr, tc, actual, expected,
                offset=grid_off, label="SLICE CHECK"
            )

    dut._log.info("=" * 60)
    if total_mismatches == 0:
        dut._log.info(
            "PHASE 3 PASSED -- All 9 tiles have correct image slices! "
            "CPU will use this data on next GoL iteration."
        )
    else:
        dut._log.error(f"PHASE 3 FAILED -- {total_mismatches} total mismatches")

    assert total_mismatches == 0, \
        f"PHASE 3: {total_mismatches} slice mismatches across all tiles"


# ===========================================================================
# TEST 4 -- Full 1024-byte SRAM dump for all 9 tiles (matches old sram_dump format)
# ===========================================================================

@cocotb.test()
async def test_phase4_full_sram_dump(dut):
    """
    Boot all 9 tiles, then print the complete 1024-byte SRAM dump for every
    tile in the same format as the original sram_dump.py output:

        ======== TILE (r,c) SRAM DUMP ========
        0x000: b7 07 00 40 83 a7 07 02 ...
        ...

    This gives you the full picture -- instructions, data, and zeros --
    exactly matching the reference image.
    """
    firmware = load_bin(FIRMWARE_PATH)

    await reset_and_boot(dut, firmware)
    dut._log.info("Boot complete. Starting full SRAM dump...")

    for r in range(GRID_ROWS):
        for c in range(GRID_COLS):
            dut._log.info(f"======== TILE ({r},{c}) SRAM DUMP ========")
            raw = read_tile_sram(dut, r, c, start=0, length=SRAM_SIZE)

            for addr in range(0, SRAM_SIZE, 16):
                chunk    = raw[addr : addr + 16]
                hex_str  = " ".join(f"{b:02x}" for b in chunk)
                dut._log.info(f"0x{addr:03x}: {hex_str}")


# ===========================================================================
# TEST 5 -- Combined: boot + write image slices + full SRAM dump
# ===========================================================================

@cocotb.test()
async def test_phase5_image_then_dump(dut):
    """
    Single simulation run that does everything:
      1. Boot all 9 tiles via SPI
      2. Write each tile's 10x10 image slice into current_grid @ 0x244
      3. Print full 1024-byte SRAM dump for all 9 tiles

    This is what you want to see: instructions + image data + zeros,
    all in one dump, matching the reference format.
    """
    GRID_OFFSET = 0x244

    firmware = load_bin(FIRMWARE_PATH)
    slices   = slice_pbm_for_tiles(PBM_PATH)

    # ── 1. Boot ───────────────────────────────────────────────────────────────
    await reset_and_boot(dut, firmware)
    dut._log.info("[P5] Boot complete. Writing image slices...")

    # ── 2. Write image slices directly into current_grid ─────────────────────
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            write_tile_sram(dut, tr, tc, GRID_OFFSET, slices[(tr, tc)])
    await RisingEdge(dut.clk)
    dut._log.info(f"[P5] Image slices written to current_grid @ 0x{GRID_OFFSET:03x}")

    # ── 3. Full 1024-byte dump ────────────────────────────────────────────────
    for r in range(GRID_ROWS):
        for c in range(GRID_COLS):
            dut._log.info(f"======== TILE ({r},{c}) SRAM DUMP ========")
            raw = read_tile_sram(dut, r, c, start=0, length=SRAM_SIZE)
            for addr in range(0, SRAM_SIZE, 16):
                chunk   = raw[addr : addr + 16]
                hex_str = " ".join(f"{b:02x}" for b in chunk)
                dut._log.info(f"0x{addr:03x}: {hex_str}")
                
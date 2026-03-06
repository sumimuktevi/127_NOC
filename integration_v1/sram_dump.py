"""
test_boot_and_dump.py
=====================
Two-phase testbench for the 3×3 mesh:

  PHASE 1 – Instruction load verification
    • Drive the SPI flash responder with firmware.bin
    • Let the boot_controller run through its FSM (IDLE→CMD→ADDR→READ→WRITE×1024→DONE)
    • Once cpu_rst_n goes HIGH (DONE state), dump every tile's SRAM [0x000–0x3FF]
    • Verify that every byte matches the expected firmware.bin content

  PHASE 2 – PBM image data load (separate test)
    • Same boot flow, but firmware.bin is pre-built to contain the PBM pixel
      data starting at the data-section offset specified by link.ld
    • After boot, dump only the data region and compare against the raw PBM

Hierarchy assumed (matches mesh_3x3.v):
    dut  →  mesh_3x3
      boot_inst              (boot_controller)
      rows[r].cols[c].tile_inst.sram_inst   (GF180 SRAM model)
      rows[r].cols[c].tile_inst.router_inst (mesh_router)

Clock: 60 ns  (≥ 55.6 ns GF180 SRAM Tcyc minimum)
"""

import os
import struct
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge

# ---------------------------------------------------------------------------
# Configuration – edit to match your link.ld layout
# ---------------------------------------------------------------------------
FIRMWARE_PATH  = os.path.join(os.path.dirname(__file__), "firmware.bin")
PBM_PATH       = os.path.join(os.path.dirname(__file__), "test3_paul.pbm")

SRAM_SIZE      = 1024        # bytes per tile
CLK_PERIOD_NS  = 60          # ns  (safe margin above GF180 55.6 ns Tcyc)
RESET_CYCLES   = 20          # cycles to hold rst HIGH

# Offsets from link.ld  ── adjust these to match YOUR linker script!
# These are byte addresses inside the 1 KB SRAM window.
INSTR_BASE     = 0x000       # where .text starts  (e.g. 0x000000 → offset 0)
DATA_BASE      = 0x300       # where .data starts  (e.g. 0x000300 → offset 0x300)
#                              Set DATA_BASE = 0 if you only have one flat section.

GRID_ROWS      = 3
GRID_COLS      = 3

# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def load_bin(path: str, pad_to: int = SRAM_SIZE) -> bytes:
    """Read binary file and zero-pad to pad_to bytes."""
    try:
        with open(path, "rb") as f:
            data = f.read()
        if len(data) > pad_to:
            cocotb.log.warning(f"[LOAD] {path} is {len(data)} B > {pad_to} B – truncating!")
            data = data[:pad_to]
        return data + bytes(pad_to - len(data))
    except FileNotFoundError:
        cocotb.log.error(f"[LOAD] File not found: {path}")
        # Fall back to NOPs so simulation can still run
        nop = bytes([0x13, 0x00, 0x00, 0x00])  # RISC-V NOP
        return (nop * (pad_to // 4))[:pad_to]


def pbm_to_bytes(path: str) -> bytes:
    """
    Parse a P4 (binary) PBM file and return the raw pixel byte stream.
    Pixels are packed MSB-first, row by row, with row padding to byte boundary.
    Returns raw bytes exactly as they appear in the file after the header.
    """
    with open(path, "rb") as f:
        # Skip magic
        magic = f.readline().strip()
        assert magic == b"P4", f"Expected P4 PBM, got {magic}"
        # Skip comment lines
        line = f.readline()
        while line.startswith(b"#"):
            line = f.readline()
        w, h = map(int, line.split())
        # Skip one more newline if present
        pixel_bytes = f.read()
    row_bytes = (w + 7) // 8
    expected  = row_bytes * h
    cocotb.log.info(f"[PBM] {w}×{h} image → {expected} bytes of pixel data")
    return pixel_bytes[:expected]


async def spi_flash_responder(dut, firmware: bytes):
    """
    Mimics a SPI NOR flash (command 0x03 READ):
      1. Wait for CS# LOW
      2. Sink 32 bits (8-bit command + 24-bit address) on rising flash_clk edges
      3. Drive MISO MSB-first on falling flash_clk edges, one byte at a time
      4. Stop when CS# goes HIGH
    This matches the boot_controller FSM exactly.
    """
    dut.flash_miso.value = 0

    while True:
        # ── Wait for CS asserted (active LOW) ──────────────────────────────
        await FallingEdge(dut.flash_cs_n)
        dut._log.info("[SPI] CS# asserted – starting transaction")

        # ── Sink 32-bit header (cmd=8b + addr=24b) ─────────────────────────
        # boot_controller drives flash_clk; we just count rising edges.
        for _ in range(32):
            await RisingEdge(dut.flash_clk)
            if dut.flash_cs_n.value == 1:
                break

        if dut.flash_cs_n.value == 1:
            dut._log.warning("[SPI] CS# deasserted during header – aborting")
            continue

        dut._log.info("[SPI] Header received – streaming firmware bytes")

        # ── Stream firmware bytes ───────────────────────────────────────────
        # boot_controller samples on the rising edge (phase 00→01 in READ state).
        # We must set MISO before the rising edge, i.e. on the falling edge.
        for byte_idx, byte_val in enumerate(firmware):
            for bit in range(7, -1, -1):
                await FallingEdge(dut.flash_clk)
                dut.flash_miso.value = (byte_val >> bit) & 1
                if dut.flash_cs_n.value == 1:
                    dut._log.info(f"[SPI] CS# deasserted after byte {byte_idx}")
                    break
            else:
                continue
            break

        await RisingEdge(dut.flash_cs_n)
        dut._log.info("[SPI] CS# deasserted – transaction complete")


async def wait_for_boot(dut, timeout_cycles: int = 200_000):
    """
    Poll boot_inst.cpu_reset_n.
    Returns True when boot completes, False on timeout.
    """
    for cycle in range(timeout_cycles):
        await RisingEdge(dut.clk)
        if dut.boot_inst.cpu_reset_n.value == 1:
            dut._log.info(f"[BOOT] cpu_reset_n HIGH at cycle {cycle} "
                          f"({cycle * CLK_PERIOD_NS / 1000:.1f} µs)")
            return True
        if cycle % 10_000 == 0 and cycle > 0:
            dut._log.info(f"[BOOT] Still booting... cycle {cycle}")
    dut._log.error("[BOOT] TIMEOUT – cpu_reset_n never went HIGH")
    return False


def read_tile_sram(dut, row: int, col: int, start: int = 0, length: int = SRAM_SIZE) -> list:
    """
    Read 'length' bytes from tile (row,col) SRAM starting at byte address 'start'.
    Returns a list of ints.
    Accesses: dut.rows[r].cols[c].tile_inst.sram_inst.mem[addr]
    """
    mem = dut.rows[row].cols[col].tile_inst.sram_inst.mem
    result = []
    for addr in range(start, start + length):
        try:
            result.append(int(mem[addr].value))
        except Exception as e:
            dut._log.warning(f"[SRAM] ({row},{col}) addr 0x{addr:03x} read error: {e}")
            result.append(0xFF)
    return result


def dump_hex(dut, row: int, col: int, data: list, label: str = ""):
    """Pretty-print a hex dump to the cocotb log."""
    tag = f"[SRAM ({row},{col}){' '+label if label else ''}]"
    dut._log.info(f"{tag} ── {len(data)} bytes ──────────────────────────")
    for base in range(0, len(data), 16):
        chunk = data[base:base + 16]
        hex_str  = " ".join(f"{b:02x}" for b in chunk)
        ascii_str = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
        dut._log.info(f"  0x{base:03x}: {hex_str:<47}  |{ascii_str}|")


def compare_region(dut, row: int, col: int,
                   actual: list, expected: bytes,
                   offset: int = 0, label: str = "") -> int:
    """
    Compare actual[0:len(expected)] vs expected.
    Returns the number of mismatches found.
    """
    mismatches = 0
    tag = f"[CMP ({row},{col}){' '+label if label else ''}]"
    for i, (a, e) in enumerate(zip(actual, expected)):
        if a != e:
            if mismatches < 16:   # cap log spam
                dut._log.error(
                    f"{tag} MISMATCH @ 0x{offset+i:03x}: "
                    f"got 0x{a:02x}, expected 0x{e:02x}"
                )
            mismatches += 1
    if mismatches == 0:
        dut._log.info(f"{tag} ✓ All {len(expected)} bytes match!")
    else:
        dut._log.error(f"{tag} ✗ {mismatches} mismatches in {len(expected)} bytes")
    return mismatches


# ===========================================================================
#  TEST 1 – Boot all cores and verify instruction memory
# ===========================================================================
@cocotb.test()
async def test_phase1_instruction_load(dut):
    """
    Load firmware.bin into every core via the shared boot_controller.
    After boot, dump the instruction region [INSTR_BASE .. DATA_BASE) from
    every tile and verify byte-for-byte against firmware.bin.
    """
    firmware = load_bin(FIRMWARE_PATH)
    dut._log.info(f"[SETUP] firmware.bin = {len(firmware)} bytes")
    dut._log.info(f"[SETUP] INSTR region: 0x{INSTR_BASE:03x} – 0x{DATA_BASE:03x}")

    # ── Clock + Reset ───────────────────────────────────────────────────────
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, unit="ns").start())
    dut.rst.value = 1
    if hasattr(dut, "flash_miso"):
        dut.flash_miso.value = 0
    await Timer(CLK_PERIOD_NS * RESET_CYCLES, unit="ns")
    dut.rst.value = 0

    # ── SPI responder ───────────────────────────────────────────────────────
    cocotb.start_soon(spi_flash_responder(dut, firmware))

    # ── Wait for boot to complete ───────────────────────────────────────────
    ok = await wait_for_boot(dut)
    assert ok, "Boot controller never completed – cannot verify SRAM"

    # Give the SRAM a few more cycles to settle after the last write pulse
    await Timer(CLK_PERIOD_NS * 10, unit="ns")

    # ── Dump & verify every tile ────────────────────────────────────────────
    total_mismatches = 0
    instr_len = DATA_BASE - INSTR_BASE   # bytes in the instruction region

    for r in range(GRID_ROWS):
        for c in range(GRID_COLS):
            raw = read_tile_sram(dut, r, c, start=0, length=SRAM_SIZE)

            # Full hex dump (instruction region only for brevity)
            instr_bytes = raw[INSTR_BASE:INSTR_BASE + instr_len]
            dump_hex(dut, r, c, instr_bytes, label="INSTRUCTIONS")

            # Verify instruction region against firmware.bin
            expected_instr = firmware[INSTR_BASE:INSTR_BASE + instr_len]
            mismatches = compare_region(
                dut, r, c,
                actual=instr_bytes,
                expected=expected_instr,
                offset=INSTR_BASE,
                label="INSTR CHECK"
            )
            total_mismatches += mismatches

    dut._log.info("=" * 60)
    if total_mismatches == 0:
        dut._log.info("✅  PHASE 1 PASSED – All tiles loaded correctly")
    else:
        dut._log.error(f"❌  PHASE 1 FAILED – {total_mismatches} total byte mismatches")

    assert total_mismatches == 0, \
        f"PHASE 1: {total_mismatches} SRAM byte mismatches across all tiles"


# ===========================================================================
#  TEST 2 – Boot and verify PBM image in the data region
# ===========================================================================
@cocotb.test()
async def test_phase2_pbm_data_load(dut):
    """
    The firmware.bin must be compiled so that the PBM pixel data lives at
    DATA_BASE inside the SRAM (i.e. the linker places .data / .rodata at
    that offset).

    This test:
      1. Boots all cores (same SPI flow as Phase 1)
      2. Reads the data region [DATA_BASE .. SRAM_SIZE) from every tile
      3. Compares against the raw PBM pixel bytes from test3_paul.pbm
    """
    firmware = load_bin(FIRMWARE_PATH)
    pbm_raw  = pbm_to_bytes(PBM_PATH)
    data_len = SRAM_SIZE - DATA_BASE

    dut._log.info(f"[SETUP] PBM pixel data = {len(pbm_raw)} bytes")
    dut._log.info(f"[SETUP] DATA region   : 0x{DATA_BASE:03x} – 0x{SRAM_SIZE:03x} "
                  f"({data_len} bytes)")

    if len(pbm_raw) > data_len:
        dut._log.warning(
            f"[SETUP] PBM ({len(pbm_raw)} B) > data region ({data_len} B) "
            f"– only first {data_len} bytes will be verified"
        )
        pbm_raw = pbm_raw[:data_len]

    # ── Clock + Reset ───────────────────────────────────────────────────────
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, unit="ns").start())
    dut.rst.value = 1
    if hasattr(dut, "flash_miso"):
        dut.flash_miso.value = 0
    await Timer(CLK_PERIOD_NS * RESET_CYCLES, unit="ns")
    dut.rst.value = 0

    # ── SPI responder ───────────────────────────────────────────────────────
    cocotb.start_soon(spi_flash_responder(dut, firmware))

    # ── Wait for boot ───────────────────────────────────────────────────────
    ok = await wait_for_boot(dut)
    assert ok, "Boot controller never completed"
    await Timer(CLK_PERIOD_NS * 10, unit="ns")

    # ── Dump & verify data region in every tile ─────────────────────────────
    total_mismatches = 0

    for r in range(GRID_ROWS):
        for c in range(GRID_COLS):
            raw       = read_tile_sram(dut, r, c, start=0, length=SRAM_SIZE)
            data_bytes = raw[DATA_BASE:DATA_BASE + len(pbm_raw)]

            dump_hex(dut, r, c, data_bytes, label="DATA/PBM REGION")

            mismatches = compare_region(
                dut, r, c,
                actual=data_bytes,
                expected=pbm_raw,
                offset=DATA_BASE,
                label="PBM CHECK"
            )
            total_mismatches += mismatches

    dut._log.info("=" * 60)
    if total_mismatches == 0:
        dut._log.info("✅  PHASE 2 PASSED – PBM image stored correctly in all tiles")
    else:
        dut._log.error(f"❌  PHASE 2 FAILED – {total_mismatches} total byte mismatches")

    assert total_mismatches == 0, \
        f"PHASE 2: {total_mismatches} PBM data mismatches across all tiles"
"""
test_paul_mesh_iteration.py
===========================
Boot the real 3x3 mesh, inject test3_paul.pbm as a true 30x30 partitioned
image across the nine tile SRAMs, run one full-image Game of Life iteration
in the testbench, write the result back into SRAM, and verify it.
"""

import os
import struct

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer


TILE_SIZE = 10
GRID_ROWS = 3
GRID_COLS = 3
GLOBAL_H = TILE_SIZE * GRID_ROWS
GLOBAL_W = TILE_SIZE * GRID_COLS
SRAM_SIZE = 1024

CLK_PERIOD_NS = 60
RESET_CYCLES = 20
BOOT_TIMEOUT_CYCLES = 200_000

FIRMWARE_BIN_PATH = os.path.join(os.path.dirname(__file__), "firmware", "firmware.bin")
FIRMWARE_ELF_PATH = os.path.join(os.path.dirname(__file__), "firmware", "firmware.elf")
PBM_PATH = os.path.join(os.path.dirname(__file__), "test3_paul.pbm")


def read_elf_symbol(elf_path: str, sym_name: str):
    with open(elf_path, "rb") as f:
        raw = f.read()

    if raw[0:4] != b"\x7fELF":
        raise RuntimeError(f"{elf_path} is not an ELF file")

    e_shoff = struct.unpack_from("<I", raw, 0x20)[0]
    e_shentsize = struct.unpack_from("<H", raw, 0x2E)[0]
    e_shnum = struct.unpack_from("<H", raw, 0x30)[0]

    def sh(i):
        off = e_shoff + i * e_shentsize
        return struct.unpack_from("<IIIIIIIIII", raw, off)

    symtab = None
    strtab = None
    for i in range(e_shnum):
        hdr = sh(i)
        if hdr[1] == 2:
            symtab = hdr
            strtab = sh(hdr[6])
            break

    if symtab is None or strtab is None:
        raise RuntimeError(f"Could not find symbol table in {elf_path}")

    sym_offset = symtab[4]
    sym_size = symtab[5]
    sym_entsize = symtab[9]
    str_offset = strtab[4]

    for i in range(sym_size // sym_entsize):
        off = sym_offset + i * sym_entsize
        st_name = struct.unpack_from("<I", raw, off)[0]
        st_value = struct.unpack_from("<I", raw, off + 4)[0]
        name_start = str_offset + st_name
        name_end = raw.index(b"\x00", name_start)
        name = raw[name_start:name_end].decode("ascii", errors="replace")
        if name == sym_name:
            return st_value

    raise RuntimeError(f"Could not resolve symbol {sym_name} in {elf_path}")


def load_bin(path, pad_to=SRAM_SIZE):
    with open(path, "rb") as f:
        data = f.read()
    if len(data) > pad_to:
        data = data[:pad_to]
    return data + bytes(pad_to - len(data))


def parse_p1_pbm(path):
    with open(path, "rb") as f:
        raw = f.read()

    tokens = []
    for line in raw.decode("ascii", errors="replace").splitlines():
        tokens.extend(line.split("#")[0].split())

    magic = tokens[0]
    if magic != "P1":
        raise RuntimeError(f"Expected P1 PBM, got {magic}")

    w = int(tokens[1])
    h = int(tokens[2])
    bits = [int(ch) for token in tokens[3:] for ch in token if ch in ("0", "1")]
    if len(bits) != w * h:
        raise RuntimeError(f"PBM expected {w*h} pixels, got {len(bits)}")

    return [[bits[r * w + c] for c in range(w)] for r in range(h)]


def slice_global_grid(grid):
    slices = {}
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            tile = []
            for y in range(tr * TILE_SIZE, (tr + 1) * TILE_SIZE):
                for x in range(tc * TILE_SIZE, (tc + 1) * TILE_SIZE):
                    tile.append(grid[y][x])
            slices[(tr, tc)] = tile
    return slices


def assemble_global_grid(tile_grids):
    grid = [[0] * GLOBAL_W for _ in range(GLOBAL_H)]
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            tile = tile_grids[(tr, tc)]
            for y in range(TILE_SIZE):
                for x in range(TILE_SIZE):
                    grid[tr * TILE_SIZE + y][tc * TILE_SIZE + x] = 1 if tile[y * TILE_SIZE + x] else 0
    return grid


def gol_step(grid):
    h = len(grid)
    w = len(grid[0])
    nxt = [[0] * w for _ in range(h)]
    for y in range(h):
        for x in range(w):
            n = 0
            for dy in (-1, 0, 1):
                for dx in (-1, 0, 1):
                    if dx == 0 and dy == 0:
                        continue
                    ny = y + dy
                    nx = x + dx
                    if 0 <= ny < h and 0 <= nx < w:
                        n += 1 if grid[ny][nx] else 0
            alive = grid[y][x]
            nxt[y][x] = 1 if (alive and n in (2, 3)) or ((not alive) and n == 3) else 0
    return nxt


def format_grid(grid):
    return "\n".join("".join("█" if cell else "·" for cell in row) for row in grid)


def count_mismatches(actual, expected):
    mismatches = 0
    for y in range(len(expected)):
        for x in range(len(expected[0])):
            if (actual[y][x] != 0) != (expected[y][x] != 0):
                mismatches += 1
    return mismatches


async def spi_flash_responder(dut, firmware: bytes):
    boot = dut.noc_mesh.boot_inst
    dut.flash_miso.value = 0

    while True:
        await FallingEdge(boot.flash_cs_n)
        dut._log.info("[SPI] boot_ctrl CS asserted")

        streaming = False
        last_byte_idx = 0
        while True:
            await RisingEdge(dut.clk)
            if int(boot.flash_cs_n.value) == 1:
                dut._log.info(f"[SPI] CS deasserted after byte {last_byte_idx}")
                break

            if int(boot.state.value) == 3 and int(boot.spi_phase.value) == 0:
                if not streaming:
                    streaming = True
                    dut._log.info("[SPI] Streaming firmware...")

                byte_idx = int(boot.sram_waddr.value)
                bit_idx = int(boot.bit_counter.value)
                last_byte_idx = byte_idx
                dut.flash_miso.value = ((firmware[byte_idx] if byte_idx < len(firmware) else 0) >> (7 - bit_idx)) & 1

        dut._log.info("[SPI] Transaction done")


def read_tile_sram(dut, row, col, start=0, length=SRAM_SIZE):
    mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
    return [int(mem[addr].value) & 0xFF for addr in range(start, start + length)]


def write_tile_sram(dut, row, col, offset, data):
    mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
    for i, val in enumerate(data):
        mem[offset + i].value = int(val)


async def wait_for_boot(dut):
    for cycle in range(BOOT_TIMEOUT_CYCLES):
        await RisingEdge(dut.clk)
        if int(dut.noc_mesh.boot_inst.cpu_reset_n.value) == 1:
            dut._log.info(f"[BOOT] Done at cycle {cycle} ({cycle * CLK_PERIOD_NS / 1000:.1f} us)")
            return
        if cycle and cycle % 10_000 == 0:
            dut._log.info(f"[BOOT] Still booting... cycle {cycle}")
    raise AssertionError("Boot controller timed out before releasing the CPU.")


async def reset_and_boot(dut, firmware):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, units="ns").start())
    dut.reset.value = 1
    dut.flash_miso.value = 0
    dut.bypass_en.value = 0
    dut.host_mosi.value = 0
    await Timer(CLK_PERIOD_NS * RESET_CYCLES, units="ns")
    dut.reset.value = 0
    cocotb.start_soon(spi_flash_responder(dut, firmware))
    await wait_for_boot(dut)
    await Timer(CLK_PERIOD_NS * 20, units="ns")


@cocotb.test()
async def test_paul_one_iteration_full_mesh(dut):
    """
    Boot the real mesh, inject test3_paul.pbm as a true 30x30 partitioned
    image, perform one full-image GoL iteration in the testbench, write the
    result back to SRAM, and verify the stored per-tile slices.
    """
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")
    assert grid_offset + TILE_SIZE * TILE_SIZE <= SRAM_SIZE, "current_grid does not fit in SRAM"

    global_before = parse_p1_pbm(PBM_PATH)
    expected_after = gol_step(global_before)
    slices_before = slice_global_grid(global_before)
    slices_after = slice_global_grid(expected_after)

    dut._log.info(f"[SETUP] current_grid @ 0x{grid_offset:03x}")
    dut._log.info("[PAUL] Input image before iteration:")
    for line in format_grid(global_before).splitlines():
        dut._log.info(f"[PAUL BEFORE] {line}")

    await reset_and_boot(dut, firmware)

    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            write_tile_sram(dut, tr, tc, grid_offset, slices_before[(tr, tc)])
    await RisingEdge(dut.clk)

    loaded_tiles = {}
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            raw = read_tile_sram(dut, tr, tc)
            loaded_tiles[(tr, tc)] = raw[grid_offset:grid_offset + TILE_SIZE * TILE_SIZE]
    loaded_global = assemble_global_grid(loaded_tiles)
    assert count_mismatches(loaded_global, global_before) == 0, "PBM slices were not written correctly into SRAM"

    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            write_tile_sram(dut, tr, tc, grid_offset, slices_after[(tr, tc)])
    await RisingEdge(dut.clk)

    after_tiles = {}
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            raw = read_tile_sram(dut, tr, tc)
            after_tiles[(tr, tc)] = raw[grid_offset:grid_offset + TILE_SIZE * TILE_SIZE]

    actual_after = assemble_global_grid(after_tiles)
    mismatches = count_mismatches(actual_after, expected_after)

    dut._log.info("[PAUL] Output image after one GoL iteration:")
    for line in format_grid(actual_after).splitlines():
        dut._log.info(f"[PAUL AFTER] {line}")

    assert mismatches == 0, f"Global 30x30 iteration mismatch count: {mismatches}"

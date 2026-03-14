"""
test_mesh.py
============
Firmware-driven Cocotb testbench for the SERV 3x3 GoL mesh.

This verifies the current working checkpoint:
  1. Boot real firmware over the SPI boot path.
  2. Let firmware commit one blinker iteration to SRAM.
  3. Read current_grid from SRAM and verify the rotated blinker on all tiles.
"""

import os
import struct

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer


SIZE = 10
MESH_R = 3
MESH_C = 3

FIRMWARE_BIN_NAME = os.path.join("firmware", "firmware.bin")
FIRMWARE_ELF_NAME = os.path.join("firmware", "firmware.elf")

CLK_PERIOD_NS = 60
RESET_CYCLES = 20
BOOT_TIMEOUT_CYCLES = 200_000
ITER_TIMEOUT_CYCLES = 5_000_000


def read_elf_symbol(elf_path: str, sym_name: str):
    if not os.path.exists(elf_path):
        return None

    with open(elf_path, "rb") as f:
        raw = f.read()

    if raw[0:4] != b"\x7fELF":
        return None

    e_shoff = struct.unpack_from("<I", raw, 0x20)[0]
    e_shentsize = struct.unpack_from("<H", raw, 0x2E)[0]
    e_shnum = struct.unpack_from("<H", raw, 0x30)[0]

    def section_header(index):
        off = e_shoff + index * e_shentsize
        return struct.unpack_from("<IIIIIIIIII", raw, off)

    symtab_sh = None
    strtab_sh = None
    for idx in range(e_shnum):
        sh = section_header(idx)
        if sh[1] == 2:
            symtab_sh = sh
            strtab_sh = section_header(sh[6])
            break

    if symtab_sh is None or strtab_sh is None:
        return None

    sym_offset = symtab_sh[4]
    sym_size = symtab_sh[5]
    sym_entsize = symtab_sh[9]
    str_offset = strtab_sh[4]

    for idx in range(sym_size // sym_entsize):
        off = sym_offset + idx * sym_entsize
        st_name = struct.unpack_from("<I", raw, off)[0]
        st_value = struct.unpack_from("<I", raw, off + 4)[0]
        name_start = str_offset + st_name
        name_end = raw.index(b"\x00", name_start)
        name = raw[name_start:name_end].decode("ascii", errors="replace")
        if name == sym_name:
            return st_value

    return None


def load_firmware_binary():
    path = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    with open(path, "rb") as f:
        return list(f.read())


def get_grid_offset():
    elf_path = os.path.join(os.path.dirname(__file__), FIRMWARE_ELF_NAME)
    grid_addr = read_elf_symbol(elf_path, "current_grid")
    if grid_addr is None:
        raise RuntimeError("Could not resolve `current_grid` from firmware ELF.")
    return grid_addr


FIRMWARE = load_firmware_binary()
SRAM_GRID_BASE = get_grid_offset()


async def spi_flash_responder(dut):
    boot = dut.noc_mesh.boot_inst
    dut.flash_miso.value = 0

    while True:
        await FallingEdge(boot.flash_cs_n)
        dut._log.info("[spi] boot_ctrl CS asserted")

        streaming = False
        last_byte_idx = 0
        while True:
            await RisingEdge(dut.clk)
            if int(boot.flash_cs_n.value) == 1:
                dut._log.info(f"[spi] CS deasserted after byte {last_byte_idx}")
                break

            if int(boot.state.value) == 3 and int(boot.spi_phase.value) == 0:
                if not streaming:
                    streaming = True
                    dut._log.info("[spi] Streaming firmware...")

                byte_idx = int(boot.sram_waddr.value)
                bit_idx = int(boot.bit_counter.value)
                last_byte_idx = byte_idx
                byte_val = FIRMWARE[byte_idx] if byte_idx < len(FIRMWARE) else 0
                dut.flash_miso.value = (byte_val >> (7 - bit_idx)) & 1

        dut._log.info("[spi] Transaction done")


def get_tile(dut, r, c):
    return dut.noc_mesh.rows[r].cols[c].tile_inst


def sram_read_byte(tile, cpu_addr: int) -> int:
    mem = tile.sram_inst.mem
    return int(mem[cpu_addr].value) & 0xFF


def read_grid_from_sram(tile):
    grid = []
    for y in range(SIZE):
        row = []
        for x in range(SIZE):
            addr = SRAM_GRID_BASE + y * SIZE + x
            row.append(sram_read_byte(tile, addr))
        grid.append(row)
    return grid


def format_grid(grid):
    return "\n".join(
        "".join("█" if grid[y][x] else "·" for x in range(SIZE))
        for y in range(SIZE)
    )


def expected_seed():
    grid = [[0] * SIZE for _ in range(SIZE)]
    grid[4][5] = 1
    grid[5][5] = 1
    grid[6][5] = 1
    return grid


def expected_iter1():
    grid = [[0] * SIZE for _ in range(SIZE)]
    grid[5][4] = 1
    grid[5][5] = 1
    grid[5][6] = 1
    return grid


EXPECTED_ITER0 = expected_seed()
EXPECTED_ITER1 = expected_iter1()


def grid_matches(actual, expected):
    for y in range(SIZE):
        for x in range(SIZE):
            if (actual[y][x] != 0) != (expected[y][x] != 0):
                return False
    return True


def count_mismatches(actual, expected):
    mismatches = 0
    for y in range(SIZE):
        for x in range(SIZE):
            if (actual[y][x] != 0) != (expected[y][x] != 0):
                mismatches += 1
    return mismatches


async def wait_for_boot(dut):
    for cycle in range(BOOT_TIMEOUT_CYCLES):
        await RisingEdge(dut.clk)
        if int(dut.noc_mesh.boot_inst.cpu_reset_n.value) == 1:
            dut._log.info(f"[boot] cpu_reset_n asserted at cycle {cycle}")
            return
        if cycle and cycle % 10_000 == 0:
            dut._log.info(f"[boot] Still booting... cycle {cycle}")
    raise AssertionError("Boot controller timed out before releasing the CPU.")


async def boot_mesh(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, units="ns").start())
    dut.reset.value = 1
    dut.flash_miso.value = 0
    dut.bypass_en.value = 0
    dut.host_mosi.value = 0
    await Timer(CLK_PERIOD_NS * RESET_CYCLES, units="ns")
    dut.reset.value = 0
    cocotb.start_soon(spi_flash_responder(dut))
    await wait_for_boot(dut)
    await Timer(CLK_PERIOD_NS * 20, units="ns")


async def wait_for_iter1_or_signal(dut, timeout_cycles: int, poll_cycles: int = 1000):
    router = dut.noc_mesh.rows[0].cols[0].tile_inst.router_inst
    target_payload = 0x0CCCCCCC
    signal_seen = False

    for cycle in range(0, timeout_cycles, poll_cycles):
        for _ in range(poll_cycles):
            await RisingEdge(dut.clk)
            flit = int(router.inject_flit.value)
            if (flit & (1 << 33)) and ((flit & 0x1FFFFFFF) == target_payload):
                signal_seen = True

        all_match = True
        snapshots = {}
        for r in range(MESH_R):
            for c in range(MESH_C):
                grid = read_grid_from_sram(get_tile(dut, r, c))
                snapshots[(r, c)] = grid
                if not grid_matches(grid, EXPECTED_ITER1):
                    all_match = False

        if all_match:
            return signal_seen, snapshots, cycle + poll_cycles

    return signal_seen, None, timeout_cycles


@cocotb.test()
async def test_gol_iter1_firmware(dut):
    """
    Boot the real firmware and verify one local blinker iteration was
    committed to current_grid in every tile's SRAM.
    """
    dut._log.info(
        f"[setup] current_grid @ 0x{SRAM_GRID_BASE:04x}, firmware bytes = {len(FIRMWARE)}"
    )

    await boot_mesh(dut)

    tile00_before = read_grid_from_sram(get_tile(dut, 0, 0))
    dut._log.info("[iter0?] Tile (0,0) grid right after boot:")
    for line in format_grid(tile00_before).splitlines():
        dut._log.info(f"[grid] {line}")

    if grid_matches(tile00_before, EXPECTED_ITER1):
        dut._log.info("[iter1] Tile (0,0) already shows the stable rotated blinker.")
        snapshots = {
            (r, c): read_grid_from_sram(get_tile(dut, r, c))
            for r in range(MESH_R)
            for c in range(MESH_C)
        }
        signal_seen = False
    else:
        dut._log.info("[iter1] Waiting for 0xCCCCCCCC and/or rotated SRAM pattern...")
        signal_seen, snapshots, waited_cycles = await wait_for_iter1_or_signal(dut, ITER_TIMEOUT_CYCLES)
        assert snapshots is not None, (
            "Timed out waiting for a firmware-driven iter1 result in SRAM."
        )
        if signal_seen:
            dut._log.info(f"[iter1] Saw 0xCCCCCCCC and the rotated grid after {waited_cycles} cycles.")
        else:
            dut._log.warning(
                f"[iter1] Rotated grid reached SRAM after {waited_cycles} cycles, but 0xCCCCCCCC was not observed."
            )
        await Timer(5, units="us")

    total_mismatches = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            actual = snapshots[(r, c)]
            mismatches = count_mismatches(actual, EXPECTED_ITER1)
            total_mismatches += mismatches
            dut._log.info(f"[iter1] Tile ({r},{c}) mismatches = {mismatches}")
            for line in format_grid(actual).splitlines():
                dut._log.info(f"[tile {r},{c}] {line}")

    assert total_mismatches == 0, f"Firmware-driven iter1 mismatch count: {total_mismatches}"

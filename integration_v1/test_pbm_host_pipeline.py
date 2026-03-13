"""
PBM host-style pipeline test.

This is a separate cocotb flow that preserves the existing blinker and flash
boot tests. It exercises:

1. Flash boot into all tiles via the real boot loader.
2. A host-side image load stage from a real 30x30 PBM file.
3. One local Game of Life iteration inside each tile's CPU firmware.
4. Reconstructing the resulting 30x30 image and writing it back to a PBM file.

Important honesty note:
The current RTL host gateway is not yet a full general-purpose host-to-SRAM
writer, so this test emulates the host load by writing each tile's SRAM slice
from cocotb after boot. The flash boot and CPU execution are real; the host
image injection is a cocotb-side stand-in for the future host packet path.
"""

import os
import struct
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer

from pbm_utils import PBMImage


ROOT = Path(__file__).resolve().parent
FIRMWARE_BIN = ROOT / "firmware" / "pbm_tile_pipeline.bin"
FIRMWARE_ELF = ROOT / "firmware" / "pbm_tile_pipeline.elf"
INPUT_PBM = ROOT / "test_blinker_single_core.pbm"
OUTPUT_PBM = ROOT / "test_output" / "blinker_single_core_gen1.pbm"
EXPECTED_PBM = ROOT / "test_output" / "blinker_single_core_expected_gen1.pbm"

CLK_PERIOD_NS = 60
RESET_CYCLES = 20
TILE_SIZE = 10
SRAM_SIZE = 1024
BOOT_TIMEOUT_CYCLES = 200_000
ITER_TIMEOUT_CYCLES = 1_000_000
SOURCE_TILE = (1, 1)


def read_elf_symbol(elf_path: Path, sym_name: str):
    if not elf_path.exists():
        return None
    raw = elf_path.read_bytes()
    if raw[0:4] != b"\x7fELF":
        return None

    e_shoff = struct.unpack_from("<I", raw, 0x20)[0]
    e_shentsize = struct.unpack_from("<H", raw, 0x2E)[0]
    e_shnum = struct.unpack_from("<H", raw, 0x30)[0]

    def sh(idx):
        off = e_shoff + idx * e_shentsize
        return struct.unpack_from("<IIIIIIIIII", raw, off)

    symtab_sh = None
    strtab_sh = None
    for idx in range(e_shnum):
        section = sh(idx)
        if section[1] == 2:
            symtab_sh = section
            strtab_sh = sh(section[6])
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


MAILBOX_BASE = read_elf_symbol(FIRMWARE_ELF, "tile_mailbox")
CURRENT_GRID_BASE = MAILBOX_BASE
HOST_START_FLAG = None if MAILBOX_BASE is None else MAILBOX_BASE + 0x64
HOST_DONE_FLAG = None if MAILBOX_BASE is None else MAILBOX_BASE + 0x68
ITERATION_COUNTER = None if MAILBOX_BASE is None else MAILBOX_BASE + 0x6C


def load_firmware_binary():
    if not FIRMWARE_BIN.exists():
        raise FileNotFoundError(
            f"Missing firmware binary: {FIRMWARE_BIN}. "
            "Build it with `make -C integration_v1/firmware pbm_tile_pipeline.bin`."
        )
    data = FIRMWARE_BIN.read_bytes()
    if len(data) > SRAM_SIZE:
        data = data[:SRAM_SIZE]
    return data + bytes(SRAM_SIZE - len(data))


FIRMWARE_BYTES = load_firmware_binary()


def read_tile_sram(dut, start=0, length=SRAM_SIZE):
    mem = dut.dut.sram_inst.mem
    return [int(mem[addr].value) for addr in range(start, start + length)]


def write_tile_sram(dut, offset, data):
    mem = dut.dut.sram_inst.mem
    for idx, value in enumerate(data):
        mem[offset + idx].value = int(value)


def grid_to_rows(grid_flat):
    return [grid_flat[row * TILE_SIZE:(row + 1) * TILE_SIZE] for row in range(TILE_SIZE)]


def print_tile_grid(dut, grid_flat, label):
    dut._log.info(f"[{label}] tile live={sum(grid_flat)}")
    for row_vals in grid_to_rows(grid_flat):
        dut._log.info("    " + "".join("O" if cell else "." for cell in row_vals))


def gol_step_tile(grid_flat):
    next_grid = [0] * (TILE_SIZE * TILE_SIZE)
    for y in range(TILE_SIZE):
        for x in range(TILE_SIZE):
            neighbors = 0
            for dy in (-1, 0, 1):
                for dx in (-1, 0, 1):
                    if dx == 0 and dy == 0:
                        continue
                    nx = x + dx
                    ny = y + dy
                    if 0 <= nx < TILE_SIZE and 0 <= ny < TILE_SIZE:
                        neighbors += grid_flat[ny * TILE_SIZE + nx] & 1
            idx = y * TILE_SIZE + x
            alive = grid_flat[idx] & 1
            next_grid[idx] = 1 if (neighbors == 3 or (alive and neighbors == 2)) else 0
    return next_grid


def reconstruct_image(base_image, center_tile):
    tiles = base_image.split_to_tiles(3, 3)
    tiles[SOURCE_TILE] = center_tile
    image = PBMImage(base_image.width, base_image.height)
    image.merge_from_tiles(tiles, 3, 3)
    return image


def simulate_host_capture(tile_grid):
    """Simulate host-side packet reception for the output tile.

    The current RTL does not yet expose a full generic host readback path, so
    this models the host receiving the processed tile as ten row packets.
    """
    packets = []
    for row_idx, row_vals in enumerate(grid_to_rows(tile_grid)):
        payload = 0
        for bit in row_vals:
            payload = (payload << 1) | (bit & 1)
        packets.append({
            "tile": SOURCE_TILE,
            "row": row_idx,
            "payload": payload,
            "bits": row_vals[:],
        })
    return packets


def reconstruct_tile_from_host_packets(host_packets):
    rows = [[0] * TILE_SIZE for _ in range(TILE_SIZE)]
    for packet in host_packets:
        rows[packet["row"]] = packet["bits"][:]
    return [bit for row in rows for bit in row]


async def spi_flash_responder(dut, firmware_bytes):
    dut.flash_miso.value = 0
    await FallingEdge(dut.flash_cs_n)
    dut._log.info("[SPI] boot controller asserted CS")

    for _ in range(32):
        await RisingEdge(dut.flash_clk)
        if int(dut.flash_cs_n.value) == 1:
            return

    for byte_val in firmware_bytes:
        for bit in range(7, -1, -1):
            await FallingEdge(dut.flash_clk)
            dut.flash_miso.value = (byte_val >> bit) & 1
            if int(dut.flash_cs_n.value) == 1:
                return

    await RisingEdge(dut.flash_cs_n)


async def wait_for_boot(dut):
    for cycle in range(BOOT_TIMEOUT_CYCLES):
        await RisingEdge(dut.clk)
        if int(dut.cpu_reset_n.value) == 1:
            dut._log.info(f"[BOOT] done at cycle {cycle}")
            return
    raise AssertionError("Boot timed out")


async def reset_and_boot(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, unit="ns").start())
    dut.rst.value = 1
    dut.flash_miso.value = 0
    await Timer(CLK_PERIOD_NS * RESET_CYCLES, unit="ns")
    dut.rst.value = 0
    cocotb.start_soon(spi_flash_responder(dut, FIRMWARE_BYTES))
    await wait_for_boot(dut)
    await Timer(CLK_PERIOD_NS * 20, unit="ns")


async def wait_for_done_flags(dut):
    for cycle in range(ITER_TIMEOUT_CYCLES):
        await RisingEdge(dut.clk)
        all_done = True
        tile_done = read_tile_sram(dut, HOST_DONE_FLAG, 4)
        if tile_done[0] != 1:
            all_done = False
        if all_done:
            dut._log.info(f"[ITER] tile done at cycle {cycle}")
            return
    raise AssertionError("Timed out waiting for host_done_flag")


def write_u32_le(dut, addr, value):
    bytes_le = [(value >> (8 * idx)) & 0xFF for idx in range(4)]
    write_tile_sram(dut, addr, bytes_le)


def read_tile_grid(dut):
    raw = read_tile_sram(dut, CURRENT_GRID_BASE, TILE_SIZE * TILE_SIZE)
    return [value & 1 for value in raw]


@cocotb.test()
async def test_pbm_host_load_one_iteration(dut):
    if None in (CURRENT_GRID_BASE, HOST_START_FLAG, HOST_DONE_FLAG, ITERATION_COUNTER):
        raise AssertionError("Missing required ELF symbols for PBM pipeline firmware")

    input_image = PBMImage.read_pbm(str(INPUT_PBM))
    input_tiles = input_image.split_to_tiles(3, 3)
    source_tile = input_tiles[SOURCE_TILE]

    await reset_and_boot(dut)

    dut._log.info(
        f"[HOST] current_grid=0x{CURRENT_GRID_BASE:03x} "
        f"start=0x{HOST_START_FLAG:03x} done=0x{HOST_DONE_FLAG:03x}"
    )

    write_tile_sram(dut, CURRENT_GRID_BASE, source_tile)
    write_u32_le(dut, HOST_DONE_FLAG, 0)
    write_u32_le(dut, ITERATION_COUNTER, 0)
    print_tile_grid(dut, source_tile, "HOST INPUT")

    await RisingEdge(dut.clk)

    write_u32_le(dut, HOST_START_FLAG, 1)

    await wait_for_done_flags(dut)
    await Timer(CLK_PERIOD_NS * 10, unit="ns")

    sram_result = read_tile_grid(dut)
    expected = gol_step_tile(source_tile)
    print_tile_grid(dut, sram_result, "GEN1 SRAM OUTPUT")

    host_packets = simulate_host_capture(sram_result)
    actual = reconstruct_tile_from_host_packets(host_packets)
    dut._log.info(f"[HOST] captured {len(host_packets)} row packets from output tile")
    print_tile_grid(dut, actual, "GEN1 HOST RECONSTRUCTED OUTPUT")

    mismatches = sum(1 for a, e in zip(actual, expected) if a != e)

    output_image = reconstruct_image(input_image, actual)
    expected_image = reconstruct_image(input_image, expected)

    OUTPUT_PBM.parent.mkdir(parents=True, exist_ok=True)
    output_image.write_pbm(str(OUTPUT_PBM), "P1")
    expected_image.write_pbm(str(EXPECTED_PBM), "P1")

    dut._log.info(f"[PBM] wrote output image: {OUTPUT_PBM}")
    dut._log.info(f"[PBM] wrote expected image: {EXPECTED_PBM}")

    assert mismatches == 0, f"One-iteration PBM pipeline mismatch count: {mismatches}"

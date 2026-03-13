import os
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge


CLK_PERIOD_NS = 60
GRID_W = 5
GRID_H = 5
GRID_BASE = 384
MAX_WAIT_CYCLES = 5000


def firmware_path() -> Path:
    env_path = os.getenv("BLINKER_FIRMWARE")
    if env_path:
        return Path(env_path)
    return Path(__file__).resolve().parent / "noc" / "subservient" / "sw" / "gol_blinker_1iter.hex"


def parse_verilog_hex(path: Path, depth: int = 1024) -> list[int]:
    data = [0] * depth
    addr = 0
    for raw_line in path.read_text().splitlines():
        line = raw_line.strip()
        if not line:
            continue
        if line.startswith("@"):
            addr = int(line[1:], 16)
            continue
        for token in line.split():
            if addr < depth:
                data[addr] = int(token, 16)
            addr += 1
    return data


def initial_cell(r: int, c: int) -> int:
    return 1 if (c == 2 and r in (1, 2, 3)) else 0


def expected_cell(r: int, c: int) -> int:
    return 1 if (r == 2 and c in (1, 2, 3)) else 0


def cell_matches_expected(actual: int, expected: int) -> bool:
    return actual == 0 if expected == 0 else actual != 0


def read_grid(dut) -> list[list[int]]:
    grid = []
    for r in range(GRID_H):
        row = []
        for c in range(GRID_W):
            addr = GRID_BASE + r * GRID_W + c
            row.append(int(dut.dut.sram_inst.mem[addr].value))
        grid.append(row)
    return grid


def grid_to_visual(grid: list[list[int]]) -> str:
    lines = []
    for r, row in enumerate(grid):
        cells = " ".join("O" if cell else "." for cell in row)
        lines.append(f"row {r} | {cells}")
    return "\n".join(lines)


def expected_visual() -> str:
    lines = []
    for r in range(GRID_H):
        row = []
        for c in range(GRID_W):
            row.append("O" if expected_cell(r, c) else ".")
        lines.append(f"row {r} | {' '.join(row)}")
    return "\n".join(lines)


def grid_matches_expected(grid: list[list[int]]) -> bool:
    for r in range(GRID_H):
        for c in range(GRID_W):
            if not cell_matches_expected(grid[r][c], expected_cell(r, c)):
                return False
    return True


def preload_firmware(dut, image: list[int]) -> None:
    for addr, byte in enumerate(image):
        dut.dut.sram_inst.mem[addr].value = byte


def seed_blinker(dut) -> None:
    for r in range(GRID_H):
        for c in range(GRID_W):
            addr = GRID_BASE + r * GRID_W + c
            dut.dut.sram_inst.mem[addr].value = initial_cell(r, c)


@cocotb.test()
async def test_blinker_grid_evolution(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, unit="ns").start())

    dut.rst.value = 1
    dut.boot_mode.value = 1
    dut.boot_addr.value = 0
    dut.boot_data.value = 0
    dut.boot_wen.value = 1

    fw_path = firmware_path()
    if not fw_path.exists():
        raise FileNotFoundError(f"Firmware not found: {fw_path}")

    preload_firmware(dut, parse_verilog_hex(fw_path))
    seed_blinker(dut)

    # Match the existing focused Verilog test: arm the SRAM model for preload flow.
    dut.dut.sram_inst.cen_fell.value = 1
    dut.dut.sram_inst.cen_not_rst.value = 0
    dut.dut.sram_inst.qo_reg.value = 0

    await RisingEdge(dut.clk)

    initial_grid = read_grid(dut)
    dut._log.info("Initial grid:\n" + grid_to_visual(initial_grid))
    dut._log.info("Expected next generation:\n" + expected_visual())

    for _ in range(4):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    for _ in range(2):
        await RisingEdge(dut.clk)
    dut.boot_mode.value = 0

    last_grid = initial_grid
    for cycle in range(1, MAX_WAIT_CYCLES + 1):
        await RisingEdge(dut.clk)
        current = read_grid(dut)
        if current != last_grid:
            dut._log.info(f"Grid changed at cycle {cycle}:\n{grid_to_visual(current)}")
            last_grid = current
        if grid_matches_expected(current):
            dut._log.info(f"Observed expected grid at cycle {cycle}")
            return

    raise AssertionError(
        "Timed out waiting for the expected blinker evolution.\n"
        f"Last observed grid:\n{grid_to_visual(last_grid)}"
    )

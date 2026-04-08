import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge

SIZE   = 10
MESH_R = 3
MESH_C = 3

FIRMWARE_BIN_NAME = "firmware.bin"
RESET_HOLD_MS     = 2
SEED_SAMPLE_US    = 2000
ITER_TIMEOUT_MS   = 200

SRAM_GRID_BASE = 0x0500
DBG_BASE       = 0x06B0

print(f"[testbench] current_grid @ 0x{SRAM_GRID_BASE:04x}")
print(f"[testbench] debug_mmio   @ 0x{DBG_BASE:04x}")

def load_firmware_binary():
    bin_file = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    if os.path.exists(bin_file):
        with open(bin_file, "rb") as f:
            return list(f.read())
    return [0] * 1024

FIRMWARE = load_firmware_binary()

async def spi_flash_responder(dut):
    from cocotb.triggers import FallingEdge
    while True:
        await FallingEdge(dut.flash_cs_n)
        for _ in range(32):
            await RisingEdge(dut.flash_clk)
        byte_counter = 0
        while True:
            for bit in range(7, -1, -1):
                await FallingEdge(dut.flash_clk)
                b = FIRMWARE[byte_counter] if byte_counter < len(FIRMWARE) else 0x00
                dut.flash_miso.value = (b >> bit) & 0x1
            byte_counter += 1
            if int(dut.flash_cs_n.value) == 1:
                break

def get_tile(dut, r, c):
    return dut.rows[r].cols[c].tile_inst

def sram_read_byte(tile, cpu_addr):
    mem = tile.sram_inst.mem
    elem_bits = len(mem[0])
    if elem_bits <= 8:
        return int(mem[cpu_addr].value) & 0xFF
    bytes_per_word = elem_bits // 8
    word_index = cpu_addr // bytes_per_word
    byte_lane  = cpu_addr % bytes_per_word
    word = int(mem[word_index].value)
    return (word >> (8 * byte_lane)) & 0xFF

def sram_read_u16(tile, addr):
    lo = sram_read_byte(tile, addr + 0)
    hi = sram_read_byte(tile, addr + 1)
    return lo | (hi << 8)

def sram_read_u32(tile, addr):
    b0 = sram_read_byte(tile, addr + 0)
    b1 = sram_read_byte(tile, addr + 1)
    b2 = sram_read_byte(tile, addr + 2)
    b3 = sram_read_byte(tile, addr + 3)
    return b0 | (b1 << 8) | (b2 << 16) | (b3 << 24)

def bits10(v):
    return format(v & 0x3FF, "010b")

async def wait_for_noc_signal(dut, target_payload, timeout_ms):
    max_cycles = timeout_ms * 1000 * 100
    target = target_payload & 0x1FFFFFFF
    for _ in range(max_cycles):
        await RisingEdge(dut.clk)
        for tr in range(MESH_R):
            for tc in range(MESH_C):
                try:
                    flit_raw = int(dut.rows[tr].cols[tc].tile_inst.router_inst.inject_flit.value)
                    if flit_raw & (1 << 33):
                        if (flit_raw & 0x1FFFFFFF) == target:
                            return True
                except Exception:
                    pass
        try:
            mon = int(dut.monitor_22_se.value)
            if mon & (1 << 33):
                if (mon & 0x1FFFFFFF) == target:
                    return True
        except Exception:
            pass
    return False

# ---- Pure-Python GoL on 30x30 global grid ----

GLOBAL_ROWS = MESH_R * SIZE
GLOBAL_COLS = MESH_C * SIZE

def expected_blinker_seed():
    exp = [[0] * SIZE for _ in range(SIZE)]
    exp[4][5] = 1
    exp[5][5] = 1
    exp[6][5] = 1
    exp[8][0] = 1
    exp[9][0] = 1
    exp[8][9] = 1
    exp[9][9] = 1
    return exp

def build_global_seed():
    tile_seed = expected_blinker_seed()
    g = [[0] * GLOBAL_COLS for _ in range(GLOBAL_ROWS)]
    for tr in range(MESH_R):
        for tc in range(MESH_C):
            for y in range(SIZE):
                for x in range(SIZE):
                    g[tr * SIZE + y][tc * SIZE + x] = tile_seed[y][x]
    return g

def gol_step_global(grid):
    new_grid = [[0] * GLOBAL_COLS for _ in range(GLOBAL_ROWS)]
    for y in range(GLOBAL_ROWS):
        for x in range(GLOBAL_COLS):
            n = 0
            for dy in [-1, 0, 1]:
                for dx in [-1, 0, 1]:
                    if dx == 0 and dy == 0:
                        continue
                    nx, ny = x + dx, y + dy
                    if 0 <= nx < GLOBAL_COLS and 0 <= ny < GLOBAL_ROWS:
                        n += grid[ny][nx]
            cell = grid[y][x]
            new_grid[y][x] = 1 if (cell and n in (2, 3)) or (not cell and n == 3) else 0
    return new_grid

def get_tile_expected(iteration, tr, tc):
    g = GOL_GLOBAL[iteration]
    return [g[tr * SIZE + y][tc * SIZE : tc * SIZE + SIZE] for y in range(SIZE)]

GOL_GLOBAL = [build_global_seed()]
GOL_GLOBAL.append(gol_step_global(GOL_GLOBAL[0]))
GOL_GLOBAL.append(gol_step_global(GOL_GLOBAL[1]))

# ---- SRAM helpers ----

def read_grid_from_sram(tile):
    g = []
    for y in range(SIZE):
        row = []
        for x in range(SIZE):
            row.append(sram_read_byte(tile, SRAM_GRID_BASE + y * SIZE + x))
        g.append(row)
    return g

def dump_region(tile, base, count_bytes=64):
    print(f"\nDUMP @ 0x{base:04x} ({count_bytes} bytes):")
    for off in range(0, count_bytes, 16):
        chunk = [sram_read_byte(tile, base + off + i)
                 for i in range(min(16, count_bytes - off))]
        print("0x{:04x}: ".format(base + off) + " ".join(f"{b:02x}" for b in chunk))

def dump_debug_mmio(dut, r, c):
    tile = get_tile(dut, r, c)

    magic0 = sram_read_byte(tile, DBG_BASE + 0x00)
    magic1 = sram_read_byte(tile, DBG_BASE + 0x01)
    tile_id = sram_read_byte(tile, DBG_BASE + 0x02)
    iteration = sram_read_byte(tile, DBG_BASE + 0x03)
    phase = sram_read_byte(tile, DBG_BASE + 0x04)
    cur_row = sram_read_byte(tile, DBG_BASE + 0x05)
    cur_col = sram_read_byte(tile, DBG_BASE + 0x06)
    cur_idx = sram_read_byte(tile, DBG_BASE + 0x07)

    has_flags = sram_read_byte(tile, DBG_BASE + 0x08)
    last_dir_rx = sram_read_byte(tile, DBG_BASE + 0x09)
    last_dir_tx = sram_read_byte(tile, DBG_BASE + 0x0A)
    last_ncnt = sram_read_byte(tile, DBG_BASE + 0x0B)

    last_tx_dest = sram_read_byte(tile, DBG_BASE + 0x0C)
    last_rx_raw = sram_read_u32(tile, DBG_BASE + 0x10)
    last_tx_word = sram_read_u32(tile, DBG_BASE + 0x14)

    rx_n = sram_read_u16(tile, DBG_BASE + 0x18)
    rx_s = sram_read_u16(tile, DBG_BASE + 0x1A)
    rx_w = sram_read_u16(tile, DBG_BASE + 0x1C)
    rx_e = sram_read_u16(tile, DBG_BASE + 0x1E)

    tx_n = sram_read_u16(tile, DBG_BASE + 0x20)
    tx_s = sram_read_u16(tile, DBG_BASE + 0x22)
    tx_w = sram_read_u16(tile, DBG_BASE + 0x24)
    tx_e = sram_read_u16(tile, DBG_BASE + 0x26)

    tl = sram_read_byte(tile, DBG_BASE + 0x28)
    tc = sram_read_byte(tile, DBG_BASE + 0x29)
    tr = sram_read_byte(tile, DBG_BASE + 0x2A)
    ml = sram_read_byte(tile, DBG_BASE + 0x2B)
    mr = sram_read_byte(tile, DBG_BASE + 0x2C)
    bl = sram_read_byte(tile, DBG_BASE + 0x2D)
    bc = sram_read_byte(tile, DBG_BASE + 0x2E)
    br = sram_read_byte(tile, DBG_BASE + 0x2F)
    selfv = sram_read_byte(tile, DBG_BASE + 0x30)

    last_tag_rx = sram_read_byte(tile, DBG_BASE + 0x31)
    last_tag_tx = sram_read_byte(tile, DBG_BASE + 0x32)
    error_code = sram_read_byte(tile, DBG_BASE + 0x33)
    stall_counter = sram_read_byte(tile, DBG_BASE + 0x34)
    expected_recv = sram_read_byte(tile, DBG_BASE + 0x35)
    got_recv = sram_read_byte(tile, DBG_BASE + 0x36)

    rx_corner_nw = sram_read_byte(tile, DBG_BASE + 0x38)
    rx_corner_ne = sram_read_byte(tile, DBG_BASE + 0x39)
    rx_corner_sw = sram_read_byte(tile, DBG_BASE + 0x3A)
    rx_corner_se = sram_read_byte(tile, DBG_BASE + 0x3B)

    tx_corner_nw = sram_read_byte(tile, DBG_BASE + 0x3C)
    tx_corner_ne = sram_read_byte(tile, DBG_BASE + 0x3D)
    tx_corner_sw = sram_read_byte(tile, DBG_BASE + 0x3E)
    tx_corner_se = sram_read_byte(tile, DBG_BASE + 0x3F)

    ghost_n = [sram_read_byte(tile, DBG_BASE + 0x40 + i) for i in range(10)]
    ghost_s = [sram_read_byte(tile, DBG_BASE + 0x50 + i) for i in range(10)]
    ghost_w = [sram_read_byte(tile, DBG_BASE + 0x60 + i) for i in range(10)]
    ghost_e = [sram_read_byte(tile, DBG_BASE + 0x70 + i) for i in range(10)]

    ghost_nw = sram_read_byte(tile, DBG_BASE + 0x7A)
    ghost_ne = sram_read_byte(tile, DBG_BASE + 0x7B)
    ghost_sw = sram_read_byte(tile, DBG_BASE + 0x7C)
    ghost_se = sram_read_byte(tile, DBG_BASE + 0x7D)

    print(f"\n[DBG tile({r},{c})]")
    print(f" magic=0x{magic0:02x} 0x{magic1:02x} tile_id={tile_id} iter={iteration} phase={phase}")
    print(f" cur_row={cur_row} cur_col={cur_col} cur_idx={cur_idx} has_flags=0x{has_flags:02x}")
    print(f" last_dir_rx=0x{last_dir_rx:02x} last_dir_tx=0x{last_dir_tx:02x} last_ncnt={last_ncnt}")
    print(f" last_tag_rx={last_tag_rx} last_tag_tx={last_tag_tx}")
    print(f" error_code=0x{error_code:02x} stall_counter={stall_counter} expected_recv={expected_recv} got_recv={got_recv}")
    print(f" last_tx_dest=0x{last_tx_dest:02x}")
    print(f" last_rx_raw = 0x{last_rx_raw:08x}")
    print(f" last_tx_word= 0x{last_tx_word:08x}")

    print(f" RX bm N={bits10(rx_n)} S={bits10(rx_s)} W={bits10(rx_w)} E={bits10(rx_e)}")
    print(f" TX bm N={bits10(tx_n)} S={bits10(tx_s)} W={bits10(tx_w)} E={bits10(tx_e)}")

    print(f" RX corners NW={rx_corner_nw} NE={rx_corner_ne} SW={rx_corner_sw} SE={rx_corner_se}")
    print(f" TX corners NW={tx_corner_nw} NE={tx_corner_ne} SW={tx_corner_sw} SE={tx_corner_se}")

    print(f" contribs: tl={tl} tc={tc} tr={tr} ml={ml} mr={mr} bl={bl} bc={bc} br={br} self={selfv}")
    print(f" ghost_N={ghost_n}")
    print(f" ghost_S={ghost_s}")
    print(f" ghost_W={ghost_w}")
    print(f" ghost_E={ghost_e}")
    print(f" ghost_corners: NW={ghost_nw} NE={ghost_ne} SW={ghost_sw} SE={ghost_se}")

def print_iter_comparison(dut, r, c, iteration):
    tile = get_tile(dut, r, c)
    exp  = get_tile_expected(iteration, r, c)
    act  = read_grid_from_sram(tile)

    print("\n===================================================")
    print(f"TILE ({r},{c})  ITERATION {iteration}")
    print("EXPECTED (Python GoL)   ACTUAL (SRAM)")
    print("---------------------------------------------------")

    mismatches = 0
    for y in range(SIZE):
        exp_row = "".join("." if exp[y][x] else "#" for x in range(SIZE))
        act_row = "".join("." if act[y][x] else "#" for x in range(SIZE))
        marker  = "" if exp_row == act_row else "  <- MISMATCH"
        if marker:
            mismatches += sum(
                1 for x in range(SIZE)
                if (exp[y][x] != 0) != (act[y][x] != 0)
            )
        print(f"{exp_row}    {act_row}{marker}")
    print("===================================================")
    return mismatches

def debug_dump_focus_tiles(dut):
    for (r, c) in [(0,0), (0,1), (1,0), (1,1)]:
        dump_debug_mmio(dut, r, c)

async def boot_mesh(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    dut.rst.value = 1
    dut.flash_miso.value = 0
    if hasattr(dut, "inject_00_nw"):
        dut.inject_00_nw.value = 0
    await Timer(RESET_HOLD_MS, unit="ms")
    dut.rst.value = 0
    cocotb.start_soon(spi_flash_responder(dut))
    while int(dut.cpu_rst_n.value) == 0:
        await Timer(10, unit="us")
    dut._log.info("[boot] cpu_rst_n asserted — CPU running.")

@cocotb.test()
async def test_iter0_seed_only(dut):
    await boot_mesh(dut)
    dut._log.info(f"Waiting {SEED_SAMPLE_US} us for seed init...")
    await Timer(SEED_SAMPLE_US, unit="us")

    tile00 = get_tile(dut, 0, 0)
    dut._log.info(f"SRAM_GRID_BASE = 0x{SRAM_GRID_BASE:04x}")
    dump_region(tile00, SRAM_GRID_BASE, 100)
    dump_region(tile00, DBG_BASE, 128)

    print("\n\n******** ITERATION 0 (seed) ********")
    total = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            total += print_iter_comparison(dut, r, c, 0)

    if total == 0:
        dut._log.info("ALL TILES: seed matches")
    else:
        dut._log.error(f"{total} mismatches in seed")
        debug_dump_focus_tiles(dut)

    assert total == 0, f"Seed mismatch: {total} cells wrong."

@cocotb.test()
async def test_gol_iter1_iter2(dut):
    await boot_mesh(dut)

    # Iter 0
    await Timer(SEED_SAMPLE_US, unit="us")
    print("\n\n******** ITERATION 0 (seed) ********")
    iter0_mismatches = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            iter0_mismatches += print_iter_comparison(dut, r, c, 0)

    if iter0_mismatches == 0:
        dut._log.info("Iter 0: ALL tiles match seed")
    else:
        dut._log.error(f"Iter 0: {iter0_mismatches} mismatches")
        debug_dump_focus_tiles(dut)

    # Iter 1
    dut._log.info("Waiting for iter 1 SIG_GEN_STABLE...")
    seen = await wait_for_noc_signal(dut, 0x10000004, ITER_TIMEOUT_MS)
    if not seen:
        dut._log.warning("SIG_GEN_STABLE not seen — fallback wait")
        await Timer(ITER_TIMEOUT_MS, unit="ms")
    else:
        await Timer(10, unit="us")
        dut._log.info("Iter 1 stable.")

    print("\n\n******** ITERATION 1 ********")
    iter1_mismatches = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            iter1_mismatches += print_iter_comparison(dut, r, c, 1)

    if iter1_mismatches == 0:
        dut._log.info("Iter 1: ALL tiles match")
    else:
        dut._log.error(f"Iter 1: {iter1_mismatches} mismatches")
        dump_region(get_tile(dut, 0, 0), SRAM_GRID_BASE, 100)
        dump_region(get_tile(dut, 0, 0), 0x0600, 40)
        dump_region(get_tile(dut, 0, 0), DBG_BASE, 128)
        debug_dump_focus_tiles(dut)

    # Iter 2
    dut._log.info("Waiting for iter 2 SIG_GEN_STABLE...")
    seen = await wait_for_noc_signal(dut, 0x10000004, ITER_TIMEOUT_MS)
    if not seen:
        dut._log.warning("SIG_GEN_STABLE not seen — fallback wait")
        await Timer(ITER_TIMEOUT_MS, unit="ms")
    else:
        await Timer(10, unit="us")
        dut._log.info("Iter 2 stable.")

    print("\n\n******** ITERATION 2 ********")
    iter2_mismatches = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            iter2_mismatches += print_iter_comparison(dut, r, c, 2)

    if iter2_mismatches == 0:
        dut._log.info("Iter 2: ALL tiles match")
    else:
        dut._log.error(f"Iter 2: {iter2_mismatches} mismatches")
        dump_region(get_tile(dut, 0, 0), SRAM_GRID_BASE, 100)
        dump_region(get_tile(dut, 0, 0), DBG_BASE, 128)
        debug_dump_focus_tiles(dut)

    total = iter0_mismatches + iter1_mismatches + iter2_mismatches
    assert total == 0, (
        f"GoL test failed: iter0={iter0_mismatches}, "
        f"iter1={iter1_mismatches}, iter2={iter2_mismatches} mismatches."
    )
import os
import struct
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

# Grid at hardcoded address — matches firmware GRID_BASE = 0x0500
SRAM_GRID_BASE = 0x0500
print(f"[testbench] current_grid @ 0x{SRAM_GRID_BASE:04x}")

# Debug MMIO addresses — must match firmware main.c exactly:
#   DEBUG_BASE       = 0x0700
#   +0  : last bitmap recv from North  (uint32)
#   +4  : last bitmap recv from South  (uint32)
#   +8  : last bitmap recv from West   (uint32)
#   +12 : last bitmap recv from East   (uint32)
#   +16 : neighbor histogram, 9 bytes  (n=0..8)
#   +28 : iteration counter            (uint32)   <- after 9 hist bytes + 3 pad
#   +32 : ghost exchange flags         (uint32)
DEBUG_BASE           = 0x0700
DEBUG_LAST_RECV_N    = DEBUG_BASE + 0
DEBUG_LAST_RECV_S    = DEBUG_BASE + 4
DEBUG_LAST_RECV_W    = DEBUG_BASE + 8
DEBUG_LAST_RECV_E    = DEBUG_BASE + 12
DEBUG_NEIGHBOR_HIST  = DEBUG_BASE + 16   # 9 bytes
DEBUG_ITER_COUNT     = DEBUG_BASE + 28   # uint32
DEBUG_GHOST_FLAGS    = DEBUG_BASE + 32   # uint32

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
    byte_lane  = cpu_addr  % bytes_per_word
    word = int(mem[word_index].value)
    return (word >> (8 * byte_lane)) & 0xFF

def sram_read_word(tile, cpu_addr):
    """Read a 32-bit little-endian word from SRAM (cpu_addr need not be aligned)."""
    b0 = sram_read_byte(tile, cpu_addr)
    b1 = sram_read_byte(tile, cpu_addr + 1)
    b2 = sram_read_byte(tile, cpu_addr + 2)
    b3 = sram_read_byte(tile, cpu_addr + 3)
    return b0 | (b1 << 8) | (b2 << 16) | (b3 << 24)

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

# ---- Debug helpers ----

def read_debug_bitmaps(tile, label=""):
    """Read the last received ghost bitmaps and exchange flags from this tile."""
    recv_n      = sram_read_word(tile, DEBUG_LAST_RECV_N)
    recv_s      = sram_read_word(tile, DEBUG_LAST_RECV_S)
    recv_w      = sram_read_word(tile, DEBUG_LAST_RECV_W)
    recv_e      = sram_read_word(tile, DEBUG_LAST_RECV_E)
    ghost_flags = sram_read_word(tile, DEBUG_GHOST_FLAGS)

    sent_s = (ghost_flags >> 0) & 1
    sent_n = (ghost_flags >> 1) & 1
    sent_e = (ghost_flags >> 2) & 1
    sent_w = (ghost_flags >> 3) & 1

    print(f"\n{label} Ghost Exchange (flags=0x{ghost_flags:02x}):")
    print(f"  Sent  : N={sent_n} S={sent_s} E={sent_e} W={sent_w}")
    if sent_n: print(f"  Recv N: 0x{recv_n:03x}  bits={recv_n:010b}")
    if sent_s: print(f"  Recv S: 0x{recv_s:03x}  bits={recv_s:010b}")
    if sent_e: print(f"  Recv E: 0x{recv_e:03x}  bits={recv_e:010b}")
    if sent_w: print(f"  Recv W: 0x{recv_w:03x}  bits={recv_w:010b}")
    return recv_n, recv_s, recv_w, recv_e, ghost_flags

def read_debug_neighbor_histogram(tile, label=""):
    """Read the per-cell neighbor-count histogram (buckets 0-8)."""
    hist = [sram_read_byte(tile, DEBUG_NEIGHBOR_HIST + i) for i in range(9)]
    total = sum(hist)
    print(f"\n{label} Neighbor Histogram (total cells={total}):")
    for n in range(9):
        bar = "#" * min(hist[n], 40)
        print(f"  n={n}: {hist[n]:4d}  {bar}")
    return hist

def read_debug_iter_count(tile):
    return sram_read_word(tile, DEBUG_ITER_COUNT)

def print_debug_state(dut, r, c, label=""):
    """Print all debug info for tile (r,c)."""
    tile     = get_tile(dut, r, c)
    iter_num = read_debug_iter_count(tile)
    hdr      = label if label else f"TILE ({r},{c})  iter={iter_num}"
    print(f"\n{'='*60}")
    print(hdr)
    print('='*60)
    read_debug_bitmaps(tile, hdr)
    read_debug_neighbor_histogram(tile, hdr)

# ---- Pure-Python GoL reference on 30x30 global grid ----

GLOBAL_ROWS = MESH_R * SIZE
GLOBAL_COLS = MESH_C * SIZE

def expected_blinker_seed():
    """Matches firmware seed exactly."""
    exp = [[0] * SIZE for _ in range(SIZE)]
    exp[4][5] = 1; exp[5][5] = 1; exp[6][5] = 1
    exp[8][0] = 1; exp[9][0] = 1
    exp[8][9] = 1; exp[9][9] = 1
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
    return [g[tr * SIZE + y][tc * SIZE: tc * SIZE + SIZE] for y in range(SIZE)]

GOL_GLOBAL = [build_global_seed()]
GOL_GLOBAL.append(gol_step_global(GOL_GLOBAL[0]))
GOL_GLOBAL.append(gol_step_global(GOL_GLOBAL[1]))

# ---- SRAM helpers ----

def read_grid_from_sram(tile):
    return [
        [sram_read_byte(tile, SRAM_GRID_BASE + y * SIZE + x) for x in range(SIZE)]
        for y in range(SIZE)
    ]

def dump_region(tile, base, count_bytes=64):
    print(f"\nDUMP @ 0x{base:04x} ({count_bytes} bytes):")
    for off in range(0, count_bytes, 16):
        chunk = [sram_read_byte(tile, base + off + i)
                 for i in range(min(16, count_bytes - off))]
        print("0x{:04x}: ".format(base + off) + " ".join(f"{b:02x}" for b in chunk))

def print_iter_comparison(dut, r, c, iteration):
    """Print expected vs actual grid; return number of mismatched cells."""
    tile = get_tile(dut, r, c)
    exp  = get_tile_expected(iteration, r, c)
    act  = read_grid_from_sram(tile)
    print(f"\n===================================================")
    print(f"TILE ({r},{c})  ITERATION {iteration}")
    print("EXPECTED (Python GoL)   ACTUAL (SRAM)")
    print("---------------------------------------------------")
    mismatches = 0
    for y in range(SIZE):
        exp_row = "".join("." if exp[y][x] else "#" for x in range(SIZE))
        act_row = "".join("." if act[y][x] else "#" for x in range(SIZE))
        marker  = "" if exp_row == act_row else "  <- MISMATCH"
        if marker:
            mismatches += sum(1 for x in range(SIZE)
                              if (exp[y][x] != 0) != (act[y][x] != 0))
        print(f"{exp_row}    {act_row}{marker}")
    print("===================================================")
    return mismatches

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
    """Boot and verify seed matches firmware initial pattern."""
    await boot_mesh(dut)
    dut._log.info(f"Waiting {SEED_SAMPLE_US} us for seed init...")
    await Timer(SEED_SAMPLE_US, unit="us")

    tile00 = get_tile(dut, 0, 0)
    dut._log.info(f"SRAM_GRID_BASE = 0x{SRAM_GRID_BASE:04x}")
    dump_region(tile00, SRAM_GRID_BASE, 100)

    # Debug state for tile (0,0) at seed
    print_debug_state(dut, 0, 0, "TILE (0,0) SEED STATE")

    print("\n\n******** ITERATION 0 (seed) ********")
    total = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            total += print_iter_comparison(dut, r, c, 0)

    if total == 0:
        dut._log.info("ALL TILES: seed matches")
    else:
        dut._log.error(f"{total} mismatches in seed")
    assert total == 0, f"Seed mismatch: {total} cells wrong."

@cocotb.test()
async def test_gol_iter1_iter2(dut):
    """Run 2 GoL iterations with ghost exchange and verify results."""
    await boot_mesh(dut)

    # ── Iteration 0: seed check ───────────────────────────────────────────
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

    # ── Iteration 1 ───────────────────────────────────────────────────────
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
            # Single call — count mismatches AND print in one pass
            m = print_iter_comparison(dut, r, c, 1)
            iter1_mismatches += m
            if m > 0:
                print_debug_state(dut, r, c, f"TILE ({r},{c}) iter=1 MISMATCH debug")

    if iter1_mismatches == 0:
        dut._log.info("Iter 1: ALL tiles match")
    else:
        dut._log.error(f"Iter 1: {iter1_mismatches} mismatches")
        dump_region(get_tile(dut, 0, 0), SRAM_GRID_BASE, 100)
        dump_region(get_tile(dut, 0, 0), 0x0600, 40)
        dump_region(get_tile(dut, 0, 0), DEBUG_BASE, 36)
        # Print debug for all tiles so we can see cross-tile ghost state
        print("\n[DEBUG] Ghost exchange state — all tiles, iteration 1:")
        for r in range(MESH_R):
            for c in range(MESH_C):
                print_debug_state(dut, r, c)

    # ── Iteration 2 ───────────────────────────────────────────────────────
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
            m = print_iter_comparison(dut, r, c, 2)
            iter2_mismatches += m
            if m > 0:
                print_debug_state(dut, r, c, f"TILE ({r},{c}) iter=2 MISMATCH debug")

    if iter2_mismatches == 0:
        dut._log.info("Iter 2: ALL tiles match")
    else:
        dut._log.error(f"Iter 2: {iter2_mismatches} mismatches")
        dump_region(get_tile(dut, 0, 0), SRAM_GRID_BASE, 100)
        dump_region(get_tile(dut, 0, 0), DEBUG_BASE, 36)
        print("\n[DEBUG] Ghost exchange state — all tiles, iteration 2:")
        for r in range(MESH_R):
            for c in range(MESH_C):
                print_debug_state(dut, r, c)

    total = iter0_mismatches + iter1_mismatches + iter2_mismatches
    assert total == 0, (
        f"GoL test failed: iter0={iter0_mismatches}, "
        f"iter1={iter1_mismatches}, iter2={iter2_mismatches} mismatches."
    )
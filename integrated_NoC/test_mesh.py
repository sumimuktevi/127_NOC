import os
import struct
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge

# ============================================================
# CONFIG
# ============================================================

SIZE   = 10
MESH_R = 3
MESH_C = 3

FIRMWARE_BIN_NAME = "firmware.bin"
FIRMWARE_ELF_NAME = "firmware/firmware.elf"

RESET_HOLD_MS    = 2      # ms to hold rst=1
SEED_SAMPLE_US   = 2000   # µs after boot before we expect the seed to be live

# Per-iteration timeout: how many ms we will wait AT MOST for the 0xCCCC signal.
# SERV @ 100 MHz: ~32 cycles/instruction, ~100 cells × 8 neighbours ≈ several
# million cycles per GoL pass.  200 ms = 20 000 000 cycles — very generous.
ITER_TIMEOUT_MS  = 200

# ============================================================
# ELF symbol reader  (pure-Python, no dependencies)
# ============================================================

def read_elf_symbol(elf_path: str, sym_name: str):
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
        off = e_shoff + i * e_shentsize
        return struct.unpack_from("<IIIIIIIIII", raw, off)

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
        off = sym_offset + i * sym_entsize
        st_name  = struct.unpack_from("<I", raw, off)[0]
        st_value = struct.unpack_from("<I", raw, off + 4)[0]
        name_start = str_offset + st_name
        name_end   = raw.index(b'\x00', name_start)
        name       = raw[name_start:name_end].decode("ascii", errors="replace")
        if name == sym_name:
            return st_value
    return None

# ============================================================
# Firmware loader
# ============================================================

def load_firmware_binary():
    bin_file = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    if os.path.exists(bin_file):
        with open(bin_file, "rb") as f:
            return list(f.read())
    return [0] * 1024

FIRMWARE = load_firmware_binary()

# ============================================================
# Resolve SRAM_GRID_BASE from ELF symbol table
# ============================================================

_elf_path  = os.path.join(os.path.dirname(__file__), FIRMWARE_ELF_NAME)
_grid_addr = read_elf_symbol(_elf_path, "current_grid")

if _grid_addr is None:
    _grid_addr = read_elf_symbol(_elf_path, "_bss_start")

if _grid_addr is None:
    _fw_bin = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    if os.path.exists(_fw_bin):
        _grid_addr = os.path.getsize(_fw_bin)

if _grid_addr is not None:
    SRAM_GRID_BASE = _grid_addr
    print(f"[testbench] current_grid @ 0x{SRAM_GRID_BASE:04x} ({SRAM_GRID_BASE})")
else:
    import warnings
    warnings.warn("Could not determine current_grid address. SRAM_GRID_BASE=0.", stacklevel=1)
    SRAM_GRID_BASE = 0x0000

# ============================================================
# SPI Flash Model
# ============================================================

async def spi_flash_responder(dut):
    """
    SPI flash responder matched to boot_loader.v timing.
    Drives MISO on FALLING edge of flash_clk (same edge the bootloader samples).
    """
    from cocotb.triggers import FallingEdge
    while True:
        await FallingEdge(dut.flash_cs_n)
        for _ in range(32):
            await RisingEdge(dut.flash_clk)
        byte_counter = 0
        while True:
            for bit in range(7, -1, -1):
                await FallingEdge(dut.flash_clk)
                current_byte = FIRMWARE[byte_counter] if byte_counter < len(FIRMWARE) else 0x00
                dut.flash_miso.value = (current_byte >> bit) & 0x1
            byte_counter += 1
            if int(dut.flash_cs_n.value) == 1:
                break

# ============================================================
# DUT hierarchy helpers
# ============================================================

def get_tile(dut, r, c):
    return dut.rows[r].cols[c].tile_inst

def sram_read_byte(tile, cpu_addr: int) -> int:
    mem = tile.sram_inst.mem
    elem_bits = len(mem[0])
    if elem_bits <= 8:
        return int(mem[cpu_addr].value) & 0xFF
    bytes_per_word = elem_bits // 8
    word_index = cpu_addr // bytes_per_word
    byte_lane  = cpu_addr  % bytes_per_word
    word = int(mem[word_index].value)
    return (word >> (8 * byte_lane)) & 0xFF

# ============================================================
# NOC signal monitor
# ============================================================

def read_inject_flit(dut, r=0, c=0) -> int:
    """
    Read the current inject_flit from tile(r,c)'s router.
    Returns the 29-bit payload (bits [28:0]) if the flit is valid, else 0.
    The inject_flit register is valid for one clock cycle after a NOC write.
    We read it combinatorially/polling style between rising edges.
    """
    try:
        flit = int(dut.rows[r].cols[c].tile_inst.router_inst.inject_flit.value)
        if flit & (1 << 33):   # Valid bit
            return flit & 0x1FFFFFFF
    except Exception:
        pass
    return 0

async def wait_for_noc_signal(dut, target_payload: int, timeout_ms: int,
                               r: int = 0, c: int = 0) -> bool:
    """
    Poll tile(r,c)'s inject_flit on every rising clock edge until we see
    a flit whose lower 29 bits match target_payload, or we time out.

    Returns True if the signal was seen, False on timeout.

    Why inject_flit and not the router output ports?
      inject_flit is registered exactly one cycle after the CPU's Wishbone
      write hits NOC_INJECT_BASE, so it's the earliest observable point.
      The router output ports are one cycle further delayed and get cleared
      to 0 on the next cycle, making them harder to catch reliably.
    """
    # Convert timeout to clock cycles (10 ns per cycle @ 100 MHz)
    max_cycles = timeout_ms * 1000 * 100  # ms → ns → cycles

    for _ in range(max_cycles):
        await RisingEdge(dut.clk)
        flit_raw = int(dut.rows[r].cols[c].tile_inst.router_inst.inject_flit.value)
        if flit_raw & (1 << 33):
            payload = flit_raw & 0x1FFFFFFF
            if payload == (target_payload & 0x1FFFFFFF):
                return True
    return False

# ============================================================
# Debug helpers
# ============================================================

def dump_region(tile, base, count_bytes=64):
    print(f"\nDUMP @ 0x{base:04x} ({count_bytes} bytes):")
    for off in range(0, count_bytes, 16):
        chunk = [sram_read_byte(tile, base + off + i) for i in range(min(16, count_bytes - off))]
        print("0x{:04x}: ".format(base + off) + " ".join(f"{b:02x}" for b in chunk))

def dump_next_grid(dut, r=0, c=0):
    """Dump next_grid (at 0x340) for debug — the computed-but-not-yet-committed result."""
    tile = get_tile(dut, r, c)
    NEXT_GRID_BASE = 0x340
    print(f"\n[DEBUG] next_grid (0x{NEXT_GRID_BASE:04x}) for tile({r},{c}):")
    for row in range(SIZE):
        row_vals = [sram_read_byte(tile, NEXT_GRID_BASE + row * SIZE + col) for col in range(SIZE)]
        print("  row {:2d}: {}".format(row, " ".join(f"{v}" for v in row_vals)))

# ============================================================
# Pure-Python GoL step
# ============================================================

def expected_blinker_seed():
    exp = [[0] * SIZE for _ in range(SIZE)]
    cx = SIZE // 2   # col 5
    cy = SIZE // 2   # row 5
    exp[cy - 1][cx] = 1
    exp[cy    ][cx] = 1
    exp[cy + 1][cx] = 1
    return exp

def gol_step(grid):
    new_grid = [[0] * SIZE for _ in range(SIZE)]
    for y in range(SIZE):
        for x in range(SIZE):
            neighbors = 0
            for dy in range(-1, 2):
                for dx in range(-1, 2):
                    if dx == 0 and dy == 0:
                        continue
                    nx, ny = x + dx, y + dy
                    if 0 <= nx < SIZE and 0 <= ny < SIZE:
                        if grid[ny][nx]:
                            neighbors += 1
            cell = grid[y][x]
            if cell == 1:
                new_grid[y][x] = 1 if neighbors in (2, 3) else 0
            else:
                new_grid[y][x] = 1 if neighbors == 3 else 0
    return new_grid

GOL_ITER = [expected_blinker_seed()]
GOL_ITER.append(gol_step(GOL_ITER[0]))
GOL_ITER.append(gol_step(GOL_ITER[1]))

# ============================================================
# SRAM grid reader
# ============================================================

def read_grid_from_sram(tile):
    g = []
    for y in range(SIZE):
        row = []
        for x in range(SIZE):
            addr = SRAM_GRID_BASE + y * SIZE + x
            row.append(sram_read_byte(tile, addr))
        g.append(row)
    return g

def print_iter_comparison(dut, r, c, iteration):
    tile = get_tile(dut, r, c)
    exp  = GOL_ITER[iteration]
    act  = read_grid_from_sram(tile)

    print("\n===================================================")
    print(f"TILE ({r},{c})  ITERATION {iteration}")
    print("EXPECTED (Python GoL)   ACTUAL (SRAM)")
    print("---------------------------------------------------")
    mismatches = 0
    for y in range(SIZE):
        exp_row = "".join("." if exp[y][x] else "#" for x in range(SIZE))
        act_row = "".join("." if act[y][x] else "#" for x in range(SIZE))
        marker  = "" if exp_row == act_row else "  ← MISMATCH"
        if marker:
            mismatches += len([1 for x in range(SIZE) if (exp[y][x] != 0) != (act[y][x] != 0)])
        print(f"{exp_row}    {act_row}{marker}")
    print("===================================================")
    return mismatches

# ============================================================
# Common boot sequence
# ============================================================

async def boot_mesh(dut):
    """
    Load firmware directly onto the boot bus and release reset.

    mesh_3x3 no longer contains boot_controller or SPI flash pins —
    those live in top.v.  We drive boot_mode/boot_addr/boot_data/boot_wen
    directly, which is equivalent to what boot_controller does over SPI
    but without the SPI overhead.

    boot_wen is active-LOW (matches mesh_tile.v: CEN = boot_wen in boot mode).
    """
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst.value      = 1
    dut.boot_mode.value = 1
    dut.boot_wen.value  = 1    # deasserted (active-low)
    dut.boot_addr.value = 0
    dut.boot_data.value = 0
    if hasattr(dut, "inject_00_nw"):
        dut.inject_00_nw.value = 0

    await Timer(RESET_HOLD_MS, unit="ms")

    # Write each firmware byte into all tile SRAMs simultaneously
    for addr, byte in enumerate(FIRMWARE):
        dut.boot_addr.value = addr
        dut.boot_data.value = byte
        dut.boot_wen.value  = 0    # assert write (active-low)
        await RisingEdge(dut.clk)  # SRAM captures on this edge
        dut.boot_wen.value  = 1    # deassert
        await RisingEdge(dut.clk)  # one idle cycle between writes

    # Exit boot mode — triggers the CEN startup pulse in mesh_tile
    dut.boot_mode.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Release reset — CPUs start executing
    dut.rst.value = 0
    dut._log.info(f"[boot] {len(FIRMWARE)} bytes loaded directly, CPUs running.")

# ============================================================
# TEST 1: Iteration 0 seed check only
# ============================================================

@cocotb.test()
async def test_iter0_seed_only(dut):
    """Boot, wait for seed init, compare SRAM vs expected blinker seed."""
    await boot_mesh(dut)
    dut._log.info(f"Waiting {SEED_SAMPLE_US} µs for seed init...")
    await Timer(SEED_SAMPLE_US, unit="us")

    tile00 = get_tile(dut, 0, 0)
    dut._log.info(f"SRAM mem element width = {len(tile00.sram_inst.mem[0])} bits")
    dut._log.info(f"SRAM_GRID_BASE = 0x{SRAM_GRID_BASE:04x}")
    dump_region(tile00, SRAM_GRID_BASE, 100)

    print("\n\n******** ITERATION 0 (seed) ********")
    total = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            total += print_iter_comparison(dut, r, c, 0)

    if total == 0:
        dut._log.info("✓ ALL TILES: seed matches expected blinker pattern")
    else:
        dut._log.error(f"✗ {total} cell mismatches across all tiles")
    assert total == 0, f"Seed mismatch: {total} cells wrong."

# ============================================================
# TEST 2: Iterations 0, 1, 2 with NOC handshake
# ============================================================

@cocotb.test()
async def test_gol_iter1_iter2(dut):
    """
    Boot the mesh, then use NOC handshake signals to sample SRAM at exactly
    the right moments:

      Signal 0xAAAA / 0xBBBB  → seed is live, sample iter 0
      Signal 0xCCCCCCCC       → iter N complete, current_grid stable → sample
      Signal 0xDDDDDDDD       → math done but copy NOT yet committed → skip

    This guarantees we never read current_grid while the CPU is mid-copy,
    and we always read the generation the CPU JUST committed.
    """
    await boot_mesh(dut)

    # ----- Iter 0: wait for seed then sample -----
    dut._log.info(f"Waiting {SEED_SAMPLE_US} µs for seed init...")
    await Timer(SEED_SAMPLE_US, unit="us")

    print("\n\n******** ITERATION 0 (seed) ********")
    iter0_mismatches = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            iter0_mismatches += print_iter_comparison(dut, r, c, 0)
    if iter0_mismatches == 0:
        dut._log.info("✓ Iter 0: ALL tiles match expected seed")
    else:
        dut._log.error(f"✗ Iter 0: {iter0_mismatches} mismatches")

    # ----- Iter 1: wait for 0xCCCCCCCC then sample -----
    dut._log.info(f"[iter_test] Waiting for iter 1 completion signal (0xCCCCCCCC)...")
    seen = await wait_for_noc_signal(dut, 0x0CCCCCCC, ITER_TIMEOUT_MS)
    #                                          ^^^^^^^^ lower 29 bits of 0xCCCCCCCC

    assert seen, "Iter 1 FAILED: 0xCCCCCCCC never received — NoC off-mesh routing is broken"
    await Timer(5, unit="us")
    dut._log.info("[iter_test] 0xCCCC signal received — iter 1 stable.")

    print("\n\n******** ITERATION 1 ********")
    iter1_mismatches = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            iter1_mismatches += print_iter_comparison(dut, r, c, 1)
    if iter1_mismatches == 0:
        dut._log.info("✓ Iter 1: ALL tiles match expected")
    else:
        dut._log.error(f"✗ Iter 1: {iter1_mismatches} mismatches")
        # Extra debug: dump next_grid and current_grid for tile(0,0)
        dut._log.info("[DEBUG] Dumping SRAM regions for tile(0,0):")
        dump_next_grid(dut, 0, 0)
        dump_region(get_tile(dut, 0, 0), SRAM_GRID_BASE, 100)

    # ----- Iter 2: wait for second 0xCCCCCCCC then sample -----
    dut._log.info(f"[iter_test] Waiting for iter 2 completion signal (0xCCCCCCCC)...")
    seen = await wait_for_noc_signal(dut, 0x0CCCCCCC, ITER_TIMEOUT_MS)

    assert seen, "Iter 2 FAILED: 0xCCCCCCCC never received — NoC off-mesh routing is broken"
    await Timer(5, unit="us")
    dut._log.info("[iter_test] 0xCCCC signal received — iter 2 stable.")

    print("\n\n******** ITERATION 2 ********")
    iter2_mismatches = 0
    for r in range(MESH_R):
        for c in range(MESH_C):
            iter2_mismatches += print_iter_comparison(dut, r, c, 2)
    if iter2_mismatches == 0:
        dut._log.info("✓ Iter 2: ALL tiles match expected")
    else:
        dut._log.error(f"✗ Iter 2: {iter2_mismatches} mismatches")
        dut._log.info("[DEBUG] Dumping SRAM regions for tile(0,0):")
        dump_next_grid(dut, 0, 0)
        dump_region(get_tile(dut, 0, 0), SRAM_GRID_BASE, 100)

    total = iter0_mismatches + iter1_mismatches + iter2_mismatches
    assert total == 0, (
        f"GoL iteration test failed: iter0={iter0_mismatches}, "
        f"iter1={iter1_mismatches}, iter2={iter2_mismatches} mismatches."
    )

# ============================================================
# DIAGNOSTIC TEST 3: What does the CPU actually write to the NOC?
# ============================================================

@cocotb.test()
async def test_diag_wb_noc_writes(dut):
    """
    Watch local_wb_dat_o on tile(0,0)'s router for all writes to 0x80000000.
    This is the raw Wishbone data *before* inject_flit packs it — shows exactly
    what value the CPU is writing to the NOC inject port.

    If we see 0xAF000000 → the row broadcast header is correct.
    If we see 0xA0000070 → t2=0 (register file corruption in SRAM).
    If we see 0xDDDDDDDD → SIG_MATH_DONE is being sent.
    """
    from cocotb.utils import get_sim_time

    NOC_ADDR = 0x80000000
    captures = []
    capturing = True

    async def wb_monitor():
        while capturing:
            await RisingEdge(dut.clk)
            try:
                router = dut.rows[0].cols[0].tile_inst.router_inst
                stb = int(router.local_wb_stb.value)
                we  = int(router.local_wb_we.value)
                adr = int(router.local_wb_adr.value)
                dat = int(router.local_wb_dat_o.value)
                if stb and we and (adr == NOC_ADDR):
                    t_us = get_sim_time(units="us")
                    captures.append((t_us, dat))
            except Exception:
                pass

    await boot_mesh(dut)
    mon = cocotb.start_soon(wb_monitor())

    # Run for 15ms — enough to see boot signals + at least one GoL iteration
    await Timer(15, unit="ms")
    capturing = False

    SIG_NAMES = {
        0xAAAAAAAA: "SIG_BOOT_ALIVE",
        0xBBBBBBBB: "SIG_SEED_LIVE",
        0xDDDDDDDD: "SIG_MATH_DONE",
        0xCCCCCCCC: "SIG_GEN_STABLE",
        0x0DEAD001: "SIG_STOP",
    }

    dut._log.info(f"[diag_wb] {len(captures)} NOC writes to 0x80000000 in 15ms:")
    for t_us, dat in captures[:60]:
        name = SIG_NAMES.get(dat, f"dest=0x{(dat>>28)&0xF:X} pay=0x{dat&0x0FFFFFFF:07X}")
        dut._log.info(f"  t={t_us:10.1f} us   0x{dat:08X}  ({name})")

    assert captures, "No writes to 0x80000000 seen — CPU is not reaching NOC inject code"

    seen_vals = {d for _, d in captures}
    assert 0xDDDDDDDD in seen_vals or 0xCCCCCCCC in seen_vals, (
        f"Neither SIG_MATH_DONE nor SIG_GEN_STABLE seen in Wishbone writes.\n"
        f"Unique values written: {[hex(v) for v in sorted(seen_vals)]}"
    )


# ============================================================
# DIAGNOSTIC TEST 1: Did the CPU execute at all?
# ============================================================

@cocotb.test()
async def test_diag_cpu_executing(dut):
    """
    Boot the mesh, then watch next_grid (0x340) on tile(0,0) for changes.
    If the CPU is running GoL, next_grid bytes will change within a few ms.
    This confirms firmware execution independent of the NoC signal path.
    """
    await boot_mesh(dut)

    tile = get_tile(dut, 0, 0)
    NEXT_GRID = 0x340

    # Snapshot next_grid right after boot
    snap_before = [sram_read_byte(tile, NEXT_GRID + i) for i in range(SIZE * SIZE)]

    # Wait 2ms — enough for several GoL iterations at 100 MHz / ~32 cyc/instr
    await Timer(2, unit="ms")

    snap_after = [sram_read_byte(tile, NEXT_GRID + i) for i in range(SIZE * SIZE)]
    changed = sum(1 for a, b in zip(snap_before, snap_after) if a != b)

    dut._log.info(f"[diag_cpu] next_grid cells changed in 2ms: {changed}/{SIZE*SIZE}")
    dut._log.info(f"[diag_cpu] Before: {snap_before}")
    dut._log.info(f"[diag_cpu]  After: {snap_after}")

    assert changed > 0, (
        "CPU does not appear to be executing — next_grid unchanged after 2ms. "
        "Check boot sequence, SRAM CEN init, or firmware entry point."
    )


# ============================================================
# DIAGNOSTIC TEST 2: What signals is the NoC actually sending?
# ============================================================

@cocotb.test()
async def test_diag_noc_signals(dut):
    """
    Boot the mesh, then run a background coroutine that captures every
    inject_flit pulse on tile(0,0) for 50ms. Reports all unique payloads seen
    and prints them in CHRONOLOGICAL order with simulation timestamps.

    inject_flit is a ONE-CYCLE pulse. The background coroutine fires at every
    rising edge so it cannot miss it the way a polling loop can.

    Expected to see (in order):
      0x0AAAAAAA  (SIG_BOOT_ALIVE,  dest=0xA)
      0x0BBBBBBB  (SIG_SEED_LIVE,   dest=0xB)
      0x0DDDDDDD  (SIG_MATH_DONE,   dest=0xD)  -- repeating
      0x0CCCCCCC  (SIG_GEN_STABLE,  dest=0xC)  -- repeating
      0x0F0?????  (ROW_BROADCAST,   dest=0xA→tile(2,2), payload has FLIT_TYPE_ROW)

    If 0x0CCCCCCC is absent, the firmware is not reaching noc_signal(SIG_GEN_STABLE).
    If NO signals are seen, the CPU is not executing or the Wishbone path is broken.

    NOTE: 50ms at 100 MHz = 5,000,000 cycles = ~156,000 instructions at 32 cyc/instr.
    A full GoL iteration (100 cells × ~30 instr) ≈ 3000 instr ≈ 1ms. So 50ms = ~50 iters.
    """
    SIG_NAMES = {
        0x0AAAAAAA: "SIG_BOOT_ALIVE",
        0x0BBBBBBB: "SIG_SEED_LIVE",
        0x0DDDDDDD: "SIG_MATH_DONE",
        0x0CCCCCCC: "SIG_GEN_STABLE",
        0x0DEAD001: "SIG_STOP",
    }

    CAPTURE_MS = 50

    # List of (time_us, payload) in chronological order
    seen_events = []
    capturing = True

    async def background_flit_capture():
        """Fires at every rising edge — cannot miss a 1-cycle inject_flit pulse."""
        from cocotb.utils import get_sim_time
        while capturing:
            await RisingEdge(dut.clk)
            try:
                raw = int(dut.rows[0].cols[0].tile_inst.router_inst.inject_flit.value)
                if raw & (1 << 33):
                    payload = raw & 0x1FFFFFFF
                    t_us = get_sim_time(units="us")
                    seen_events.append((t_us, payload))
            except Exception:
                pass

    await boot_mesh(dut)

    # Launch background monitor BEFORE the wait so it catches boot signals
    monitor = cocotb.start_soon(background_flit_capture())

    dut._log.info(f"[diag_noc] Running for {CAPTURE_MS}ms ...")
    await Timer(CAPTURE_MS, unit="ms")
    capturing = False

    # --- Chronological listing (first 80 events) ---
    dut._log.info(f"[diag_noc] Chronological flit log (first 80 of {len(seen_events)}):")
    for t_us, p in seen_events[:80]:
        name = SIG_NAMES.get(p, f"UNKNOWN dest=0x{(p>>25)&0xF:X} pay=0x{p&0x1FFFFFF:07X}")
        dut._log.info(f"  t={t_us:10.1f} us   0x{p:08x}  ({name})")

    # --- Summary by payload ---
    unique = {}
    for _, p in seen_events:
        unique[p] = unique.get(p, 0) + 1

    dut._log.info(f"[diag_noc] Summary ({CAPTURE_MS}ms, {len(seen_events)} total events):")
    if not unique:
        dut._log.error("[diag_noc] NO flits seen — CPU is not writing to NOC_INJECT_BASE")
    for payload, count in sorted(unique.items()):
        name = SIG_NAMES.get(payload, "unknown")
        dut._log.info(f"  0x{payload:08x}  ({name})  × {count}")

    assert unique, \
        f"No inject_flit pulses seen on tile(0,0) in {CAPTURE_MS}ms — CPU not executing or Wishbone broken."

    assert 0x0CCCCCCC in unique, (
        f"SIG_GEN_STABLE (0xCCCCCCCC) never seen in {CAPTURE_MS}ms.\n"
        f"Signals that WERE seen: {[hex(p) for p in sorted(unique)]}\n"
        f"Hint: if SIG_MATH_DONE (0xDDDDDDDD) is seen but not SIG_GEN_STABLE, "
        f"the CPU is stalling during the next_grid → current_grid copy.\n"
        f"Hint: if neither is seen, GoL computation is taking >50ms (very unlikely) "
        f"or the firmware is looping before reaching the NOC signal."
    )
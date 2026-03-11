"""
test_mesh.py — Cocotb testbench for SERV 2-tile (1×2) GoL Mesh
"""

import os
import struct
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge

SIZE   = 10
MESH_R = 1
MESH_C = 2

FIRMWARE_BIN_NAME = "firmware.bin"
FIRMWARE_ELF_NAME = "firmware/firmware.elf"

RESET_HOLD_MS   = 2
SEED_SAMPLE_US  = 2000
ITER_TIMEOUT_MS = 400

# ── ELF symbol reader ─────────────────────────────────────────────────────────

def read_elf_symbol(elf_path, sym_name):
    if not os.path.exists(elf_path): return None
    with open(elf_path, "rb") as f: raw = f.read()
    if raw[0:4] != b'\x7fELF': return None
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
            symtab_sh = s; strtab_sh = sh(s[6]); break
    if symtab_sh is None: return None
    for i in range(symtab_sh[5] // symtab_sh[9]):
        off = symtab_sh[4] + i * symtab_sh[9]
        st_name  = struct.unpack_from("<I", raw, off)[0]
        st_value = struct.unpack_from("<I", raw, off + 4)[0]
        ns = strtab_sh[4] + st_name
        name = raw[ns:raw.index(b'\x00', ns)].decode("ascii", errors="replace")
        if name == sym_name: return st_value
    return None

# ── Firmware ──────────────────────────────────────────────────────────────────

def load_firmware_binary():
    p = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    if not os.path.exists(p): return [0] * 1024
    with open(p, "rb") as f: return list(f.read())

FIRMWARE = load_firmware_binary()

_elf  = os.path.join(os.path.dirname(__file__), FIRMWARE_ELF_NAME)
_addr = read_elf_symbol(_elf, "current_grid") or read_elf_symbol(_elf, "_bss_start")
if _addr is None:
    fw = os.path.join(os.path.dirname(__file__), FIRMWARE_BIN_NAME)
    _addr = os.path.getsize(fw) if os.path.exists(fw) else 0
SRAM_GRID_BASE = _addr
print(f"[testbench] current_grid @ 0x{SRAM_GRID_BASE:04x}")

# ── SPI flash ─────────────────────────────────────────────────────────────────

async def spi_flash_responder(dut):
    from cocotb.triggers import FallingEdge
    while True:
        await FallingEdge(dut.flash_cs_n)
        for _ in range(32): await RisingEdge(dut.flash_clk)
        bc = 0
        while True:
            for bit in range(7, -1, -1):
                await FallingEdge(dut.flash_clk)
                dut.flash_miso.value = (FIRMWARE[bc] >> bit) & 1 if bc < len(FIRMWARE) else 0
            bc += 1
            if int(dut.flash_cs_n.value) == 1: break

# ── DUT helpers ───────────────────────────────────────────────────────────────

def get_tile(dut, r, c): return dut.rows[r].cols[c].tile_inst

def sram_read_byte(tile, addr):
    mem = tile.sram_inst.mem; bw = len(mem[0])
    if bw <= 8: return int(mem[addr].value) & 0xFF
    bpw = bw // 8
    return (int(mem[addr // bpw].value) >> (8 * (addr % bpw))) & 0xFF

def read_grid(tile):
    return [[sram_read_byte(tile, SRAM_GRID_BASE + y*SIZE + x)
             for x in range(SIZE)] for y in range(SIZE)]

def snap_noc(dut):
    """Return a snapshot of all NOC state: inject_flit, eject_reg, e_out, w_out per tile."""
    rows = []
    for r in range(MESH_R):
        for c in range(MESH_C):
            router = dut.rows[r].cols[c].tile_inst.router_inst
            inj = int(router.inject_flit.value)
            ej  = int(router.eject_reg.value)
            try:   eo = int(router.e_out.value)
            except: eo = 0
            try:   wo = int(router.w_out.value)
            except: wo = 0
            rows.append((r, c, inj, ej, eo, wo))
    return rows

def fmt_flit(v, bits=34):
    if not ((v >> 33) & 1): return "---"
    dest    = (v >> 29) & 0xF
    payload = v & 0x0FFFFFFF
    return f"d={dest} p=0x{payload:07X}"

# ── GoL reference (ghost-aware 10×20) ────────────────────────────────────────

COLS_TOTAL = SIZE * MESH_C

def build_seed_20():
    ts = [0]*(SIZE*SIZE)
    for i in [0,19,45,55,65,80,89,90,99]: ts[i]=1
    g = [[0]*COLS_TOTAL for _ in range(SIZE)]
    for y in range(SIZE):
        for x in range(SIZE):
            v=ts[y*SIZE+x]; g[y][x]=v; g[y][x+SIZE]=v
    return g

def gol_step_20(g):
    new=[[0]*COLS_TOTAL for _ in range(SIZE)]
    for y in range(SIZE):
        for x in range(COLS_TOTAL):
            n=sum(g[y+dy][x+dx] for dy in range(-1,2) for dx in range(-1,2)
                  if not(dx==dy==0) and 0<=x+dx<COLS_TOTAL and 0<=y+dy<SIZE)
            alive=g[y][x]
            new[y][x]=1 if(alive and n in(2,3))else(1 if(not alive and n==3)else 0)
    return new

def slice_tile(g, tc):
    return [[g[y][tc*SIZE+x] for x in range(SIZE)] for y in range(SIZE)]

_G0=build_seed_20(); _G1=gol_step_20(_G0); _G2=gol_step_20(_G1)
GOL_ITER=[{c:slice_tile(g,c) for c in range(MESH_C)} for g in [_G0,_G1,_G2]]

# ── Boot ──────────────────────────────────────────────────────────────────────

async def boot_mesh(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    dut.rst.value=1; dut.flash_miso.value=0
    if hasattr(dut,"inject_00_nw"): dut.inject_00_nw.value=0
    await Timer(RESET_HOLD_MS, unit="ms")
    dut.rst.value=0
    cocotb.start_soon(spi_flash_responder(dut))
    while int(dut.cpu_rst_n.value)==0: await Timer(10, unit="us")
    dut._log.info("[boot] CPU running.")

# ── NOC activity monitor ──────────────────────────────────────────────────────

async def noc_monitor(dut, duration_ms, label=""):
    """Log every inject and eject event for duration_ms of sim time."""
    deadline_ns = cocotb.utils.get_sim_time("ns") + duration_ms * 1_000_000
    prev_inj = [0] * (MESH_R * MESH_C)
    prev_ej  = [0] * (MESH_R * MESH_C)
    cycle = 0
    while cocotb.utils.get_sim_time("ns") < deadline_ns:
        await RisingEdge(dut.clk)
        cycle += 1
        idx = 0
        for r in range(MESH_R):
            for c in range(MESH_C):
                router = dut.rows[r].cols[c].tile_inst.router_inst
                inj = int(router.inject_flit.value)
                ej  = int(router.eject_reg.value)
                # new inject pulse
                if (inj >> 33) & 1 and not ((prev_inj[idx] >> 33) & 1):
                    dest    = (inj >> 29) & 0xF
                    payload = inj & 0x0FFFFFFF
                    print(f"[{label}@{cycle:8d}] INJECT T({r},{c}) -> dest={dest} pay=0x{payload:07X}")
                # eject_reg became valid
                if (ej >> 33) & 1 and not ((prev_ej[idx] >> 33) & 1):
                    payload = ej & 0x0FFFFFFF
                    print(f"[{label}@{cycle:8d}] EJECT  T({r},{c})         pay=0x{payload:07X}")
                # eject_reg was drained
                if not ((ej >> 33) & 1) and ((prev_ej[idx] >> 33) & 1):
                    print(f"[{label}@{cycle:8d}] DRAIN  T({r},{c})")
                prev_inj[idx] = inj
                prev_ej[idx]  = ej
                idx += 1

async def wait_for_signal(dut, pay28, timeout_ms):
    """Poll eject_reg every 1 µs — holds value until CPU drains it."""
    for _ in range(timeout_ms * 1000):
        await Timer(1, unit="us")
        for r in range(MESH_R):
            for c in range(MESH_C):
                ej = int(dut.rows[r].cols[c].tile_inst.router_inst.eject_reg.value)
                if (ej >> 33) & 1 and (ej & 0x0FFFFFFF) == pay28:
                    return True
    return False

# ── Grid comparison ───────────────────────────────────────────────────────────

def print_iter_comparison(dut, r, c, it):
    tile=get_tile(dut,r,c); exp=GOL_ITER[it][c]; act=read_grid(tile)
    print(f"\n=== TILE({r},{c}) ITER {it} ===")
    print("EXPECTED              ACTUAL")
    mm=0
    for y in range(SIZE):
        er="".join("."if exp[y][x]else"#" for x in range(SIZE))
        ar="".join("."if act[y][x]else"#" for x in range(SIZE))
        mk="" if er==ar else "  ←"
        if mk: mm+=1
        print(f"  {er}    {ar}{mk}")
    return mm

# ══════════════════════════════════════════════════════════════════════════════
# TEST 1 — seed check
# ══════════════════════════════════════════════════════════════════════════════

@cocotb.test()
async def test_iter0_seed_only(dut):
    """Boot and verify seed is loaded correctly in both tiles."""
    await boot_mesh(dut)
    await Timer(SEED_SAMPLE_US, unit="us")
    total = sum(print_iter_comparison(dut,r,c,0)
                for r in range(MESH_R) for c in range(MESH_C))
    dut._log.info("✓ seed OK" if total==0 else f"✗ seed {total} mismatches")
    assert total == 0

# ══════════════════════════════════════════════════════════════════════════════
# TEST 2 — GoL iterations 1 and 2 with NOC debug
# ══════════════════════════════════════════════════════════════════════════════

@cocotb.test()
async def test_gol_iter1_iter2(dut):
    """Run two GoL iterations and verify SRAM against Python reference."""
    await boot_mesh(dut)
    await Timer(SEED_SAMPLE_US, unit="us")

    i0 = sum(print_iter_comparison(dut,r,c,0)
             for r in range(MESH_R) for c in range(MESH_C))
    dut._log.info("✓ iter0" if i0==0 else f"✗ iter0 {i0} mismatches")

    # Run NOC monitor for 20ms to capture startup barrier + first ghost exchange
    dut._log.info("[DEBUG] Running NOC monitor for 20ms...")
    await noc_monitor(dut, 20, label="NOC")

    # Snapshot after monitor
    print("\n[DEBUG] NOC state after 20ms monitor:")
    for r, c, inj, ej, eo, wo in snap_noc(dut):
        print(f"  T({r},{c}): inj={fmt_flit(inj)}  ej={fmt_flit(ej)}  "
              f"e_out={fmt_flit(eo)}  w_out={fmt_flit(wo)}")

    # Now wait for iter1 completion
    seen = await wait_for_signal(dut, 0x0CCCCCCC, ITER_TIMEOUT_MS)
    if not seen:
        dut._log.warning("iter1 signal not seen")
        print("\n[DEBUG] NOC state at iter1 timeout:")
        for r, c, inj, ej, eo, wo in snap_noc(dut):
            print(f"  T({r},{c}): inj={fmt_flit(inj)}  ej={fmt_flit(ej)}")
    await Timer(5, unit="us")

    i1 = sum(print_iter_comparison(dut,r,c,1)
             for r in range(MESH_R) for c in range(MESH_C))
    dut._log.info("✓ iter1" if i1==0 else f"✗ iter1 {i1} mismatches")

    seen = await wait_for_signal(dut, 0x0CCCCCCC, ITER_TIMEOUT_MS)
    if not seen:
        dut._log.warning("iter2 signal not seen")
        print("\n[DEBUG] NOC state at iter2 timeout:")
        for r, c, inj, ej, eo, wo in snap_noc(dut):
            print(f"  T({r},{c}): inj={fmt_flit(inj)}  ej={fmt_flit(ej)}")
    await Timer(5, unit="us")

    i2 = sum(print_iter_comparison(dut,r,c,2)
             for r in range(MESH_R) for c in range(MESH_C))
    dut._log.info("✓ iter2" if i2==0 else f"✗ iter2 {i2} mismatches")

    assert i0+i1+i2 == 0, f"iter0={i0} iter1={i1} iter2={i2}"
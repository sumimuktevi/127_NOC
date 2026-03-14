"""
test_host_image_load.py
=======================
Boot the real mesh, then use the host gateway path to stream a pre-sliced
30x30 PBM image into tile SRAM via NoC packets. Dump the SRAM-backed grid
before and after to prove the host path is real.
"""

import os
import struct

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer


TILE_SIZE = 10
GRID_ROWS = 3
GRID_COLS = 3
SRAM_SIZE = 1024
STAGE2_SIZE = 0x80
STAGE2_BASE = 0x200
CLK_PERIOD_NS = 60
RESET_CYCLES = 20
BOOT_TIMEOUT_CYCLES = 200_000

FIRMWARE_BIN_PATH = os.path.join(os.path.dirname(__file__), "firmware", "firmware.bin")
FIRMWARE_ELF_PATH = os.path.join(os.path.dirname(__file__), "firmware", "firmware.elf")
PBM_PATH = os.path.join(os.path.dirname(__file__), "test3_paul.pbm")

SIG_HOST_LOADED = 0x0CCCCCCC
SIG_WAITING_HOST = 0x0BBBBBBB
SIG_STORE_ACK_BASE = 0x0AAA1000
SIG_POSTDONE_READY = 0x0AAA0001
SIG_POSTDONE_SEEN_BASE = 0x0AAA0002
FLIT_TYPE_WRITE = 0x1
FLIT_TYPE_DONE = 0x2
FLIT_TYPE_STAGE2_PROBE = 0x3
FLIT_TYPE_STAGE2_WRITE = 0x4
FLIT_TYPE_STAGE2_JUMP = 0x5
SIG_STAGE2_STUB = 0x0F100000
STAGE2_STUB_BYTES = [
    0xB7, 0x02, 0x00, 0x80,
    0x37, 0x03, 0x00, 0xF1,
    0x23, 0xA0, 0x62, 0x00,
    0x6F, 0x00, 0x00, 0x00,
]


def read_elf_symbol(elf_path: str, sym_name: str):
    with open(elf_path, "rb") as f:
        raw = f.read()

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

    if symtab is None:
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

    raise RuntimeError(f"Could not resolve symbol {sym_name}")


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

    w = int(tokens[1])
    h = int(tokens[2])
    bits = [int(ch) for token in tokens[3:] for ch in token if ch in ("0", "1")]
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


def format_grid(grid):
    return "\n".join("".join("█" if cell else "·" for cell in row) for row in grid)


def assemble_global_grid(tile_grids):
    grid = [[0] * (GRID_COLS * TILE_SIZE) for _ in range(GRID_ROWS * TILE_SIZE)]
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            tile = tile_grids[(tr, tc)]
            for y in range(TILE_SIZE):
                for x in range(TILE_SIZE):
                    grid[tr * TILE_SIZE + y][tc * TILE_SIZE + x] = 1 if tile[y * TILE_SIZE + x] else 0
    return grid


def cpu_byte_addr_to_raw_sram_addr(byte_addr):
    # Data-memory accesses through servile_rf_mem_if use direct byte addressing.
    # The RF shares the same SRAM, but RF remapping only applies to the RF path.
    return byte_addr & (SRAM_SIZE - 1)


def read_tile_grid(dut, row, col, offset):
    mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
    return [int(mem[cpu_byte_addr_to_raw_sram_addr(offset + i)].value) & 0xFF for i in range(TILE_SIZE * TILE_SIZE)]


def read_all_tile_grids(dut, offset):
    return {(r, c): read_tile_grid(dut, r, c, offset) for r in range(GRID_ROWS) for c in range(GRID_COLS)}


async def monitor_tile_receive_path(dut, row, col, grid_offset, arm_time_ns=0, max_events=128):
    tile = dut.noc_mesh.rows[row].cols[col].tile_inst
    router = tile.router_inst
    core = tile.core_inst

    prev_eject = 0
    prev_inject = 0
    logged = 0

    if arm_time_ns > 0:
        await Timer(arm_time_ns, units="ns")

    while logged < max_events:
        await RisingEdge(dut.clk)

        eject_val = int(router.eject_reg.value)
        if eject_val != prev_eject:
            valid = (eject_val >> 33) & 1
            payload = eject_val & 0x1FFFFFFF
            dut._log.info(
                f"[DBG RX {row},{col}] eject_reg valid={valid} raw=0x{eject_val:09x} payload=0x{payload:08x}"
            )
            prev_eject = eject_val
            logged += 1
            if logged >= max_events:
                break

        inject_val = int(router.inject_flit.value)
        if inject_val != prev_inject:
            valid = (inject_val >> 33) & 1
            payload = inject_val & 0x1FFFFFFF
            dut._log.info(
                f"[DBG TX {row},{col}] inject_flit valid={valid} raw=0x{inject_val:09x} payload=0x{payload:08x}"
            )
            prev_inject = inject_val
            logged += 1
            if logged >= max_events:
                break

        wb_stb = int(core.o_wb_stb.value)
        wb_we = int(core.o_wb_we.value)
        wb_adr = int(core.o_wb_adr.value)
        if wb_stb and not wb_we and wb_adr == 0x80000004:
            wb_rdt = int(router.local_wb_dat_i.value)
            if wb_rdt != 0:
                dut._log.info(f"[DBG WB {row},{col}] read  0x80000004 -> 0x{wb_rdt:08x}")
                logged += 1
                if logged >= max_events:
                    break

        sram_wen = int(core.o_sram_wen.value)
        if sram_wen:
            addr = int(core.o_sram_waddr.value)
            data = int(core.o_sram_wdata.value) & 0xFF
            if grid_offset <= addr < grid_offset + (TILE_SIZE * TILE_SIZE):
                dut._log.info(
                    f"[DBG SRAM {row},{col}] write current_grid[{addr - grid_offset}] @0x{addr:03x} = 0x{data:02x}"
                )
                logged += 1
                if logged >= max_events:
                    break
            if STAGE2_BASE <= addr < STAGE2_BASE + STAGE2_SIZE:
                dut._log.info(
                    f"[DBG SRAM {row},{col}] write stage2[{addr - STAGE2_BASE}] @0x{addr:03x} = 0x{data:02x}"
                )
                logged += 1
                if logged >= max_events:
                    break


async def capture_core_sram_window(dut, row, col, label, cycles=256):
    tile = dut.noc_mesh.rows[row].cols[col].tile_inst
    core = tile.core_inst

    dut._log.info(f"[DBG CORE {row},{col}] --- {label} window start ({cycles} cycles) ---")
    for cycle in range(cycles):
        await RisingEdge(dut.clk)
        wb_stb = int(core.o_wb_stb.value)
        wb_we = int(core.o_wb_we.value)
        wb_adr = int(core.o_wb_adr.value)
        sram_wen = int(core.o_sram_wen.value)
        sram_ren = int(core.o_sram_ren.value)
        sram_waddr = int(core.o_sram_waddr.value)
        sram_raddr = int(core.o_sram_raddr.value)
        sram_wdata = int(core.o_sram_wdata.value) & 0xFF
        if wb_stb or sram_wen or sram_ren:
            dut._log.info(
                f"[DBG CORE {row},{col}] {label} cyc={cycle:03d} "
                f"wb_stb={wb_stb} wb_we={wb_we} wb_adr=0x{wb_adr:08x} "
                f"sram_wen={sram_wen} sram_waddr=0x{sram_waddr:03x} sram_wdata=0x{sram_wdata:02x} "
                f"sram_ren={sram_ren} sram_raddr=0x{sram_raddr:03x}"
            )
    dut._log.info(f"[DBG CORE {row},{col}] --- {label} window end ---")


async def capture_rf_mem_if_window(dut, row, col, label, cycles=256):
    rf_mem_if = dut.noc_mesh.rows[row].cols[col].tile_inst.core_inst.rf_mem_if

    dut._log.info(f"[DBG MEMIF {row},{col}] --- {label} window start ({cycles} cycles) ---")
    for cycle in range(cycles):
        await RisingEdge(dut.clk)
        wb_en = int(rf_mem_if.wb_en.value)
        wb_we = int(rf_mem_if.i_wb_we.value)
        wb_stb = int(rf_mem_if.i_wb_stb.value)
        bsel = int(rf_mem_if.bsel.value)
        sram_wen = int(rf_mem_if.o_sram_wen.value)
        sram_ren = int(rf_mem_if.o_sram_ren.value)
        sram_waddr = int(rf_mem_if.o_sram_waddr.value)
        sram_raddr = int(rf_mem_if.o_sram_raddr.value)
        sram_wdata = int(rf_mem_if.o_sram_wdata.value) & 0xFF
        wb_adr_word = int(rf_mem_if.i_wb_adr.value)
        if wb_stb or wb_en or sram_wen or sram_ren:
            byte_addr = ((wb_adr_word << 2) | bsel) & (SRAM_SIZE - 1)
            source = "WB" if wb_en else "RF"
            dut._log.info(
                f"[DBG MEMIF {row},{col}] {label} cyc={cycle:03d} "
                f"src={source} wb_stb={wb_stb} wb_en={wb_en} wb_we={wb_we} wb_word=0x{wb_adr_word:03x} bsel={bsel} "
                f"byte_addr=0x{byte_addr:03x} sram_wen={sram_wen} sram_waddr=0x{sram_waddr:03x} "
                f"sram_wdata=0x{sram_wdata:02x} sram_ren={sram_ren} sram_raddr=0x{sram_raddr:03x}"
            )
    dut._log.info(f"[DBG MEMIF {row},{col}] --- {label} window end ---")


async def wait_for_rf_mem_data_write(dut, row, col, expected_data=None, timeout_cycles=40000):
    rf_mem_if = dut.noc_mesh.rows[row].cols[col].tile_inst.core_inst.rf_mem_if
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk)
        if int(rf_mem_if.wb_en.value) and int(rf_mem_if.o_sram_wen.value):
            addr = ((int(rf_mem_if.i_wb_adr.value) << 2) | int(rf_mem_if.bsel.value)) & (SRAM_SIZE - 1)
            data = int(rf_mem_if.o_sram_wdata.value) & 0xFF
            if expected_data is None or data == expected_data:
                return addr, data
    return None


async def wait_for_core_sram_write(dut, row, col, expected_addr=None, expected_data=None, timeout_cycles=120000):
    core = dut.noc_mesh.rows[row].cols[col].tile_inst.core_inst
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk)
        if int(core.o_sram_wen.value):
            addr = int(core.o_sram_waddr.value)
            data = int(core.o_sram_wdata.value) & 0xFF
            if expected_addr is not None and addr != expected_addr:
                continue
            if expected_data is not None and data != expected_data:
                continue
            return addr, data
    return None


async def monitor_host_gateway_path(dut, max_events=128):
    logged = 0
    prev_ready = 0
    prev_packet = None
    prev_selected = None

    while logged < max_events:
        await RisingEdge(dut.clk)

        gw_ready = int(dut.gateway_host_ready.value)
        gw_packet = int(dut.gateway_host_packet.value)
        selected_word = int(dut.selected_packet_word.value)

        if gw_ready and not prev_ready:
            dut._log.info(
                f"[DBG HOST] gateway_host ready packet=0x{gw_packet:08x} selected_word=0x{selected_word:08x}"
            )
            logged += 1
            if logged >= max_events:
                break

        if gw_packet != prev_packet:
            dut._log.info(f"[DBG HOST] gateway_host_packet=0x{gw_packet:08x}")
            prev_packet = gw_packet
            logged += 1
            if logged >= max_events:
                break

        if selected_word != prev_selected:
            dut._log.info(f"[DBG HOST] selected_packet_word=0x{selected_word:08x}")
            prev_selected = selected_word
            logged += 1
            if logged >= max_events:
                break

        prev_ready = gw_ready


async def monitor_mesh_entry_path(dut, max_events=128):
    logged = 0
    prev_nw = None
    prev_local = None
    prev_router_local = None

    while logged < max_events:
        await RisingEdge(dut.clk)

        mesh_nw = int(dut.noc_mesh.inject_00_nw.value)
        mesh_local = int(dut.noc_mesh.inject_00_local.value)
        router_local = int(dut.noc_mesh.rows[0].cols[0].tile_inst.router_inst.local_in.value)

        if mesh_nw != prev_nw:
            dut._log.info(f"[DBG MESH] inject_00_nw    = 0x{mesh_nw:09x}")
            prev_nw = mesh_nw
            logged += 1
            if logged >= max_events:
                break

        if mesh_local != prev_local:
            dut._log.info(f"[DBG MESH] inject_00_local = 0x{mesh_local:09x}")
            prev_local = mesh_local
            logged += 1
            if logged >= max_events:
                break

        if router_local != prev_router_local:
            dut._log.info(f"[DBG MESH] router.local_in = 0x{router_local:09x}")
            prev_router_local = router_local
            logged += 1
            if logged >= max_events:
                break


async def spi_flash_responder(dut, firmware):
    boot = dut.noc_mesh.boot_inst
    dut.flash_miso.value = 0

    while True:
        await FallingEdge(boot.flash_cs_n)
        while True:
            await RisingEdge(dut.clk)
            if int(boot.flash_cs_n.value) == 1:
                break
            if int(boot.state.value) == 3 and int(boot.spi_phase.value) == 0:
                byte_idx = int(boot.sram_waddr.value)
                bit_idx = int(boot.bit_counter.value)
                dut.flash_miso.value = ((firmware[byte_idx] if byte_idx < len(firmware) else 0) >> (7 - bit_idx)) & 1


async def wait_for_boot(dut):
    for cycle in range(BOOT_TIMEOUT_CYCLES):
        await RisingEdge(dut.clk)
        if int(dut.noc_mesh.boot_inst.cpu_reset_n.value) == 1:
            return
    raise AssertionError("Boot timed out")


async def reset_and_boot(dut, firmware):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, units="ns").start())
    dut.reset.value = 1
    dut.bypass_en.value = 0
    dut.host_mosi.value = 0
    dut.flash_miso.value = 0
    await Timer(CLK_PERIOD_NS * RESET_CYCLES, units="ns")
    dut.reset.value = 0
    cocotb.start_soon(spi_flash_responder(dut, firmware))
    await wait_for_boot(dut)
    await Timer(CLK_PERIOD_NS * 20, units="ns")


async def host_send_word(dut, word, settle_cycles=40):
    dut.bypass_en.value = 1
    for bit in range(31, -1, -1):
        dut.host_mosi.value = (word >> bit) & 1
        await RisingEdge(dut.clk)
    dut.bypass_en.value = 0
    dut.host_mosi.value = 0
    for _ in range(settle_cycles):
        await RisingEdge(dut.clk)


async def wait_for_tile_consume(dut, row, col, timeout_cycles=20000):
    router = dut.noc_mesh.rows[row].cols[col].tile_inst.router_inst
    saw_valid = ((int(router.eject_reg.value) >> 33) & 1) == 1
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk)
        valid = (int(router.eject_reg.value) >> 33) & 1
        if valid:
            saw_valid = True
        elif saw_valid:
            return
    raise AssertionError(f"Tile ({row},{col}) did not consume the host packet in time")


async def wait_for_loaded_signal(dut, timeout_cycles=500000):
    router = dut.noc_mesh.rows[0].cols[0].tile_inst.router_inst
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk)
        flit = int(router.inject_flit.value)
        if (flit & (1 << 33)) and ((flit & 0x1FFFFFFF) == SIG_HOST_LOADED):
            return
    return False


async def wait_for_waiting_host_signal(dut, timeout_cycles=500000):
    router = dut.noc_mesh.rows[0].cols[0].tile_inst.router_inst
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk)
        flit = int(router.inject_flit.value)
        if (flit & (1 << 33)) and ((flit & 0x1FFFFFFF) == SIG_WAITING_HOST):
            return True
    return False


async def wait_for_inject_payload(dut, payload, row=0, col=0, timeout_cycles=500000):
    router = dut.noc_mesh.rows[row].cols[col].tile_inst.router_inst
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk)
        flit = int(router.inject_flit.value)
        if (flit & (1 << 33)) and ((flit & 0x1FFFFFFF) == payload):
            return True
    return False


def _try_int(obj, path):
    try:
        cur = obj
        for part in path.split("."):
            cur = getattr(cur, part)
        return int(cur.value)
    except Exception:
        return None


async def capture_post_mailbox_window(dut, row, col, label, cycles=1024):
    tile = dut.noc_mesh.rows[row].cols[col].tile_inst
    core = tile.core_inst
    base = f"[DBG POSTWB {row},{col}]"

    dut._log.info(f"{base} --- {label} window start ({cycles} cycles) ---")
    watch_addrs = {0x8C, 0x90, 0x9C, 0xA4, 0xAC}
    seen_watch = set()
    last_debug_pc = None

    for cycle in range(cycles):
        await RisingEdge(dut.clk)
        o_wb_stb = int(core.o_wb_stb.value)
        o_wb_we = int(core.o_wb_we.value)
        o_wb_adr = int(core.o_wb_adr.value)
        o_sram_wen = int(core.o_sram_wen.value)
        o_sram_waddr = int(core.o_sram_waddr.value)
        o_sram_wdata = int(core.o_sram_wdata.value) & 0xFF
        debug_pc = _try_int(tile, "debug_pc")

        wb_dbus_adr = _try_int(core, "servile.wb_dbus_adr")
        wb_dbus_stb = _try_int(core, "servile.wb_dbus_stb")
        wb_dbus_we = _try_int(core, "servile.wb_dbus_we")
        wb_dmem_adr = _try_int(core, "servile.wb_dmem_adr")
        wb_dmem_stb = _try_int(core, "servile.wb_dmem_stb")
        wb_dmem_we = _try_int(core, "servile.wb_dmem_we")
        wb_mem_adr = _try_int(core, "servile.wb_mem_adr")
        wb_mem_stb = _try_int(core, "servile.wb_mem_stb")
        wb_mem_we = _try_int(core, "servile.wb_mem_we")
        ibus_adr = _try_int(core, "servile.wb_ibus_adr")
        ibus_stb = _try_int(core, "servile.wb_ibus_stb")
        ibus_ack = _try_int(core, "servile.wb_ibus_ack")
        debug_pc_changed = debug_pc is not None and debug_pc != last_debug_pc
        interesting = (
            debug_pc_changed or
            o_wb_stb or o_sram_wen or
            (wb_dbus_stb or 0) or (wb_dmem_stb or 0) or (wb_mem_stb or 0) or
            (ibus_stb or 0) or (ibus_ack or 0)
        )
        if interesting:
            dut._log.info(
                f"{base} {label} cyc={cycle:03d} "
                f"ext_wb(stb={o_wb_stb} we={o_wb_we} adr=0x{o_wb_adr:08x}) "
                f"sram(wen={o_sram_wen} addr=0x{o_sram_waddr:03x} data=0x{o_sram_wdata:02x}) "
                f"dbus(stb={wb_dbus_stb} we={wb_dbus_we} adr={f'0x{wb_dbus_adr:08x}' if wb_dbus_adr is not None else 'n/a'}) "
                f"dmem(stb={wb_dmem_stb} we={wb_dmem_we} adr={f'0x{wb_dmem_adr:08x}' if wb_dmem_adr is not None else 'n/a'}) "
                f"mem(stb={wb_mem_stb} we={wb_mem_we} adr={f'0x{wb_mem_adr:08x}' if wb_mem_adr is not None else 'n/a'}) "
                f"ibus(stb={ibus_stb} ack={ibus_ack} adr={f'0x{ibus_adr:08x}' if ibus_adr is not None else 'n/a'}) "
                f"debug_pc={f'0x{debug_pc:08x}' if debug_pc is not None else 'n/a'}"
            )
        if debug_pc in watch_addrs and debug_pc not in seen_watch:
            dut._log.info(f"{base} {label} hit debug_pc=0x{debug_pc:08x} at cyc={cycle:03d}")
            seen_watch.add(debug_pc)
        last_debug_pc = debug_pc
    dut._log.info(f"{base} --- {label} window end ---")


@cocotb.test()
async def test_minimal_single_store_signal_debug(dut):
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")
    expected_value = 0x5A

    await reset_and_boot(dut, firmware)
    if await wait_for_waiting_host_signal(dut):
        dut._log.info("[MIN STORE] Observed SIG_WAITING_HOST; sending one local write packet.")
    else:
        dut._log.warning("[MIN STORE] Did not observe SIG_WAITING_HOST; waiting an extra 200 us.")
        await Timer(200, units="us")

    cocotb.start_soon(monitor_tile_receive_path(dut, 0, 0, grid_offset, max_events=96))
    core_task = cocotb.start_soon(capture_core_sram_window(dut, 0, 0, "minimal_store", cycles=256))
    memif_task = cocotb.start_soon(capture_rf_mem_if_window(dut, 0, 0, "minimal_store", cycles=256))

    ack_task = cocotb.start_soon(
        wait_for_inject_payload(dut, SIG_STORE_ACK_BASE | expected_value, row=0, col=0, timeout_cycles=20000)
    )

    word = (0 << 28) | (FLIT_TYPE_WRITE << 24) | expected_value
    await host_send_word(dut, word)
    await wait_for_tile_consume(dut, 0, 0)

    ack_seen = await ack_task
    await core_task
    await memif_task

    assert ack_seen, "Minimal firmware did not acknowledge the store path"


@cocotb.test()
async def test_host_loads_test3_paul_into_sram(dut):
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")
    pbm = parse_p1_pbm(PBM_PATH)
    slices = slice_global_grid(pbm)

    await reset_and_boot(dut, firmware)
    if await wait_for_waiting_host_signal(dut):
        dut._log.info("[HOST LOAD] Observed SIG_WAITING_HOST; starting host injection.")
    else:
        dut._log.warning("[HOST LOAD] Did not observe SIG_WAITING_HOST; waiting an extra 200 us before host injection.")
        await Timer(200, units="us")

    before_tiles = read_all_tile_grids(dut, grid_offset)
    before_global = assemble_global_grid(before_tiles)
    dut._log.info("[HOST LOAD] SRAM before host injection:")
    for line in format_grid(before_global).splitlines():
        dut._log.info(f"[BEFORE] {line}")

    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            dest = (tr << 2) | tc
            for idx, val in enumerate(slices[(tr, tc)]):
                word = (dest << 28) | (FLIT_TYPE_WRITE << 24) | (idx << 8) | (val & 0xFF)
                await host_send_word(dut, word)
                await wait_for_tile_consume(dut, tr, tc)

            done_word = (dest << 28) | (FLIT_TYPE_DONE << 24)
            await host_send_word(dut, done_word)
            await wait_for_tile_consume(dut, tr, tc)

    signal_seen = await wait_for_loaded_signal(dut)
    if signal_seen:
        dut._log.info("[HOST LOAD] Observed SIG_HOST_LOADED from firmware.")
    else:
        dut._log.warning("[HOST LOAD] Did not observe SIG_HOST_LOADED; checking SRAM contents directly.")
    await Timer(20, units="us")

    after_tiles = read_all_tile_grids(dut, grid_offset)
    after_global = assemble_global_grid(after_tiles)

    dut._log.info("[HOST LOAD] SRAM after host injection:")
    for line in format_grid(after_global).splitlines():
        dut._log.info(f"[AFTER] {line}")

    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            assert after_tiles[(tr, tc)] == slices[(tr, tc)], f"Tile ({tr},{tc}) SRAM slice mismatch after host load"


@cocotb.test()
async def test_host_single_remote_packet_tile22_debug(dut):
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")

    await reset_and_boot(dut, firmware)
    if await wait_for_waiting_host_signal(dut):
        dut._log.info("[REMOTE DBG] Observed SIG_WAITING_HOST; sending one remote packet to tile (2,2).")
    else:
        dut._log.warning("[REMOTE DBG] Did not observe SIG_WAITING_HOST; waiting an extra 200 us.")
        await Timer(200, units="us")

    cocotb.start_soon(monitor_tile_receive_path(dut, 2, 2, grid_offset, max_events=64))
    cocotb.start_soon(monitor_host_gateway_path(dut, max_events=32))
    cocotb.start_soon(monitor_mesh_entry_path(dut, max_events=32))

    dest = (2 << 2) | 2
    word = (dest << 28) | (FLIT_TYPE_WRITE << 24) | (0 << 8) | 1
    await host_send_word(dut, word)
    await Timer(200, units="us")


@cocotb.test()
async def test_post_done_probe_tile00_debug(dut):
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")

    await reset_and_boot(dut, firmware)
    if await wait_for_waiting_host_signal(dut):
        dut._log.info("[POSTDONE DBG] Observed SIG_WAITING_HOST; ending load for tile (0,0).")
    else:
        dut._log.warning("[POSTDONE DBG] Did not observe SIG_WAITING_HOST; waiting an extra 200 us.")
        await Timer(200, units="us")

    cocotb.start_soon(monitor_tile_receive_path(dut, 0, 0, grid_offset, max_events=96))
    cocotb.start_soon(monitor_host_gateway_path(dut, max_events=48))
    cocotb.start_soon(monitor_mesh_entry_path(dut, max_events=48))

    done_word = (0 << 28) | (FLIT_TYPE_DONE << 24)
    await host_send_word(dut, done_word)
    await wait_for_tile_consume(dut, 0, 0)

    ready_seen = await wait_for_inject_payload(dut, SIG_POSTDONE_READY, row=0, col=0, timeout_cycles=20000)
    if ready_seen:
        dut._log.info("[POSTDONE DBG] Observed post-DONE ready signal from firmware.")
    else:
        dut._log.warning("[POSTDONE DBG] Did not catch the ready pulse directly; relying on mailbox logs.")

    probe_value = 0x5A
    seen_task = cocotb.start_soon(
        wait_for_inject_payload(dut, SIG_POSTDONE_SEEN_BASE | probe_value, row=0, col=0, timeout_cycles=20000)
    )
    probe_word = (0 << 28) | (FLIT_TYPE_STAGE2_PROBE << 24) | probe_value
    await host_send_word(dut, probe_word)
    await wait_for_tile_consume(dut, 0, 0)

    seen = await seen_task
    assert seen, "Firmware did not acknowledge the post-DONE probe packet"


@cocotb.test()
async def test_phase_overwrite_exec_stub(dut):
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")

    await reset_and_boot(dut, firmware)
    if await wait_for_waiting_host_signal(dut):
        dut._log.info("[STAGE2] Observed SIG_WAITING_HOST; arming stage-2 stub load.")
    else:
        dut._log.warning("[STAGE2] Did not observe SIG_WAITING_HOST; waiting an extra 200 us.")
        await Timer(200, units="us")

    cocotb.start_soon(monitor_tile_receive_path(dut, 0, 0, grid_offset, max_events=96))

    ready_task = cocotb.start_soon(
        wait_for_inject_payload(dut, SIG_POSTDONE_READY, row=0, col=0, timeout_cycles=40000)
    )
    done_word = (0 << 28) | (FLIT_TYPE_DONE << 24)
    await host_send_word(dut, done_word)
    await wait_for_tile_consume(dut, 0, 0)

    ready_seen = await ready_task
    if ready_seen:
        dut._log.info("[STAGE2] Observed post-DONE ready signal from firmware.")
    else:
        dut._log.warning("[STAGE2] Did not catch the ready pulse directly; continuing after proven phase boundary.")
        await Timer(20, units="us")

    for idx, val in enumerate(STAGE2_STUB_BYTES):
        word = (0 << 28) | (FLIT_TYPE_STAGE2_WRITE << 24) | (idx << 8) | val
        await host_send_word(dut, word)
        await wait_for_tile_consume(dut, 0, 0)
        await Timer(5, units="us")

    await Timer(50, units="us")
    stage2_mem = dut.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.mem
    loaded_stub = [int(stage2_mem[STAGE2_BASE + i].value) & 0xFF for i in range(len(STAGE2_STUB_BYTES))]
    assert loaded_stub == STAGE2_STUB_BYTES, f"Stage-2 bytes not written correctly: {loaded_stub!r}"

    seen_task = cocotb.start_soon(
        wait_for_inject_payload(dut, SIG_STAGE2_STUB, row=0, col=0, timeout_cycles=20000)
    )
    jump_word = (0 << 28) | (FLIT_TYPE_STAGE2_JUMP << 24)
    await host_send_word(dut, jump_word)

    seen = await seen_task
    assert seen, "Stage-2 stub did not execute from overwritten SRAM"


@cocotb.test()
async def test_compare_phase1_vs_postdone_store_debug(dut):
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")

    await reset_and_boot(dut, firmware)
    if await wait_for_waiting_host_signal(dut):
        dut._log.info("[COMPARE] Observed SIG_WAITING_HOST; comparing phase-1 and post-DONE store paths.")
    else:
        dut._log.warning("[COMPARE] Did not observe SIG_WAITING_HOST; waiting an extra 200 us.")
        await Timer(200, units="us")

    cocotb.start_soon(monitor_tile_receive_path(dut, 0, 0, grid_offset, max_events=128))

    phase1_task = cocotb.start_soon(capture_core_sram_window(dut, 0, 0, "phase1", cycles=256))
    phase1_memif_task = cocotb.start_soon(capture_rf_mem_if_window(dut, 0, 0, "phase1", cycles=256))
    phase1_word = (0 << 28) | (FLIT_TYPE_WRITE << 24) | (0 << 8) | 0x01
    await host_send_word(dut, phase1_word)
    await wait_for_tile_consume(dut, 0, 0)
    await phase1_task
    await phase1_memif_task

    done_word = (0 << 28) | (FLIT_TYPE_DONE << 24)
    await host_send_word(dut, done_word)
    await wait_for_tile_consume(dut, 0, 0)

    ready_seen = await wait_for_inject_payload(dut, SIG_POSTDONE_READY, row=0, col=0, timeout_cycles=40000)
    if ready_seen:
        dut._log.info("[COMPARE] Observed SIG_POSTDONE_READY; starting post-DONE capture.")
    else:
        dut._log.warning("[COMPARE] Did not catch SIG_POSTDONE_READY directly; continuing after short delay.")
        await Timer(20, units="us")

    phase2_task = cocotb.start_soon(capture_core_sram_window(dut, 0, 0, "phase2", cycles=256))
    phase2_memif_task = cocotb.start_soon(capture_rf_mem_if_window(dut, 0, 0, "phase2", cycles=256))
    phase2_word = (0 << 28) | (FLIT_TYPE_STAGE2_WRITE << 24) | (0 << 8) | 0xB7
    await host_send_word(dut, phase2_word)
    await wait_for_tile_consume(dut, 0, 0)
    await phase2_task
    await phase2_memif_task


@cocotb.test()
async def test_host_single_write_becomes_mem_write_tile00_debug(dut):
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")

    await reset_and_boot(dut, firmware)
    if await wait_for_waiting_host_signal(dut):
        dut._log.info("[HOST->MEM 0,0] Observed SIG_WAITING_HOST; sending one local write packet.")
    else:
        dut._log.warning("[HOST->MEM 0,0] Did not observe SIG_WAITING_HOST; waiting an extra 200 us.")
        await Timer(200, units="us")

    cocotb.start_soon(monitor_tile_receive_path(dut, 0, 0, grid_offset, max_events=96))
    memif_task = cocotb.start_soon(capture_rf_mem_if_window(dut, 0, 0, "host_load_local", cycles=256))

    expected_index = 0
    expected_value = 0x01
    ack_task = cocotb.start_soon(
        wait_for_inject_payload(dut, SIG_STORE_ACK_BASE | expected_value, row=0, col=0, timeout_cycles=120000)
    )
    word = (0 << 28) | (FLIT_TYPE_WRITE << 24) | (expected_index << 8) | expected_value
    await host_send_word(dut, word)
    await wait_for_tile_consume(dut, 0, 0)
    ack_seen = await ack_task

    write_seen = await wait_for_core_sram_write(
        dut,
        0,
        0,
        expected_addr=grid_offset + expected_index,
        expected_data=expected_value,
        timeout_cycles=120000,
    )
    await memif_task
    assert ack_seen, "Tile (0,0) did not emit the post-store ack"
    assert write_seen is not None, "Tile (0,0) did not produce a matching core SRAM write"
    addr, data = write_seen
    dut._log.info(
        f"[HOST->MEM 0,0] Observed core SRAM write addr=0x{addr:03x} data=0x{data:02x} "
        f"after FLIT_TYPE_WRITE index={expected_index}"
    )


@cocotb.test()
async def test_host_single_write_post_mailbox_trace_tile00_debug(dut):
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")

    await reset_and_boot(dut, firmware)
    if await wait_for_waiting_host_signal(dut):
        dut._log.info("[POSTMAILBOX 0,0] Observed SIG_WAITING_HOST; sending one local write packet.")
    else:
        dut._log.warning("[POSTMAILBOX 0,0] Did not observe SIG_WAITING_HOST; waiting an extra 200 us.")
        await Timer(200, units="us")

    cocotb.start_soon(monitor_tile_receive_path(dut, 0, 0, grid_offset, max_events=128))

    expected_value = 0x01
    word = (0 << 28) | (FLIT_TYPE_WRITE << 24) | expected_value
    await host_send_word(dut, word)
    await wait_for_tile_consume(dut, 0, 0)

    core = dut.noc_mesh.rows[0].cols[0].tile_inst.core_inst
    for _ in range(120000):
        await RisingEdge(dut.clk)
        if int(core.o_wb_stb.value) and (not int(core.o_wb_we.value)) and int(core.o_wb_adr.value) == 0x80000004:
            await capture_post_mailbox_window(dut, 0, 0, "after_mailbox_read", cycles=1024)
            return

    raise AssertionError("Did not observe mailbox read on tile (0,0)")


@cocotb.test()
async def test_host_single_write_becomes_mem_write_tile22_debug(dut):
    firmware = load_bin(FIRMWARE_BIN_PATH)
    grid_offset = read_elf_symbol(FIRMWARE_ELF_PATH, "current_grid")

    await reset_and_boot(dut, firmware)
    if await wait_for_waiting_host_signal(dut):
        dut._log.info("[HOST->MEM 2,2] Observed SIG_WAITING_HOST; sending one remote write packet.")
    else:
        dut._log.warning("[HOST->MEM 2,2] Did not observe SIG_WAITING_HOST; waiting an extra 200 us.")
        await Timer(200, units="us")

    cocotb.start_soon(monitor_tile_receive_path(dut, 2, 2, grid_offset, max_events=96))
    memif_task = cocotb.start_soon(capture_rf_mem_if_window(dut, 2, 2, "host_load_remote", cycles=256))

    dest = (2 << 2) | 2
    expected_index = 0
    expected_value = 0x01
    ack_task = cocotb.start_soon(
        wait_for_inject_payload(dut, SIG_STORE_ACK_BASE | expected_value, row=2, col=2, timeout_cycles=120000)
    )
    word = (dest << 28) | (FLIT_TYPE_WRITE << 24) | (expected_index << 8) | expected_value
    await host_send_word(dut, word)
    await wait_for_tile_consume(dut, 2, 2)
    ack_seen = await ack_task

    write_seen = await wait_for_core_sram_write(
        dut,
        2,
        2,
        expected_addr=grid_offset + expected_index,
        expected_data=expected_value,
        timeout_cycles=120000,
    )
    await memif_task
    assert ack_seen, "Tile (2,2) did not emit the post-store ack"
    assert write_seen is not None, "Tile (2,2) did not produce a matching core SRAM write"
    addr, data = write_seen
    dut._log.info(
        f"[HOST->MEM 2,2] Observed core SRAM write addr=0x{addr:03x} data=0x{data:02x} "
        f"after FLIT_TYPE_WRITE index={expected_index}"
    )

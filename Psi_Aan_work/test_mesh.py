# test_mesh.py

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

# -------------------------------------------------

"""test_mesh.py

Simple cocotb without verification for the 2x2 mesh -> just injecting packets
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer


# Helper: Packet builder (matches your C firmware)

def build_packet(index, state, dest_y, dest_x):
    """Build 32-bit packet as firmware formats it.

    [31:24] index
    [23:16] state
    [15:8]  dest_y
    [7:0]   dest_x
    """
    return (
        (index << 24)
        | (state << 16)
        | (dest_y << 8)
        | dest_x
    )


# Clock / Reset

async def reset_dut(dut):
    dut.rst.value = 1
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    dut._log.info("Reset released")


# Monitor links and print traffic

async def monitor_links(dut):
    while True:
        await RisingEdge(dut.clk)

        if int(dut.n00_n01.value) != 0:
            dut._log.info(f"[LINK] 00 → 01 : {dut.n00_n01.value}")

        if int(dut.n01_n00.value) != 0:
            dut._log.info(f"[LINK] 01 → 00 : {dut.n01_n00.value}")

        if int(dut.n00_n10.value) != 0:
            dut._log.info(f"[LINK] 00 → 10 : {dut.n00_n10.value}")

        if int(dut.n10_n00.value) != 0:
            dut._log.info(f"[LINK] 10 → 00 : {dut.n10_n00.value}")

        if int(dut.n01_n11.value) != 0:
            dut._log.info(f"[LINK] 01 → 11 : {dut.n01_n11.value}")

        if int(dut.n11_n01.value) != 0:
            dut._log.info(f"[LINK] 11 → 01 : {dut.n11_n01.value}")

        if int(dut.n10_n11.value) != 0:
            dut._log.info(f"[LINK] 10 → 11 : {dut.n10_n11.value}")

        if int(dut.n11_n10.value) != 0:
            dut._log.info(f"[LINK] 11 → 10 : {dut.n11_n10.value}")


# Inject packet into Tile (0,0) router
# (Simulates firmware write to NoC)

async def inject_packet_to_tile00(dut, packet):
    dut._log.info(f"Injecting packet: 0x{packet:08X}")

    # Directly stimulate router wishbone interface
    router = dut.t00.router

    router.local_wb_adr.value = 0x80000000
    router.local_wb_dat_o.value = packet
    router.local_wb_we.value = 1
    router.local_wb_stb.value = 1

    await RisingEdge(dut.clk)

    router.local_wb_stb.value = 0
    router.local_wb_we.value = 0


# Main Test


@cocotb.test()
async def test_mesh_gol_firmware(dut):
    # Start clock
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    # Monitor traffic
    cocotb.start_soon(monitor_links(dut))

    # Reset
    await reset_dut(dut)

    dut._log.info("Starting Game-of-Life NoC test")

    # Test 1 — Packet destined for another tile
    # Expect: forwarding across mesh

    pkt1 = build_packet(
        index=5,
        state=1,
        dest_y=1,   # Tile row
        dest_x=1    # Tile col → Tile 11
    )

    await inject_packet_to_tile00(dut, pkt1)

    await Timer(200, units="ns")

    dut._log.info("[TEST] Forwarding packet test complete")


    # Test 2 — Packet for local tile (00)
    # Expect: router consumes, no forwarding

    pkt2 = build_packet(
        index=3,
        state=1,
        dest_y=0,
        dest_x=0
    )

    await inject_packet_to_tile00(dut, pkt2)

    await Timer(200, units="ns")

    dut._log.info("[TEST] Local consumption test complete")


    # Let firmware run GoL + host updates
    dut._log.info("Letting firmware compute generations...")

    await Timer(1000, units="ns")

    dut._log.info("Simulation complete")

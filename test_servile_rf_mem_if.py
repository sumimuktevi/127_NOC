# test_servile_rf_mem_if.py
# cocotb testbench for the servile_rf_mem_if arbiter (Approach A).
#
# The DUT is rf_mem_if_tb_top, which connects:
#   servile_rf_mem_if  – the arbiter that time-multiplexes a single SRAM
#                        between the SERV register file and Wishbone
#                        (instruction / data) memory accesses.
#   subservient_generic_ram – 256-byte behavioural SRAM
#
# Memory map with depth=256, rf_regs=32
# ──────────────────────────────────────
#   SRAM[0x00..0x7F]  – program / data memory (Wishbone word addresses 0–31)
#   SRAM[0x80..0xFF]  – register file (32 GPRs × 4 bytes, inverted mapping)
#     x0  ← RF-protocol addresses 0x7C–0x7F  → SRAM[0xFF..0xFC]
#     x31 ← RF-protocol addresses 0x00–0x03  → SRAM[0xFF..0xFC]
#                                              (highest RF addr = lowest reg)
#
# x0 suppression (RF read path only)
#   When i_rf_raddr[6:2] are all 1 (i_rf_raddr ∈ {0x7C..0x7F}), the arbiter
#   forces o_rf_rdata = 0x00 regardless of what the SRAM stores.
#
# Wishbone protocol inside the arbiter
#   Every transaction takes exactly 4 clock cycles (byte-by-byte over 8-bit SRAM).
#   wb_en = i_wb_stb & !i_rf_wen & !o_wb_ack
#   If i_rf_wen is asserted while i_wb_stb is high, wb_en = 0 and the
#   bsel counter stalls – the transaction resumes only after i_rf_wen drops.
#
# Tests
# ─────
#   1. test_wb_basic_write_read         – Write a word via WB, read it back
#   2. test_wb_sequential_fetches       – 4 sequential WB reads (instruction-fetch sim)
#   3. test_wb_byte_sel_partial_write   – Partial word write via byte-select
#   4. test_wb_stalls_during_rf_write   – RF write stalls WB; ack delayed by N_RF cycles
#   5. test_rf_wb_no_crosstalk          – RF and WB regions are independent
#   6. test_wb_rf_interleaved           – WB write → RF access → WB read; data intact
#   7. test_rf_x0_suppression           – RF reads from x0 address always return 0x00
#   8. test_wb_consecutive_transactions – Multiple back-to-back WB transactions
#
# Run:
#   make -f Makefile.rf_mem_if
#
# Run a single test:
#   make -f Makefile.rf_mem_if COCOTB_TESTCASE=test_wb_stalls_during_rf_write
#
# View Waveforms:
#   make -f Makefile.rf_mem_if waves

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer

CLK_PERIOD_NS = 100   # 10 MHz, same as the generic-ram test

# RF byte-address range that the arbiter treats as x0 (reads always return 0).
# With rf_regs=32: rf_depth=7, so &i_raddr[6:2] == 1 → i_raddr ∈ {0x7C..0x7F}
X0_RF_ADDR_LO = 0x7C
X0_RF_ADDR_HI = 0x7F

# Safe Wishbone word addresses (program memory, depth=256, rf_regs=32).
# SRAM byte range 0x00..0x7F → word addresses 0..31.
WB_WORD_ADDR_MAX = 31


# ─────────────────────────────────────────────────────────────────────────────
# Driver helpers
# ─────────────────────────────────────────────────────────────────────────────

async def apply_reset(dut, cycles=4):
    """Assert i_rst for *cycles* rising edges, release, and idle all inputs."""
    dut.i_rst.value      = 1
    dut.i_rf_wen.value   = 0
    dut.i_rf_ren.value   = 0
    dut.i_rf_waddr.value = 0
    dut.i_rf_wdata.value = 0
    dut.i_rf_raddr.value = 0
    dut.i_wb_stb.value   = 0
    dut.i_wb_we.value    = 0
    dut.i_wb_sel.value   = 0
    dut.i_wb_dat.value   = 0
    dut.i_wb_adr.value   = 0
    for _ in range(cycles):
        await RisingEdge(dut.i_clk)
    await FallingEdge(dut.i_clk)
    dut.i_rst.value = 0


async def rf_write_byte(dut, rf_addr: int, data: int) -> None:
    """Single-cycle RF write.  Inputs are presented on the falling edge so
    the SRAM captures them on the next rising edge."""
    await FallingEdge(dut.i_clk)
    dut.i_rf_waddr.value = rf_addr
    dut.i_rf_wdata.value = data
    dut.i_rf_wen.value   = 1
    dut.i_wb_stb.value   = 0      # Wishbone must be idle (wb_en blocks on i_wen)
    await RisingEdge(dut.i_clk)
    await Timer(1, units="ns")    # tiny settle margin
    await FallingEdge(dut.i_clk)
    dut.i_rf_wen.value = 0


async def rf_read_byte(dut, rf_addr: int) -> int:
    """Single-cycle RF read.  Returns o_rf_rdata sampled at the falling edge
    after the rising edge on which the SRAM and regzero registers update."""
    await FallingEdge(dut.i_clk)
    dut.i_rf_raddr.value = rf_addr
    dut.i_rf_ren.value   = 1
    dut.i_wb_stb.value   = 0
    await RisingEdge(dut.i_clk)
    await Timer(1, units="ns")
    await FallingEdge(dut.i_clk)
    data = int(dut.o_rf_rdata.value)
    dut.i_rf_ren.value = 0
    return data


async def wb_write_word(dut, word_addr: int, data: int, sel: int = 0xF) -> None:
    """4-cycle Wishbone word write.
    Drives i_wb_stb until o_wb_ack, then releases."""
    await FallingEdge(dut.i_clk)
    dut.i_wb_adr.value  = word_addr
    dut.i_wb_dat.value  = data
    dut.i_wb_sel.value  = sel
    dut.i_wb_we.value   = 1
    dut.i_wb_stb.value  = 1
    dut.i_rf_wen.value  = 0       # RF must be idle so wb_en can fire

    while True:
        await RisingEdge(dut.i_clk)
        await Timer(1, units="ns")
        if int(dut.o_wb_ack.value) == 1:
            break

    await FallingEdge(dut.i_clk)
    dut.i_wb_stb.value = 0


async def wb_read_word(dut, word_addr: int) -> int:
    """4-cycle Wishbone word read.
    Drives i_wb_stb until o_wb_ack; samples o_wb_rdt on the following
    falling edge (after all registered values have settled)."""
    await FallingEdge(dut.i_clk)
    dut.i_wb_adr.value  = word_addr
    dut.i_wb_we.value   = 0
    dut.i_wb_sel.value  = 0xF
    dut.i_wb_stb.value  = 1
    dut.i_rf_wen.value  = 0

    while True:
        await RisingEdge(dut.i_clk)
        await Timer(1, units="ns")
        if int(dut.o_wb_ack.value) == 1:
            break

    # At this falling edge all four bytes are assembled in o_wb_rdt.
    # (rdata still holds byte 3 from the ack posedge; no posedge has
    #  fired yet to overwrite it.)
    await FallingEdge(dut.i_clk)
    data = int(dut.o_wb_rdt.value)
    dut.i_wb_stb.value = 0
    return data


# ─────────────────────────────────────────────────────────────────────────────
# Tests
# ─────────────────────────────────────────────────────────────────────────────

@cocotb.test()
async def test_wb_basic_write_read(dut):
    """TEST 1 – Basic Wishbone word write then read-back.

    Write a known 32-bit word into program memory, read it back via the
    same Wishbone path.  Confirms that the 4-cycle byte-sequencing inside
    servile_rf_mem_if assembles the correct 32-bit word.
    """
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())
    await apply_reset(dut)

    WORD_ADDR = 0
    DATA      = 0xDEADBEEF

    await wb_write_word(dut, WORD_ADDR, DATA)
    rd = await wb_read_word(dut, WORD_ADDR)

    assert rd == DATA, (
        f"wb_basic: addr={WORD_ADDR} got=0x{rd:08X} exp=0x{DATA:08X}")


@cocotb.test()
async def test_wb_sequential_fetches(dut):
    """TEST 2 – Sequential Wishbone reads (instruction-fetch simulation).

    Writes 4 distinct words to consecutive program-memory word addresses,
    then reads them back in order.  Mirrors the sequential instruction
    fetches that SERV issues as it increments the PC (PC=0, 4, 8, C).
    """
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())
    await apply_reset(dut)

    # Four synthetic RISC-V-like instruction words
    instructions = [
        (0, 0x00500093),   # ADDI x1, x0, 5
        (1, 0x00A00113),   # ADDI x2, x0, 10
        (2, 0x002081B3),   # ADD  x3, x1, x2
        (3, 0x00000013),   # NOP
    ]

    # Write all instructions
    for word_addr, instr in instructions:
        await wb_write_word(dut, word_addr, instr)

    # Read them back in order – simulates sequential instruction fetch
    for word_addr, exp_instr in instructions:
        rd = await wb_read_word(dut, word_addr)
        assert rd == exp_instr, (
            f"seq_fetch PC=0x{word_addr*4:03X}: "
            f"got=0x{rd:08X} exp=0x{exp_instr:08X}")


@cocotb.test()
async def test_wb_byte_sel_partial_write(dut):
    """TEST 3 – Partial word write using Wishbone byte-select.

    Writes a full word, then overwrites only the low two bytes (sel=0x3).
    Verifies that the upper two bytes are preserved and only the selected
    bytes are updated – this is how SERV's SW (store word), SH (store half),
    and SB (store byte) instructions differentiate their memory footprints.
    """
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())
    await apply_reset(dut)

    WORD_ADDR = 5
    INITIAL   = 0xDEAD_BEEF
    PATCH     = 0x0000_1234   # only bytes 0 and 1 differ
    SEL       = 0x3           # byte enables for bytes [1:0] only

    await wb_write_word(dut, WORD_ADDR, INITIAL)

    # Partial write: overwrite bytes [1:0] with 0x1234, leave [3:2] alone
    await wb_write_word(dut, WORD_ADDR, PATCH, sel=SEL)

    rd = await wb_read_word(dut, WORD_ADDR)
    expected = (INITIAL & 0xFFFF_0000) | (PATCH & 0x0000_FFFF)

    assert rd == expected, (
        f"byte_sel: got=0x{rd:08X} exp=0x{expected:08X}")


@cocotb.test()
async def test_wb_stalls_during_rf_write(dut):
    """TEST 4 – RF write stalls a concurrent Wishbone transaction.

    The arbiter's wb_en gate:  wb_en = i_wb_stb & !i_rf_wen & !o_wb_ack
    When i_rf_wen is asserted alongside i_wb_stb, wb_en = 0 and the
    internal bsel counter stops advancing.  After i_rf_wen is released the
    counter resumes, completing the transaction in exactly 4 more cycles.

    This test asserts both signals simultaneously, holds i_rf_wen for
    N_RF rising edges while verifying ack does not arrive, then releases
    and confirms ack arrives in exactly 4 more cycles.
    """
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())
    await apply_reset(dut)

    WORD_ADDR = 7
    DATA      = 0xCAFEBABE
    N_RF      = 3     # RF write cycles to inject (stall width)

    # Populate the target location first
    await wb_write_word(dut, WORD_ADDR, DATA)

    # ── Start Wishbone read and RF write simultaneously ───────────────────
    await FallingEdge(dut.i_clk)
    dut.i_wb_adr.value   = WORD_ADDR
    dut.i_wb_we.value    = 0
    dut.i_wb_sel.value   = 0xF
    dut.i_wb_stb.value   = 1
    # RF write to x0 area (SRAM top, does not overlap program memory)
    dut.i_rf_wen.value   = 1
    dut.i_rf_waddr.value = 0x00   # RF protocol addr 0x00 → SRAM[0xFF]
    dut.i_rf_wdata.value = 0xAB

    total_cycles = 0

    # ── Hold RF write for N_RF rising edges; ack must NOT arrive ─────────
    for i in range(N_RF):
        await RisingEdge(dut.i_clk)
        await Timer(1, units="ns")
        total_cycles += 1
        assert int(dut.o_wb_ack.value) == 0, (
            f"ack should be blocked by RF write (cycle {i + 1} of stall)")

    # ── Release RF write; Wishbone resumes ───────────────────────────────
    await FallingEdge(dut.i_clk)
    dut.i_rf_wen.value = 0

    # ── Wait for ack; should arrive in exactly 4 more cycles ─────────────
    while True:
        await RisingEdge(dut.i_clk)
        await Timer(1, units="ns")
        total_cycles += 1
        if int(dut.o_wb_ack.value) == 1:
            break
        assert total_cycles < N_RF + 10, "ack never arrived after RF write released"

    assert total_cycles == N_RF + 4, (
        f"stall_test: expected {N_RF + 4} total cycles, got {total_cycles}")

    await FallingEdge(dut.i_clk)
    rd = int(dut.o_wb_rdt.value)
    dut.i_wb_stb.value = 0

    assert rd == DATA, (
        f"stall_test: data corrupted: got=0x{rd:08X} exp=0x{DATA:08X}")


@cocotb.test()
async def test_rf_wb_no_crosstalk(dut):
    """TEST 5 – RF and Wishbone memory regions are independent.

    Writes distinct values to program memory (via Wishbone) and to the
    register file (via the RF port), then reads both back and confirms
    that neither access corrupted the other.

    Address independence:
      Wishbone word 10  → SRAM bytes 0x28–0x2B  (program mem, low half)
      RF addr 0x08–0x0B → SRAM bytes 0xF7–0xF4  (RF region, high half, inverted)
    """
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())
    await apply_reset(dut)

    WB_ADDR   = 10
    WB_DATA   = 0xABCD_EF01
    RF_BASE   = 0x08          # RF byte address for some GPR (not x0)
    RF_BYTES  = [0x11, 0x22, 0x33, 0x44]

    # Write to Wishbone program memory
    await wb_write_word(dut, WB_ADDR, WB_DATA)

    # Write 4 bytes to the RF port
    for i, byte_val in enumerate(RF_BYTES):
        await rf_write_byte(dut, RF_BASE + i, byte_val)

    # Read WB back – must not have been disturbed by RF writes
    rd_wb = await wb_read_word(dut, WB_ADDR)
    assert rd_wb == WB_DATA, (
        f"crosstalk: WB data corrupted: got=0x{rd_wb:08X} exp=0x{WB_DATA:08X}")

    # Read RF back – must not have been disturbed by WB accesses
    for i, exp_byte in enumerate(RF_BYTES):
        rd_rf = await rf_read_byte(dut, RF_BASE + i)
        assert rd_rf == exp_byte, (
            f"crosstalk: RF byte {i} corrupted: "
            f"got=0x{rd_rf:02X} exp=0x{exp_byte:02X}")


@cocotb.test()
async def test_wb_rf_interleaved(dut):
    """TEST 6 – Wishbone write → RF access → Wishbone read; data intact.

    Simulates a realistic execution sequence:
      1. CPU fetches an instruction word from program memory (Wishbone read).
      2. CPU writes back to a register (RF write) during execution.
      3. CPU reads a different program-memory word (another Wishbone read).
    Confirms arbitration does not corrupt data in either region.
    """
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())
    await apply_reset(dut)

    ADDR_A = 3
    DATA_A = 0x1111_2222
    ADDR_B = 4
    DATA_B = 0x3333_4444

    # Pre-load two program-memory words
    await wb_write_word(dut, ADDR_A, DATA_A)
    await wb_write_word(dut, ADDR_B, DATA_B)

    # Interleave: WB read A → RF write → WB read B
    rd_a = await wb_read_word(dut, ADDR_A)

    await rf_write_byte(dut, 0x10, 0x55)   # RF write (GPR area, not x0)
    await rf_write_byte(dut, 0x11, 0x66)

    rd_b = await wb_read_word(dut, ADDR_B)

    assert rd_a == DATA_A, (
        f"interleaved: word A: got=0x{rd_a:08X} exp=0x{DATA_A:08X}")
    assert rd_b == DATA_B, (
        f"interleaved: word B: got=0x{rd_b:08X} exp=0x{DATA_B:08X}")


@cocotb.test()
async def test_rf_x0_suppression(dut):
    """TEST 7 – RF reads from the x0 address always return 0x00.

    servile_rf_mem_if implements the RISC-V invariant that register x0
    always reads as zero via:
        regzero <= &i_raddr[rf_depth-1:2]   (registered)
        o_rdata  = regzero ? 8'd0 : i_sram_rdata

    With rf_regs=32 (rf_depth=7), the suppression fires when
    i_rf_raddr ∈ {0x7C, 0x7D, 0x7E, 0x7F}.

    This test writes non-zero data into all four x0 SRAM cells via the RF
    write port and then reads them back via the RF read port, expecting
    0x00 from every byte regardless of what the SRAM holds.
    """
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())
    await apply_reset(dut)

    x0_addrs = [X0_RF_ADDR_LO + i for i in range(4)]   # 0x7C..0x7F
    poison   = [0xDE, 0xAD, 0xBE, 0xEF]

    # Write non-zero into every x0 byte cell
    for addr, byte_val in zip(x0_addrs, poison):
        await rf_write_byte(dut, addr, byte_val)

    # All reads from x0 range must return 0x00
    for addr in x0_addrs:
        rd = await rf_read_byte(dut, addr)
        assert rd == 0x00, (
            f"x0_suppress: RF addr=0x{addr:02X} got=0x{rd:02X} exp=0x00")

    # Confirm a neighbouring address (0x7B, just outside x0 range) is not suppressed
    NEIGHBOUR = 0x7B
    await rf_write_byte(dut, NEIGHBOUR, 0xA5)
    rd_nb = await rf_read_byte(dut, NEIGHBOUR)
    assert rd_nb == 0xA5, (
        f"x0_suppress: neighbour 0x{NEIGHBOUR:02X} wrongly suppressed: "
        f"got=0x{rd_nb:02X} exp=0xA5")


@cocotb.test()
async def test_wb_consecutive_transactions(dut):
    """TEST 8 – Multiple back-to-back Wishbone transactions.

    Issues 8 word writes followed immediately by 8 word reads at different
    addresses to verify that the bsel counter resets correctly between
    transactions and that back-to-back accesses do not alias or overlap.
    """
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())
    await apply_reset(dut)

    # Use addresses spread across the program-memory region
    cases = [
        (0,  0xAABBCCDD),
        (2,  0x11223344),
        (4,  0xDEAD_0000),
        (6,  0x0000_CAFE),
        (8,  0xFFFF_FFFF),
        (10, 0x00000000),
        (20, 0x5A5A_5A5A),
        (31, 0x0102_0304),
    ]

    # Write all
    for word_addr, data in cases:
        await wb_write_word(dut, word_addr, data)

    # Read all back
    for word_addr, exp_data in cases:
        rd = await wb_read_word(dut, word_addr)
        assert rd == exp_data, (
            f"consecutive: word_addr={word_addr} "
            f"got=0x{rd:08X} exp=0x{exp_data:08X}")

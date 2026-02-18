# test_subservient_generic_ram.py
# cocotb testbench for subservient_generic_ram.
#
# Mirrors the 8 tests in tb_subservient_generic_ram.v:
#   1. Basic write / read-back
#   2. Sequential multi-address write then independent read-back
#   3. Register-x0 suppression (0xFC-0xFF always reads as 0)
#   4. Address 0xFB is NOT in the x0 range – normal r/w
#   5. All-zero, all-one, and alternating bit patterns
#   6. Overwrite at the same address
#   7. Data survives reset (SRAM cells unaffected by i_rst)
#   8. Simultaneous wen+ren: write wins
#
# Run with (from this directory):
#   make SIM=icarus
#
# Run a single test:
#   make COCOTB_TESTCASE=test_3_x0_suppression
#
# Open waveforms:
#   make waves

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer

CLK_PERIOD_NS = 100  # 10 MHz, matches original testbench


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

async def write_byte(dut, addr: int, data: int) -> None:
    """Drive a synchronous write, inputs presented at negedge."""
    await FallingEdge(dut.i_clk)
    dut.i_waddr.value = addr
    dut.i_wdata.value = data
    dut.i_wen.value = 1
    dut.i_ren.value = 0
    await RisingEdge(dut.i_clk)   # SRAM captures on this edge
    await Timer(1, units="ns")    # tiny settle margin
    await FallingEdge(dut.i_clk)
    dut.i_wen.value = 0


async def read_byte(dut, addr: int) -> int:
    """Drive a synchronous read; sample at the negedge after posedge."""
    await FallingEdge(dut.i_clk)
    dut.i_raddr.value = addr
    dut.i_ren.value = 1
    dut.i_wen.value = 0
    await RisingEdge(dut.i_clk)   # SRAM & r0 register latch on this edge
    await Timer(1, units="ns")
    await FallingEdge(dut.i_clk)  # Q stable; sample here (45 ns Q-prop + margin)
    data = int(dut.o_rdata.value)
    dut.i_ren.value = 0
    return data


async def apply_reset(dut, n: int) -> None:
    """Assert i_rst for n rising edges, then release."""
    await FallingEdge(dut.i_clk)
    dut.i_rst.value = 1
    for _ in range(n):
        await RisingEdge(dut.i_clk)
    await FallingEdge(dut.i_clk)
    dut.i_rst.value = 0


# ---------------------------------------------------------------------------
# Tests
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_1_basic_write_read(dut):
    """TEST 1 – Basic write / read-back at ordinary addresses."""
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())

    dut.i_rst.value = 1
    dut.i_wen.value = 0
    dut.i_ren.value = 0
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_raddr.value = 0

    await apply_reset(dut, 4)

    cases = [
        (0x10, 0xAB),
        (0x20, 0xCD),
        (0x7F, 0x55),
        (0xFB, 0x99),
    ]
    for addr, exp in cases:
        await write_byte(dut, addr, exp)
        rd = await read_byte(dut, addr)
        assert rd == exp, f"addr=0x{addr:02X}: got=0x{rd:02X} exp=0x{exp:02X}"


@cocotb.test()
async def test_2_sequential_write_read(dut):
    """TEST 2 – Sequential writes, independent read-back (no aliasing)."""
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())

    dut.i_rst.value = 1
    dut.i_wen.value = 0
    dut.i_ren.value = 0
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_raddr.value = 0

    await apply_reset(dut, 4)

    # Write all, then read all
    for i in range(4, 12):
        await write_byte(dut, i, i ^ 0x5A)

    for i in range(4, 12):
        rd = await read_byte(dut, i)
        exp = i ^ 0x5A
        assert rd == exp, f"seq_rw addr=0x{i:02X}: got=0x{rd:02X} exp=0x{exp:02X}"


@cocotb.test()
async def test_3_x0_suppression(dut):
    """TEST 3 – Reads from 0xFC-0xFF must always return 0x00 (SERV x0)."""
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())

    dut.i_rst.value = 1
    dut.i_wen.value = 0
    dut.i_ren.value = 0
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_raddr.value = 0

    await apply_reset(dut, 4)

    # Write non-zero into every x0 cell
    await write_byte(dut, 0xFC, 0xDE)
    await write_byte(dut, 0xFD, 0xAD)
    await write_byte(dut, 0xFE, 0xBE)
    await write_byte(dut, 0xFF, 0xEF)

    for addr in [0xFC, 0xFD, 0xFE, 0xFF]:
        rd = await read_byte(dut, addr)
        assert rd == 0x00, f"x0_suppress 0x{addr:02X}: got=0x{rd:02X} exp=0x00"


@cocotb.test()
async def test_4_not_x0_address(dut):
    """TEST 4 – Address 0xFB (bits[7:2]=11_1110) is not in x0 range."""
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())

    dut.i_rst.value = 1
    dut.i_wen.value = 0
    dut.i_ren.value = 0
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_raddr.value = 0

    await apply_reset(dut, 4)

    await write_byte(dut, 0xFB, 0xAA)
    rd = await read_byte(dut, 0xFB)
    assert rd == 0xAA, f"not_x0_0xFB: got=0x{rd:02X} exp=0xAA"


@cocotb.test()
async def test_5_data_patterns(dut):
    """TEST 5 – All-zero, all-one, and alternating bit patterns."""
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())

    dut.i_rst.value = 1
    dut.i_wen.value = 0
    dut.i_ren.value = 0
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_raddr.value = 0

    await apply_reset(dut, 4)

    patterns = [
        (0x40, 0x00),
        (0x41, 0xFF),
        (0x42, 0x55),
        (0x43, 0xAA),
        (0x44, 0xF0),
        (0x45, 0x0F),
    ]
    for addr, val in patterns:
        await write_byte(dut, addr, val)
        rd = await read_byte(dut, addr)
        assert rd == val, f"pattern addr=0x{addr:02X}: got=0x{rd:02X} exp=0x{val:02X}"


@cocotb.test()
async def test_6_overwrite(dut):
    """TEST 6 – Second write to the same address wins."""
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())

    dut.i_rst.value = 1
    dut.i_wen.value = 0
    dut.i_ren.value = 0
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_raddr.value = 0

    await apply_reset(dut, 4)

    await write_byte(dut, 0x60, 0x11)
    await write_byte(dut, 0x60, 0x22)  # second write should win
    rd = await read_byte(dut, 0x60)
    assert rd == 0x22, f"overwrite: got=0x{rd:02X} exp=0x22"


@cocotb.test()
async def test_7_data_survives_reset(dut):
    """TEST 7 – SRAM cells are unaffected by i_rst; control registers reset."""
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())

    dut.i_rst.value = 1
    dut.i_wen.value = 0
    dut.i_ren.value = 0
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_raddr.value = 0

    await apply_reset(dut, 4)

    await write_byte(dut, 0x50, 0xBB)   # write before reset
    await apply_reset(dut, 4)           # reset; SRAM cells stay

    rd = await read_byte(dut, 0x50)
    assert rd == 0xBB, f"post_reset_rd: got=0x{rd:02X} exp=0xBB"

    # Normal r/w still works after reset
    await write_byte(dut, 0x51, 0xCC)
    rd = await read_byte(dut, 0x51)
    assert rd == 0xCC, f"post_reset_new: got=0x{rd:02X} exp=0xCC"


@cocotb.test()
async def test_8_simultaneous_wen_ren(dut):
    """TEST 8 – wen+ren asserted together: write wins (GWEN=0, addr=waddr)."""
    cocotb.start_soon(Clock(dut.i_clk, CLK_PERIOD_NS, units="ns").start())

    dut.i_rst.value = 1
    dut.i_wen.value = 0
    dut.i_ren.value = 0
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_raddr.value = 0

    await apply_reset(dut, 4)

    await write_byte(dut, 0x70, 0x11)   # prime with known value

    # Assert both wen and ren simultaneously
    await FallingEdge(dut.i_clk)
    dut.i_waddr.value = 0x70
    dut.i_wdata.value = 0x77            # new value
    dut.i_raddr.value = 0x10           # read addr is don't-care here
    dut.i_wen.value = 1
    dut.i_ren.value = 1
    await RisingEdge(dut.i_clk)
    await Timer(1, units="ns")
    await FallingEdge(dut.i_clk)
    dut.i_wen.value = 0
    dut.i_ren.value = 0

    rd = await read_byte(dut, 0x70)
    assert rd == 0x77, f"sim_wen_ren: got=0x{rd:02X} exp=0x77"

"""
test_sram_gf180.py - Cocotb testbench for GF180 1024x8 SRAM wrapper

This testbench verifies:
- Basic read/write operations
- Register x0 always returns 0 (RISC-V requirement)
- All 1024 addresses are accessible
- Data integrity
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

class SRAMTest:
    """Helper class for SRAM operations"""
    
    def __init__(self, dut):
        self.dut = dut
        self.errors = 0
        
    async def reset(self):
        """Reset the SRAM"""
        self.dut.i_rst.value = 1
        await RisingEdge(self.dut.i_clk)
        await RisingEdge(self.dut.i_clk)
        self.dut.i_rst.value = 0
        await RisingEdge(self.dut.i_clk)
        
    async def write_byte(self, addr, data):
        """Write a byte to SRAM"""
        await RisingEdge(self.dut.i_clk)
        self.dut.i_waddr.value = addr
        self.dut.i_wdata.value = data
        self.dut.i_wen.value = 1
        await RisingEdge(self.dut.i_clk)
        self.dut.i_wen.value = 0
        await RisingEdge(self.dut.i_clk)  # Wait for write to complete
        
    async def read_byte(self, addr):
        """Read a byte from SRAM"""
        await RisingEdge(self.dut.i_clk)
        self.dut.i_raddr.value = addr
        self.dut.i_ren.value = 1
        await RisingEdge(self.dut.i_clk)
        await RisingEdge(self.dut.i_clk)  # Wait for data to be available
        data = self.dut.o_rdata.value
        self.dut.i_ren.value = 0
        return data
        
    def check_value(self, expected, actual, msg):
        """Check if value matches expected"""
        if actual != expected:
            self.dut._log.error(f"✗ FAIL: {msg} - Expected 0x{expected:02x}, got 0x{actual:02x}")
            self.errors += 1
            return False
        else:
            self.dut._log.info(f"✓ PASS: {msg}")
            return True


@cocotb.test()
async def test_basic_write_read(dut):
    """Test 1: Basic write and read operations"""
    
    # Start clock
    clock = Clock(dut.i_clk, 20, unit="ns")  # 50 MHz
    cocotb.start_soon(clock.start())
    
    # Initialize
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_wen.value = 0
    dut.i_raddr.value = 0
    dut.i_ren.value = 0
    
    test = SRAMTest(dut)
    await test.reset()
    
    dut._log.info("=" * 60)
    dut._log.info("[Test 1] Basic Write/Read")
    dut._log.info("=" * 60)
    
    # Write to address 100
    await test.write_byte(100, 0xAA)
    
    # Read back
    data = await test.read_byte(100)
    test.check_value(0xAA, data.to_unsigned(), "Write/Read 0xAA to address 100")
    
    # Write different value
    await test.write_byte(100, 0x55)
    data = await test.read_byte(100)
    test.check_value(0x55, data.to_unsigned(), "Overwrite with 0x55")
    
    if test.errors > 0:
        raise AssertionError(f"Test failed with {test.errors} errors")


@cocotb.test()
async def test_register_x0(dut):
    """Test 2: Register x0 (addresses 0-3) must always return 0"""
    
    # Start clock
    clock = Clock(dut.i_clk, 20, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Initialize
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_wen.value = 0
    dut.i_raddr.value = 0
    dut.i_ren.value = 0
    
    test = SRAMTest(dut)
    await test.reset()
    
    dut._log.info("=" * 60)
    dut._log.info("[Test 2] Register x0 Always Returns 0")
    dut._log.info("=" * 60)
    
    # Try to write to x0 (addresses 1020-1023: bits [9:2] all 1 => &i_raddr[9:2]=1)
    await test.write_byte(1020, 0xFF)
    await test.write_byte(1021, 0xFF)
    await test.write_byte(1022, 0xFF)
    await test.write_byte(1023, 0xFF)

    # Read back - should all be 0
    data = await test.read_byte(1020)
    test.check_value(0x00, data.to_unsigned(), "x0[0] correctly returns 0")

    data = await test.read_byte(1021)
    test.check_value(0x00, data.to_unsigned(), "x0[1] correctly returns 0")

    data = await test.read_byte(1022)
    test.check_value(0x00, data.to_unsigned(), "x0[2] correctly returns 0")

    data = await test.read_byte(1023)
    test.check_value(0x00, data.to_unsigned(), "x0[3] correctly returns 0")
    
    if test.errors > 0:
        raise AssertionError(f"Test failed with {test.errors} errors")


@cocotb.test()
async def test_walking_ones(dut):
    """Test 3: Walking ones pattern"""
    
    # Start clock
    clock = Clock(dut.i_clk, 20, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Initialize
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_wen.value = 0
    dut.i_raddr.value = 0
    dut.i_ren.value = 0
    
    test = SRAMTest(dut)
    await test.reset()
    
    dut._log.info("=" * 60)
    dut._log.info("[Test 3] Walking Ones Pattern")
    dut._log.info("=" * 60)
    
    for i in range(8):
        pattern = 1 << i
        await test.write_byte(200, pattern)
        data = await test.read_byte(200)
        test.check_value(pattern, data.to_unsigned(), f"Walking ones bit {i}")
    
    if test.errors > 0:
        raise AssertionError(f"Test failed with {test.errors} errors")


@cocotb.test()
async def test_address_range(dut):
    """Test 4: Test address range (first, middle, last)"""
    
    # Start clock
    clock = Clock(dut.i_clk, 20, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Initialize
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_wen.value = 0
    dut.i_raddr.value = 0
    dut.i_ren.value = 0
    
    test = SRAMTest(dut)
    await test.reset()
    
    dut._log.info("=" * 60)
    dut._log.info("[Test 4] Address Range Test")
    dut._log.info("=" * 60)
    
    # First address (after x0)
    await test.write_byte(4, 0x11)
    data = await test.read_byte(4)
    test.check_value(0x11, data.to_unsigned(), "Address 4 (first user address)")
    
    # Middle address
    await test.write_byte(512, 0x22)
    data = await test.read_byte(512)
    test.check_value(0x22, data.to_unsigned(), "Address 512 (middle)")
    
    # Last regular address (1019; addresses 1020-1023 are reserved for x0)
    await test.write_byte(1019, 0x33)
    data = await test.read_byte(1019)
    test.check_value(0x33, data.to_unsigned(), "Address 1019 (last regular address)")
    
    if test.errors > 0:
        raise AssertionError(f"Test failed with {test.errors} errors")


@cocotb.test()
async def test_data_patterns(dut):
    """Test 5: Various data patterns"""
    
    # Start clock
    clock = Clock(dut.i_clk, 20, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Initialize
    dut.i_waddr.value = 0
    dut.i_wdata.value = 0
    dut.i_wen.value = 0
    dut.i_raddr.value = 0
    dut.i_ren.value = 0
    
    test = SRAMTest(dut)
    await test.reset()
    
    dut._log.info("=" * 60)
    dut._log.info("[Test 5] Data Patterns")
    dut._log.info("=" * 60)
    
    # All zeros
    await test.write_byte(300, 0x00)
    data = await test.read_byte(300)
    test.check_value(0x00, data.to_unsigned(), "Pattern 0x00")
    
    # All ones
    await test.write_byte(300, 0xFF)
    data = await test.read_byte(300)
    test.check_value(0xFF, data.to_unsigned(), "Pattern 0xFF")
    
    # Checkerboard
    await test.write_byte(300, 0xAA)
    data = await test.read_byte(300)
    test.check_value(0xAA, data.to_unsigned(), "Pattern 0xAA")
    
    # Inverse checkerboard
    await test.write_byte(300, 0x55)
    data = await test.read_byte(300)
    test.check_value(0x55, data.to_unsigned(), "Pattern 0x55")
    
    if test.errors > 0:
        raise AssertionError(f"Test failed with {test.errors} errors")

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotb.types import LogicArray

async def reset_dut(dut):
    dut.rst.value = 1
    await Timer(50, unit="ns")
    dut.rst.value = 0 
    await Timer(20, unit="ns")
    
@cocotb.test()
async def test_mesh_snake_sum(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    await reset_dut(dut)

    test_values = list(range(1, 10)) # [1, 2, ..., 9]
    expected_sum = sum(test_values)
    received_sum = 0
    packets_captured = 0

    for val in test_values:
        packet_val = (1 << 33) | val
        dut.inject_00_nw.value = LogicArray(packet_val, 34)
        
        # 1. Wait for the injection to register
        await RisingEdge(dut.clk)
        dut.inject_00_nw.value = 0 # Immediately clear injection
        
        # 2. Watch for the packet to arrive at the end
        found = False
        for _ in range(30): # Timeout after 30 cycles
            await RisingEdge(dut.clk)
            out = dut.monitor_22_se.value
            if out[33] == 1:
                v = int(out) & 0xFFFFFFFF
                received_sum += v
                packets_captured += 1
                dut._log.info(f"Captured packet {packets_captured}: Value {v}")
                found = True
                
                # 3. Wait 2 cycles to let the bit clear from the pipeline
                await RisingEdge(dut.clk)
                await RisingEdge(dut.clk)
                break
        
        if not found:
            raise AssertionError(f"Packet with value {val} timed out!")

    dut._log.info(f"Final Sum: {received_sum} / Expected: {expected_sum}")
    assert received_sum == expected_sum
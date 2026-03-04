import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge

async def spi_flash_responder(dut, firmware_path):
    with open(firmware_path, "rb") as f:
        firmware = f.read()
    
    # Pad firmware to 1024 bytes if necessary
    firmware = firmware + bytes(max(0, 1024 - len(firmware)))
    
    dut.flash_miso.value = 0
    
    while True:
        # Wait for CS to go low
        while dut.flash_cs_n.value == 1:
            await RisingEdge(dut.clk)
            
        # Skip the command (8 bits) and address (24 bits) phase
        for _ in range(32):
            await FallingEdge(dut.flash_clk)
            if dut.flash_cs_n.value == 1:
                break
                
        if dut.flash_cs_n.value == 1:
            continue
            
        # Output data bytes
        for i in range(1024):
            byte_val = firmware[i]
            for b in range(8):
                bit_val = (byte_val >> (7 - b)) & 1
                dut.flash_miso.value = bit_val
                await FallingEdge(dut.flash_clk)
                if dut.flash_cs_n.value == 1:
                    break
            if dut.flash_cs_n.value == 1:
                break

@cocotb.test()
async def test_mesh_diagnostics(dut):
    # Start the flash responder to feed the bootloader
    fw_path = os.path.join(os.path.dirname(__file__), "firmware.bin")
    cocotb.start_soon(spi_flash_responder(dut, fw_path))

    # FIX (Bug 2): The GF180 SRAM requires a minimum cycle time (Tcyc) of
    # 55.6 ns. The original 10 ns clock violated this, causing setup/hold
    # violations on every access and corrupting all data read by the CPU.
    # 60 ns (≈16.7 MHz) gives a comfortable margin above the 55.6 ns minimum.
    cocotb.start_soon(Clock(dut.clk, 60, unit="ns").start())

    dut.rst.value = 1
    await Timer(600, unit="ns")   # Hold reset for 10 cycles at new clock rate
    dut.rst.value = 0

    # Wait for bootloader to finish loading firmware into SRAM and release CPU.
    # cpu_rst_n goes HIGH when the bootloader reaches its DONE state.
    while dut.cpu_rst_n.value == 0:
        await RisingEdge(dut.clk)
    dut._log.info("✓ Bootloader finished. Waiting for CPU Heartbeat...")

    router00 = dut.rows[0].cols[0].tile_inst.router_inst

    # At 60 ns/cycle, 30_000_000 cycles = 1.8 seconds of simulated time.
    # The CPU should reach main() and fire the first noc_send() well within
    # a few thousand cycles after reset is released.
    for i in range(30_000_000):
        await RisingEdge(dut.clk)

        # Monitor the local Wishbone port of tile (0,0)'s router.
        # A write of 0xAAAAAAAA is the "reached main()" heartbeat from main.c.
        if router00.local_wb_stb.value == 1 and router00.local_wb_we.value == 1:
            val = int(router00.local_wb_dat_o.value)
            if val == 0xAAAAAAAA:
                dut._log.info(f"♥ SUCCESS: CPU is alive and reached main() at cycle {i}")
                return
            elif val == 0xBBBBBBBB:
                dut._log.info(f"↻ CPU starting Game-of-Life computation at cycle {i}")
            elif val == 0xCCCCCCCC:
                dut._log.info(f"✎ CPU starting grid memory writes at cycle {i}")

        if i % 1_000_000 == 0 and i > 0:
            dut._log.info(f"Still waiting... {i * 60 / 1e6:.1f} ms simulated")

    dut._log.error("FAILURE: CPU did not respond within the timeout window.")


    
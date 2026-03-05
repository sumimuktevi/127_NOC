import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge
import os

def get_firmware_bytes():
    try:
        with open("firmware.bin", "rb") as f:
            data = list(f.read())
            return data + [0] * (1024 - len(data))
    except FileNotFoundError:
        # Fallback for testing: A simple RISC-V NOP slide or jump
        return [0x13, 0x00, 0x00, 0x00] * 256 

async def spi_flash_responder(dut):
    """
    Matches the logic in boot_loader.v:
    1. Wait for CS low
    2. Skip 32 bits (Command + Address)
    3. Shift out firmware bytes
    """
    firmware = get_firmware_bytes()
    
    while True:
        await FallingEdge(dut.flash_cs_n)
        dut._log.info("[SPI Simulation] Flash Chip Selected")
        
        # 1. Skip the Command (8 bits) and Address (24 bits) = 32 bits total
        # The bootloader sends these, but we just need to wait for them to finish
        for _ in range(32):
            await RisingEdge(dut.flash_clk)
            
        # 2. Start sending data
        for byte in firmware:
            for bit in range(7, -1, -1):
                # Drive MISO on the falling edge so it is stable for the 
                # bootloader to sample on the rising edge
                await FallingEdge(dut.flash_clk)
                dut.flash_miso.value = (byte >> bit) & 0x1
        
        await RisingEdge(dut.flash_cs_n)
        dut._log.info("[SPI Simulation] Flash Chip Deselected")

@cocotb.test()
async def dump_entire_mesh_sram(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    # Initialize signals
    dut.rst.value = 1
    dut.flash_miso.value = 0
    await Timer(100, unit="ns")
    dut.rst.value = 0

    # Start the SPI responder
    cocotb.start_soon(spi_flash_responder(dut))

    # Wait for the Hardware Bootloader to signal completion
    dut._log.info("Waiting for hardware bootloader...")
    while int(dut.boot_inst.cpu_reset_n.value) == 0:
        await Timer(1, unit="us")
    
    dut._log.info("Bootloading complete. Starting Full SRAM Dump...")

    for r in range(3):
        for c in range(3):
            dut._log.info(f"========== TILE ({r},{c}) SRAM DUMP ==========")
            # Hierarchical access to the Verilog SRAM model
            sram_mem = dut.rows[r].cols[c].tile_inst.sram_inst.mem
            
            for addr in range(0, 1024, 16):
                line_vals = []
                for i in range(16):
                    val = int(sram_mem[addr + i].value)
                    line_vals.append(f"{val:02x}")
                
                # We print EVERY line now so you can see the structure
                dut._log.info(f"0x{addr:03x}: {' '.join(line_vals)}")












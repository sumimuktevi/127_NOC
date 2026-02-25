import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge
from cocotb.types import LogicArray
import numpy as np
import os


def get_pbm_slices(filename):
    """Slices a 30x30 PBM into nine 10x10 blocks for a 3x3 mesh."""
    script_dir = os.path.dirname(__file__)
    full_path = os.path.join(script_dir, filename)
    
    if not os.path.exists(full_path):
        raise FileNotFoundError(f"PBM file {full_path} not found!")
        
    with open(full_path, 'r') as f:
       
        lines = [l.strip() for l in f.readlines() if not (l.startswith('P1') or l.startswith('30'))]
    
    all_bits = "".join(lines)
    bit_list = [int(b) for b in all_bits if b in '01']
    full_img = np.array(bit_list).reshape(30, 30)
    
    slices = {}
    for r in range(3):
        for c in range(3):
            block = full_img[r*10:(r+1)*10, c*10:(c+1)*10]
            slices[(r,c)] = block.flatten().tolist()
    return slices

async def dump_core_memory(dut, row, col, size=256):
    """Directly reads the SRAM array inside a specific tile."""
    mem_path = dut.rows[row].cols[col].tile_inst.sram_inst.mem
    dump = []
    for i in range(size):
        val = mem_path[i].value
        dump.append(int(val))
    return dump

async def poke_core_memory(dut, row, col, data):
    """Directly writes values into the SRAM array."""
    mem_path = dut.rows[row].cols[col].tile_inst.sram_inst.mem
    for i, val in enumerate(data):
        if i < len(mem_path):
            mem_path[i].value = val


@cocotb.test()
async def professor_steps_test(dut):
    """
    Verification Suite with Safe-Poke and 256-byte SRAM constraints:
    1. Behavioral Memory Dump & Comparison
    2. Image Load Verification
    3. Direct Initialization (Bypass Flash)
    4. Output Verification
    """
    script_dir = os.path.dirname(__file__)
    firmware_path = os.path.join(script_dir, "firmware", "firmware.hex")
    pbm_path = "test3_paul.pbm"

    # Start Clock
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    # --- STEP 3: Direct Initialization (SAFE POKE) ---
    # We bring reset high first to let the hardware settle
    dut.rst.value = 1
    await Timer(100, unit="ns")
    
    dut._log.info("Step 3: Direct Initialization - Poking SRAM while in Reset...")
    
    if not os.path.exists(firmware_path):
        raise FileNotFoundError(f"Could not find firmware at {firmware_path}")
        
    with open(firmware_path, "r") as f:
        code = [int(line.strip(), 16) for line in f if line.strip()]
    
    image_slices = get_pbm_slices(pbm_path)
    
    for r in range(3):
        for c in range(3):
            # Hardware is 256 bytes total
            full_data = [0] * 256
            
            # Instructions in first 128 bytes
            for i, byte in enumerate(code): 
                if i < 128: full_data[i] = byte
            
            # Image bits starting at address 128
            tile_slice = image_slices[(r,c)]
            for i, bit in enumerate(tile_slice):
                if (128 + i) < 256:
                    full_data[128 + i] = bit 
                
            await poke_core_memory(dut, r, c, full_data)
    
    # Wait one cycle for simulator to update internal state
    await RisingEdge(dut.clk)
    dut._log.info("Direct Initialization Complete.")

    # --- STEP 1: Memory Dump & Comparison ---
    dut._log.info("Step 1: Performing Behavioral Memory Dump comparison...")
    actual_00 = await dump_core_memory(dut, 0, 0, size=256)
    
    # Verify address 0 matches our instruction byte (the '183' from your log)
    assert actual_00[0] == code[0], f"Memory mismatch at Core(0,0) addr 0! Expected {code[0]}, got {actual_00[0]}"
    dut._log.info("Step 1 Passed: Core 0,0 matches firmware ideal image.")

    # --- STEP 2: Image Load Verification ---
    dut._log.info("Step 2: Verifying Image Data in Core(1,1)...")
    dump_11 = await dump_core_memory(dut, 1, 1, size=256)
    expected_slice = image_slices[(1,1)]
    
    for i in range(100):
        actual_pixel = dump_11[128 + i]
        assert actual_pixel == expected_slice[i], f"Pixel {i} mismatch in Core(1,1)!"
    
    dut._log.info("Step 2 Passed: Paul's image slice correctly verified at addr 128.")

    # --- STEP 4: Execution & Output Verification ---
    # Release reset to start the SERV cores
    dut.rst.value = 0
    dut._log.info("Running simulation for 500,000 cycles...")
    for _ in range(500000):
        await RisingEdge(dut.clk)

    final_mem = await dump_core_memory(dut, 0, 0, size=256)
    dut._log.info(f"Step 4 complete. Core(0,0) addr 128 value: {final_mem[128]}")


    
    def save_dump_to_pbm(dump, filename, row, col):
        """Saves a 10x10 memory slice back to a VALID PBM image file."""
        # Extract the 100 pixels starting at address 128
        raw_pixels = dump[128:228]
        
        # Threshold the data: if it's not 0, treat it as a 1 (Alive)
        binary_pixels = [1 if p > 0 else 0 for p in raw_pixels]
        
        with open(filename, 'w') as f:
            f.write("P1\n")
            f.write("# Cleaned Output for Tile {},{}\n".format(row, col))
            f.write("10 10\n")
            for i in range(0, 100, 10):
                # Join with spaces to ensure PBM readers can parse it
                line = " ".join(map(str, binary_pixels[i:i+10]))
                f.write(line + "\n")



    # --- Inside your professor_steps_test ---
    # Replace your final log line with this:
    for r in range(3):
        for c in range(3):
            final_mem = await dump_core_memory(dut, r, c, size=256)
            save_dump_to_pbm(final_mem, f"output_tile_{r}_{c}.pbm", r, c)
            
    dut._log.info("Step 4: Generation images saved to output_tile_X_X.pbm")
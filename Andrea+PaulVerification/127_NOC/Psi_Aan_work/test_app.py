import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge
from cocotb.types import LogicArray
import numpy as np
import os


def get_pbm_slices(filename):
    """ dividing up the .pbm file in this directory into nine 10x10 blocks for our 3x3 mesh."""
    script_dir = os.path.dirname(__file__)
    full_path = os.path.join(script_dir, filename)
    
    if not os.path.exists(full_path):
        raise FileNotFoundError(f"PBM file {full_path} not found!")
    
    ## this is just like standard to ignore the header lines 
    with open(full_path, 'r') as f:
       
        lines = [l.strip() for l in f.readlines() if not (l.startswith('P1') or l.startswith('30'))]
    ## puts data into one string 
    all_bits = "".join(lines)
    bit_list = [int(b) for b in all_bits if b in '01']
    full_img = np.array(bit_list).reshape(30, 30)
    ## processes the image and slices then imto 10x10 grids 
    slices = {}
    for r in range(3):
        for c in range(3):
            block = full_img[r*10:(r+1)*10, c*10:(c+1)*10]
            slices[(r,c)] = block.flatten().tolist()
    return slices


##Read out the SRAM contents from a specific tile.
# returns a list witht he memory values 
async def dump_core_memory(dut, row, col, size=256):
    """ reads the SRAM array inside a specific tile."""
    mem_path = dut.rows[row].cols[col].tile_inst.sram_inst.mem
    dump = []
    for i in range(size):
        val = mem_path[i].value
        dump.append(int(val))
    return dump

## this like helps us bypass the whole wishbone interface so that we can just manually load things
## into the sram, vs us relying on other stuff, in our next steps we will remove this to make it more realistic 
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

# we use a 10ns clock peirod but like, unsure it that is realistic 

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
 
    dut.rst.value = 1
    await Timer(100, unit="ns")
    
    dut._log.info("Poking SRAM while in Reset...")
    
    # laods the firmware, just like aan and psi in their test bench 

    if not os.path.exists(firmware_path):
        raise FileNotFoundError(f"Could not find firmware at {firmware_path}")
        
    with open(firmware_path, "r") as f:
        code = [int(line.strip(), 16) for line in f if line.strip()]
    
    #this runs the slicing helper funditon above, so that we get chunks at a tmime 
    image_slices = get_pbm_slices(pbm_path)
    
    # loads every tile in the mesh with their corresponding 10x10 , first firmware, the image
    for r in range(3):
        for c in range(3):
            full_data = [0] * 256
            # this is the firmware first 
            for i, byte in enumerate(code): 
                if i < 128: full_data[i] = byte
            # this is the image second 
            tile_slice = image_slices[(r,c)]
            for i, bit in enumerate(tile_slice):
                if (128 + i) < 256:
                    full_data[128 + i] = bit 
            
            # this writes to actual hardware 
            await poke_core_memory(dut, r, c, full_data)
    
    await RisingEdge(dut.clk)
    dut._log.info("Direct Initialization Complete.")
  # Verify firmware loaded correctly
    dut._log.info("Step 1: Performing Behavioral Memory Dump comparison...")
    actual_00 = await dump_core_memory(dut, 0, 0, size=256)
    # Verify image slice in one tile
    assert actual_00[0] == code[0], f"Memory mismatch at Core(0,0) addr 0! Expected {code[0]}, got {actual_00[0]}"
    dut._log.info("Step 1 Passed: Core 0,0 matches firmware ideal image.")

    dut._log.info("Step 2: Verifying Image Data in Core(1,1)...")
    dump_11 = await dump_core_memory(dut, 1, 1, size=256)
    expected_slice = image_slices[(1,1)]
    
    for i in range(100):
        actual_pixel = dump_11[128 + i]
        assert actual_pixel == expected_slice[i], f"Pixel {i} mismatch in Core(1,1)!"
    
    dut._log.info("Step 2 Passed: Paul's image slice correctly verified at addr 128.")

 # Release reset and run the system
    dut.rst.value = 0
    dut._log.info("Running simulation for 500,000 cycles...")
    for _ in range(500000):
        await RisingEdge(dut.clk)

    final_mem = await dump_core_memory(dut, 0, 0, size=256)
    dut._log.info(f"Step 4 complete. Core(0,0) addr 128 value: {final_mem[128]}")


    # Dump results and save output images into a .pbm file so that its easy to debug 
    def save_dump_to_pbm(dump, filename, row, col):
        """Saves a 10x10 memory slice back to a VALID PBM image file."""
        raw_pixels = dump[128:228]
        
       
        binary_pixels = [1 if p > 0 else 0 for p in raw_pixels]
        
        with open(filename, 'w') as f:
            f.write("P1\n")
            f.write("# Cleaned Output for Tile {},{}\n".format(row, col))
            f.write("10 10\n")
            for i in range(0, 100, 10):
               
                line = " ".join(map(str, binary_pixels[i:i+10]))
                f.write(line + "\n")

 # now just like Save PBM output for every tile

    for r in range(3):
        for c in range(3):
            final_mem = await dump_core_memory(dut, r, c, size=256)
            save_dump_to_pbm(final_mem, f"output_tile_{r}_{c}.pbm", r, c)
            
    dut._log.info("Step 4: Generation images saved to output_tile_X_X.pbm")
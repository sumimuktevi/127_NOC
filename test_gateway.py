import cocotb
from cocotb.triggers import Timer, RisingEdge
import numpy as np
from PIL import Image
import sys
import os

# ============================================================================
# PART 1: SPI DRIVER & PACKET LOGIC
# ============================================================================
def create_packet(opcode, core_x, core_y, row_addr, row_data):
    """Constructs the 32-bit packet: [Op:4][X:2][Y:2][Row:4][Data:10]"""
    return (opcode << 28) | (core_x << 22) | (core_y << 20) | (row_addr << 16) | (row_data & 0x3FF)

async def spi_transfer_logic(dut, val_to_send):
    """32-bit SPI transaction: Clocks MOSI out and captures MISO in"""
    dut.cs.value = 0
    received_val = 0
    for i in range(32):
        dut.mosi.value = (val_to_send >> (31 - i)) & 1
        await Timer(5, "ns")
        dut.clk.value = 1
        await Timer(5, "ns")
        res = dut.miso.value
        bit = 0 if (not res.is_resolvable) else int(res)
        received_val = (received_val << 1) | bit
        dut.clk.value = 0
    dut.cs.value = 1
    # Allow time for 'ready' pulse and 'packet_out' update in hardware
    await Timer(20, "ns") 
    return received_val

# ============================================================================
# PART 2: MULTI-FORMAT IMAGE PROCESSING
# ============================================================================
def process_image_to_tiles(image_path):
    ext = os.path.splitext(image_path)[1].lower()
    if ext == '.pbm':
        with open(image_path, 'r') as f:
            content = " ".join([line.split('#')[0] for line in f.readlines()])
            words = content.split()
            width, height = int(words[1]), int(words[2])
            raw_bits = "".join(words[3:])
            flat_array = np.array([int(b) for b in raw_bits if b in '01'])
            resized_array = flat_array.reshape((height, width))
    else:
        img = Image.open(image_path).convert('L')
        binary_full = (np.array(img) < 128).astype(int)
        temp_img = Image.fromarray((binary_full * 255).astype(np.uint8))
        resized_img = temp_img.resize((30, 30), Image.Resampling.NEAREST)
        resized_array = (np.array(resized_img) > 128).astype(int)

    tile_size = 10
    tiles_data = {}
    for ty in range(3):
        for tx in range(3):
            y_s, y_e = ty * tile_size, (ty + 1) * tile_size
            x_s, x_e = tx * tile_size, (tx + 1) * tile_size
            tiles_data[(tx, ty)] = resized_array[y_s:y_e, x_s:x_e]
    return tiles_data

# ============================================================================
# PART 3: 3x3 MESH VERIFICATION TEST
# ============================================================================
@cocotb.test()
async def test_full_pipeline(dut):
    # 1. Hardware Reset/Init
    dut.mosi.value = 0
    dut.cs.value = 1
    dut.clk.value = 0
    await Timer(100, "ns")

    # Change filename to your desired input
    input_file = 'test4_out.pbm' 
    if not os.path.exists(input_file):
        dut._log.error(f"File {input_file} not found!")
        return

    tiles_data = process_image_to_tiles(input_file)
    dut._log.info("--- Starting 3x3 Mesh Verification ---")

    # 2. Iterate through all 9 Cores
    for (tx, ty), grid in sorted(tiles_data.items()):
        dut._log.info(f"Testing Core ({tx}, {ty})...")
        
        for row_idx in range(10):
            # Convert row to integer (MSB first)
            expected_bits = 0
            for bit in grid[row_idx]:
                expected_bits = (expected_bits << 1) | int(bit)
            
            # Injection Phase (MOSI)
            write_packet = create_packet(1, tx, ty, row_idx, expected_bits)
            await spi_transfer_logic(dut, write_packet)
            
            # Validation Phase
            if tx == 0 and ty == 0:
                # Local Core: Verify via MISO read-back
                await spi_transfer_logic(dut, create_packet(2, 0, 0, row_idx, 0))
                captured = await spi_transfer_logic(dut, create_packet(2, 0, 0, row_idx, 0))
                actual_bits = captured & 0x3FF
                mode = "SRAM_READ"
            else:
                # Remote Cores: Verify via packet_out bus monitoring
                # The hardware updates packet_out immediately after CS goes high
                actual_bits = int(dut.packet_out.value) & 0x3FF
                mode = "BUS_FORWARD"

            # Results Logging
            visual = bin(actual_bits)[2:].zfill(10).replace('1', '#').replace('0', '.')
            if actual_bits == expected_bits:
                dut._log.info(f"Core({tx},{ty}) R{row_idx}: {visual} [MATCH via {mode}]")
            else:
                dut._log.error(f"Core({tx},{ty}) R{row_idx}: {visual} [MISMATCH! Mode: {mode}, Exp: {hex(expected_bits)}]")

    dut._log.info("--- 3x3 Mesh Verification Complete ---")


# import cocotb
# from cocotb.triggers import Timer
# import numpy as np
# from PIL import Image
# import sys
# import os

# # ============================================================================
# # PART 1: SPI DRIVER & PACKET LOGIC
# # ============================================================================
# def create_packet(opcode, core_x, core_y, row_addr, row_data):
#     """Constructs the 32-bit packet: [Op:4][X:2][Y:2][Row:4][Data:10]"""
#     return (opcode << 28) | (core_x << 22) | (core_y << 20) | (row_addr << 16) | (row_data & 0x3FF)

# async def spi_transfer_logic(dut, val_to_send):
#     """32-bit SPI transaction: Clocks MOSI out and captures MISO in"""
#     dut.cs.value = 0
#     received_val = 0
#     for i in range(32):
#         dut.mosi.value = (val_to_send >> (31 - i)) & 1
#         await Timer(5, "ns")
#         dut.clk.value = 1
#         await Timer(5, "ns")
#         res = dut.miso.value
#         bit = 0 if (not res.is_resolvable) else int(res)
#         received_val = (received_val << 1) | bit
#         dut.clk.value = 0
#     dut.cs.value = 1
#     await Timer(20, "ns") 
#     return received_val

# # ============================================================================
# # PART 2: MULTI-FORMAT IMAGE PROCESSING (PNG/JPG & PBM)
# # ============================================================================
# def process_image_to_tiles(image_path):
#     """
#     Handles both PBM (Plain P1) and standard image formats.
#     Automatically downsamples or parses to a 30x30 grid.
#     """
#     ext = os.path.splitext(image_path)[1].lower()
    
#     if ext == '.pbm':
#         print(f"--- Parsing PBM Text File: {image_path} ---")
#         with open(image_path, 'r') as f:
#             # Clean comments and get all words
#             content = " ".join([line.split('#')[0] for line in f.readlines()])
#             words = content.split()
            
#             if words[0] != 'P1':
#                 raise ValueError("Only Plain PBM (P1) is supported.")
            
#             # words[1] is width, words[2] is height
#             # We assume a 30x30 grid for this NoC
#             width, height = int(words[1]), int(words[2])
#             raw_bits = "".join(words[3:])
            
#             # Convert to a 2D numpy array
#             flat_array = np.array([int(b) for b in raw_bits if b in '01'])
#             resized_array = flat_array.reshape((height, width))
            
#             # If the PBM isn't 30x30, we resize it to fit our 3x3 mesh
#             if width != 30 or height != 30:
#                 temp_img = Image.fromarray((resized_array * 255).astype(np.uint8))
#                 resized_img = temp_img.resize((30, 30), Image.Resampling.NEAREST)
#                 resized_array = (np.array(resized_img) > 128).astype(int)
    
#     else:
#         print(f"--- Processing Standard Image: {image_path} ---")
#         img = Image.open(image_path).convert('L')
#         img_array = np.array(img)
        
#         # Binary threshold: pixels < 128 are "alive"
#         binary_full = (img_array < 128).astype(int)
        
#         # Resize to 30x30 for the 3x3 mesh
#         temp_img = Image.fromarray((binary_full * 255).astype(np.uint8))
#         resized_img = temp_img.resize((30, 30), Image.Resampling.NEAREST)
#         resized_array = (np.array(resized_img) > 128).astype(int)

#     # Slice 30x30 into nine 10x10 tiles
#     tile_size = 10
#     tiles_data = {}
#     for ty in range(3):
#         for tx in range(3):
#             y_s, y_e = ty * tile_size, (ty + 1) * tile_size
#             x_s, x_e = tx * tile_size, (tx + 1) * tile_size
#             tiles_data[(tx, ty)] = resized_array[y_s:y_e, x_s:x_e]
            
#     return tiles_data

# # ============================================================================
# # PART 3: INTEGRATION WRAPPER
# # ============================================================================
# async def load_tiles_to_noc(dut, tiles_data):
#     dut._log.info("--- Starting SPI Hardware Injection ---")
#     for (tx, ty), grid in sorted(tiles_data.items()):
#         dut._log.info(f"Uploading Tile ({tx}, {ty})")
#         for row_idx in range(10):
#             # Build integer bit-by-bit (MSB first)
#             row_bits = 0
#             for bit in grid[row_idx]:
#                 row_bits = (row_bits << 1) | int(bit)
            
#             packet = create_packet(1, tx, ty, row_idx, row_bits)
#             await spi_transfer_logic(dut, packet)

# # ============================================================================
# # PART 4: TEST EXECUTION & VALIDATION
# # ============================================================================
# @cocotb.test()
# async def test_full_pipeline(dut):
#     # Hardware Reset
#     dut.mosi.value = 0
#     dut.cs.value = 1
#     dut.clk.value = 0
#     await Timer(100, "ns")

#     # Change filename here to test .pbm or .png
#     input_file = 'taes2paul.pbm' 
    
#     if not os.path.exists(input_file):
#         dut._log.error(f"File {input_file} not found! Please check the folder.")
#         return

#     tiles_data = process_image_to_tiles(input_file)
#     await load_tiles_to_noc(dut, tiles_data)

#     # Verification for Core(0,0)
#     dut._log.info("--- Verifying Core(0,0) Integrity ---")
#     original_tile = tiles_data[(0,0)]
    
#     for r in range(10):
#         await spi_transfer_logic(dut, create_packet(2, 0, 0, r, 0))
#         captured = await spi_transfer_logic(dut, create_packet(2, 0, 0, r, 0))
#         actual_bits = captured & 0x3FF
        
#         # Expected value from our local tiles_data
#         expected_bits = 0
#         for bit in original_tile[r]:
#             expected_bits = (expected_bits << 1) | int(bit)
            
#         visual = bin(actual_bits)[2:].zfill(10).replace('1', '#').replace('0', '.')
#         if actual_bits == expected_bits:
#             dut._log.info(f"Row {r}: {visual} [MATCH]")
#         else:
#             dut._log.error(f"Row {r}: {visual} [MISMATCH! Expected {hex(expected_bits)}]")



# import cocotb
# from cocotb.triggers import Timer
# import numpy as np
# from PIL import Image, ImageDraw
# import sys

# # ============================================================================
# # PART 1: SPI DRIVER & PACKET LOGIC
# # ============================================================================
# def create_packet(opcode, core_x, core_y, row_addr, row_data):
#     """Constructs the 32-bit packet: [Op:4][X:2][Y:2][Row:4][Data:10]"""
#     return (opcode << 28) | (core_x << 22) | (core_y << 20) | (row_addr << 16) | (row_data & 0x3FF)

# async def spi_transfer_logic(dut, val_to_send):
#     dut.cs.value = 0
#     received_val = 0
#     for i in range(32):
#         dut.mosi.value = (val_to_send >> (31 - i)) & 1
#         await Timer(5, "ns")
#         dut.clk.value = 1
#         await Timer(5, "ns")
#         res = dut.miso.value
#         bit = 0 if (not res.is_resolvable) else int(res)
#         received_val = (received_val << 1) | bit
#         dut.clk.value = 0
#     dut.cs.value = 1
#     await Timer(20, "ns") 
#     return received_val

# # ============================================================================
# # PART 2: IMAGE PROCESSING
# # ============================================================================
# def process_image_to_tiles(image_path):
#     img = Image.open(image_path).convert('L')
#     img_array = np.array(img)
    
#     # Simple thresholding for the testbench
#     binary_full = (img_array < 128).astype(int)

#     target_size = 30
#     binary_img = Image.fromarray((binary_full * 255).astype(np.uint8))
#     resized_img = binary_img.resize((target_size, target_size), Image.Resampling.NEAREST)
#     resized_array = (np.array(resized_img) > 128).astype(int)

#     tile_size = 10
#     tiles_data = {}
#     for ty in range(3):
#         for tx in range(3):
#             y_s, y_e = ty * tile_size, (ty + 1) * tile_size
#             x_s, x_e = tx * tile_size, (tx + 1) * tile_size
#             tiles_data[(tx, ty)] = resized_array[y_s:y_e, x_s:x_e]
#     return tiles_data

# # ============================================================================
# # PART 3: INTEGRATION WRAPPER
# # ============================================================================
# async def load_tiles_to_noc(dut, tiles_data):
#     dut._log.info("--- Starting SPI Hardware Injection ---")
#     for (tx, ty), grid in sorted(tiles_data.items()):
#         dut._log.info(f"Uploading Tile ({tx}, {ty})")
#         for row_idx in range(10):
#             # FIX: Explicitly build integer from bit array to avoid reversal
#             row_bits = 0
#             for bit in grid[row_idx]:
#                 row_bits = (row_bits << 1) | int(bit)
            
#             packet = create_packet(1, tx, ty, row_idx, row_bits)
#             await spi_transfer_logic(dut, packet)

# # ============================================================================
# # PART 4: TEST EXECUTION WITH INTEGRITY CHECK
# # ============================================================================
# @cocotb.test()
# async def test_full_pipeline(dut):
#     dut.mosi.value = 0
#     dut.cs.value = 1
#     dut.clk.value = 0
#     await Timer(100, "ns")

#     tiles_data = process_image_to_tiles('input_30x30.png')
#     await load_tiles_to_noc(dut, tiles_data)

#     dut._log.info("--- Verifying Core(0,0) Integrity ---")
#     original_matrix = tiles_data[(0,0)]
    
#     for r in range(10):
#         await spi_transfer_logic(dut, create_packet(2, 0, 0, r, 0))
#         captured = await spi_transfer_logic(dut, create_packet(2, 0, 0, r, 0))
#         actual_bits = captured & 0x3FF
        
#         expected_bits = 0
#         for bit in original_matrix[r]:
#             expected_bits = (expected_bits << 1) | int(bit)
            
#         visual = bin(actual_bits)[2:].zfill(10).replace('1', '#').replace('0', '.')
#         if actual_bits == expected_bits:
#             dut._log.info(f"Row {r}: {visual} [MATCH]")
#         else:
#             dut._log.error(f"Row {r}: {visual} [MISMATCH! Expected {hex(expected_bits)}]")
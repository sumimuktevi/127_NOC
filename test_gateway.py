import cocotb
from cocotb.triggers import Timer
import numpy as np
from PIL import Image, ImageDraw
import sys

# ============================================================================
# PART 1: SPI DRIVER & PACKET LOGIC
# ============================================================================
def create_packet(opcode, core_x, core_y, row_addr, row_data):
    """Constructs the 32-bit packet: [Op:4][X:2][Y:2][Row:4][Data:10]"""
    return (opcode << 28) | (core_x << 22) | (core_y << 20) | (row_addr << 16) | (row_data & 0x3FF)

async def spi_transfer_logic(dut, val_to_send):
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
    await Timer(20, "ns") 
    return received_val

# ============================================================================
# PART 2: IMAGE PROCESSING
# ============================================================================
def process_image_to_tiles(image_path):
    img = Image.open(image_path).convert('L')
    img_array = np.array(img)
    
    # Simple thresholding for the testbench
    binary_full = (img_array < 128).astype(int)

    target_size = 30
    binary_img = Image.fromarray((binary_full * 255).astype(np.uint8))
    resized_img = binary_img.resize((target_size, target_size), Image.Resampling.NEAREST)
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
# PART 3: INTEGRATION WRAPPER
# ============================================================================
async def load_tiles_to_noc(dut, tiles_data):
    dut._log.info("--- Starting SPI Hardware Injection ---")
    for (tx, ty), grid in sorted(tiles_data.items()):
        dut._log.info(f"Uploading Tile ({tx}, {ty})")
        for row_idx in range(10):
            # FIX: Explicitly build integer from bit array to avoid reversal
            row_bits = 0
            for bit in grid[row_idx]:
                row_bits = (row_bits << 1) | int(bit)
            
            packet = create_packet(1, tx, ty, row_idx, row_bits)
            await spi_transfer_logic(dut, packet)

# ============================================================================
# PART 4: TEST EXECUTION WITH INTEGRITY CHECK
# ============================================================================
@cocotb.test()
async def test_full_pipeline(dut):
    dut.mosi.value = 0
    dut.cs.value = 1
    dut.clk.value = 0
    await Timer(100, "ns")

    tiles_data = process_image_to_tiles('input_30x30.png')
    await load_tiles_to_noc(dut, tiles_data)

    dut._log.info("--- Verifying Core(0,0) Integrity ---")
    original_matrix = tiles_data[(0,0)]
    
    for r in range(10):
        await spi_transfer_logic(dut, create_packet(2, 0, 0, r, 0))
        captured = await spi_transfer_logic(dut, create_packet(2, 0, 0, r, 0))
        actual_bits = captured & 0x3FF
        
        expected_bits = 0
        for bit in original_matrix[r]:
            expected_bits = (expected_bits << 1) | int(bit)
            
        visual = bin(actual_bits)[2:].zfill(10).replace('1', '#').replace('0', '.')
        if actual_bits == expected_bits:
            dut._log.info(f"Row {r}: {visual} [MATCH]")
        else:
            dut._log.error(f"Row {r}: {visual} [MISMATCH! Expected {hex(expected_bits)}]")
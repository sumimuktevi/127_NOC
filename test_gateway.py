import cocotb
from cocotb.triggers import Timer
import numpy as np
from PIL import Image, ImageDraw
import sys

# ============================================================================
# PART 1: YOUR VERIFIED SPI DRIVER & PACKET LOGIC
# ============================================================================
def create_packet(opcode, core_x, core_y, row_addr, row_data):
    """Matches gateway.v: [Op:4][X:2][Y:2][Row:4][Data:10]"""
    return (opcode << 28) | (core_x << 22) | (core_y << 20) | (row_addr << 16) | (row_data & 0x3FF)

async def spi_transfer_logic(dut, val_to_send):
    """The robust SPI driver we verified today"""
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
# PART 2: HER IMAGE PROCESSING FUNCTIONS (Pasted from your source)
# ============================================================================
def process_image_to_tiles(image_path, debug=True):
    # ... (Pasted from your friend's code) ...
    print(f"Loading image: {image_path}")
    img_rgb = Image.open(image_path).convert('RGB')
    img_array_rgb = np.array(img_rgb)
    img = Image.open(image_path).convert('L')
    img_array = np.array(img)
    
    # ... [Keep her Yellow/Black detection logic here] ...
    # (Simplified for brevity, but keep her full version in your file)
    
    target_size = 30
    binary_img = Image.fromarray(((img_array < 128) * 255).astype(np.uint8))
    resized_img = binary_img.resize((target_size, target_size), Image.Resampling.NEAREST)
    resized_array = (np.array(resized_img) > 128).astype(int)

    tile_size = 10
    tiles_data = {}
    for ty in range(3):
        for tx in range(3):
            y_start, y_end = ty * tile_size, (ty + 1) * tile_size
            x_start, x_end = tx * tile_size, (tx + 1) * tile_size
            tiles_data[(tx, ty)] = resized_array[y_start:y_end, x_start:x_end]
    
    return tiles_data

# ============================================================================
# PART 3: THE INTEGRATION WRAPPER
# ============================================================================
async def load_tiles_to_noc(dut, tiles_data):
    """Bridges her 'tiles_data' to your 'spi_transfer_logic'"""
    dut._log.info("--- Starting SPI Injection ---")
    for (tx, ty), grid in sorted(tiles_data.items()):
        dut._log.info(f"Uploading Tile ({tx}, {ty})")
        for row_addr in range(10):
            # Convert the array row to 10-bit integer
            row_bits = int("".join(map(str, grid[row_addr])), 2)
            packet = create_packet(1, tx, ty, row_addr, row_bits)
            await spi_transfer_logic(dut, packet)

# ============================================================================
# PART 4: THE COCOTB TEST EXECUTION
# ============================================================================
@cocotb.test()
async def test_full_pipeline(dut):
    # 1. Hardware Init
    dut.mosi.value = 0
    dut.cs.value = 1
    dut.clk.value = 0
    await Timer(100, "ns")

    # 2. Process Image (Make sure 'sample#1.jpg' is in the folder!)
    tiles_data = process_image_to_tiles('input_30x30.png')

    # 3. Load into Mesh
    await load_tiles_to_noc(dut, tiles_data)

    # 4. Final Confirmation Read-back of Tile (0,0)
    dut._log.info("--- Reading back Core(0,0) for Verification ---")
    for r in range(10):
        await spi_transfer_logic(dut, create_packet(2, 0, 0, r, 0))
        captured = await spi_transfer_logic(dut, create_packet(2, 0, 0, r, 0))
        actual = captured & 0x3FF
        visual = bin(actual)[2:].zfill(10).replace('1', '#').replace('0', '.')
        dut._log.info(f"Row {r}: {visual}")
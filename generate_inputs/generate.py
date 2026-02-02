import numpy as np
from PIL import Image, ImageDraw
import sys

def process_image_to_tiles(image_path, debug=True):
    """
    Process input image into 3x3 grid of 10×10 tiles (modified from 6x6)
    
    Args:
        image_path: Path to input image
        debug: Whether to save debug visualization
    
    Returns:
        tiles_data: Dictionary mapping (x,y) coordinates to 10x10 binary grids
    """
    print(f"Loading image: {image_path}")
    
    # Load image in RGB mode first to detect colors
    img_rgb = Image.open(image_path).convert('RGB')
    img_array_rgb = np.array(img_rgb)
    
    # Also load grayscale version
    img = Image.open(image_path).convert('L')
    img_array = np.array(img)
    
    print(f"Original image size: {img_array.shape}")
    
    # === INTELLIGENT COLOR DETECTION ===
    # Detect if this is a yellow/gray pattern or black/white pattern
    # Sample center region to determine pattern type
    h, w = img_array_rgb.shape[:2]
    sample_region = img_array_rgb[h//4:3*h//4, w//4:3*w//4]
    
    # Calculate average colors
    avg_color = np.mean(sample_region, axis=(0, 1))
    
    # Detect yellow: high R, high G, low B
    has_yellow = (avg_color[0] > 150 and avg_color[1] > 150 and avg_color[2] < 150)
    
    if has_yellow:
        print("Detected YELLOW/GRAY pattern")
        # Yellow = alive, Gray = dead
        # Yellow has high R and G, Gray has balanced RGB
        r, g, b = img_array_rgb[:,:,0], img_array_rgb[:,:,1], img_array_rgb[:,:,2]
        
        # Yellow detection: R > 200, G > 200, B < 150
        yellow_mask = (r > 200) & (g > 200) & (b < 150)
        binary_full = yellow_mask.astype(int)
        
        print(f"Yellow (alive) cells detected: {np.sum(binary_full)}")
    else:
        print("Detected BLACK/WHITE pattern")
        # Black = alive, White = dead (traditional)
        # Find bounding box of content (non-white pixels)
        content_mask = img_array < 200
        
        if content_mask.any():
            rows = np.any(content_mask, axis=1)
            cols = np.any(content_mask, axis=0)
            ymin, ymax = np.where(rows)[0][[0, -1]]
            xmin, xmax = np.where(cols)[0][[0, -1]]
            
            # Crop to bounding box
            cropped = img_array[ymin:ymax+1, xmin:xmax+1]
            print(f"Cropped to content: {cropped.shape}")
        else:
            cropped = img_array
            print("No content detected, using full image")
        
        # Threshold: pixels < 128 are considered "alive"
        binary_cropped = (cropped < 128).astype(int)
        binary_full = binary_cropped
        # Threshold: pixels < 128 are considered "alive"
        binary_cropped = (cropped < 128).astype(int)
        binary_full = binary_cropped
    
    # === DOWNSAMPLING ===
    # MODIFIED: Downsample to 30×30 instead of 51×51 (for 3x3 grid instead of 6x6)
    target_size = 30  # Changed from 51
    
    # Resize using PIL for better quality
    binary_img = Image.fromarray((binary_full * 255).astype(np.uint8))
    resized_img = binary_img.resize((target_size, target_size), Image.Resampling.NEAREST)
    resized_array = (np.array(resized_img) > 128).astype(int)
    
    print(f"Downsampled to: {target_size}×{target_size}")
    
    # === TILE SLICING ===
    # 3x3 grid = 9 tiles, each 10×10
    tile_size = 10
    tiles_data = {}
    
    for ty in range(3):  # 3 rows (changed from 6)
        for tx in range(3):  # 3 columns (changed from 6)
            # Extract 10x10 tile
            y_start = ty * tile_size
            y_end = (ty + 1) * tile_size
            x_start = tx * tile_size
            x_end = (tx + 1) * tile_size
            
            tile = resized_array[y_start:y_end, x_start:x_end]
            
            # Store with coordinates (tx, ty) matching Core coordinates (0,0 to 2,2)
            tiles_data[(tx, ty)] = tile
    
    print(f"Created {len(tiles_data)} tiles (3×3 grid)")
    
    # === DEBUG VISUALIZATION ===
    if debug:
        create_debug_view(resized_array, tiles_data)
    
    return tiles_data


def create_debug_view(grid_array, tiles_data):
    """
    Create a debug visualization showing the processed grid with tile boundaries
    """
    # Create RGB image for visualization
    height, width = grid_array.shape
    debug_img = Image.new('RGB', (width * 10, height * 10), 'white')
    draw = ImageDraw.Draw(debug_img)
    
    # Draw cells
    for y in range(height):
        for x in range(width):
            color = 'black' if grid_array[y, x] == 1 else 'white'
            draw.rectangle(
                [x*10, y*10, (x+1)*10-1, (y+1)*10-1],
                fill=color,
                outline='lightgray'
            )
    
    # Draw tile boundaries (3x3 grid)
    for i in range(4):  # 0, 1, 2, 3 for 3x3 grid
        # Vertical lines
        x = i * 100
        draw.line([(x, 0), (x, height*10)], fill='red', width=2)
        # Horizontal lines
        y = i * 100
        draw.line([(0, y), (width*10, y)], fill='red', width=2)
    
    debug_img.save('debug_view.png')
    print("✓ Saved debug visualization: debug_view.png")


# ============================================================================
# MODIFIED: Replaced save_for_verilog with SPI Integration Wrapper
# ============================================================================

async def load_tiles_to_noc(dut, tiles_data):
    """
    Integration Wrapper: Bridges tiles_data to your SPI Gateway
    
    This replaces the old save_for_verilog function and sends data via SPI
    instead of saving to a .mem file.
    
    Args:
        dut: Device under test (your hardware interface)
        tiles_data: Dictionary of (x,y) -> 10x10 grid mappings
    """
    print("\n" + "="*60)
    print("Loading tiles to NoC via SPI Gateway")
    print("="*60)
    
    for (tx, ty), grid in sorted(tiles_data.items()):
        print(f"\nCore ({tx},{ty}):")
        
        # tx, ty are the Core coordinates (0,0 to 2,2)
        for row_addr in range(10):
            # Convert the 10-bit row to an integer
            row_bits = int("".join(map(str, grid[row_addr])), 2)
            
            # Create the packet using YOUR new structure
            packet = create_packet(
                opcode=1, 
                core_x=tx, 
                core_y=ty,
                row_addr=row_addr, 
                row_data=row_bits
            )
            
            print(f"  Row {row_addr}: {grid[row_addr]} -> 0x{row_bits:03x}")
            
            # Send it through the SPI wires
            await spi_transfer_logic(dut, packet)
    
    print("\n" + "="*60)
    print("✓ All tiles loaded to NoC")
    print("="*60)


def create_packet(opcode, core_x, core_y, row_addr, row_data):
    """
    Create SPI packet structure
    
    Args:
        opcode: Operation code (1 = write)
        core_x: Target core X coordinate (0-2)
        core_y: Target core Y coordinate (0-2)
        row_addr: Row address in 10x10 grid (0-9)
        row_data: 10-bit row data
    
    Returns:
        Dictionary representing the packet
    """
    packet = {
        'opcode': opcode,
        'core_x': core_x,
        'core_y': core_y,
        'row_addr': row_addr,
        'row_data': row_data
    }
    return packet


async def spi_transfer_logic(dut, packet):
    """
    Send packet through SPI interface
    
    TODO: Implement based on your actual SPI protocol
    
    Example structure:
    - Clock in packet data bit by bit
    - Wait for acknowledgment
    - Handle any error conditions
    """
    # Placeholder for actual SPI transfer implementation
    # You'll need to replace this with your actual SPI protocol
    
    # Example pseudo-code:
    # combined_data = (packet['opcode'] << 20) | (packet['core_x'] << 18) | ...
    # for bit in combined_data:
    #     await dut.spi_mosi.write(bit)
    #     await dut.spi_clk.toggle()
    #     ...
    
    pass


# ============================================================================
# LEGACY FUNCTION: Keep for backwards compatibility but mark as deprecated
# ============================================================================

def save_for_verilog(tiles_data, output_file='mesh_init.mem'):
    """
    DEPRECATED: This function is kept for backwards compatibility.
    Use load_tiles_to_noc() for new implementations with SPI Gateway.
    
    Original function that saves tiles to Verilog memory file.
    """
    print(f"\n⚠️  WARNING: save_for_verilog() is deprecated!")
    print(f"   Use load_tiles_to_noc() for SPI Gateway integration.\n")
    
    with open(output_file, 'w') as f:
        f.write("// Game of Life Mesh Initialization Data\n")
        f.write("// Format: [Y_coordinate][X_coordinate][Row_address] = 10-bit hex value\n")
        f.write("// Grid: 3×3 tiles, each 10×10 pixels\n\n")
        
        for ty in range(3):
            for tx in range(3):
                tile = tiles_data[(tx, ty)]
                f.write(f"\n// Tile ({tx},{ty})\n")
                
                for row_idx in range(10):
                    row = tile[row_idx]
                    # Convert 10-bit row to hex (3 digits)
                    row_int = int("".join(map(str, row)), 2)
                    f.write(f"[{ty}][{tx}][{row_idx}] = 10'h{row_int:03x};\n")
        
        # Summary
        total_alive = sum(np.sum(tile) for tile in tiles_data.values())
        f.write(f"\n// Total alive cells: {total_alive}\n")
    
    print(f"✓ Saved Verilog memory file: {output_file}")


# ============================================================================
# MAIN EXECUTION
# ============================================================================

def main():
    """
    Main execution function
    """
    # Get input image from command line or use default
    if len(sys.argv) > 1:
        input_image = sys.argv[1]
    else:
        input_image = 'sample#1.jpg'
    
    print("="*60)
    print("Game of Life: Image-to-Tile Processor (3×3 Grid)")
    print("="*60)
    
    # Process image into tiles
    tiles_data = process_image_to_tiles(input_image, debug=True)
    
    # Print statistics
    print("\n" + "="*60)
    print("Tile Statistics:")
    print("="*60)
    for (tx, ty), tile in sorted(tiles_data.items()):
        alive = np.sum(tile)
        print(f"Tile ({tx},{ty}): {alive:3d}/100 cells alive")
    
    total_alive = sum(np.sum(tile) for tile in tiles_data.values())
    print(f"\nTotal: {total_alive:3d}/900 cells alive")
    
    # Save legacy format (optional)
    print("\n" + "="*60)
    save_for_verilog(tiles_data, 'mesh_init.mem')
    
    print("\n" + "="*60)
    print("✓ Processing complete!")
    print("="*60)
    print("\nNext steps:")
    print("  1. Review debug_view.png to verify the pattern")
    print("  2. Use load_tiles_to_noc(dut, tiles_data) in your hardware test")
    print("  3. Implement spi_transfer_logic() with your actual SPI protocol")


if __name__ == "__main__":
    main()
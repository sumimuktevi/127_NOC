#!/usr/bin/env python3
"""
Universal Grid Converter for Game of Life
Converts ANY input image (any size, any grid) to a standardized 30x30 format
Outputs in both yellow/gray AND black/white formats
"""

import numpy as np
from PIL import Image, ImageDraw
import sys


def analyze_image(image_path):
    """
    Analyze an image to help determine grid dimensions
    """
    img = Image.open(image_path)
    width, height = img.size
    
    print("=" * 60)
    print("IMAGE ANALYSIS")
    print("=" * 60)
    print(f"Image size: {width}x{height} pixels")
    print(f"\nTo determine grid dimensions:")
    print("1. Open the image and COUNT the number of cells:")
    print("   - Count horizontally (columns)")
    print("   - Count vertically (rows)")
    print("\nExample: If you count 11 cells across and 9 down,")
    print("         your grid is 9 rows x 11 columns")
    print("=" * 60)


def detect_color_scheme(img_rgb):
    """
    Detect if image uses yellow/gray or black/white color scheme
    
    Returns:
        'yellow_gray' or 'black_white'
    """
    # Sample center region
    h, w = img_rgb.shape[:2]
    sample = img_rgb[h//4:3*h//4, w//4:3*w//4]
    
    # Calculate average colors
    avg_r = np.mean(sample[:,:,0])
    avg_g = np.mean(sample[:,:,1])
    avg_b = np.mean(sample[:,:,2])
    
    # Check for yellow (high R, high G, low B)
    has_yellow = (avg_r > 150 and avg_g > 150 and avg_b < 150)
    
    if has_yellow:
        return 'yellow_gray'
    else:
        return 'black_white'


def extract_grid_from_image(input_path, grid_rows, grid_cols):
    """
    Extract a binary grid from any input image
    
    Args:
        input_path: Path to input image
        grid_rows: Number of rows in the input grid
        grid_cols: Number of columns in the input grid
    
    Returns:
        2D numpy array of 0s and 1s (30x30)
    """
    # Load image
    img = Image.open(input_path)
    img_rgb = np.array(img.convert('RGB'))
    img_gray = np.array(img.convert('L'))
    
    height, width = img_gray.shape
    
    print(f"\nProcessing: {input_path}")
    print(f"Input size: {width}x{height} pixels")
    print(f"Input grid: {grid_rows} rows x {grid_cols} columns")
    
    # Detect color scheme
    color_scheme = detect_color_scheme(img_rgb)
    print(f"Color scheme: {color_scheme}")
    
    # Calculate cell size in input image
    input_cell_height = height / grid_rows
    input_cell_width = width / grid_cols
    
    # Create temporary grid matching input dimensions
    temp_grid = np.zeros((grid_rows, grid_cols), dtype=int)
    
    # Sample each cell
    for i in range(grid_rows):
        for j in range(grid_cols):
            # Sample center of each cell
            y = int((i + 0.5) * input_cell_height)
            x = int((j + 0.5) * input_cell_width)
            
            # Keep within bounds
            y = min(y, height - 1)
            x = min(x, width - 1)
            
            # Determine if cell is alive based on color scheme
            if color_scheme == 'yellow_gray':
                # Yellow = alive (bright)
                r, g, b = img_rgb[y, x]
                is_alive = (r > 200 and g > 200 and b < 150)
            else:
                # Black = alive (dark)
                brightness = img_gray[y, x]
                is_alive = brightness < 128
            
            temp_grid[i, j] = 1 if is_alive else 0
    
    alive_count = np.sum(temp_grid)
    print(f"Detected {alive_count} alive cells in input")
    
    # Now pad to exactly 30x30 (NO RESIZING - just add white space)
    final_grid = np.zeros((30, 30), dtype=int)
    
    # Copy the original grid into the top-left corner
    rows_to_copy = min(grid_rows, 30)
    cols_to_copy = min(grid_cols, 30)
    
    final_grid[:rows_to_copy, :cols_to_copy] = temp_grid[:rows_to_copy, :cols_to_copy]
    
    final_alive = np.sum(final_grid)
    print(f"Final 30x30 grid has {final_alive} alive cells (original preserved, padded with dead cells)")
    
    return final_grid


def create_yellow_gray_image(grid, filename):
    """
    Create a yellow/gray grid image (for game_of_life_v2.py)
    
    Args:
        grid: 30x30 binary grid
        filename: Output filename
    """
    cell_size = 40
    line_width = 2
    
    img_height = 30 * cell_size + 31 * line_width
    img_width = 30 * cell_size + 31 * line_width
    
    # Create image with grid line background
    img = Image.new('RGB', (img_width, img_height), color=(145, 145, 145))
    draw = ImageDraw.Draw(img)
    
    # Draw cells
    for i in range(30):
        for j in range(30):
            y_start = i * (cell_size + line_width) + line_width
            x_start = j * (cell_size + line_width) + line_width
            
            if grid[i, j] == 1:
                color = (255, 255, 0)  # Yellow = alive
            else:
                color = (128, 128, 128)  # Gray = dead
            
            draw.rectangle([x_start, y_start, 
                          x_start + cell_size, y_start + cell_size], 
                         fill=color)
    
    img.save(filename)
    print(f"✓ Yellow/Gray format: {filename}")


def create_black_white_image(grid, filename):
    """
    Create a black/white image (for generate_mesh_data_modified.py)
    
    Args:
        grid: 30x30 binary grid
        filename: Output filename
    """
    # Simple 30x30 pixel image: black = alive, white = dead
    img_array = np.zeros((30, 30), dtype=np.uint8)
    
    for i in range(30):
        for j in range(30):
            if grid[i, j] == 1:
                img_array[i, j] = 0  # Black = alive
            else:
                img_array[i, j] = 255  # White = dead
    
    img = Image.fromarray(img_array)
    img.save(filename)
    print(f"✓ Black/White format: {filename}")


def print_grid_pattern(grid):
    """Print grid pattern for verification"""
    print("\nGrid pattern (■ = alive, · = dead):")
    for row in grid:
        print(' '.join(['■' if cell == 1 else '·' for cell in row]))


def convert_to_standard(input_path, grid_rows, grid_cols, output_base="output"):
    """
    Main conversion function
    
    Args:
        input_path: Input image path
        grid_rows: Number of rows in input grid
        grid_cols: Number of columns in input grid
        output_base: Base name for output files
    """
    print("=" * 60)
    print("UNIVERSAL GRID CONVERTER")
    print("=" * 60)
    
    # Extract grid
    grid = extract_grid_from_image(input_path, grid_rows, grid_cols)
    
    # Print pattern
    print_grid_pattern(grid)
    
    # Generate output filenames
    yellow_gray_file = f"{output_base}_yellow_gray.png"
    black_white_file = f"{output_base}_black_white.png"
    
    print("\n" + "=" * 60)
    print("GENERATING OUTPUT FILES")
    print("=" * 60)
    
    # Create both formats
    create_yellow_gray_image(grid, yellow_gray_file)
    create_black_white_image(grid, black_white_file)
    
    print("\n" + "=" * 60)
    print("CONVERSION COMPLETE!")
    print("=" * 60)
    print(f"\nYou now have TWO standardized 30x30 outputs:")
    print(f"\n1. {yellow_gray_file}")
    print(f"   - Yellow/Gray format with grid lines")
    print(f"   - Use with: python game_of_life_v2.py {yellow_gray_file} 10 result.png 30 30")
    print(f"\n2. {black_white_file}")
    print(f"   - Black/White format (simple 30x30 pixels)")
    print(f"   - Use with: python generate_mesh_data_modified.py {black_white_file}")
    print("=" * 60)


def interactive_mode(input_path):
    """
    Interactive mode to help user convert their image
    """
    print("\n" + "=" * 60)
    print("INTERACTIVE MODE")
    print("=" * 60)
    
    # Analyze the image
    analyze_image(input_path)
    
    # Get grid dimensions from user
    print("\nEnter the dimensions of your INPUT grid:")
    print("(Count the cells in your input image)")
    try:
        grid_rows = int(input("  Number of ROWS (vertical): "))
        grid_cols = int(input("  Number of COLUMNS (horizontal): "))
    except ValueError:
        print("Error: Please enter valid numbers")
        return
    
    # Get output base name
    output_base = input("\nOutput filename base (default: output): ").strip()
    if not output_base:
        output_base = "output"
    
    # Convert
    convert_to_standard(input_path, grid_rows, grid_cols, output_base)


def main():
    """Main entry point"""
    
    if len(sys.argv) < 2:
        print("Universal Grid Converter - Convert ANY grid to standardized 30x30 format")
        print("\nThis tool:")
        print("  - Accepts images of ANY size (10x10, 4x5, 20x15, etc.)")
        print("  - Detects yellow/gray OR black/white color schemes automatically")
        print("  - Outputs a standardized 30x30 grid in BOTH formats")
        print("\nUsage:")
        print("  Interactive mode:")
        print("    python grid_converter_universal.py <input_image>")
        print("\n  Command line mode:")
        print("    python grid_converter_universal.py <input_image> <rows> <cols> [output_base]")
        print("\nExamples:")
        print("  python grid_converter_universal.py my_10x10_image.png")
        print("  python grid_converter_universal.py my_image.jpg 9 11")
        print("  python grid_converter_universal.py my_image.jpg 4 5 my_output")
        sys.exit(1)
    
    input_path = sys.argv[1]
    
    if len(sys.argv) >= 4:
        # Command line mode
        grid_rows = int(sys.argv[2])
        grid_cols = int(sys.argv[3])
        output_base = sys.argv[4] if len(sys.argv) > 4 else "output"
        
        convert_to_standard(input_path, grid_rows, grid_cols, output_base)
    else:
        # Interactive mode
        interactive_mode(input_path)


if __name__ == "__main__":
    main()
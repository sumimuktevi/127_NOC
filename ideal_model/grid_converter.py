#!/usr/bin/env python3
"""
Grid Image Converter
Converts any input image to a standardized grid format for Game of Life
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


def convert_to_standard_grid(input_path, output_path, grid_rows, grid_cols, 
                             cell_size=40, threshold=150, invert=False):
    """
    Convert any input image to a standardized grid format
    
    Args:
        input_path: Path to input image
        output_path: Path to save standardized output
        grid_rows: Number of rows in the grid
        grid_cols: Number of columns in the grid
        cell_size: Size of each cell in the output image (pixels)
        threshold: Brightness threshold for detecting alive cells
        invert: If True, dark cells = alive, bright cells = dead
    
    Returns:
        2D numpy array of the grid (0s and 1s)
    """
    
    # Load input image
    img = Image.open(input_path)
    img_gray = np.array(img.convert('L'))
    
    height, width = img_gray.shape
    
    # Calculate cell size in the input image
    input_cell_height = height / grid_rows
    input_cell_width = width / grid_cols
    
    print(f"\nProcessing image: {input_path}")
    print(f"Input image size: {width}x{height} pixels")
    print(f"Grid dimensions: {grid_rows} rows x {grid_cols} columns")
    print(f"Input cell size: ~{input_cell_width:.1f}x{input_cell_height:.1f} pixels")
    
    # Create grid by sampling each cell
    grid = np.zeros((grid_rows, grid_cols), dtype=int)
    
    for i in range(grid_rows):
        for j in range(grid_cols):
            # Sample the center of each cell
            y = int((i + 0.5) * input_cell_height)
            x = int((j + 0.5) * input_cell_width)
            
            # Make sure we're within bounds
            y = min(y, height - 1)
            x = min(x, width - 1)
            
            brightness = img_gray[y, x]
            
            # Determine if cell is alive
            if invert:
                # Dark = alive (for images where alive cells are dark)
                is_alive = brightness < threshold
            else:
                # Bright = alive (for images where alive cells are bright/yellow)
                is_alive = brightness > threshold
            
            grid[i, j] = 1 if is_alive else 0
    
    alive_count = np.sum(grid)
    print(f"Detected {alive_count} alive cells")
    
    # Create standardized output image
    line_width = 2
    img_height = grid_rows * cell_size + (grid_rows + 1) * line_width
    img_width = grid_cols * cell_size + (grid_cols + 1) * line_width
    
    # Create image with grid lines
    output_img = Image.new('RGB', (img_width, img_height), color=(145, 145, 145))
    draw = ImageDraw.Draw(output_img)
    
    # Draw each cell
    for i in range(grid_rows):
        for j in range(grid_cols):
            y_start = i * (cell_size + line_width) + line_width
            x_start = j * (cell_size + line_width) + line_width
            
            if grid[i, j] == 1:
                color = (255, 255, 0)  # Yellow for alive
            else:
                color = (128, 128, 128)  # Gray for dead
            
            draw.rectangle([x_start, y_start, 
                          x_start + cell_size, y_start + cell_size], 
                         fill=color)
    
    # Save output
    output_img.save(output_path)
    print(f"Standardized grid saved to: {output_path}")
    print(f"Output image size: {img_width}x{img_height} pixels")
    
    # Print the grid pattern
    print("\nGrid pattern (■ = alive, · = dead):")
    for row in grid:
        print(' '.join(['■' if cell == 1 else '·' for cell in row]))
    
    return grid


def interactive_mode(input_path):
    """
    Interactive mode to help user convert their image
    """
    print("\n" + "=" * 60)
    print("INTERACTIVE GRID CONVERTER")
    print("=" * 60)
    
    # Analyze the image
    analyze_image(input_path)
    
    # Get grid dimensions from user
    print("\nEnter grid dimensions:")
    try:
        grid_rows = int(input("  Number of ROWS (vertical): "))
        grid_cols = int(input("  Number of COLUMNS (horizontal): "))
    except ValueError:
        print("Error: Please enter valid numbers")
        return
    
    # Get threshold
    print("\nBrightness threshold (default 150):")
    print("  - Higher = only very bright cells count as alive")
    print("  - Lower = dimmer cells also count as alive")
    threshold_input = input("  Threshold (press Enter for 150): ").strip()
    threshold = int(threshold_input) if threshold_input else 150
    
    # Ask about inversion
    print("\nAre the ALIVE cells BRIGHT/YELLOW or DARK?")
    print("  1. Bright/Yellow (default)")
    print("  2. Dark/Black")
    invert_input = input("  Choice (press Enter for 1): ").strip()
    invert = (invert_input == "2")
    
    # Generate output filename
    output_path = input_path.rsplit('.', 1)[0] + "_standardized.png"
    
    # Convert
    convert_to_standard_grid(input_path, output_path, grid_rows, grid_cols, 
                            threshold=threshold, invert=invert)
    
    print("\n" + "=" * 60)
    print("DONE! You can now use this image with game_of_life_v2.py:")
    print(f"  python game_of_life_v2.py {output_path} 10 output.png {grid_rows} {grid_cols}")
    print("=" * 60)


def main():
    """Main entry point"""
    
    if len(sys.argv) < 2:
        print("Grid Image Converter - Convert any image to standardized Game of Life format")
        print("\nUsage:")
        print("  Interactive mode:")
        print("    python grid_converter.py <input_image>")
        print("\n  Command line mode:")
        print("    python grid_converter.py <input_image> <rows> <cols> [output_image] [threshold] [invert]")
        print("\nExamples:")
        print("  python grid_converter.py my_image.jpg")
        print("  python grid_converter.py my_image.jpg 9 11")
        print("  python grid_converter.py my_image.jpg 9 11 output.png 150 false")
        sys.exit(1)
    
    input_path = sys.argv[1]
    
    if len(sys.argv) >= 4:
        # Command line mode with dimensions
        grid_rows = int(sys.argv[2])
        grid_cols = int(sys.argv[3])
        output_path = sys.argv[4] if len(sys.argv) > 4 else input_path.rsplit('.', 1)[0] + "_standardized.png"
        threshold = int(sys.argv[5]) if len(sys.argv) > 5 else 150
        invert = sys.argv[6].lower() == 'true' if len(sys.argv) > 6 else False
        
        convert_to_standard_grid(input_path, output_path, grid_rows, grid_cols, 
                                threshold=threshold, invert=invert)
        
        print(f"\nTo run Game of Life on this image:")
        print(f"  python game_of_life_v2.py {output_path} 10 result.png {grid_rows} {grid_cols}")
    else:
        # Interactive mode
        interactive_mode(input_path)


if __name__ == "__main__":
    main()
    
#!/usr/bin/env python3
"""
Universal Grid Converter for Game of Life
Updated: Yellow/Bright = Alive, Gray/Dark = Dead
"""

import numpy as np
from PIL import Image, ImageDraw
import sys


def analyze_image(image_path):
    img = Image.open(image_path)
    width, height = img.size
    print("=" * 60)
    print("IMAGE ANALYSIS")
    print("=" * 60)
    print(f"Image size: {width}x{height} pixels")
    print("=" * 60)


def detect_color_scheme(img_rgb):
    h, w = img_rgb.shape[:2]
    sample = img_rgb[h//4:3*h//4, w//4:3*w//4]
    avg_r, avg_g, avg_b = np.mean(sample[:,:,0]), np.mean(sample[:,:,1]), np.mean(sample[:,:,2])
    # Check for yellow (high R, high G, low B)
    has_yellow = (avg_r > 150 and avg_g > 150 and avg_b < 150)
    return 'yellow_gray' if has_yellow else 'black_white'


def extract_grid_from_image(input_path, grid_rows, grid_cols):
    img = Image.open(input_path)
    img_rgb = np.array(img.convert('RGB'))
    img_gray = np.array(img.convert('L'))
    height, width = img_gray.shape
    
    color_scheme = detect_color_scheme(img_rgb)
    input_cell_height, input_cell_width = height / grid_rows, width / grid_cols
    temp_grid = np.zeros((grid_rows, grid_cols), dtype=int)
    
    for i in range(grid_rows):
        for j in range(grid_cols):
            y = min(int((i + 0.5) * input_cell_height), height - 1)
            x = min(int((j + 0.5) * input_cell_width), width - 1)
            
            if color_scheme == 'yellow_gray':
                r, g, b = img_rgb[y, x]
                # Yellow/Bright = Alive (1)
                is_alive = (r > 180 and g > 180) 
            else:
                # In standard B/W: White is usually dead, Black is alive.
                # If your source is Gray/Yellow: Yellow (bright) = 1, Gray (darker) = 0
                brightness = img_gray[y, x]
                is_alive = brightness > 128 # Bright pixels are alive
            
            temp_grid[i, j] = 1 if is_alive else 0
    
    final_grid = np.zeros((30, 30), dtype=int)
    rows_to_copy, cols_to_copy = min(grid_rows, 30), min(grid_cols, 30)
    final_grid[:rows_to_copy, :cols_to_copy] = temp_grid[:rows_to_copy, :cols_to_copy]
    
    return final_grid


def create_yellow_gray_image(grid, filename):
    cell_size, line_width = 40, 2
    dim = 30 * cell_size + 31 * line_width
    img = Image.new('RGB', (dim, dim), color=(145, 145, 145))
    draw = ImageDraw.Draw(img)
    
    for i in range(30):
        for j in range(30):
            y_start = i * (cell_size + line_width) + line_width
            x_start = j * (cell_size + line_width) + line_width
            color = (255, 255, 0) if grid[i, j] == 1 else (128, 128, 128)
            draw.rectangle([x_start, y_start, x_start + cell_size, y_start + cell_size], fill=color)
    img.save(filename)
    print(f"✓ Yellow/Gray format: {filename}")


def create_black_white_image(grid, filename):
    # Standard: 0 (Black) = Alive, 255 (White) = Dead
    img_array = np.zeros((30, 30), dtype=np.uint8)
    for i in range(30):
        for j in range(30):
            img_array[i, j] = 0 if grid[i, j] == 1 else 255
    
    img = Image.fromarray(img_array)
    img.save(filename)
    print(f"✓ Black/White format: {filename}")


def print_grid_pattern(grid):
    print("\nGrid pattern (■ = Alive/Yellow, · = Dead/Gray):")
    for row in grid:
        print(' '.join(['■' if cell == 1 else '·' for cell in row]))


def convert_to_standard(input_path, grid_rows, grid_cols, output_base="output"):
    grid = extract_grid_from_image(input_path, grid_rows, grid_cols)
    print_grid_pattern(grid)
    create_yellow_gray_image(grid, f"{output_base}_yellow_gray.png")
    create_black_white_image(grid, f"{output_base}_black_white.png")
    print("\nCONVERSION COMPLETE!")


def interactive_mode(input_path):
    analyze_image(input_path)
    try:
        grid_rows = int(input("  Number of ROWS (vertical): "))
        grid_cols = int(input("  Number of COLUMNS (horizontal): "))
        output_base = input("\nOutput filename base (default: output): ").strip() or "output"
        convert_to_standard(input_path, grid_rows, grid_cols, output_base)
    except ValueError:
        print("Error: Please enter valid numbers")


def main():
    if len(sys.argv) < 2:
        sys.exit(1)
    input_path = sys.argv[1]
    if len(sys.argv) >= 4:
        convert_to_standard(input_path, int(sys.argv[2]), int(sys.argv[3]), sys.argv[4] if len(sys.argv) > 4 else "output")
    else:
        interactive_mode(input_path)

if __name__ == "__main__":
    main()
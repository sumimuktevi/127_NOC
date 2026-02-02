#!/usr/bin/env python3
"""
Conway's Game of Life - Grid-Aware Image Processor
Properly detects grid cells in images with visible grid lines
"""

import numpy as np
from PIL import Image
import sys


def detect_grid_structure(img_array, sample_size=50):
    """
    Detect the grid cell size by analyzing the image structure
    
    Args:
        img_array: Grayscale image array
        sample_size: Number of rows/cols to sample
    
    Returns:
        cell_size: Size of each grid cell in pixels
    """
    # Look for repeating patterns (grid lines) in the first row
    first_row = img_array[0, :sample_size]
    
    # Find differences to detect grid lines (darker pixels)
    diffs = np.abs(np.diff(first_row.astype(float)))
    
    # Grid lines appear as significant changes
    threshold = np.mean(diffs) + np.std(diffs)
    line_positions = np.where(diffs > threshold)[0]
    
    if len(line_positions) > 1:
        # Calculate cell size from line spacing
        cell_size = int(np.median(np.diff(line_positions)))
    else:
        # Default fallback
        cell_size = 1
    
    return cell_size


def image_to_grid_smart(image_path, yellow_threshold=200):
    """
    Convert an image with a visible grid to a binary game grid
    
    Args:
        image_path: Path to the input image
        yellow_threshold: Brightness threshold for yellow cells
    
    Returns:
        2D numpy array with 0s and 1s representing the game state
    """
    # Load image
    img = Image.open(image_path)
    img_rgb = np.array(img)
    img_gray = np.array(img.convert('L'))
    
    # Detect grid cell size
    cell_size = detect_grid_structure(img_gray)
    
    if cell_size <= 1:
        # Fallback: try to detect based on image dimensions
        # Assume roughly square cells and count potential cells
        height, width = img_gray.shape
        # Look for a reasonable grid size (between 5 and 100 cells per side)
        for test_size in range(10, 200):
            if height % test_size < 5 and width % test_size < 5:
                cells_h = height // test_size
                cells_w = width // test_size
                if 5 <= cells_h <= 100 and 5 <= cells_w <= 100:
                    cell_size = test_size
                    break
    
    print(f"Detected cell size: {cell_size} pixels")
    
    # Calculate grid dimensions
    height, width = img_gray.shape
    grid_height = height // cell_size
    grid_width = width // cell_size
    
    print(f"Grid dimensions: {grid_height} x {grid_width}")
    
    # Sample each cell to determine if it's alive (yellow) or dead (gray)
    grid = np.zeros((grid_height, grid_width), dtype=int)
    
    for i in range(grid_height):
        for j in range(grid_width):
            # Sample the center of each cell
            y = i * cell_size + cell_size // 2
            x = j * cell_size + cell_size // 2
            
            # Check if within bounds
            if y < height and x < width:
                # For yellow detection, check if it's bright
                brightness = img_gray[y, x]
                
                # Yellow cells are significantly brighter than gray background
                if brightness > yellow_threshold:
                    grid[i, j] = 1
    
    return grid


def grid_to_image(grid, cell_size=30, alive_color=(255, 255, 0), dead_color=(128, 128, 128), 
                 grid_line_color=(145, 145, 145), grid_line_width=2):
    """
    Convert a binary grid to an image with visible grid lines
    
    Args:
        grid: 2D numpy array with 0s and 1s
        cell_size: Size of each cell in pixels
        alive_color: RGB tuple for alive cells (yellow)
        dead_color: RGB tuple for dead cells (gray)
        grid_line_color: RGB tuple for grid lines
        grid_line_width: Width of grid lines in pixels
    
    Returns:
        PIL Image object
    """
    height, width = grid.shape
    
    # Calculate image size including grid lines
    img_height = height * cell_size + (height + 1) * grid_line_width
    img_width = width * cell_size + (width + 1) * grid_line_width
    
    # Create RGB image with grid line color as background
    img_array = np.full((img_height, img_width, 3), grid_line_color, dtype=np.uint8)
    
    # Fill in cells
    for i in range(height):
        for j in range(width):
            color = alive_color if grid[i, j] == 1 else dead_color
            
            y_start = i * (cell_size + grid_line_width) + grid_line_width
            y_end = y_start + cell_size
            x_start = j * (cell_size + grid_line_width) + grid_line_width
            x_end = x_start + cell_size
            
            img_array[y_start:y_end, x_start:x_end] = color
    
    return Image.fromarray(img_array)


def count_neighbors(grid, row, col):
    """Count the number of alive neighbors for a cell"""
    height, width = grid.shape
    count = 0
    
    for i in range(-1, 2):
        for j in range(-1, 2):
            if i == 0 and j == 0:
                continue
            
            neighbor_row = (row + i) % height
            neighbor_col = (col + j) % width
            
            count += grid[neighbor_row, neighbor_col]
    
    return count


def game_of_life_step(grid):
    """Perform one iteration of Conway's Game of Life"""
    height, width = grid.shape
    new_grid = np.zeros_like(grid)
    
    for i in range(height):
        for j in range(width):
            neighbors = count_neighbors(grid, i, j)
            
            if grid[i, j] == 1:  # Cell is alive
                if neighbors in [2, 3]:
                    new_grid[i, j] = 1  # Survives
            else:  # Cell is dead
                if neighbors == 3:
                    new_grid[i, j] = 1  # Becomes alive
    
    return new_grid


def print_grid(grid):
    """Print grid in a readable format"""
    for row in grid:
        print(' '.join(['■' if cell == 1 else '·' for cell in row]))


def run_game_of_life(image_path, iterations, output_image_path=None, grid_rows=None, grid_cols=None):
    """Run Conway's Game of Life on an input image with optional manual grid dimensions"""
    print(f"Loading image: {image_path}")
    
    if grid_rows and grid_cols:
        # Use manual grid dimensions
        from PIL import Image
        img = Image.open(image_path)
        img_gray = np.array(img.convert('L'))
        height, width = img_gray.shape
        
        cell_height = height // grid_rows
        cell_width = width // grid_cols
        
        print(f"Manual grid mode: {grid_cols}x{grid_rows} cells")
        print(f"Cell size: {cell_width}x{cell_height} pixels")
        
        grid = np.zeros((grid_rows, grid_cols), dtype=int)
        
        for i in range(grid_rows):
            for j in range(grid_cols):
                y = int((i + 0.5) * cell_height)
                x = int((j + 0.5) * cell_width)
                
                if y < height and x < width:
                    brightness = img_gray[y, x]
                    if brightness > 200:
                        grid[i, j] = 1
    else:
        # Use automatic grid detection
        grid = image_to_grid_smart(image_path)
    
    print(f"\nInitial state:")
    print_grid(grid)
    print(f"Initial alive cells: {np.sum(grid)}\n")
    
    # Run iterations
    for i in range(iterations):
        grid = game_of_life_step(grid)
        alive_count = np.sum(grid)
        print(f"Iteration {i+1}/{iterations}:")
        print_grid(grid)
        print(f"Alive cells: {alive_count}\n")
    
    # Save as image if requested
    if output_image_path:
        output_img = grid_to_image(grid)
        output_img.save(output_image_path)
        print(f"Output image saved to: {output_image_path}")
        return grid, output_img
    
    return grid, None


def main():
    """Main entry point"""
    if len(sys.argv) < 3:
        print("Usage: python game_of_life_v2.py <input_image> <iterations> [output_image] [grid_rows] [grid_cols]")
        print("\nExamples:")
        print("  Auto-detect grid:")
        print("    python game_of_life_v2.py input.jpg 5 output.png")
        print("  Manual grid size:")
        print("    python game_of_life_v2.py input.jpg 5 output.png 9 11")
        sys.exit(1)
    
    input_path = sys.argv[1]
    iterations = int(sys.argv[2])
    output_path = sys.argv[3] if len(sys.argv) > 3 else "output.png"
    
    # Check if manual grid dimensions provided
    if len(sys.argv) >= 6:
        grid_rows = int(sys.argv[4])
        grid_cols = int(sys.argv[5])
        run_game_of_life(input_path, iterations, output_path, grid_rows, grid_cols)
    else:
        run_game_of_life(input_path, iterations, output_path)


if __name__ == "__main__":
    main()
#!/usr/bin/env python3
"""
Example: Loading and Using Real .PBM Files with Tests

This script shows how to:
1. Load your existing .pbm file
2. Resize/prepare it for the 3×3 mesh
3. Create test data from it
4. Compare results
"""

import sys
import os
from pathlib import Path

# Add integration_v1 to path
sys.path.insert(0, '/Users/fanshenglee/Desktop/127_NOC/integration_v1')
from pbm_utils import PBMImage


def example_1_load_and_inspect():
    """Example 1: Load and inspect a real .pbm file."""
    print("\n" + "="*60)
    print("EXAMPLE 1: Load and Inspect Real .PBM File")
    print("="*60)
    
    # List existing .pbm files
    pbm_dir = Path("/Users/fanshenglee/Desktop/127_NOC/branch_copies/paullee_integration_with_sumi_ethan_andrea")
    pbm_files = list(pbm_dir.glob("*.pbm"))
    
    print(f"\nFound {len(pbm_files)} PBM files:")
    for i, f in enumerate(pbm_files[:5], 1):
        print(f"  {i}. {f.name}")
    
    if pbm_files:
        # Load first one
        test_file = pbm_files[0]
        print(f"\nLoading: {test_file.name}")
        
        image = PBMImage.read_pbm(str(test_file))
        print(f"Size: {image.width}×{image.height}")
        image.print_stats()


def example_2_resize_for_mesh():
    """Example 2: Prepare image for 3×3 mesh with 10×10 tiles (30×30).

    In the current design each core stores a 10×10 grid, so the input image
    should already be 30×30. This example simply ensures the correct size,
    cropping or padding if necessary.
    """
    print("\n" + "="*60)
    print("EXAMPLE 2: Prepare Image for 3×3 Mesh")
    print("="*60)
    
    # Load a real file
    pbm_dir = Path("/Users/fanshenglee/Desktop/127_NOC/branch_copies/paullee_integration_with_sumi_ethan_andrea")
    pbm_file = pbm_dir / "test2_paul.pbm"
    
    if pbm_file.exists():
        print(f"\nLoading: {pbm_file.name}")
        image = PBMImage.read_pbm(str(pbm_file))
        print(f"Original size: {image.width}×{image.height}")
        
        target_width, target_height = 30, 30
        if image.width != target_width or image.height != target_height:
            print(f"Resizing/cropping to {target_width}×{target_height}")
            new_img = PBMImage(target_width, target_height)
            for y in range(target_height):
                for x in range(target_width):
                    src_y = min(y, image.height - 1)
                    src_x = min(x, image.width - 1)
                    new_img.data[y][x] = image.data[src_y][src_x]
            image = new_img
        
        # Save
        output_file = "/Users/fanshenglee/Desktop/127_NOC/integration_v1/test_output/prepared_image.pbm"
        os.makedirs(os.path.dirname(output_file), exist_ok=True)
        image.write_pbm(output_file, 'P1')
        
        print(f"Saved prepared image: {output_file}")
        image.print_stats()


def example_3_split_and_distribute():
    """Example 3: Split image across tiles."""
    print("\n" + "="*60)
    print("EXAMPLE 3: Split Image Across Tiles")
    print("="*60)
    
    # Create a test image
    pbm_dir = Path("/Users/fanshenglee/Desktop/127_NOC/branch_copies/paullee_integration_with_sumi_ethan_andrea")
    pbm_file = pbm_dir / "test2_paul.pbm"
    
    if pbm_file.exists():
        image = PBMImage.read_pbm(str(pbm_file))
        
        # Ensure image is 30×30 (3×3 tiles × 10×10)
        if image.width != 30 or image.height != 30:
            print("Cropping/padding to 30×30 for splitting")
            temp = PBMImage(30, 30)
            for y in range(30):
                for x in range(30):
                    src_y = min(y, image.height - 1)
                    src_x = min(x, image.width - 1)
                    temp.data[y][x] = image.data[src_y][src_x]
            image = temp
        
        # Split into 3×3 tiles
        print(f"\nSplitting into 3×3 tiles:")
        tiles = image.split_to_tiles(3, 3)
        
        for (r, c) in [(0,0), (0,1), (0,2), (1,0), (1,1), (1,2), (2,0), (2,1), (2,2)]:
            if (r, c) in tiles:
                data = tiles[(r, c)]
                ones = sum(data)
                print(f"  Tile ({r},{c}): {len(data)} pixels, {ones} ones ({100*ones/len(data):.1f}%)")


def example_4_compare_tiles():
    """Example 4: Compare tile data between original and processed."""
    print("\n" + "="*60)
    print("EXAMPLE 4: Compare Tile Data")
    print("="*60)
    
    # Load two images
    pbm_dir = Path("/Users/fanshenglee/Desktop/127_NOC/branch_copies/paullee_integration_with_sumi_ethan_andrea")
    
    files = list(pbm_dir.glob("test*.pbm"))[:2]
    
    if len(files) >= 2:
        print(f"\nComparing:")
        print(f"  1. {files[0].name}")
        print(f"  2. {files[1].name}")
        
        img1 = PBMImage.read_pbm(str(files[0]))
        img2 = PBMImage.read_pbm(str(files[1]))
        
        # Resize to same size
        target = 24
        
        # Resize img1
        resized1 = PBMImage(target, target)
        step1 = max(1, img1.width // target)
        for y in range(target):
            for x in range(target):
                src_y = min(y * step1, img1.height - 1)
                src_x = min(x * step1, img1.width - 1)
                resized1.data[y][x] = img1.data[src_y][src_x]
        
        # Resize img2
        resized2 = PBMImage(target, target)
        step2 = max(1, img2.width // target)
        for y in range(target):
            for x in range(target):
                src_y = min(y * step2, img2.height - 1)
                src_x = min(x * step2, img2.width - 1)
                resized2.data[y][x] = img2.data[src_y][src_x]
        
        # Compare
        match, diff_count, diffs = resized1.compare(resized2)
        
        print(f"\nComparison result:")
        print(f"  Match: {match}")
        print(f"  Differences: {diff_count}/{target*target}")
        print(f"  Difference %: {100*diff_count/(target*target):.2f}%")
        
        if diffs:
            print(f"\nFirst 5 differences:")
            for y, x, val1, val2 in diffs[:5]:
                print(f"  ({y},{x}): {val1} vs {val2}")


def example_5_create_test_data():
    """Example 5: Create test data structure for testbenches."""
    print("\n" + "="*60)
    print("EXAMPLE 5: Create Test Data Structure")
    print("="*60)
    
    # Load real image
    pbm_dir = Path("/Users/fanshenglee/Desktop/127_NOC/branch_copies/paullee_integration_with_sumi_ethan_andrea")
    pbm_file = pbm_dir / "test2_paul.pbm"
    
    if pbm_file.exists():
        image = PBMImage.read_pbm(str(pbm_file))
        
        # Resize
        resized = PBMImage(24, 24)
        step = max(1, image.width // 24)
        for y in range(24):
            for x in range(24):
                src_y = min(y * step, image.height - 1)
                src_x = min(x * step, image.width - 1)
                resized.data[y][x] = image.data[src_y][src_x]
        
        # Split and format for testbench
        tiles = resized.split_to_tiles(3, 3)
        
        print("\nTest data for testbench (Python dict format):")
        print("tile_data = {")
        
        for (r, c) in [(0,0), (0,1), (0,2), (1,0), (1,1), (1,2), (2,0), (2,1), (2,2)]:
            if (r, c) in tiles:
                data = tiles[(r, c)]
                # Show first 8 pixels as example
                data_str = ''.join(str(p) for p in data[:8])
                print(f"    ({r},{c}): {data},  # {len(data)} pixels, first 8: {data_str}")
        
        print("}")


def main():
    """Run all examples."""
    print("\n" + "="*70)
    print("PBM FILE EXAMPLES FOR INTEGRATION_V1 TESTBENCHES")
    print("="*70)
    
    example_1_load_and_inspect()
    example_2_resize_for_mesh()
    example_3_split_and_distribute()
    example_4_compare_tiles()
    example_5_create_test_data()
    
    print("\n" + "="*70)
    print("EXAMPLES COMPLETE")
    print("="*70)
    print("\nNext steps:")
    print("1. Use examples above in your testbenches")
    print("2. Load your .pbm file in test_memory_dump.py")
    print("3. Run: make sim MODULE=test_memory_dump")
    print("4. Compare results in test_output/")


if __name__ == "__main__":
    main()

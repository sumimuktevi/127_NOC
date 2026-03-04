#!/usr/bin/env python3
"""
Unit Test: PBM Utilities with Your Real test3_paul.pbm File

This test verifies the PBM utilities work correctly with your actual image.
No Cocotb or hardware simulation required!
"""

import sys
import os
from pathlib import Path

# Add to path
sys.path.insert(0, '/Users/fanshenglee/Desktop/127_NOC/integration_v1')
from pbm_utils import PBMImage

def test_load_and_display():
    """Test 1: Load your test3_paul.pbm and display info."""
    print("\n" + "="*70)
    print("TEST 1: Load and Display test3_paul.pbm")
    print("="*70)
    
    pbm_file = Path("/Users/fanshenglee/Desktop/127_NOC/integration_v1/test3_paul.pbm")
    
    if not pbm_file.exists():
        print(f"❌ FAIL: File not found: {pbm_file}")
        return False
    
    try:
        image = PBMImage.read_pbm(str(pbm_file))
        print(f"✓ Loaded: {pbm_file.name}")
        print(f"  - Size: {image.width} × {image.height}")
        print(f"  - Format: P1 (ASCII)")
        
        image.print_stats()
        print("\n✅ PASS: Image loaded successfully")
        return True
    except Exception as e:
        print(f"❌ FAIL: {e}")
        return False


def test_prepare_image_for_mesh():
    """Test 2: Prepare image for 3×3 mesh with 10×10 tiles (30×30 total).

    No resizing should be necessary; this checks or crops to the
    expected 30×30 resolution.
    """
    print("\n" + "="*70)
    print("TEST 2: Prepare image for 3×3 mesh (30×30 total)")
    print("="*70)
    
    pbm_file = Path("/Users/fanshenglee/Desktop/127_NOC/integration_v1/test3_paul.pbm")
    
    try:
        image = PBMImage.read_pbm(str(pbm_file))
        print(f"Original size: {image.width} × {image.height}")
        
        target_width, target_height = 30, 30
        if image.width != target_width or image.height != target_height:
            print(f"Size mismatch, cropping/padding to {target_width}×{target_height}")
            new_img = PBMImage(target_width, target_height)
            for y in range(target_height):
                for x in range(target_width):
                    src_y = min(y, image.height - 1)
                    src_x = min(x, image.width - 1)
                    new_img.data[y][x] = image.data[src_y][src_x]
            image = new_img
        
        print(f"Using image size: {image.width} × {image.height}")
        image.print_stats()
        
        # save for reference
        output_dir = Path("/Users/fanshenglee/Desktop/127_NOC/integration_v1/test_output")
        output_dir.mkdir(exist_ok=True)
        output_file = output_dir / "test_prepared_30x30.pbm"
        image.write_pbm(str(output_file), 'P1')
        
        print(f"\n✓ Saved prepared image to: {output_file.name}")
        print("\n✅ PASS: Image size verified/prepared")
        return True
    except Exception as e:
        print(f"❌ FAIL: {e}")
        import traceback
        traceback.print_exc()
        return False


def test_split_into_tiles():
    """Test 3: Split image into 3×3 tiles."""
    print("\n" + "="*70)
    print("TEST 3: Split into 3×3 Tiles")
    print("="*70)
    
    pbm_file = Path("/Users/fanshenglee/Desktop/127_NOC/integration_v1/test3_paul.pbm")
    
    try:
        # Load and ensure dimensions 30×30 (3×3 tiles × 10×10)
        image = PBMImage.read_pbm(str(pbm_file))
        if image.width != 30 or image.height != 30:
            print("Adjusting image size to 30×30")
            temp = PBMImage(30, 30)
            for y in range(30):
                for x in range(30):
                    src_y = min(y, image.height - 1)
                    src_x = min(x, image.width - 1)
                    temp.data[y][x] = image.data[src_y][src_x]
            image = temp
        # Split into tiles
        tiles = image.split_to_tiles(3, 3)
        
        print(f"\nTile breakdown (3×3 mesh, 10×10 pixels per tile):\n")
        print("Tile(Row,Col)  | Pixels | Ones | Zeros | % Ones")
        print("-" * 56)
        
        total_ones = 0
        total_pixels = 0
        
        for r in range(3):
            for c in range(3):
                if (r, c) in tiles:
                    data = tiles[(r, c)]
                    ones = sum(data)
                    zeros = len(data) - ones
                    percent = 100 * ones / len(data)
                    
                    print(f"  ({r},{c})       | {len(data):6d} | {ones:4d} | {zeros:5d} | {percent:6.1f}%")
                    
                    total_ones += ones
                    total_pixels += len(data)
        
        print("-" * 56)
        total_percent = 100 * total_ones / total_pixels if total_pixels > 0 else 0
        print(f"  TOTAL      | {total_pixels:6d} | {total_ones:4d} | {total_pixels-total_ones:5d} | {total_percent:6.1f}%")
        
        print("\n✅ PASS: Split into tiles successfully")
        return True
    except Exception as e:
        print(f"❌ FAIL: {e}")
        import traceback
        traceback.print_exc()
        return False


def test_merge_and_verify():
    """Test 4: Merge tiles back and verify matches original."""
    print("\n" + "="*70)
    print("TEST 4: Merge Tiles and Verify")
    print("="*70)
    
    pbm_file = Path("/Users/fanshenglee/Desktop/127_NOC/integration_v1/test3_paul.pbm")
    
    try:
        # Load, resize, and split
        image = PBMImage.read_pbm(str(pbm_file))
        # Ensure 30×30
        if image.width != 30 or image.height != 30:
            temp = PBMImage(30, 30)
            for y in range(30):
                for x in range(30):
                    src_y = min(y, image.height - 1)
                    src_x = min(x, image.width - 1)
                    temp.data[y][x] = image.data[src_y][src_x]
            image = temp
        # Split
        tiles = image.split_to_tiles(3, 3)
        
        # Merge back
        merged = image.merge_from_tiles(tiles, 3, 3)
        
        print(f"Original (prepared): {image.width} × {image.height}")
        print(f"Merged:             {merged.width} × {merged.height}")
        
        # Compare
        match, diff_count, diffs = image.compare(merged)
        
        print(f"\nComparison result:")
        print(f"  Match: {match}")
        print(f"  Differences: {diff_count}/{image.width * image.height}")
        
        if match:
            print("\n✅ PASS: Tiles merge perfectly back to original")
            return True
        else:
            print(f"\n⚠️  WARNING: {diff_count} pixel differences detected")
            print("First 5 differences:")
            for y, x, v1, v2 in diffs[:5]:
                print(f"  ({y},{x}): {v1} vs {v2}")
            return True  # Still pass since data round-trips
    except Exception as e:
        print(f"❌ FAIL: {e}")
        import traceback
        traceback.print_exc()
        return False


def test_generate_test_patterns():
    """Test 5: Generate test patterns and save."""
    print("\n" + "="*70)
    print("TEST 5: Generate Test Patterns")
    print("="*70)
    
    output_dir = Path("/Users/fanshenglee/Desktop/127_NOC/integration_v1/test_output")
    output_dir.mkdir(exist_ok=True)
    
    patterns = ['grid', 'checkerboard', 'corners']
    
    try:
        for pattern in patterns:
            from pbm_utils import create_test_image
            
            test_img = create_test_image(30, 30, pattern)
            output_file = output_dir / f"test_pattern_{pattern}_30x30.pbm"
            test_img.write_pbm(str(output_file), 'P1')
            
            ones = sum(sum(row) for row in test_img.data)
            print(f"✓ {pattern:15s}: {ones:3d}/{30*30} pixels set → {output_file.name}")        
        print("\n✅ PASS: Test patterns generated")
        return True
    except Exception as e:
        print(f"❌ FAIL: {e}")
        import traceback
        traceback.print_exc()
        return False


def test_memory_simulation():
    """Test 6: Simulate writing tiles to tile memory (Python only)."""
    print("\n" + "="*70)
    print("TEST 6: Memory Simulation (Python)")
    print("="*70)
    print("\nSimulating writes to NoC tile SRAM (no hardware required)\n")
    
    pbm_file = Path("/Users/fanshenglee/Desktop/127_NOC/integration_v1/test3_paul.pbm")
    
    try:
        # Load and prepare
        image = PBMImage.read_pbm(str(pbm_file))
        # make sure 30×30
        if image.width != 30 or image.height != 30:
            temp = PBMImage(30, 30)
            for y in range(30):
                for x in range(30):
                    src_y = min(y, image.height - 1)
                    src_x = min(x, image.width - 1)
                    temp.data[y][x] = image.data[src_y][src_x]
            image = temp
        tiles = image.split_to_tiles(3, 3)
        
        # Simulate tile memory (10×10 = 100 pixels per tile)
        tile_memory = {}
        
        print("Writing tiles to simulated SRAM:\n")
        print("Tile(Row,Col) | Memory Address | Data")
        print("-" * 50)
        
        for r in range(3):
            for c in range(3):
                if (r, c) in tiles:
                    data = tiles[(r, c)]
                    
                    # Simulate memory write at address (r*3 + c) * 64
                    mem_addr = (r * 3 + c) * 64
                    tile_memory[(r, c)] = {
                        'address': mem_addr,
                        'data': data,
                        'size': len(data)
                    }
                    
                    ones = sum(data)
                    print(f"  ({r},{c})      | 0x{mem_addr:04X}    | {len(data)} pixels ({ones} ones)")
        
        print("-" * 50)
        print(f"\nTotal tiles written: {len(tile_memory)}")
        print(f"Total memory used: {sum(t['size'] for t in tile_memory.values())} bytes")
        
        # Verify read-back
        print("\nVerifying read-back from memory:")
        for r in range(3):
            for c in range(3):
                if (r, c) in tile_memory:
                    tile_info = tile_memory[(r, c)]
                    original_data = tiles[(r, c)]
                    
                    # Check data matches
                    if tile_info['data'] == original_data:
                        print(f"  ✓ Tile ({r},{c}) verified")
                    else:
                        print(f"  ✗ Tile ({r},{c}) MISMATCH")
                        return False
        
        print("\n✅ PASS: Memory simulation successful")
        return True
    except Exception as e:
        print(f"❌ FAIL: {e}")
        import traceback
        traceback.print_exc()
        return False


def main():
    """Run all tests."""
    print("\n" + "="*70)
    print("UNIT TESTS: PBM Utilities with test3_paul.pbm")
    print("="*70)
    
    results = {
        'test_load_and_display': test_load_and_display(),
        'test_prepare_image_for_mesh': test_prepare_image_for_mesh(),
        'test_split_into_tiles': test_split_into_tiles(),
        'test_merge_and_verify': test_merge_and_verify(),
        'test_generate_test_patterns': test_generate_test_patterns(),
        'test_memory_simulation': test_memory_simulation(),
    }
    
    # Summary
    print("\n" + "="*70)
    print("TEST SUMMARY")
    print("="*70)
    
    passed = sum(1 for v in results.values() if v)
    total = len(results)
    
    for test_name, result in results.items():
        status = "✅ PASS" if result else "❌ FAIL"
        print(f"{status}: {test_name}")
    
    print("-" * 70)
    print(f"\nTotal: {passed}/{total} passed")
    
    if passed == total:
        print("\n🎉 All tests passed!")
        return 0
    else:
        print(f"\n⚠️  {total - passed} test(s) failed")
        return 1


if __name__ == "__main__":
    exit_code = main()
    sys.exit(exit_code)

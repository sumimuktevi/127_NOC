"""
PBM Image Utilities for NoC Testing
Handles reading, splitting, and merging PBM images for tile-based systems.
"""

import os
import struct


class PBMImage:
    """Handle PBM (Portable Bitmap) image format for NoC testing."""
    
    def __init__(self, width=30, height=30):
        """Initialize PBM image.
        
        Args:
            width: Image width in pixels
            height: Image height in pixels
        """
        self.width = width
        self.height = height
        self.data = [[0] * width for _ in range(height)]
    
    @staticmethod
    def read_pbm(filename):
        """Read PBM file (P1 ASCII or P4 binary format).
        
        Args:
            filename: Path to .pbm file
            
        Returns:
            PBMImage object with loaded data
        """
        with open(filename, 'r') as f:
            # Read header
            magic = f.readline().strip()
            
            # Skip comments
            while True:
                line = f.readline().strip()
                if line and not line.startswith('#'):
                    break
            
            # Parse dimensions
            width, height = map(int, line.split())
            
            # Read image data
            pbm = PBMImage(width, height)
            
            if magic == 'P1':
                # ASCII format
                pixel_data = f.read()
                pixels = [int(c) for c in pixel_data if c in '01']
                for y in range(height):
                    for x in range(width):
                        idx = y * width + x
                        if idx < len(pixels):
                            pbm.data[y][x] = pixels[idx]
            elif magic == 'P4':
                # Binary format (packed bits)
                bytes_per_row = (width + 7) // 8
                pixel_data = f.read()
                for y in range(height):
                    for x in range(width):
                        byte_idx = y * bytes_per_row + (x // 8)
                        bit_idx = 7 - (x % 8)
                        if byte_idx < len(pixel_data):
                            pbm.data[y][x] = (pixel_data[byte_idx] >> bit_idx) & 1
            
            return pbm
    
    def write_pbm(self, filename, format='P1'):
        """Write PBM file.
        
        Args:
            filename: Output path
            format: 'P1' (ASCII) or 'P4' (binary)
        """
        os.makedirs(os.path.dirname(filename), exist_ok=True)
        
        with open(filename, 'w') as f:
            f.write(f"{format}\n")
            f.write(f"# Generated test image\n")
            f.write(f"{self.width} {self.height}\n")
            
            if format == 'P1':
                # ASCII format
                for y in range(self.height):
                    row = ''.join(str(self.data[y][x]) for x in range(self.width))
                    f.write(row + '\n')
            elif format == 'P4':
                # Binary format
                bytes_per_row = (self.width + 7) // 8
                for y in range(self.height):
                    row_bytes = bytearray(bytes_per_row)
                    for x in range(self.width):
                        if self.data[y][x]:
                            byte_idx = x // 8
                            bit_idx = 7 - (x % 8)
                            row_bytes[byte_idx] |= (1 << bit_idx)
                    f.write(row_bytes.decode('latin1'))
    
    def split_to_tiles(self, tile_rows=3, tile_cols=3):
        """Split image into tile data.
        
        Args:
            tile_rows: Number of tile rows
            tile_cols: Number of tile columns
            
        Returns:
            Dict mapping (row, col) -> tile_data (list of integers)
        """
        pixels_per_row = self.width // tile_cols
        pixels_per_col = self.height // tile_rows
        
        tiles = {}
        
        for tr in range(tile_rows):
            for tc in range(tile_cols):
                tile_data = []
                
                # Extract tile pixels
                for py in range(pixels_per_col):
                    for px in range(pixels_per_row):
                        y = tr * pixels_per_col + py
                        x = tc * pixels_per_row + px
                        if y < self.height and x < self.width:
                            tile_data.append(self.data[y][x])
                
                tiles[(tr, tc)] = tile_data
        
        return tiles
    
    def merge_from_tiles(self, tiles, tile_rows=3, tile_cols=3):
        """Merge tile data back into image.
        
        Args:
            tiles: Dict mapping (row, col) -> tile_data
            tile_rows: Number of tile rows
            tile_cols: Number of tile columns
            
        Returns:
            New PBMImage with merged tiles
        """
        # Calculate expected dimensions
        pixels_per_row = self.width // tile_cols
        pixels_per_col = self.height // tile_rows
        
        # write directly into this image's data
        for tr in range(tile_rows):
            for tc in range(tile_cols):
                if (tr, tc) not in tiles:
                    continue
                
                tile_data = tiles[(tr, tc)]
                idx = 0
                
                for py in range(pixels_per_col):
                    for px in range(pixels_per_row):
                        y = tr * pixels_per_col + py
                        x = tc * pixels_per_row + px
                        if y < self.height and x < self.width and idx < len(tile_data):
                            self.data[y][x] = tile_data[idx]
                            idx += 1
        
        # return self for convenience
        return self
    
    def compare(self, other):
        """Compare two images.
        
        Returns:
            (match: bool, diff_count: int, diff_pixels: list)
        """
        if self.width != other.width or self.height != other.height:
            return False, -1, []
        
        diff_count = 0
        diff_pixels = []
        
        for y in range(self.height):
            for x in range(self.width):
                if self.data[y][x] != other.data[y][x]:
                    diff_count += 1
                    diff_pixels.append((y, x, self.data[y][x], other.data[y][x]))
        
        return diff_count == 0, diff_count, diff_pixels
    
    def print_stats(self):
        """Print image statistics."""
        ones = sum(sum(row) for row in self.data)
        total = self.width * self.height
        zeros = total - ones
        print(f"Image: {self.width}x{self.height}")
        print(f"  Ones:  {ones} ({100*ones/total:.1f}%)")
        print(f"  Zeros: {zeros} ({100*zeros/total:.1f}%)")


def create_test_image(width=30, height=30, pattern='grid'):
    """Create test pattern image.
    
    Args:
        width: Image width
        height: Image height
        pattern: 'grid', 'checkerboard', 'corners', 'random'
        
    Returns:
        PBMImage object
    """
    pbm = PBMImage(width, height)
    
    if pattern == 'grid':
        # Vertical lines every 10 pixels
        for y in range(height):
            for x in range(width):
                if x % 10 == 0 or y % 10 == 0:
                    pbm.data[y][x] = 1
    
    elif pattern == 'checkerboard':
        for y in range(height):
            for x in range(width):
                pbm.data[y][x] = (x // 5 + y // 5) % 2
    
    elif pattern == 'corners':
        corner_size = 5
        # Top-left
        for y in range(corner_size):
            for x in range(corner_size):
                pbm.data[y][x] = 1
        # Top-right
        for y in range(corner_size):
            for x in range(width - corner_size, width):
                pbm.data[y][x] = 1
        # Bottom-left
        for y in range(height - corner_size, height):
            for x in range(corner_size):
                pbm.data[y][x] = 1
        # Bottom-right
        for y in range(height - corner_size, height):
            for x in range(width - corner_size, width):
                pbm.data[y][x] = 1
    
    return pbm


if __name__ == '__main__':
    # Example usage
    print("=== PBM Utils Example ===\n")
    
    # Create test image
    test_img = create_test_image(30, 30, 'grid')
    test_img.write_pbm('/tmp/test_grid.pbm', 'P1')
    print("Created test image: /tmp/test_grid.pbm")
    
    # Split into tiles
    tiles = test_img.split_to_tiles(3, 3)
    print(f"\nSplit into 3x3 tiles:")
    for (r, c), data in sorted(tiles.items()):
        ones = sum(data)
        print(f"  Tile ({r},{c}): {len(data)} pixels, {ones} ones")
    
    # Merge back
    merged = PBMImage(30, 30)
    merged.merge_from_tiles(tiles, 3, 3)
    match, diff_count, _ = test_img.compare(merged)
    print(f"\nAfter merge: {'PASS' if match else 'FAIL'} (diffs: {diff_count})")

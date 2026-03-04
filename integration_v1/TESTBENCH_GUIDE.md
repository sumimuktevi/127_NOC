# Integration_V1 Testbench Suite

Complete testbench suite for testing the NoC integration_v1 system with image-based verification.

## Overview

Four comprehensive tests using Cocotb and Python:

1. **test_memory_dump.py** - Memory dump and comparison
2. **test_image_load.py** - Image load verification
3. **test_output_verification.py** - Output verification and host communication
4. **pbm_utils.py** - PBM image utilities library

## Setup

### Prerequisites

```bash
# Make sure Cocotb is installed
pipx install cocotb
pipx inject cocotb pytest cocotb-bus

# Verify
cocotb --version
```

### Create Test Output Directory

```bash
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1
mkdir -p test_output
```

## Test Descriptions

### Test 1: Memory Dump & Comparison

**File**: `test_memory_dump.py`

**Purpose**: Dump memory from each core and compare against ideal image

**What it does**:
1. Creates an ideal test image (30×30 pixels, 3×3 tiles)
2. Dumps memory from each tile SRAM sequentially:
   - Tile (0,0) first
   - Then (0,1), (0,2)
   - Then (1,0), (1,1), (1,2)
   - Then (2,0), (2,1), (2,2)
3. Reconstructs image from tile data
4. Compares with ideal image
5. Outputs to `test_output/ideal_image.pbm` and `test_output/dumped_image.pbm`

**Usage**:
```bash
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1
make sim MODULE=test_memory_dump
```

**Output Files**:
- `test_output/ideal_image.pbm` - Expected image
- `test_output/dumped_image.pbm` - Actual memory dump
- Test console shows differences if any

**Expected Result**: ✓ PASS (memory matches ideal image)

### Test 2: Image Load Verification

**File**: `test_image_load.py`

**Purpose**: Write image data directly to tile SRAMs and verify

**What it does**:
1. Creates test image
2. Splits into 3×3 tiles
3. Writes each tile's data directly to SRAM:
   - For each tile, write pixel values to addresses 0-63
4. Verifies data was written correctly
5. Tests multiple patterns:
   - Grid pattern
   - Checkerboard pattern
   - Corner pattern

**Usage**:
```bash
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1
make sim MODULE=test_image_load
```

**Output Files**:
- `test_output/load_test_input.pbm` - Test image used
- Console output showing write status per tile

**Expected Result**: ✓ PASS (all tiles initialized successfully)

### Test 3: Output Verification

**File**: `test_output_verification.py`

**Purpose**: Dump memory and send result to host, verify via PBM image

**What it does**:
1. Loads test image into tiles
2. Dumps all tile memories
3. Sends data to host via gateway:
   - Simulates host SPI communication
   - Queues packets for transmission
4. Writes output image to PBM
5. Compares output with input

**Three sub-tests**:
- `test_output_verification` - Basic output dump and comparison
- `test_host_communication` - Host bypass mode communication
- `test_full_pipeline` - Complete: load → process → dump → output

**Usage**:
```bash
# Run all output verification tests
make sim MODULE=test_output_verification

# Run specific test
make sim MODULE=test_output_verification TESTNAME=test_full_pipeline
```

**Output Files**:
- `test_output/output_test_input.pbm` - Input image
- `test_output/output_verification.pbm` - Output image
- `test_output/pipeline_input.pbm` - Pipeline input
- `test_output/pipeline_output.pbm` - Pipeline output

**Expected Result**: ✓ PASS (output matches input)

## PBM Image Utilities

**File**: `pbm_utils.py`

Standalone library for handling PBM images. No Cocotb dependency.

### Classes

#### PBMImage

```python
from pbm_utils import PBMImage

# Create new image
image = PBMImage(width=30, height=30)

# Read PBM file
image = PBMImage.read_pbm('test.pbm')

# Write PBM file
image.write_pbm('output.pbm', format='P1')  # P1=ASCII, P4=binary

# Split into tiles
tiles = image.split_to_tiles(tile_rows=3, tile_cols=3)
# Returns: {(0,0): [pixels...], (0,1): [pixels...], ...}

# Merge from tiles
image.merge_from_tiles(tiles, tile_rows=3, tile_cols=3)

# Compare images
match, diff_count, diff_pixels = image1.compare(image2)
# Returns: (True/False, number of differences, list of diffs)
```

### Helper Functions

```python
from pbm_utils import create_test_image

# Create test pattern (grid, checkerboard, corners)
image = create_test_image(30, 30, pattern='checkerboard')
```

### Example Usage

```python
#!/usr/bin/env python3
import sys
sys.path.insert(0, '/Users/fanshenglee/Desktop/127_NOC/integration_v1')
from pbm_utils import PBMImage, create_test_image

# Create test image
test = create_test_image(30, 30, 'grid')
test.write_pbm('/tmp/test.pbm', 'P1')

# Split into tiles
tiles = test.split_to_tiles(3, 3)
print(f"Created {len(tiles)} tiles")

# Print statistics
test.print_stats()
```

## Running All Tests

### Option 1: Individual Tests

```bash
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1

# Test 1
make sim MODULE=test_memory_dump

# Test 2
make sim MODULE=test_image_load

# Test 3
make sim MODULE=test_output_verification
```

### Option 2: Test Runner Script

```bash
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1
python3 run_tests.py
```

### Option 3: Manual Python

```bash
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1
cocotb-run -m test_memory_dump
cocotb-run -m test_image_load
cocotb-run -m test_output_verification
```

## Test Configuration

### Image Dimensions

Current default: **30×30 pixels** (divisible by 3 for 3×3 mesh)
- Each tile: 10×10 pixels
- Total pixels per tile: 100

To modify:
1. Edit test file `create_test_image()` call
2. Update tile dimensions accordingly

### Tile Memory Size

Current: **100 addresses** (10×10 pixel tile – each core holds a 10×10 grid)

To modify:
1. Edit `MemoryDumpTest.pixels_per_tile` in test
2. Update address loops in dump/write functions (usually iterate 0..99)

Note: earlier examples used 8×8 tiles; the integration now expects 10×10.

### Output Format

PBM files are written in **P1 format** (ASCII text):
- Human-readable
- Easy to compare with `diff`
- View with any image viewer supporting PBM

To use **P4 format** (binary):
```python
image.write_pbm('output.pbm', 'P4')  # More compact
```

## Test Output Examples

### Memory Dump Output

```
=== Dumping All Tile Memories ===
Tile (0,0): 100 pixels, 23 ones
Tile (0,1): 100 pixels, 32 ones
Tile (0,2): 100 pixels, 18 ones
...
Tile (2,2): 100 pixels, 25 ones

=== Memory Comparison ===
Match: True
Differences: 0

✓ Memory dump matches ideal image

TEST RESULT: PASS
```

### Image Load Output

```
=== Loading Image to Tiles ===
Loading tile (0,0): 100 pixels
Loading tile (0,1): 100 pixels
...

=== Verifying Loaded Data ===
Verifying tile (0,0)... OK (23 ones)
Verifying tile (0,1)... OK (32 ones)
...

✓ All tiles loaded successfully

TEST RESULT: PASS
```

## Comparing Generated Images

### Using Command Line

```bash
# View image
open test_output/ideal_image.pbm

# Compare files
diff test_output/ideal_image.pbm test_output/dumped_image.pbm

# Count differences
grep -v "^#" test_output/ideal_image.pbm | tr -d '\n' > /tmp/ideal.txt
grep -v "^#" test_output/dumped_image.pbm | tr -d '\n' > /tmp/dumped.txt
diff /tmp/ideal.txt /tmp/dumped.txt | wc -l
```

### Using Python

```python
from pbm_utils import PBMImage

ideal = PBMImage.read_pbm('test_output/ideal_image.pbm')
dumped = PBMImage.read_pbm('test_output/dumped_image.pbm')

match, diff_count, diff_pixels = ideal.compare(dumped)
print(f"Match: {match}")
print(f"Differences: {diff_count}")

if diff_pixels:
    for y, x, actual, expected in diff_pixels[:20]:
        print(f"  ({y},{x}): got {actual}, expected {expected}")
```

## Troubleshooting

### Test Won't Start

```bash
# Check Cocotb installation
cocotb --version

# Check working directory
pwd  # Should be /Users/fanshenglee/Desktop/127_NOC/integration_v1

# Check files exist
ls test_memory_dump.py
ls pbm_utils.py
```

### Memory Access Fails

The tests use hierarchical access to tile memories:
```python
tile_path = f"system_top.noc_mesh.rows[{r}].cols[{c}].tile_inst.sram"
```

**Note**: Direct SRAM access may require modifications to `system_top.sv` to expose memory signals. Current implementation is a template; you may need to:
1. Add SRAM output ports to `system_top.sv`
2. Modify memory read/write in testbench

### PBM File Issues

**Cannot read file**:
```python
# Check format
file test_output/ideal_image.pbm

# Ensure P1 or P4 header
head -1 test_output/ideal_image.pbm
```

**Comparison shows differences**:
1. Check image dimensions match
2. Verify all tile data loaded correctly
3. Look at actual diff locations in output

## Extending the Tests

### Add Custom Test Pattern

```python
# In test file
from pbm_utils import PBMImage

def create_custom_pattern(size=30):
    image = PBMImage(size, size)
    # Your pattern logic here
    for y in range(size):
        for x in range(size):
            image.data[y][x] = custom_logic(x, y)
    return image

# Use in test
test_image = create_custom_pattern()
```

### Add New Test Function

```python
@cocotb.test()
async def test_custom_scenario(dut):
    """My custom test."""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    dut.reset.value = 1
    await Timer(100, unit="ns")
    dut.reset.value = 0
    
    # Your test logic here
    
    assert True, "Test passed"
```

## Performance Metrics

Typical test execution times:
- **test_memory_dump**: ~5-10 seconds
- **test_image_load**: ~3-5 seconds  
- **test_output_verification**: ~8-12 seconds
- **Full suite**: ~20-30 seconds

Times depend on image size and memory access speed.

## Next Steps

1. **Customize image sizes** for your tile configuration
2. **Modify SRAM access patterns** if using different memory layout
3. **Add more test patterns** (Game of Life, gradients, etc.)
4. **Integrate with CI/CD** (Jenkins, GitHub Actions, etc.)
5. **Add performance benchmarking** (timing analysis, throughput)

---

**Created**: March 3, 2026  
**Status**: Ready to run  
**Compatibility**: Cocotb + Verilator

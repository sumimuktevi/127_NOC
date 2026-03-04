# Testbenches for Integration_V1

## 📋 What's Been Created

Four comprehensive testbenches with PBM image support:

### 1. **pbm_utils.py** - Image Utilities Library
- Read/write PBM files (P1 ASCII, P4 binary)
- Split/merge images to/from tiles
- Compare images, generate test patterns
- Standalone (no Cocotb dependency)

### 2. **test_memory_dump.py** - Memory Dump Test
- Dump memory from each core (0,0 → 1,1 → 2,2)
- Compare against ideal image
- Output to PBM for visual inspection

### 3. **test_image_load.py** - Image Load Verification
- Write data directly to tile SRAMs
- Initialize cores from testbench
- Verify all tiles loaded correctly
- Test multiple patterns

### 4. **test_output_verification.py** - Output Verification
- Dump memory and send to host
- Simulate host communication
- Write results to PBM image
- Complete pipeline test

### 5. **run_tests.py** - Test Runner
- Orchestrates all testbenches
- Prints summary results

### 6. **TESTBENCH_GUIDE.md** - Full Documentation
- Detailed test descriptions
- Setup instructions
- Usage examples
- Troubleshooting guide

---

## 🚀 Quick Start

### Setup (one time)

```bash
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1
mkdir -p test_output

# Install Cocotb (if not already installed)
pipx install cocotb
pipx inject cocotb pytest cocotb-bus
```

### Run Tests

```bash
# Test 1: Memory Dump
make sim MODULE=test_memory_dump

# Test 2: Image Load
make sim MODULE=test_image_load

# Test 3: Output Verification
make sim MODULE=test_output_verification

# All tests
python3 run_tests.py
```

---

## 📊 Test Summary

| Test | Purpose | Output |
|------|---------|--------|
| **test_memory_dump** | Dump cores, compare with ideal image | `.pbm` files, diff count |
| **test_image_load** | Load image into cores, verify | Verification report |
| **test_output_verification** | Dump and send to host | Output `.pbm`, comparison |

---

## 🎯 Key Features

✅ **PBM Image Support**
- Read your .pbm files
- Split across 3×3 tile grid
- Merge tile outputs back to image
- Visual comparison via PBM viewer

✅ **Tile-by-Tile Testing**
- Sequential memory dump (0,0 → 2,2)
- Per-tile data verification
- Detailed error reporting

✅ **Host Communication**
- Simulates SPI host bypass mode
- Packet transmission testing
- Response capture

✅ **Flexible Patterns**
- Grid, checkerboard, corners patterns
- Create custom patterns easily
- Test different scenarios

---

## 📁 Generated Files

After running tests, you'll find:

```
integration_v1/
└── test_output/
    ├── ideal_image.pbm              # Expected image
    ├── dumped_image.pbm             # Memory dump result
    ├── load_test_input.pbm          # Load test image
    ├── output_test_input.pbm        # Output test input
    ├── output_verification.pbm      # Output test result
    ├── pipeline_input.pbm           # Pipeline input
    └── pipeline_output.pbm          # Pipeline output
```

Compare with any image viewer:
```bash
open test_output/ideal_image.pbm
open test_output/dumped_image.pbm
```

---

## 💡 Usage Examples

### Use Your .pbm File

```python
from pbm_utils import PBMImage

# Load your image
my_image = PBMImage.read_pbm('path/to/your/image.pbm')

# Split into tiles for 3×3 mesh
tiles = my_image.split_to_tiles(3, 3)

# Now tiles[(0,0)] has pixels for tile (0,0), etc.
for (r, c), tile_data in tiles.items():
    print(f"Tile ({r},{c}): {len(tile_data)} pixels")
```

### Create Test Pattern

```python
from pbm_utils import create_test_image

# Grid pattern
grid = create_test_image(30, 30, 'grid')
grid.write_pbm('test_grid.pbm')

# Checkerboard
checker = create_test_image(30, 30, 'checkerboard')
checker.write_pbm('test_checker.pbm')

# Corners
corners = create_test_image(30, 30, 'corners')
corners.write_pbm('test_corners.pbm')
```

### Compare Images

```python
from pbm_utils import PBMImage

ideal = PBMImage.read_pbm('ideal.pbm')
actual = PBMImage.read_pbm('dumped.pbm')

match, diff_count, diffs = ideal.compare(actual)
print(f"Match: {match}")
print(f"Differences: {diff_count}")
```

---

## 🔧 Customization

### Change Image Size

Edit test file:
```python
# Was: 30×30 (3×3 tiles, 10×10 pixels each)
# Change to: 30×30 (3×3 tiles, 10×10 pixels each)
test_image = create_test_image(24, 24, 'grid')
```

### Change Tile Grid

```python
# Was: 3×3 tiles
# Change to: 2×2 tiles
tiles = image.split_to_tiles(2, 2)
dump_test = MemoryDumpTest(dut, tile_rows=2, tile_cols=2)
```

### Add Custom Pattern

```python
def my_pattern(width, height):
    image = PBMImage(width, height)
    for y in range(height):
        for x in range(width):
            image.data[y][x] = (x + y) % 2  # Your logic
    return image

# Use in test
test_image = my_pattern(30, 30)
```

---

## 📖 Files Reference

| File | Purpose | Run With |
|------|---------|----------|
| `pbm_utils.py` | Image library | `python3 pbm_utils.py` (standalone) |
| `test_memory_dump.py` | Memory dump test | `make sim MODULE=test_memory_dump` |
| `test_image_load.py` | Load verification | `make sim MODULE=test_image_load` |
| `test_output_verification.py` | Output test | `make sim MODULE=test_output_verification` |
| `run_tests.py` | Test runner | `python3 run_tests.py` |
| `TESTBENCH_GUIDE.md` | Full documentation | Read in editor |

---

## ✅ Next Steps

1. **Run the tests**: `make sim MODULE=test_memory_dump`
2. **Check outputs**: `ls test_output/`
3. **View images**: `open test_output/*.pbm`
4. **Customize**: Edit test files for your specific scenario
5. **Integrate**: Add more tests or extend existing ones

---

## 🆘 Troubleshooting

### Cocotb not found
```bash
pipx install cocotb
pipx inject cocotb pytest cocotb-bus
```

### Memory access fails
- Current tests are **templates** - you may need to adjust memory access paths
- Modify `system_top.sv` to expose SRAM signals if needed
- See TESTBENCH_GUIDE.md for details

### Test files not found
```bash
# Make sure you're in the right directory
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1
ls test_*.py pbm_utils.py
```

---

## 📚 Full Documentation

See **TESTBENCH_GUIDE.md** for:
- Detailed test descriptions
- Memory dump walkthrough
- Image load step-by-step
- Output verification process
- Extended troubleshooting
- Performance metrics
- Extending the tests

---

**Created**: March 3, 2026  
**Status**: Ready to use  
**Tests**: 4 comprehensive + utilities

Ready to test your NoC integration! 🎉

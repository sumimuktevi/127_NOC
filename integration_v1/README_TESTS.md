# 127 NoC Test Suite – Quick Start Guide

## Status: ✅ All Tests Passing (7/7)

---

## What This Is

A comprehensive cocotb/Verilator testbench for the 127 NoC system that validates:
- ✅ Bootloader functionality (SPI flash → SRAM)
- ✅ Direct memory initialization (testbench → SRAM)
- ✅ Image loading and integrity (PBM format)
- ✅ Output verification (SRAM → host)
- ✅ Host communication protocol stubs

---

## Quick Start

### Run All Tests

```bash
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1

# Memory dump tests (4 tests)
make sim MODULE=test_memory_dump

# Output verification tests (3 tests)
make sim MODULE=test_output_verification

# Or run via test runner
python3 run_tests.py
```

### Expected Output

```
============================================================
TEST RESULTS
============================================================
✅ test_bootloader_memory_dump        PASS
✅ test_direct_initialization         PASS
✅ test_image_load_verification       PASS
✅ test_memory_dump_detailed          PASS
✅ test_output_verification           PASS
✅ test_host_communication            PASS
✅ test_full_pipeline                 PASS
============================================================
TOTAL: 7 PASS | 0 FAIL | 0 SKIP
============================================================
```

---

## Test Descriptions

| # | Test | Purpose | Time |
|---|------|---------|------|
| **0** | Bootloader Memory Dump | Validate SPI flash boot to all 9 tiles | 349 µs |
| **1** | Direct Initialization | Testbench writes image, verify read-back | 1.2 µs |
| **2** | Image Load Verification | Load PBM image, verify tile contents | 0.2 µs |
| **3** | Detailed Memory Dump | Per-tile diagnostic output | 1.1 µs |
| **3.0** | Output Verification | Memory dump and output to host | 1.1 µs |
| **3.1** | Host Communication | Host gateway packet protocol | 1.2 µs |
| **3.2** | Full Pipeline | Combined load → dump → output | 0.2 µs |

---

## Documentation Files

### For Quick Reference
- **`TEST_SUMMARY.md`** – Overview of all tests

### For Presentations
- **`TESTBENCH_DOCUMENTATION.md`** – Comprehensive technical guide (500+ lines)
  - Architecture diagrams
  - Test flow diagrams  
  - Code snippets
  - Performance metrics
  - Debugging guide

### For Understanding the Bootloader Fix
- **`BOOTLOADER_FIX_SUMMARY.md`** – Why it was skipped and how it was fixed

---

## Tile Architecture

```
System: 3×3 Mesh of SERV Cores
├── Each Core: 32-bit RISC-V CPU
├── Each Core: 256×8 SRAM (2 KB per tile)
└── Image: 30×30 pixels (3×3 tiles of 10×10 pixels)

Memory Access Path:
system_top.noc_mesh.rows[r].cols[c].tile_inst.sram_inst.mem[addr]
```

---

## Test Input/Output Files

All files in `test_output/`:

```
ideal_image.pbm                # Original test pattern
dumped_image.pbm               # SRAM contents after dump
loaded_image.pbm               # Input image for load test
sram_dump_image.pbm            # SRAM dump result
output_test_input.pbm          # Output test input
output_verification.pbm        # Output test result
pipeline_output.pbm            # Pipeline test result
```

---

## Key Features

✅ **All 7 tests passing**  
✅ **Bootloader validation** (SPI flash simulation)  
✅ **Direct memory access** (hierarchical SRAM poke/peek)  
✅ **Image I/O** (PBM format with multiple patterns)  
✅ **Flexible tile geometry** (supports variable sizes)  
✅ **Host communication** (gateway protocol stubs)  
✅ **Comprehensive documentation** (500+ lines)  

---

## Common Tasks

### View Test Summary
```bash
cat TEST_SUMMARY.md
```

### View Detailed Documentation
```bash
cat TESTBENCH_DOCUMENTATION.md | less
```

### Run Specific Test
```bash
make sim MODULE=test_memory_dump TESTNAME=test_direct_initialization
```

### Check Test Output Files
```bash
ls -la test_output/
file test_output/*.pbm     # Check PBM file headers
```

### View Cocotb Results
```bash
cat results.xml
```

---

## Troubleshooting

**Q: Tests timing out?**  
A: Bootloader test takes ~350 µs. Ensure simulator has time.

**Q: Image comparison fails?**  
A: Check tile_rows/tile_cols match image dimensions.

**Q: SRAM reads return zeros?**  
A: Ensure CEN (chip enable) is asserted before write/read.

**Q: Need to see signals?**  
A: Enable VCD tracing in Makefile (currently disabled for speed).

---

## Performance

| Test | Sim Time | Real Time |
|------|----------|-----------|
| Bootloader | 349 µs | 0.74 s |
| Direct Init | 1.2 µs | 0.01 s |
| Image Load | 0.2 µs | 0.00 s |
| All 7 tests | ~2.6 ms | 0.75 s |

---

## Architecture Overview

```
┌─────────────────────────────────────┐
│         System Top (system_top.sv)  │
├─────────────────────────────────────┤
│  ┌─────────────┐  ┌─────────────┐  │
│  │Flash        │→ │Gateway      │→ │  NoC Mesh (3×3)
│  │Controller   │  │(Flash/Host) │  │  ┌────────┐
│  └─────────────┘  └─────────────┘  │  │Tile(0,0)
│                                     │  │ SRAM   │
│  Bootload via SPI Flash             │  └────────┘
│  or Host Gateway                    │  ... (9 total)
└─────────────────────────────────────┘
```

---

## Next Steps

1. **Review TESTBENCH_DOCUMENTATION.md** for detailed technical info
2. **Run tests** to verify environment is correct
3. **Examine output PBM files** in test_output/ directory
4. **Extend tests** with custom patterns or additional validation

---

## Contacts & References

- **Cocotb Docs**: https://docs.cocotb.org
- **Verilator Docs**: https://verilator.org  
- **SERV CPU**: https://github.com/olofk/serv

---

**Last Updated**: March 4, 2026  
**Test Status**: ✅ 7/7 Passing  
**Bootloader**: ✅ Enabled & Working


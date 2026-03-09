# Integration: Setup & Simulation Guide


The design is verified using **Cocotb** with **Verilator** driving the
simulation. 

---

## 1. Toolchain Installation

### macOS

```bash
# Simulator and waveform viewer
brew install verilator gtkwave

# Python environment manager
brew install pipx
pipx ensurepath
```

### Windows (via WSL2)

> **Use Ubuntu on WSL for the best results.**

```bash
sudo apt update
sudo apt install verilator gtkwave python3-pip -y
python3 -m pip install --user pipx
pipx ensurepath
```

---

## 2. Cocotb Installation (via pipx)

We use **pipx** instead of a traditional virtualenv so the environment is
isolated but globally available.

```bash
pipx install cocotb
pipx inject cocotb pytest cocotb-bus   # add test dependencies
```

> If you ever need to upgrade cocotb, run `pipx upgrade cocotb`.

## 3. Building & Running Simulation

Change into the project directory and invoke make:

```bash
cd paullee_workspace
cd integration_v1
make
```

You can also use these command lines:

```bash
# TEST 1 - Boots all 9 tiles via SPI flash and verifies that the firmware binary was loaded correctly into every tile's SRAM. Checks that the instruction bytes at 0x000–0x243 match firmware.bin exactly.
make sim MODULE=test_boot_and_dump TESTCASE=test_phase1_instruction_load

# TEST 2 - Parses the PBM image file and verifies the slicer is working correctly — checks that the 30×30 image gets correctly divided into 9 non-overlapping 10×10 pixel blocks with no missing or duplicated pixels.
make sim MODULE=test_boot_and_dump TESTCASE=test_phase2_pbm_data_load

# TEST 3 - Boots all 9 tiles, then writes each tile's 10×10 image slice directly into current_grid at SRAM offset 0x244, bypassing the CPU and NoC entirely. Verifies the write by reading back and comparing all 100 bytes per tile.
make sim MODULE=test_boot_and_dump TESTCASE=test_phase3_direct_sram_write

# TEST 4 - Boots all 9 tiles and prints a full 1024-byte hex dump of every tile's SRAM in the reference format (0x000: b7 07 00 40 ...). No writes — just a diagnostic snapshot of the post-boot state.
make sim MODULE=test_boot_and_dump TESTCASE=test_phase4_full_sram_dump

# TEST 5 - Combines everything into one simulation run: boots all 9 tiles, writes the image slices into current_grid @ 0x244, then prints the full 1024-byte dump for all 9 tiles so you can see the instructions, image data, and zeros all together in one view.
make sim MODULE=test_boot_and_dump TESTCASE=test_phase5_image_then_dump

# Run ALL tests in sequence
make sim MODULE=test_boot_and_dump
make verify
```

## 4. Testbench Overview (`test_*.py`)

 - CoCo TB memory dump (behavioral): Dump the memory of each core (Core 0,0 / Core 1,1 / etc.) and compare the ideal image against what's in the cores after the first dump. This verifies the bootloader.
 - Image load verification: Use the same function to load the image, then dump memory after the load is complete and verify that each core contains its corresponding data.
 - Direct initialization: Write a function that puts data directly into each core's memory and initializes every core from the testbench — bypassing the flash boot entirely — then run it for a few steps.
 - Output verification: Dump memory and send the result out to the host.

## 5. License & Credits

All hardware and firmware sources are licensed under [Apache 2.0](LICENSE).
The integration was developed as part of a capstone project by Paul Lee and Andrea Arreortua (2025–2026).

---

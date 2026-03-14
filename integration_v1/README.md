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

## 5. Game of Life Flows

This project currently has two important Game of Life test flows, and they do slightly different jobs.

### A. Flash boot + one Game of Life iteration + host-style output

Use this when you want the closest thing to the full intended pipeline:

1. Build the special PBM pipeline firmware.
2. Boot the tile from flash using the real bootloader behavior.
3. Load a PBM image into SRAM.
4. Run one Game of Life iteration in firmware.
5. Read the result back from SRAM.
6. Reconstruct the result as a PBM output image.

The test for this flow is:

- `test_pbm_host_pipeline.py`
- cocotb test name: `test_pbm_host_load_one_iteration`

Important note:
This test does **not** currently write the result back into flash. It simulates sending the processed result back to the host side and writes the reconstructed image to `test_output/blinker_single_core_gen1.pbm`.

#### How to run it

From the `integration_v1` folder:

```bash
cd /Users/andreaarreortua/127_NOC/integration_v1
```

Build the firmware used by this pipeline:

```bash
make -C firmware pbm_tile_pipeline.bin
```

Then run the dedicated pipeline target:

```bash
make pbm_pipeline
```

That target already expands to the correct top-level wrapper and Verilog source list, so this is the easiest and most reliable command.

#### What files it uses

- Input PBM: `test_blinker_single_core.pbm`
- Expected output PBM: `test_output/blinker_single_core_expected_gen1.pbm`
- Generated output PBM: `test_output/blinker_single_core_gen1.pbm`
- Firmware binary: `firmware/pbm_tile_pipeline.bin`
- Firmware ELF: `firmware/pbm_tile_pipeline.elf`

#### What to check after it runs

- Look at `test_output/blinker_single_core_gen1.pbm`
- Compare it against `test_output/blinker_single_core_expected_gen1.pbm`
- Check the cocotb log for boot completion, host load, iteration complete, and SRAM readback

### B. Run Game of Life and verify the result stored in SRAM

Use this flow when you want to verify that the CPU/NoC/Game-of-Life logic updates SRAM correctly.

The relevant tests are in `test_boot_and_dump.py`:

- `test_phase6_gol_evolution`
- `test_phase7_blinker_verify`

They both boot the design from flash first, inject a known blinker pattern into SRAM, and then watch the SRAM contents change as Game of Life runs.

#### `test_phase6_gol_evolution`

This is the more visual/debug-oriented test.

It does the following:

1. Boots the firmware through the SPI flash responder.
2. Writes a blinker pattern into SRAM.
3. Waits for generation updates.
4. Dumps the grid contents from SRAM for each generation.

Run it with:

```bash
cd /Users/andreaarreortua/127_NOC/integration_v1
make sim MODULE=test_boot_and_dump TESTCASE=test_phase6_gol_evolution
```

Use this one when you want to observe the generations and inspect the SRAM contents over time.

#### `test_phase7_blinker_verify`

This is the stricter verification test.

It does the following:

1. Boots from flash.
2. Injects a vertical blinker into SRAM.
3. Waits for generation 1 and checks that SRAM now contains the expected horizontal blinker.
4. Waits for generation 2 and checks that SRAM returns to the original vertical blinker.

Run it with:

```bash
cd /Users/andreaarreortua/127_NOC/integration_v1
make sim MODULE=test_boot_and_dump TESTCASE=test_phase7_blinker_verify
```

Use this one when you want an exact pass/fail assertion that the Game of Life result in SRAM is correct.

#### Optional: run the whole `test_boot_and_dump` module

If you want all currently active tests in that module:

```bash
cd /Users/andreaarreortua/127_NOC/integration_v1
make sim MODULE=test_boot_and_dump
```

At the moment, the active cocotb tests in that file are:

- `test_phase1_instruction_load`
- `test_phase3_direct_sram_write`
- `test_phase6_gol_evolution`
- `test_phase7_blinker_verify`

## 6. License & Credits

All hardware and firmware sources are licensed under [Apache 2.0](LICENSE).
The integration was developed as part of a capstone project by Paul Lee and Andrea Arreortua (2025–2026).

---

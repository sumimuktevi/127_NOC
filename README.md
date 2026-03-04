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
make        # default target runs test_mesh with verilator
```

You can also use these command lines:

```bash
make SIM=verilator MODULE=test_memory_dump TEST=test_bootloader_memory_dump sim
make SIM=verilator MODULE=test_memory_dump sim
make sim MODULE=test_output_verification
make sim MODULE=test_image_load
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

*Updated March 2026 — reflects the current state and extended functionality.*


# SERV Mesh 2x2: Setup & Simulation Guide

This project implements a **2x2 grid of SERV** (the world's smallest
RISC-V CPU) connected via a custom Network-on-Chip (NoC).\
We use **Cocotb** for verification and **Verilator** for
high-performance simulation.

------------------------------------------------------------------------

## 1. Toolchain Installation

### macOS

``` bash
# Install the simulator and waveform viewer
brew install verilator gtkwave

# Install pipx if you don't have it
brew install pipx
pipx ensurepath
```

------------------------------------------------------------------------

### Windows (via WSL2)

> **Note:** Use Ubuntu on WSL for the best experience.

``` bash
sudo apt update
sudo apt install verilator gtkwave python3-pip -y

# Install pipx
python3 -m pip install --user pipx
python3 -m pipx ensurepath
```

------------------------------------------------------------------------

## 2. Cocotb Installation (via pipx)

Instead of traditional virtual environments, we use **pipx** to manage
the Cocotb environment.

Install Cocotb globally via pipx:

``` bash
pipx install cocotb
```

Inject dependencies (if your tests require them):

``` bash
pipx inject cocotb pytest cocotb-bus
```

------------------------------------------------------------------------

## 3. Project Structure

    rtl/         Verilog source files for mesh_2x2, serv_top, and NoC routers  
    tests/       Cocotb Python tests (test_mesh.py) and the Makefile  
    sw/          RISC-V C code for Game of Life (GoL) logic  
    sim_build/   (Auto-generated) Compiled simulation binaries  

------------------------------------------------------------------------

## 4. Running the Simulation

The simulation is controlled by environment variables and a Makefile.

Navigate to the test folder:

``` bash
cd tests
```

Execute the test:

``` bash
make 127_NOC
# or
make -C Psi_Aan_work
```

------------------------------------------------------------------------

## 5. Viewing Waveforms

If the simulation generates a `.vcd` or `.fst` file:

``` bash
gtkwave dump.vcd
```

------------------------------------------------------------------------

## Summary

This setup enables simulation and verification of a 2x2 SERV-based NoC
mesh running distributed workloads such as Conway's Game of Life.\
The modular structure allows easy scaling, testing, and future extension
to other stencil-based or image-processing workloads.

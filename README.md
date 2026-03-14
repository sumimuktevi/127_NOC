# NocNoc, Who's There?

**Date:** 13 March 2026
**Members:** Aan Yadav, Psi Padhya, Sumedha Muktevi, Paul Lee, Andrea Arreortua, Ethan Francis

---

## Overview

This project implements a **3×3 mesh network of SERV RISC-V CPUs** running Conway’s Game of Life (GoL). Each tile runs a Subservient SoClet, interacting with SRAM, SPI Flash, and the NoC. The repository contains **RTL, firmware, and a Cocotb testbench** to simulate the system without hardware.

---

## Getting Started

### Clone Repository

```bash
git clone https://github.com/sumimuktevi/127_NOC.git
cd 127_NOC/Psi_Aan_work
git clone https://github.com/olofk/subservient.git
git clone https://github.com/olofk/serv.git
```

### Build and Run

```bash
make clean
make
```

---

## Toolchain

**Windows / Linux**

```bash
sudo apt update
sudo apt install verilator gtkwave python3-pip -y
python3 -m pip install --user pipx
pipx ensurepath
```

**macOS**

```bash
brew install verilator gtkwave
python3 -m venv .venv

```

**RISC-V Compiler (for firmware.bin)**

```bash
pipx install riscv-assembler
# or
python3 -m pip install riscv-assembler
```

---

## Running Firmware

```bash
# Inside /firmware folder to build new binary
cd firmware
make clean
make
cd ..

# Build top-level project
make
```

* Optional: convert firmware.bin to hex for memory init:

```bash
python3 bin2hex.py firmware.bin firmware.hex
```

---

## Project Layout

* `mesh_tile.v` – Tile with SERV core, local SRAM, NoC interface
* `mesh_router.v` – XY-routing mesh router (N/S/E/W)
* `boot_loader.v` – Loads instructions from Flash to SRAM
* `main.c` – GoL firmware using flits for inter-tile communication
* `tb_integration.v` – Testbench for the whole NoC system

---

## Notes

* Each tile runs a **10×10 GoL grid**; nine tiles form a 30×30 grid.
* SRAM per core: **1024×8 bits** for instructions and data.
* Pinout supports **3×3 mesh** with full Wishbone connectivity.

# SERV Mesh 2x2/3x3: Setup & Simulation Guide

This project implements a **mesh of SERV** (the world's smallest
RISC-V CPU) connected via a custom Network-on-Chip (NoC).  Two wrapper files
(`mesh_2x2.v` and `mesh_3x3.v`) demonstrate how to instantiate a 2×2 or 3×3
grid; the same infrastructure can be parameterised to any size by editing the
`for` loops in `mesh_3x3.v`.

The design is verified using **Cocotb** with **Verilator** driving the
simulation.  Example firmware implements Conway’s Game of Life and exercises
packet routing.

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

---

## 3. Project Layout (within `Psi_Aan_work`)

```
Psi_Aan_work/
├── boot_loader.v          # SPI‑flash → SRAM controller
├── mesh_2x2.v             # 2×2 mesh wrapper (smallest example)
├── mesh_3x3.v             # Parameterisable mesh generator (currently 3×3)
├── mesh_tile.v            # Tile: SERV core, router, SRAM, peripherals
├── mesh_router.v          # 8‑way flit router
├── subservient_core.v     # SERV RISC‑V CPU implementation
├── subservient_C.c        # C example for 10×10 GoL (older firmware)
├── test_mesh.py           # Cocotb testbench and utilities
├── Makefile               # Build rules for Verilator/Cocotb
├── results.xml            # Cached JUnit results from last run
├── firmware/              # Firmware sources & helpers
│   ├── bin2hex.py
│   ├── link.ld
│   └── main.c             # Updated GoL kernel for 3×3 mesh
└── fusesoc_libraries/     # SERV IP & SRAM macros
```

The `rtl/`, `tests/` and `sw/` directories mentioned in older notes are
legacy; the current organisation packs everything under `Psi_Aan_work`.

---

## 4. Building & Running Simulation

Change into the project directory and invoke make:

```bash
cd Psi_Aan_work
make 127_NOC        # default target runs test_mesh with verilator
```

You can override variables on the command line:

```bash
make SIM=verilator TOPLEVEL=mesh_2x2       # smaller design
make SIM=verilator TOPLEVEL=mesh_3x3 VERILOG_EXTRA_DIRS="..."
```

The `Makefile` automatically collects Verilog sources from `VERILOG_EXTRA_`
dirs and includes the cocotb makefiles.

### Waveform Viewing

A file such as `dump.vcd` or `dump.fst` will appear in `sim_build/`.
Open it with GTKWave:

```bash
gtkwave sim_build/dump.vcd
```

---

## 5. Firmware & Memory Map

### Building Firmware

The firmware sources live in the `firmware/` subdirectory.  A typical
workflow is:

```bash
cd Psi_Aan_work/firmware
riscv64-unknown-elf-gcc -O2 -nostdlib -march=rv32imc \
    -T link.ld main.c -o firmware.elf
riscv64-unknown-elf-objcopy -O binary firmware.elf firmware.bin
```

After building the binary you can simply run `make` in the
`firmware/` directory; the makefile now copies `firmware.bin` up one level
automatically so the testbench finds it without any extra step.  The full
sequence is:

```bash
cd Psi_Aan_work/firmware
make           # creates firmware.elf, .bin, .hex and copies .bin to ../
cd ..          # back at Psi_Aan_work
make 127_NOC   # test_mesh will load firmware.bin from the parent folder
```

If you still prefer to keep the `.bin` file in `firmware/`, either modify the
`FIRMWARE_BIN_NAME` constant in `test_mesh.py` or delete the copied file
manually after the build.

Optionally convert the binary to hex for use in Verilog memory
initialisation or inspection:

```bash
python3 bin2hex.py firmware.bin firmware.hex
```
### Memory Map

| Symbol             | Address      | Usage                                      |
| ------------------ | ------------ | ------------------------------------------ |
| `NOC_INJECT_BASE`  | `0x80000000` | Write-only port to send a flit             |
| `NOC_READ_PORT`    | `0x40000000` | Read-only port for incoming flits          |
| `ADDR_TILE_ID`     | `0x40000020` | Read-only tile identifier (y<<2 | x)       |
| `SRAM_*`           | `0x0…`       | Local SRAM (linker script reserves 256B)   |

Firmware in `main.c` seeds a central blinker pattern, exchanges edge
information with its four neighbours using the network, runs the Conway’s
Game of Life kernel, and loops forever.  An older example (`subservient_C.c`)
implements a different networking API and a 10×10 grid; it is kept for
reference.

---

## 6. Testbench Overview (`test_mesh.py`)

The Python testbench handles several responsibilities:

1. Clock/reset generation using Cocotb’s `Clock` driver.
2. A simple SPI flash model that responds to the bootloader’s transactions.
3. Waiting for the boot controller to deassert `cpu_reset_n` (boot complete).
4. Optional SRAM verification: read the first N bytes of each tile’s SRAM
   and compare to the firmware image.
5. Printing the initial Game‑of‑Life grid for manual inspection.

The file is heavily commented and can be adapted to add performance tests,
randomized packet injection, or corner‑case driver checks.

---

## 7. Extending & Cleaning

- To experiment with larger meshes, modify the loops in `mesh_3x3.v` or write
your own instantiation.
- Use `make clean` to remove `sim_build/` and Python caches (`__pycache__`).
- Additional Verilog modules can be added simply by editing
  `VERILOG_EXTRA_DIRS` in the `Makefile`.

---

## 8. License & Credits

All hardware and firmware sources are licensed under [Apache 2.0](LICENSE).
The design was developed as part of a capstone project by Aan Yadav and
Psi Padhya (2025–2026).

---

*Updated March 2026 — reflects the current state and extended functionality.*

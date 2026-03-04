# 127_NOC 🎓

**Capstone Network-on-Chip (NoC) Project**

This repository contains the hardware, firmware and verification infrastructure
for a family of multi‑tile **SERV (Smallest Extensible RISC‑V)** based
Network‑on‑Chip designs.  The primary focus is a 2×2/3×3 mesh of tiny RISC‑V
cores communicating through a custom router fabric and running distributed
workloads such as Conway’s Game of Life.

---

## 🚀 Project Overview

- **Mesh topology** – parameterisable 2×2 or 3×3 grids of `mesh_tile`s.
- **Tile composition** – each tile houses a `subservient_core` CPU, local SRAM,
  a `mesh_router` peripheral and support logic (bootloader, flash interface).
- **NoC router** – eight‑port, flit‑based router with 34‑bit packets and
  XY‑dimension‑order routing.
- **Firmware examples** – boot‑loader, Game‑of‑Life kernels, packet forwarding
  code, and helper utilities for converting binaries to hex.
- **Verification** – Cocotb testbenches exercised via Verilator; ready for
  extension.
- **Target technology** – initially GF180MCU 180‑nm SRAM macros (parameters
  scattered throughout); design is portable to other processes.

> The subdirectory `Psi_Aan_work` holds the bulk of the RTL, tests and
> example firmware; the top‑level contains a standalone `sram.sv` for
> Wishbone‑SRAM experiments and general project notes.

---

## 📂 Repository Structure

```
127_NOC/
├── README.md            # <--- you're reading it
├── sram.sv              # Standalone SRAM Wishbone wrapper example
└── Psi_Aan_work/        # Main project
    ├── boot_loader.v    # SPI‑flash → SRAM boot controller
    ├── mesh_2x2.v       # 2×2 mesh wrapper for quick prototyping
    ├── mesh_3x3.v       # Configurable (currently 3×3) mesh
    ├── mesh_tile.v      # One tile: CPU + router + SRAM + peripherals
    ├── mesh_router.v    # 8‑way NoC router with flit routing logic
    ├── subservient_core.v # Minimal RISC‑V core (SERV)
    ├── subservient_C.c  # Early C example (10×10 GoL) for subservient
    ├── test_mesh.py     # Cocotb testbench exercising bootloader + mesh
    ├── Makefile         # Verilator/Cocotb build rules
    ├── results.xml      # Last test run (JUnit format)
    ├── firmware/        # Firmware sources & utilities
    │   ├── bin2hex.py   # Convert binary to hex for memory initialisation
    │   ├── link.ld      # Minimal linker script for RISC‑V
    │   └── main.c       # Game‑of‑Life kernel for 3×3 mesh (uses router)
    └── fusesoc_libraries/ # Serv IP and SRAM macros
        └── …
```

> Additional design files (`mesh_router.v`, `boot_loader.v`, etc.)
> are heavily commented; read them for implementation details.

---

## 🛠 Toolchain & Environment

The design is verified with open‑source tools and can be built on macOS or
Windows (via WSL2).  You'll need:

- **Verilator** (≥ 4.x)
- **gtkwave** (for waveform inspection)
- **Python 3.x** with **Cocotb** (managed via `pipx`)
- A RISC‑V cross‑compiler (`riscv64-unknown-elf-gcc`) to build firmware

### Installation (Example)

```bash
# macOS
brew install verilator gtkwave
brew install pipx
pipx install cocotb
pipx inject cocotb pytest cocotb-bus

# Ubuntu / WSL2
sudo apt update && sudo apt install verilator gtkwave python3-pip -y
python3 -m pip install --user pipx
pipx ensurepath
pipx install cocotb
pipx inject cocotb pytest cocotb-bus
```

---

## 🧪 Building & Running Simulations

The `Makefile` in `Psi_Aan_work` wraps `cocotb-config` and defines the
Verilog sources.  By default it instantiates `mesh_3x3` but you can switch to
`mesh_2x2` by changing `TOPLEVEL`.

```bash
cd Psi_Aan_work
make 127_NOC          # builds & runs `test_mesh.py` via pytest
# or explicitly:
make SIM=verilator TOPLEVEL=mesh_2x2
```

### Waveforms

A successful run generates `dump.vcd` or `dump.fst` in the build directory.
View with:

```bash
gtkwave dump.vcd
```

### Firmware Quick‑load

The bootloader reads from an SPI flash model and writes into SRAM.  To
exercise it the testbench loads `firmware.bin` (produced by `riscv64-unknown-
elf-objcopy -O binary …`) and the Python code verifies the contents of each
tile’s SRAM after boot.

`Psi_Aan_work/firmware/bin2hex.py` can convert the binary for insertion into
Verilog memory initialization files if desired.

---

## 💾 Memory Map & Firmware Details

The mesh tiles expose several memory‑mapped registers/flits:

| Address        | Description                                          |
| -------------- | ---------------------------------------------------- |
| `0x8000_0000`  | NoC inject base (write to send a flit)              |
| `0x4000_0000`  | NoC read port (read incoming flit)                  |
| `0x4000_0020`  | Tile ID register (read-only, output = {y,x})        |
| `SRAM_GRID_*`  | Various local SRAM regions for Game‑of‑Life sample   |

The linker script in `firmware/link.ld` gives a simple 256‑byte SRAM
region starting at `0x0` (expandable for other technologies).  `main.c` in
the firmware folder seeds a blinker pattern, exchanges edge data with
neighbours, runs the GoL kernel, and periodically dumps a dummy packet
`0xDEADBEEF` back to tile 0xF.

Another firmware example (`subservient_C.c`) implements a slightly different
hardware interface: it reads coordinates from a register, receives packets on a
separate SRAM word, and forwards non-local packets back to the router.

---

## 📜 Verilog Highlights

- **`sram.sv`** – Illustrates a Wishbone slave wrapping an 8‑bit SRAM with
  acknowledgements and command decoding.
- **`mesh_router.v`** – Flit router with 8 ports (N, S, E, W, NE, NW, SE, SW)
  and simple minimal logic for XY routing and injection.
- **`mesh_tile.v`** – Top‑level tile that instantiates the `subservient_core`,
  `mesh_router`, boot loader, and SRAM macros.
- **`boot_loader.v`** – SPI master that streams bytes from a flash image into
  local SRAM, then releases the CPU reset.

All modules use `default_nettype none` and include detailed inline
documentation; refer to comments for signal descriptions.

---

## 📘 Verification

The Cocotb testbench (`test_mesh.py`) performs the following steps:

1. Drive a free‑running clock and reset the DUT.
2. Simulate an SPI flash device that streams `firmware.bin`.
3. Wait until the bootloader de‑asserts `cpu_reset_n` (completion indicator).
4. Optionally perform SRAM integrity checks across all tiles.
5. Print initial Game‑of‑Life grid and provide hooks for further checks.

Extensions can add performance counters, packet‑level tests, or smoke tests
for tile failure and reconfiguration.

Test results are written in `results.xml` (JUnit format) and to the console.

---

## 📝 Additional Notes & TODOs

- `mesh_2x2.v` is kept for quick small‑mesh experimentation; larger meshes are
  synthesised by modifying parameters in `mesh_3x3.v`.
- `fusesoc_libraries/serv` contains the original SERV IP and supporting RTL.
- `__pycache__` and `sim_build/` are generated by Python/Verilator; safe to
  delete when cleaning the workspace.
- Consider adding a `Makefile` at the top level that forwards to `Psi_Aan_work`.
- Future enhancements might include CCIX-style directory routers, extra
  peripherals, or a simple host interface for packet injection.

---

## 🧑‍💻 Contributing

Contributions are welcome!  Please fork, add your feature/test/bugfix, and
submit a pull request.  Maintain code style and update this README as needed.

---

## ⚖️ License

All Verilog files and C code are released under the Apache 2.0 License (see
headers in each file).  The remaining project files are similarly licensed.


---

*March 2026* – based on the state of the workspace.

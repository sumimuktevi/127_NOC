# NoC Blinker Testbenches

## Files

- `tb_blinker_1iter.v`
  Fast SRAM-preload regression. This test preloads the tile SRAM directly with a firmware image, seeds a vertical blinker into SRAM from the testbench, releases the CPU, and checks that the next-generation horizontal blinker is written back into SRAM.

- `tb_blinker_full_pipeline.v`
  More realistic boot-path regression. This test instantiates the `boot_controller`, a simple SPI flash model, and the real `mesh_tile`. Firmware is loaded into simulated flash, the bootloader copies it into SRAM, then the CPU runs and writes the expected blinker result back into SRAM.

## What Each Test Proves

- `tb_blinker_1iter.v`
  Proves the CPU-to-SRAM execution path works for this fixture and is useful as a fast focused regression.

- `tb_blinker_full_pipeline.v`
  Proves the flash boot path, bootloader-to-SRAM copy, CPU release, firmware execution, and runtime SRAM writeback all work together in one simulation.

## Important Limits

- Neither firmware is a general Game of Life solver today.
- Both firmware images are fixture-specific smoke tests for a 5x5 blinker.
- A live cell is currently treated as any nonzero SRAM byte in the checkers because the observed runtime writes are not always literal `8'h01`.

## Firmware Files

- `subservient/sw/gol_blinker_1iter.S`
  Used by `tb_blinker_1iter.v`.

- `subservient/sw/gol_blinker_full_pipeline.S`
  Used by `tb_blinker_full_pipeline.v`.

## Typical Build And Run

Build the firmware:

```bash
cd /Users/andreaarreortua/127_NOC/integration_v1/noc/subservient/sw
make gol_blinker_1iter.hex gol_blinker_full_pipeline.hex
```

Run the fast SRAM-preload regression:

```bash
iverilog -g2012 -o /tmp/tb_blinker_1iter.vvp \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/tb_blinker_1iter.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/mesh_tile_fixed.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/mesh_router.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/subservient_core.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/fusesoc_libraries/serv/servile/*.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/fusesoc_libraries/serv/rtl/*.v

vvp /tmp/tb_blinker_1iter.vvp \
  +firmware=/Users/andreaarreortua/127_NOC/integration_v1/noc/subservient/sw/gol_blinker_1iter.hex
```

Run the fuller boot-path regression:

```bash
iverilog -g2012 -o /tmp/tb_blinker_full_pipeline.vvp \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/tb_blinker_full_pipeline.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/boot_loader.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/mesh_tile_fixed.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/mesh_router.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/subservient_core.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/fusesoc_libraries/serv/servile/*.v \
  /Users/andreaarreortua/127_NOC/integration_v1/noc/fusesoc_libraries/serv/rtl/*.v

vvp /tmp/tb_blinker_full_pipeline.vvp \
  +firmware=/Users/andreaarreortua/127_NOC/integration_v1/noc/subservient/sw/gol_blinker_full_pipeline.hex
```

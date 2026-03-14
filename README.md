# 127_NOC Workspace Test Guide

This workspace currently has one main test area: [`integration_v1`](/Users/andreaarreortua/127_NOC/integration_v1). Most of the tests are hardware simulations driven by Cocotb + Verilator, and there is also one pure-Python PBM utility test file.

## Prerequisites

Install the tools below before running any tests:

```bash
# macOS
brew install verilator gtkwave pipx
pipx ensurepath
pipx install cocotb
pipx inject cocotb pytest cocotb-bus
```

After that, verify the key commands exist:

```bash
cocotb-config --version
pytest --version
verilator --version
```

## Where To Run Tests

Run all simulation commands from:

```bash
cd /Users/andreaarreortua/127_NOC/integration_v1
```

## Quick Start

Build the default firmware first:

```bash
make firmware
```

Run the main simulation suites one module at a time:

```bash
make sim MODULE=test_memory_dump
make sim MODULE=test_output_verification
make sim MODULE=test_image_load
make sim MODULE=test_boot_and_dump
make sim MODULE=test_blinker_cocotb TOPLEVEL=blinker_tile_wrapper VERILOG_SOURCES="noc/blinker_tile_wrapper.v noc/subservient_core.v noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v noc/fusesoc_libraries/serv/servile/servile_arbiter.v noc/fusesoc_libraries/serv/servile/servile_mux.v noc/fusesoc_libraries/serv/servile/servile_rf_mem_if.v noc/fusesoc_libraries/serv/servile/servile.v noc/fusesoc_libraries/serv/rtl/serv_aligner.v noc/fusesoc_libraries/serv/rtl/serv_alu.v noc/fusesoc_libraries/serv/rtl/serv_bufreg.v noc/fusesoc_libraries/serv/rtl/serv_bufreg2.v noc/fusesoc_libraries/serv/rtl/serv_compdec.v noc/fusesoc_libraries/serv/rtl/serv_csr.v noc/fusesoc_libraries/serv/rtl/serv_ctrl.v noc/fusesoc_libraries/serv/rtl/serv_debug.v noc/fusesoc_libraries/serv/rtl/serv_decode.v noc/fusesoc_libraries/serv/rtl/serv_immdec.v noc/fusesoc_libraries/serv/rtl/serv_mem_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_ram_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_ram.v noc/fusesoc_libraries/serv/rtl/serv_rf_top.v noc/fusesoc_libraries/serv/rtl/serv_state.v noc/fusesoc_libraries/serv/rtl/serv_synth_wrapper.v noc/fusesoc_libraries/serv/rtl/serv_top.v"
make pbm_pipeline
```

Run the pure-Python PBM test from the workspace root:

```bash
cd /Users/andreaarreortua/127_NOC
python3 integration_v1/test_pbm_with_real_file.py
```

## Full Test Inventory

### 1. `test_memory_dump`

Runs the SRAM dump and memory inspection tests:

```bash
make sim MODULE=test_memory_dump
```

Contained tests:

- `test_bootloader_memory_dump`
- `test_direct_initialization`
- `test_image_load_verification`
- `test_memory_dump_detailed`

### 2. `test_output_verification`

Checks host/output reconstruction flow:

```bash
make sim MODULE=test_output_verification
```

Contained tests:

- `test_output_verification`
- `test_host_communication`
- `test_full_pipeline`
- `test_integration_with_paul_image`

### 3. `test_image_load`

Runs direct tile-load style tests:

```bash
make sim MODULE=test_image_load
```

Contained tests:

- `test_image_load_verification`
- `test_tile_initialization`

### 4. `test_boot_and_dump`

Bootloader and Game-of-Life focused integration tests:

```bash
make sim MODULE=test_boot_and_dump
```

Contained tests:

- `test_phase1_instruction_load`
- `test_phase3_direct_sram_write`
- `test_phase6_gol_evolution`
- `test_phase7_blinker_verify`

You can also run the helper targets already defined in the `Makefile`:

```bash
make boot_dump
make boot_dump_phase1
make boot_dump_phase2
```

### 5. `test_blinker_cocotb`

Single-core blinker evolution test. This one uses a different top level than the default `system_top`, so pass the wrapper explicitly:

```bash
make sim MODULE=test_blinker_cocotb TESTCASE=test_blinker_grid_evolution \
  TOPLEVEL=blinker_tile_wrapper \
  VERILOG_SOURCES="noc/blinker_tile_wrapper.v noc/subservient_core.v noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v noc/fusesoc_libraries/serv/servile/servile_arbiter.v noc/fusesoc_libraries/serv/servile/servile_mux.v noc/fusesoc_libraries/serv/servile/servile_rf_mem_if.v noc/fusesoc_libraries/serv/servile/servile.v noc/fusesoc_libraries/serv/rtl/serv_aligner.v noc/fusesoc_libraries/serv/rtl/serv_alu.v noc/fusesoc_libraries/serv/rtl/serv_bufreg.v noc/fusesoc_libraries/serv/rtl/serv_bufreg2.v noc/fusesoc_libraries/serv/rtl/serv_compdec.v noc/fusesoc_libraries/serv/rtl/serv_csr.v noc/fusesoc_libraries/serv/rtl/serv_ctrl.v noc/fusesoc_libraries/serv/rtl/serv_debug.v noc/fusesoc_libraries/serv/rtl/serv_decode.v noc/fusesoc_libraries/serv/rtl/serv_immdec.v noc/fusesoc_libraries/serv/rtl/serv_mem_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_ram_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_ram.v noc/fusesoc_libraries/serv/rtl/serv_rf_top.v noc/fusesoc_libraries/serv/rtl/serv_state.v noc/fusesoc_libraries/serv/rtl/serv_synth_wrapper.v noc/fusesoc_libraries/serv/rtl/serv_top.v"
```

### 6. `pbm_pipeline`

Builds the PBM pipeline firmware and runs the dedicated host-pipeline test:

```bash
make pbm_pipeline
```

This runs `test_pbm_host_pipeline::test_pbm_host_load_one_iteration`.

### 7. Pure-Python PBM utility checks

These do not require Cocotb or Verilator:

```bash
cd /Users/andreaarreortua/127_NOC
python3 integration_v1/test_pbm_with_real_file.py
```

Contained tests:

- `test_load_and_display`
- `test_prepare_image_for_mesh`
- `test_split_into_tiles`
- `test_merge_and_verify`
- `test_generate_test_patterns`
- `test_memory_simulation`

## Running One Specific Cocotb Test

Use `TESTCASE` with `make sim`:

```bash
make sim MODULE=test_boot_and_dump TESTCASE=test_phase1_instruction_load
make sim MODULE=test_output_verification TESTCASE=test_full_pipeline
```

## Recommended Order For Running Everything

If you want to exercise the whole workspace in a reasonable order:

```bash
cd /Users/andreaarreortua/127_NOC/integration_v1
make firmware
make sim MODULE=test_memory_dump
make sim MODULE=test_output_verification
make sim MODULE=test_image_load
make sim MODULE=test_boot_and_dump
make pbm_pipeline
make sim MODULE=test_blinker_cocotb TESTCASE=test_blinker_grid_evolution TOPLEVEL=blinker_tile_wrapper VERILOG_SOURCES="noc/blinker_tile_wrapper.v noc/subservient_core.v noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v noc/fusesoc_libraries/serv/servile/servile_arbiter.v noc/fusesoc_libraries/serv/servile/servile_mux.v noc/fusesoc_libraries/serv/servile/servile_rf_mem_if.v noc/fusesoc_libraries/serv/servile/servile.v noc/fusesoc_libraries/serv/rtl/serv_aligner.v noc/fusesoc_libraries/serv/rtl/serv_alu.v noc/fusesoc_libraries/serv/rtl/serv_bufreg.v noc/fusesoc_libraries/serv/rtl/serv_bufreg2.v noc/fusesoc_libraries/serv/rtl/serv_compdec.v noc/fusesoc_libraries/serv/rtl/serv_csr.v noc/fusesoc_libraries/serv/rtl/serv_ctrl.v noc/fusesoc_libraries/serv/rtl/serv_debug.v noc/fusesoc_libraries/serv/rtl/serv_decode.v noc/fusesoc_libraries/serv/rtl/serv_immdec.v noc/fusesoc_libraries/serv/rtl/serv_mem_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_ram_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_ram.v noc/fusesoc_libraries/serv/rtl/serv_rf_top.v noc/fusesoc_libraries/serv/rtl/serv_state.v noc/fusesoc_libraries/serv/rtl/serv_synth_wrapper.v noc/fusesoc_libraries/serv/rtl/serv_top.v"
cd /Users/andreaarreortua/127_NOC
python3 integration_v1/test_pbm_with_real_file.py
```

## Notes

- `make sim` will fail until `cocotb-config` is available on `PATH`.
- `run_tests.py` is not a reliable workspace entry point right now. It uses a stale absolute path and passes `TESTNAME`, while the current make-based flow expects `TESTCASE`.
- `test_pbm_with_real_file.py` also contains old absolute paths internally. Run it from this checkout only after updating those paths if they do not match your machine.

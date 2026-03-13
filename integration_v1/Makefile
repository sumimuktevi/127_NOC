# Makefile for Integration_v1 NoC System
# Supports building firmware and running simulations with Verilator & Cocotb

TOPLEVEL_LANG = verilog
TOPLEVEL = system_top
# Default to memory dump test if no module specified
# MODULE ?= test_memory_dump  # overridden by run_tests or command line
MODULE ?= 
# ============================================================================
# Source Files Configuration
# ============================================================================
VERILOG_EXTRA_DIRS = noc/subservient/rtl noc/fusesoc_libraries/serv/rtl noc/fusesoc_libraries/serv/serv/rtl noc/fusesoc_libraries/serv/servile noc/fusesoc_libraries/serv/serv/servile
VERILOG_EXTRA = $(wildcard $(addsuffix /*.v,$(VERILOG_EXTRA_DIRS)))

VERILOG_SOURCES = \
	system_top.sv \
	hardware/topmod.sv \
	hardware/housekeeping.sv \
	hardware/shiftregister.sv \
	hardware/flash_clk.sv \
	hardware/gf180mcu_fd_ip_sram__sram256x8m8wm1.v \
	gateways/gateway_flash.v \
	gateways/gateway_host.v \
	noc/mesh_3x3.v \
	noc/mesh_tile_fixed.v \
	noc/mesh_router.v \
	noc/boot_loader.v \
	noc/subservient_core.v \
	noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v \
	$(VERILOG_EXTRA)

SIM = verilator

# Verilator compilation flags
COMPILE_ARGS += --timing -Wno-PINMISSING -Wno-SPECIFYIGN -Wno-MODDUP -Wno-MINTYPMAXDLY -Wno-MULTIDRIVEN -Wno-LATCH -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-CASEINCOMPLETE
# removed --trace to avoid generating code requiring timing parameters


# ============================================================================
# Targets
# ============================================================================

.PHONY: help sim firmware clean distclean

help:
	@echo "Integration_v1 NoC System - Build Targets"
	@echo "=========================================="
	@echo "  make sim              - Build and run simulation"
	@echo "  make firmware         - Build firmware only"
	@echo "  make clean            - Remove build artifacts (keep firmware)"
	@echo "  make distclean        - Remove all generated files"
	@echo "  make help             - Show this help message"
	@echo ""
	@echo "Configuration:"
	@echo "  TOPLEVEL = $(TOPLEVEL)"
	@echo "  SIM      = $(SIM)"

firmware:
	@echo "Building firmware from C code via riv5 compiler..."
	$(MAKE) -C firmware

# Include Cocotb Makefiles (must come before other targets)
include $(shell cocotb-config --makefiles)/Makefile.sim

# ============================================================================
# Custom Targets (override Cocotb defaults)
# ============================================================================

# sim: firmware
sim: 

# convenience target: rebuild firmware and run only the memory-dump test
# (the module default is test_memory_dump so just invoking this target is
# equivalent to the manual command described in the README).
verify: firmware
	@echo "Running memory-dump verification suite..."
	$(MAKE) SIM=$(SIM) MODULE=test_memory_dump sim


distclean: clean
	$(MAKE) -C firmware clean
	rm -f firmware/firmware.bin firmware/firmware.hex

# ============================================================================
# Utility Targets
# ============================================================================

.PHONY: view-trace gtkwave

view-trace: 
	@if [ -f sim_build/dump.vcd ]; then \
		gtkwave sim_build/dump.vcd; \
	else \
		echo "Error: dump.vcd not found. Run 'make sim' first."; \
	fi


.PHONY: dump
dump:
	@echo "Running SRAM Dump Test..."
	COCOTB_TEST_MODULES=sram_dump $(MAKE) sim




# added this for testing purposes 

# ─────────────────────────────────────────────────────────────────────────────
# Add this target to your existing Makefile
# (or replace the existing COCOTB_TEST_MODULES line in the sim target)
#
# Usage:
#   make boot_dump          ← runs both Phase 1 and Phase 2
#   make boot_dump_phase1   ← runs Phase 1 only (instruction load verify)
#   make boot_dump_phase2   ← runs Phase 2 only (PBM data verify)
# ─────────────────────────────────────────────────────────────────────────────

boot_dump:
	$(MAKE) sim MODULE=test_boot_and_dump

boot_dump_phase1:
	$(MAKE) sim MODULE=test_boot_and_dump TESTCASE=test_phase1_instruction_load

boot_dump_phase2:
	$(MAKE) sim MODULE=test_boot_and_dump TESTCASE=test_phase2_pbm_data_load

pbm_pipeline:
	$(MAKE) -C firmware pbm_tile_pipeline.bin
	$(MAKE) sim MODULE=test_pbm_host_pipeline TESTCASE=test_pbm_host_load_one_iteration \
		TOPLEVEL=pbm_tile_full_pipeline_wrapper \
		VERILOG_SOURCES="noc/pbm_tile_full_pipeline_wrapper.v noc/boot_loader.v noc/mesh_tile_fixed.v noc/mesh_router.v noc/subservient_core.v noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v noc/fusesoc_libraries/serv/servile/servile_arbiter.v noc/fusesoc_libraries/serv/servile/servile_mux.v noc/fusesoc_libraries/serv/servile/servile_rf_mem_if.v noc/fusesoc_libraries/serv/servile/servile.v noc/fusesoc_libraries/serv/rtl/serv_aligner.v noc/fusesoc_libraries/serv/rtl/serv_alu.v noc/fusesoc_libraries/serv/rtl/serv_bufreg.v noc/fusesoc_libraries/serv/rtl/serv_bufreg2.v noc/fusesoc_libraries/serv/rtl/serv_compdec.v noc/fusesoc_libraries/serv/rtl/serv_csr.v noc/fusesoc_libraries/serv/rtl/serv_ctrl.v noc/fusesoc_libraries/serv/rtl/serv_debug.v noc/fusesoc_libraries/serv/rtl/serv_decode.v noc/fusesoc_libraries/serv/rtl/serv_immdec.v noc/fusesoc_libraries/serv/rtl/serv_mem_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_ram_if.v noc/fusesoc_libraries/serv/rtl/serv_rf_ram.v noc/fusesoc_libraries/serv/rtl/serv_rf_top.v noc/fusesoc_libraries/serv/rtl/serv_state.v noc/fusesoc_libraries/serv/rtl/serv_synth_wrapper.v noc/fusesoc_libraries/serv/rtl/serv_top.v"

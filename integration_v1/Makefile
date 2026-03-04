# Makefile for Integration_v1 NoC System
# Supports building firmware and running simulations with Verilator & Cocotb

TOPLEVEL_LANG = verilog
TOPLEVEL = system_top
# Default to memory dump test if no module specified
MODULE ?= test_memory_dump  # overridden by run_tests or command line

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
	noc/mesh_tile.v \
	noc/mesh_router.v \
	noc/boot_loader.v \
	noc/subservient_core.v \
	noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v \
	$(VERILOG_EXTRA)

SIM = verilator

# Verilator compilation flags
COMPILE_ARGS += --timing -Wno-PINMISSING -Wno-SPECIFYIGN -Wno-MODDUP -Wno-MINTYPMAXDLY -Wno-MULTIDRIVEN -Wno-LATCH -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND
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

sim: firmware

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

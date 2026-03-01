# Makefile for Cocotb SRAM Test

# Defaults
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

# Verilog sources
VERILOG_SOURCES = \
	$(PWD)/gf180mcu_ocd_ip_sram__sram1024x8m8wm1.v \
	$(PWD)/subservient_gf180_ram_1024x8.v

# Toplevel module
TOPLEVEL = subservient_gf180_ram_1024x8

# Python test module
COCOTB_TEST_MODULES = test_sram_gf180

# Simulator-specific settings
ifeq ($(SIM),verilator)
    COMPILE_ARGS += -Wno-MINTYPMAXDLY
    COMPILE_ARGS += -Wno-SPECIFYIGN
    COMPILE_ARGS += -Wno-LATCH
    COMPILE_ARGS += -Wno-WIDTH
    COMPILE_ARGS += -Wno-UNOPTFLAT
    COMPILE_ARGS += --timing
endif

ifeq ($(SIM),icarus)
    COMPILE_ARGS += -g2012
endif

# Include cocotb makefiles
include $(shell cocotb-config --makefiles)/Makefile.sim

# Clean
clean::
	rm -rf __pycache__
	rm -rf sim_build
	rm -f results.xml
	rm -f *.vcd

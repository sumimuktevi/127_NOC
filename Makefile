# Makefile – cocotb testbench for subservient_generic_ram
# Usage:
#   make              # run with Icarus Verilog (default)
#   make SIM=icarus   # explicit
#   make waves        # run + open FST waveform in Surfer

SIM              ?= icarus
TOPLEVEL_LANG    ?= verilog

VERILOG_SOURCES   = $(PWD)/subservient_generic_ram.v \
                    $(PWD)/gf180mcu_fd_ip_sram__sram256x8m8wm1.v

TOPLEVEL          = subservient_generic_ram
MODULE            = test_subservient_generic_ram

# Pass DEPTH=256 as a top-level parameter override (Icarus uses -P)
ifeq ($(SIM),icarus)
  COMPILE_ARGS += -P $(TOPLEVEL).depth=256
endif

# Enable FST waveform dumping (generates sim_build/$(TOPLEVEL).fst)
WAVES = 1

ifeq ($(SIM),icarus)
  COCOTB_HDL_TIMEUNIT      = 1ns
  COCOTB_HDL_TIMEPRECISION = 1ps
endif

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: waves
waves: all
	surfer sim_build/$(TOPLEVEL).fst &

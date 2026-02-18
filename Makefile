SIM ?= icarus
TOPLEVEL_LANG ?= verilog

# Update paths to point to the official PDK model
VERILOG_SOURCES += $(PWD)/hardware/sram_model.v
VERILOG_SOURCES += $(PWD)/hardware/flash_clk.sv
VERILOG_SOURCES += $(PWD)/hardware/housekeeping.sv
VERILOG_SOURCES += $(PWD)/hardware/shiftregister.sv
VERILOG_SOURCES += $(PWD)/hardware/topmod.sv
VERILOG_SOURCES += $(PWD)/gateway.v
VERILOG_SOURCES += $(PWD)/top_wrapper.sv

COMPILE_ARGS += -g2012
TOPLEVEL = top_wrapper
MODULE = test_gateway

include $(shell cocotb-config --makefiles)/Makefile.sim
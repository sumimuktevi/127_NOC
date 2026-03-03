# Makefile for NocNoc Project Verification
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

# Verilog Source Files - Using the exact names from your 'ls'
# Update these paths to match your nested folders
VERILOG_SOURCES += $(PWD)/mesh_3x3.v
VERILOG_SOURCES += $(PWD)/mesh_tile.v
VERILOG_SOURCES += $(PWD)/mesh_router.v
VERILOG_SOURCES += $(PWD)/subservient_core.v
VERILOG_SOURCES += $(PWD)/boot_loader.v
VERILOG_SOURCES += $(PWD)/gateway.v
VERILOG_SOURCES += $(PWD)/sram.v

# Pointing to the nested 'rtl' directory
# Based on your 'ls', the path is subservient/subservient/rtl/
VERILOG_SOURCES += $(PWD)/subservient/subservient/rtl/subservient.v
VERILOG_SOURCES += $(PWD)/subservient/subservient/rtl/subservient_core.v
VERILOG_SOURCES += $(PWD)/subservient/subservient/rtl/servile_rf_mem_if.v
#VERILOG_SOURCES += $(PWD)/subservient/subservient/rtl/serv_top.v
VERILOG_SOURCES += $(PWD)/subservient/subservient/rtl/serv_rf_ram.v

TOPLEVEL = mesh_3x3
MODULE = test_noc_hardware

include $(shell cocotb-config --makefiles)/Makefile.sim
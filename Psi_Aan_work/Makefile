TOPLEVEL_LANG = verilog
TOPLEVEL = mesh_2x2
MODULE = test_mesh

# Additional directories to search for Verilog sources (modules/libraries)
# Add more directories separated by spaces if your RTL lives elsewhere.
VERILOG_EXTRA_DIRS = rtl subservient/rtl fusesoc_libraries/serv/rtl fusesoc_libraries/serv/servile
# Expand to a list of Verilog files found in those directories
VERILOG_EXTRA = $(wildcard $(addsuffix /*.v,$(VERILOG_EXTRA_DIRS)))

VERILOG_SOURCES = \
	mesh_2x2.v \
	mesh_tile.v \
	mesh_router.v \
	subservient_core.v \
	$(VERILOG_EXTRA)

SIM = verilator

include $(shell cocotb-config --makefiles)/Makefile.sim

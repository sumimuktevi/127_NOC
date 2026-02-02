# Makefile
SIM ?= icarus
TOPLEVEL_LANG ?= verilog
VERILOG_SOURCES += gateway.v
TOPLEVEL = gateway
MODULE = test_gateway
include $(shell cocotb-config --makefiles)/Makefile.sim
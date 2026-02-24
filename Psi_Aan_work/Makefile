TOPLEVEL_LANG = verilog
TOPLEVEL = mesh_3x3
MODULE = test_mesh

VERILOG_EXTRA_DIRS = subservient/rtl fusesoc_libraries/serv/rtl fusesoc_libraries/serv/servile
VERILOG_EXTRA = $(wildcard $(addsuffix /*.v,$(VERILOG_EXTRA_DIRS)))

VERILOG_SOURCES = \
    mesh_3x3.v \
    mesh_tile.v \
    mesh_router.v \
    gf180mcu_fd_ip_sram__sram256x8m8wm1.v \
	boot_loader.v \
    $(VERILOG_EXTRA)

SIM = verilator

# Added -Wno-MINTYPMAXDLY to clear up the delay warnings
COMPILE_ARGS += --timing -Wno-PINMISSING -Wno-SPECIFYIGN -Wno-MODDUP -Wno-MINTYPMAXDLY

include $(shell cocotb-config --makefiles)/Makefile.sim
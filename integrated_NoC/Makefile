# TOPLEVEL_LANG = verilog
# TOPLEVEL = mesh_3x3
# MODULE = test_mesh

# VERILOG_EXTRA_DIRS = subservient/rtl fusesoc_libraries/serv/rtl fusesoc_libraries/serv/servile
# VERILOG_EXTRA = $(wildcard $(addsuffix /*.v,$(VERILOG_EXTRA_DIRS)))

# VERILOG_SOURCES = \
#     mesh_3x3.v \
#     mesh_tile.v \
#     mesh_router.v \
#     gf180mcu_fd_ip_sram__sram1024x8m8wm1.v \
# 	boot_loader.v \
#     $(VERILOG_EXTRA)

# SIM = verilator

# # Added -Wno-MINTYPMAXDLY to clear up the delay warnings
# COMPILE_ARGS += --timing -Wno-PINMISSING -Wno-SPECIFYIGN -Wno-MODDUP -Wno-MINTYPMAXDLY

# include $(shell cocotb-config --makefiles)/Makefile.sim




TOPLEVEL_LANG = verilog
TOPLEVEL      = top
MODULE        = test_top

VERILOG_EXTRA_DIRS = \
    serv/rtl \
    serv/servile \
    subservient/rtl

VERILOG_EXTRA = $(wildcard $(addsuffix /*.v,$(VERILOG_EXTRA_DIRS)))

VERILOG_SOURCES = \
    top.v \
    mesh_3x3.v \
    mesh_tile.v \
    mesh_router.v \
    host_spi_slave.v \
    rd_crossbar.v \
    spi_arbiter.v \
    boot_loader.v \
    hk_boot_adapter.v \
    gf180mcu_fd_ip_sram__sram1024x8m8wm1.v \
    $(VERILOG_EXTRA)

SIM = verilator

COMPILE_ARGS += \
    --timing \
    $(addprefix -I,$(VERILOG_EXTRA_DIRS)) \
    -Wno-PINMISSING \
    -Wno-MODDUP \
    -Wno-MINTYPMAXDLY \
    -Wno-MULTIDRIVEN

include $(shell cocotb-config --makefiles)/Makefile.sim
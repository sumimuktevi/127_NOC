# # SPDX-FileCopyrightText: © 2025 Project Template Contributors
# # SPDX-License-Identifier: Apache-2.0

# import os
# import random
# import logging
# from pathlib import Path

# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import Timer, Edge, RisingEdge, FallingEdge, ClockCycles
# from cocotb_tools.runner import get_runner

# sim = os.getenv("SIM", "icarus")
# pdk_root = os.getenv("PDK_ROOT", Path("~/.ciel").expanduser())
# pdk = os.getenv("PDK", "gf180mcuD")
# scl = os.getenv("SCL", "gf180mcu_fd_sc_mcu7t5v0")
# gl = os.getenv("GL", False)
# slot = os.getenv("SLOT", "1x1")

# hdl_toplevel = "chip_top"

# async def set_defaults(dut):
#     dut.input_PAD.value = 0

# async def enable_power(dut):
#     dut.VDD.value = 1
#     dut.VSS.value = 0

# async def start_clock(clock, freq=50):
#     """Start the clock @ freq MHz"""
#     c = Clock(clock, 1 / freq * 1000, "ns")
#     cocotb.start_soon(c.start())


# async def reset(reset, active_low=True, time_ns=1000):
#     """Reset dut"""
#     cocotb.log.info("Reset asserted...")

#     reset.value = not active_low
#     await Timer(time_ns, "ns")
#     reset.value = active_low

#     cocotb.log.info("Reset deasserted.")


# async def start_up(dut):
#     """Startup sequence"""
#     await set_defaults(dut)
#     if gl:
#         await enable_power(dut)
#     await start_clock(dut.clk_PAD)
#     await reset(dut.rst_n_PAD)


# # @cocotb.test()
# # async def test_counter(dut):
# #     """Run the counter test"""

# #     # Create a logger for this testbench
# #     logger = logging.getLogger("my_testbench")

# #     logger.info("Startup sequence...")

# #     # Start up
# #     await start_up(dut)

# #     logger.info("Running the test...")

# #     # Wait for some time...
# #     await ClockCycles(dut.clk_PAD, 10)

# #     # Start the counter by setting all inputs to 1
# #     dut.input_PAD.value = -1

# #     # Wait for a number of clock cycles
# #     await ClockCycles(dut.clk_PAD, 100)

# #     # Check the end result of the counter
# #     assert dut.bidir_PAD.value == 100 - 1

# #     logger.info("Done!")
# @cocotb.test()
# async def test_boot(dut):
#     """Wait for boot_controller to finish loading flash → system_ready asserts"""

#     logger = logging.getLogger("noc_tb")
#     await start_up(dut)

#     logger.info("Waiting for system_ready (bidir_PAD[3])...")

#     # system_ready is bidir_PAD[3] per chip_core.sv
#     for cycle in range(500_000):
#         await RisingEdge(dut.clk_PAD)
#         bidir = int(dut.bidir_PAD.value)
#         if (bidir >> 3) & 1:
#             logger.info(f"system_ready asserted after {cycle} cycles!")
#             break
#     else:
#         raise AssertionError("TIMEOUT: system_ready never asserted")

#     # Let the mesh run for a bit
#     await ClockCycles(dut.clk_PAD, 200)

#     # Check bidir_PAD is fully resolved (no X/Z)
#     bidir = dut.bidir_PAD.value
#     assert bidir.is_resolvable, f"bidir_PAD has X/Z: {bidir}"
#     logger.info(f"bidir_PAD = 0b{int(bidir):08b} — all bits resolved ✓")
#     logger.info("test_boot PASSED")




# def chip_top_runner():

#     proj_path = Path(__file__).resolve().parent

#     sources = []
#     defines = {f"SLOT_{slot.upper()}": True}
#     includes = [proj_path / "../src/"]

#     if gl:
#         # SCL models
#         sources.append(Path(pdk_root) / pdk / "libs.ref" / scl / "verilog" / f"{scl}.v")
#         sources.append(Path(pdk_root) / pdk / "libs.ref" / scl / "verilog" / "primitives.v")

#         # We use the powered netlist
#         sources.append(proj_path / f"../final/pnl/{hdl_toplevel}.pnl.v")

#         defines = {"FUNCTIONAL": True, "USE_POWER_PINS": True}
#     else:
#             sources.append(proj_path / "../src/chip_top.sv")
#             sources.append(proj_path / "../src/chip_core.sv")
#             sources.append(proj_path / "../src/boot_loader.v")
#             sources.append(proj_path / "../src/mesh_router.v")
#             sources.append(proj_path / "../src/mesh_tile.v")
#             sources.append(proj_path / "../src/mesh_3x3.v")
#             sources.append(proj_path / "../src/subservient_core.v")
  
#     # SERV RTL only (exclude bench/servant/data/serving folders)
#             sources += sorted((proj_path / "../src/serv/rtl").glob("*.v"))
#             sources += sorted((proj_path / "../src/serv/servile").glob("*.v"))

#             # Subservient RTL only (exclude tb folder)
#             sources += sorted((proj_path / "../src/subservient/rtl").glob("*.v"))

#     sources += [
#         # IO pad models
#         Path(pdk_root) / pdk / "libs.ref/gf180mcu_fd_io/verilog/gf180mcu_fd_io.v",
#         Path(pdk_root) / pdk / "libs.ref/gf180mcu_fd_io/verilog/gf180mcu_ws_io.v",
        
#         # SRAM macros
#        Path(pdk_root) / pdk / "libs.ref/gf180mcu_fd_ip_sram/verilog/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v",
        
#         # Custom IP
#         proj_path / "../ip/gf180mcu_ws_ip__id/vh/gf180mcu_ws_ip__id.v",
#         proj_path / "../ip/gf180mcu_ws_ip__logo/vh/gf180mcu_ws_ip__logo.v",
#     ]

#     build_args = []

#     if sim == "icarus":
#         # For debugging
#         # build_args = ["-Winfloop", "-pfileline=1"]
#         pass

#     if sim == "verilator":
#         build_args = ["--timing", "--trace", "--trace-fst", "--trace-structs"]

#     runner = get_runner(sim)
#     runner.build(
#         sources=sources,
#         hdl_toplevel=hdl_toplevel,
#         defines=defines,
#         always=True,
#         includes=includes,
#         build_args=build_args,
#         waves=True,
#     )

#     plusargs = []

#     runner.test(
#         hdl_toplevel=hdl_toplevel,
#         test_module="chip_top_tb,",
#         plusargs=plusargs,
#         waves=True,
#     )


# if __name__ == "__main__":
#     chip_top_runner()


# SPDX-FileCopyrightText: © 2025 Project Template Contributors
# SPDX-License-Identifier: Apache-2.0

import os
import random
import logging
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, Edge, RisingEdge, FallingEdge, ClockCycles
from cocotb_tools.runner import get_runner

sim = os.getenv("SIM", "icarus")
pdk_root = os.getenv("PDK_ROOT", Path("~/.ciel").expanduser())
pdk = os.getenv("PDK", "gf180mcuD")
scl = os.getenv("SCL", "gf180mcu_fd_sc_mcu7t5v0")
gl = os.getenv("GL", False)
slot = os.getenv("SLOT", "1x1")

hdl_toplevel = "chip_top"

async def set_defaults(dut):
    dut.input_PAD.value = 0

async def enable_power(dut):
    dut.VDD.value = 1
    dut.VSS.value = 0

async def start_clock(clock, freq=50):
    """Start the clock @ freq MHz"""
    c = Clock(clock, 1 / freq * 1000, "ns")
    cocotb.start_soon(c.start())

async def reset(reset, active_low=True, time_ns=1000):
    """Reset dut"""
    cocotb.log.info("Reset asserted...")
    reset.value = not active_low
    await Timer(time_ns, "ns")
    reset.value = active_low
    cocotb.log.info("Reset deasserted.")

async def start_up(dut):
    """Startup sequence"""
    await set_defaults(dut)
    if gl:
        await enable_power(dut)
    await start_clock(dut.clk_PAD)
    await reset(dut.rst_n_PAD)


@cocotb.test()
async def test_boot(dut):
    """Wait for boot_controller to finish loading flash -> system_ready asserts"""

    logger = logging.getLogger("noc_tb")
    await start_up(dut)

    logger.info("Waiting for system_ready (bidir_PAD[3])...")

    for cycle in range(500_000):
        await RisingEdge(dut.clk_PAD)
        bidir = dut.bidir_PAD.value
        # Skip cycles where bidir still has X/Z values (normal right after reset)
        if not bidir.is_resolvable:
            continue
        if (int(bidir) >> 3) & 1:
            logger.info(f"system_ready asserted after {cycle} cycles!")
            break
    else:
        raise AssertionError("TIMEOUT: system_ready never asserted after 500k cycles")

    # Let the mesh run for a bit after boot
    await ClockCycles(dut.clk_PAD, 200)

    # Final check: all bidir bits should be resolved
    bidir = dut.bidir_PAD.value
    assert bidir.is_resolvable, f"bidir_PAD has X/Z after boot: {bidir}"
    logger.info(f"bidir_PAD = 0b{int(bidir):08b} -- all bits resolved")
    logger.info("test_boot PASSED")


def chip_top_runner():

    proj_path = Path(__file__).resolve().parent

    sources = []
    defines = {f"SLOT_{slot.upper()}": True}
    includes = [proj_path / "../src/"]

    if gl:
        # SCL models
        sources.append(Path(pdk_root) / pdk / "libs.ref" / scl / "verilog" / f"{scl}.v")
        sources.append(Path(pdk_root) / pdk / "libs.ref" / scl / "verilog" / "primitives.v")
        # We use the powered netlist
        sources.append(proj_path / f"../final/pnl/{hdl_toplevel}.pnl.v")
        defines = {"FUNCTIONAL": True, "USE_POWER_PINS": True}
    else:
        sources.append(proj_path / "../src/chip_top.sv")
        sources.append(proj_path / "../src/chip_core.sv")
        sources.append(proj_path / "../src/boot_loader.v")
        sources.append(proj_path / "../src/mesh_router.v")
        sources.append(proj_path / "../src/mesh_tile.v")
        sources.append(proj_path / "../src/mesh_3x3.v")
        sources.append(proj_path / "../src/subservient_core.v")
        # SERV RTL only (exclude bench/servant/data/serving folders)
        sources += sorted((proj_path / "../src/serv/rtl").glob("*.v"))
        sources += sorted((proj_path / "../src/serv/servile").glob("*.v"))
        # Subservient RTL only (exclude tb folder)
        sources += sorted((proj_path / "../src/subservient/rtl").glob("*.v"))

    sources += [
        # IO pad models
        Path(pdk_root) / pdk / "libs.ref/gf180mcu_fd_io/verilog/gf180mcu_fd_io.v",
        Path(pdk_root) / pdk / "libs.ref/gf180mcu_fd_io/verilog/gf180mcu_ws_io.v",
        # SRAM macro (behavioral model copied into PDK verilog dir)
        Path(pdk_root) / pdk / "libs.ref/gf180mcu_fd_ip_sram/verilog/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v",
        # Custom IP
        proj_path / "../ip/gf180mcu_ws_ip__id/vh/gf180mcu_ws_ip__id.v",
        proj_path / "../ip/gf180mcu_ws_ip__logo/vh/gf180mcu_ws_ip__logo.v",
    ]

    build_args = []

    if sim == "icarus":
        pass  # add "-Winfloop" here if you want extra warnings

    if sim == "verilator":
        build_args = ["--timing", "--trace", "--trace-fst", "--trace-structs"]

    runner = get_runner(sim)
    runner.build(
        sources=sources,
        hdl_toplevel=hdl_toplevel,
        defines=defines,
        always=True,
        includes=includes,
        build_args=build_args,
        waves=True,
    )

    runner.test(
        hdl_toplevel=hdl_toplevel,
        test_module="chip_top_tb,",
        plusargs=[],
        waves=True,
    )


if __name__ == "__main__":
    chip_top_runner()
import cocotb
from cocotb.triggers import Timer, RisingEdge

async def dump_sram(dut, row, col):
    """Reads the 256x8 SRAM array from a specific core."""
    # This path matches your mesh_3x3.v hierarchy
    sram_path = dut.rows[row].cols[col].tile_inst.sram_inst.mem
    mem_data = []
    for i in range(256):
        val = sram_path[i].value
        mem_data.append(int(val))
    return mem_data

async def force_sram(dut, row, col, data_array):
    """Directly injects data into SRAM, bypassing the bootloader."""
    sram_path = dut.rows[row].cols[col].tile_inst.sram_inst.mem
    for i, val in enumerate(data_array):
        sram_path[i].value = val




# test 1: goal is to check if the bootloader function correctly loaded all SRAMS with 
# the correct image, before the program starts to actually run


async def dump_core_memory(dut, row, col):
    """Peek into a specific tile's SRAM without using any Verilog pins."""
    # Hierarchy: dut -> mesh_3x3 -> rows[r] -> cols[c] -> tile_inst -> sram_inst -> mem
    # Note: Make sure 'sram_inst' is the name you used in mesh_tile.v
    sram_mem = dut.rows[row].cols[col].tile_inst.sram_inst.mem
    
    current_contents = []
    for i in range(256):
        val = sram_mem[i].value
        current_contents.append(int(val))
    return current_contents
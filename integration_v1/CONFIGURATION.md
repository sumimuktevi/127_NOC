# Integration Configuration Guide

## Flash SPI Timing Configuration

**File**: `hardware/flash_clk.sv`

The flash clock is generated from the system clock using a frequency divider. Modify these parameters based on your flash memory requirements:

```systemverilog
localparam CLK_PERIOD     = 8'd10;  // Number of system clocks per flash clock cycle
localparam DUTY_THRESHOLD = 8'd5;   // Number of clocks where flash_clk is high
```

**Examples**:
- System clock = 100 MHz, Flash = 10 MHz: `CLK_PERIOD = 10`
- System clock = 100 MHz, Flash = 5 MHz: `CLK_PERIOD = 20`
- Duty cycle = 50%: `DUTY_THRESHOLD = CLK_PERIOD / 2`

## Gateway Coordinate Filter Configuration

**Files**: `gateways/gateway_flash.v`, `gateways/gateway_host.v`

Both gateways implement local SRAM storage for tile **(0, 0)**. This is useful for storing configuration or shared data. To modify the filter:

**Current Filter Logic**:
```verilog
// COORDINATE FILTER (Core 0,0 logic)
// OpCode 1 (Write) AND Target X=0 AND Target Y=0
if (wbs_dat_i[31:28] == 4'h1 && 
    wbs_dat_i[23:22] == 2'b00 && 
    wbs_dat_i[21:20] == 2'b00) begin
    local_sram[wbs_dat_i[19:16]] <= wbs_dat_i[9:0];
end
```

**To change the target tile**, modify the coordinate bits:
- Target X: bits [23:22] (2-bit unsigned, range 0-3)
- Target Y: bits [21:20] (2-bit unsigned, range 0-3)

**Example**: To filter for tile **(1, 2)** instead:
```verilog
if (wbs_dat_i[31:28] == 4'h1 && 
    wbs_dat_i[23:22] == 2'b01 &&   // X=1
    wbs_dat_i[21:20] == 2'b10) begin // Y=2
    ...
end
```

## NoC Mesh Configuration

**File**: `noc/mesh_3x3.v`

The mesh is currently instantiated as a **3×3 grid** but is easily parameterizable.

### To change mesh size (e.g., 2×2):

1. Create a new module `mesh_2x2.v` or modify the generate loops in `mesh_3x3.v`
2. Update loop bounds:
   ```verilog
   for (r = 0; r < 2; r = r + 1)  // 2 rows instead of 3
   for (c = 0; c < 2; c = c + 1)  // 2 cols instead of 3
   ```

3. Update `system_top.sv` instantiation if creating separate files

### Tile ID Encoding

Each tile has a unique ID encoded as `{2'b(row), 2'b(col)}`:
- Tile (0,0): ID = 0x0
- Tile (0,1): ID = 0x1
- Tile (0,2): ID = 0x2
- Tile (1,0): ID = 0x4
- Tile (2,2): ID = 0xA (binary: 1010)

This ID is stored in each tile for self-identification and routing decisions.

## Packet Format Configuration

**Source files**: `gateways/gateway_*.v`, `noc/mesh_router.v`

The packet format is 34-bit with the following structure:

```
Bits [33:32] Flit Type
Bits [31:28] OpCode
Bits [27:24] Source Tile (for response routing)
Bits [23:22] Target X
Bits [21:20] Target Y
Bits [19:16] Address/Identifier
Bits [15:10] (Reserved for future use)
Bits [9:0]   Payload Data
```

To modify the packet format:
1. Update encoding in `gateways/gateway_flash.v` and `gateway_host.v`
2. Update decoding in `noc/mesh_router.v` (XY-dimension routing logic)
3. Update tile logic in `noc/mesh_tile.v` (address extraction)

## SRAM Macro Configuration

**File**: `noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v`

The current design uses **GF180MCU SRAM macros** (1024×8 bits per tile).

### To use a different SRAM:
1. Replace the `.v` file with your macro model
2. Update SRAM instantiation in `noc/mesh_tile.v`:
   ```verilog
   your_sram_name sram_inst (
       .CLK(clk),
       .CEN(cen),    // Chip Enable
       .WEN(wen),    // Write Enable (per byte)
       .A(addr),     // Address
       .D(data_in),  // Data In
       .Q(data_out)  // Data Out
   );
   ```

3. Update address/data width if different

## Wishbone Protocol Configuration

**Files**: `hardware/topmod.sv`, `gateways/gateway_flash.v`

Current implementation uses **Wishbone B4 spec** with:
- 32-bit address bus
- 32-bit data bus
- Classic handshake (STB + ACK)

### To modify the address map:
Edit `hardware/housekeeping.sv`:
```systemverilog
localparam BASE_ADDR = 32'h1000;  // Change this
// Address calculation:
wbs_adr <= BASE_ADDR + (soclet_counter << 6) + (row_counter << 2);
```

## System Integration Points

### To add a third gateway (e.g., JTAG):
1. Create `gateways/gateway_jtag.v` with same output format
2. In `system_top.sv`, instantiate it:
   ```verilog
   gateway_jtag jtag_gateway (
       .clk(clk),
       .tdi(jtag_tdi),
       .tdo(jtag_tdo),
       .packet_out(gateway_jtag_packet),
       .ready(gateway_jtag_ready)
   );
   ```
3. Update multiplexer logic:
   ```verilog
   wire [33:0] selected_packet = gateway_flash_ready ? 
                                 {2'b00, gateway_flash_packet} : 
                                 gateway_host_ready ? 
                                 {2'b00, gateway_host_packet} :
                                 {2'b00, gateway_jtag_packet};
   ```

## Debugging & Observation

### To monitor packet flow:
In `system_top.sv`, observe these signals:
- `noc_packet_from_flash` / `noc_ready_from_flash`: Flash-sourced packets
- `noc_packet_from_host` / `noc_ready_from_host`: Host-sourced packets
- `noc_output_se`: Packets exiting at SE corner (tile 2,2)

### To add waveform logging:
Create a testbench and use cocotb:
```python
# test_integration.py
import cocotb
@cocotb.test()
async def test_packet_flow(dut):
    dut.clk.value = 0
    await cocotb.triggers.Timer(1, 'us')
    # Log dut.noc_ready_from_flash, etc.
```

---

**Version**: 1.0  
**Last Updated**: March 2026

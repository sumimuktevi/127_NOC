# Integration_v1: Complete NoC System Integration

This folder contains a properly organized integration of the SERV-based Network-on-Chip (NoC) design with dual gateway support for both Flash and Host interfaces.

## Architecture Overview

```
┌─────────────────────────────────────────────────────────────────┐
│                      SYSTEM_TOP (system_top.sv)                 │
├─────────────────────────────────────────────────────────────────┤
│                                                                   │
│  ┌──────────────────┐         ┌──────────────────┐              │
│  │   Flash SPI      │         │   Host SPI       │              │
│  │   Interface      │         │   (Bypass Mode)  │              │
│  └────────┬─────────┘         └────────┬─────────┘              │
│           │                            │                         │
│           ▼                            ▼                         │
│  ┌──────────────────┐         ┌──────────────────┐              │
│  │  topmod (Flash   │         │  gateway_host    │              │
│  │  Controller FSM) │         │  (SPI to NoC)    │              │
│  └────────┬─────────┘         └────────┬─────────┘              │
│           │                            │                         │
│  Wishbone Bus                 Direct Packet Output              │
│           │                            │                         │
│           ▼                            ▼                         │
│  ┌──────────────────┐         ┌──────────────────┐              │
│  │ gateway_flash    │         │    Multiplexer   │              │
│  │ (Wishbone to NoC)│         │  (Flash > Host)  │              │
│  └────────┬─────────┘         └────────┬─────────┘              │
│           │                            │                         │
│           └────────────┬───────────────┘                         │
│                        │                                         │
│                        ▼                                         │
│          ┌──────────────────────────┐                           │
│          │   MESH 3×3 NoC           │                           │
│          │  (9 SERV-based Tiles)    │                           │
│          │   XY-dimension routing   │                           │
│          └──────────────────────────┘                           │
│                                                                   │
└─────────────────────────────────────────────────────────────────┘
```

## Communication Flow

### Primary Path: Flash → NoC
1. **Flash Controller (topmod)** reads SPI flash sequentially
2. Converts 32-bit words into **Wishbone transactions**
3. **Gateway Flash** receives Wishbone data
4. Converts to NoC packet format (34-bit flits)
5. Injects at **NW corner (0,0)** of the 3×3 mesh
6. Packets route via **XY-dimension-order routing** to destination tiles

### Secondary Path: Host → NoC (Bypass Mode)
1. When `bypass_en=1`, host can directly write SPI packets
2. **Gateway Host** receives SPI stream directly
3. Converts 32-bit words to NoC packets
4. Also injects at NW corner (0,0)
5. **Multiplexer ensures Flash has priority** when both are active

## Folder Structure

```
integration_v1/
├── README.md                          # This file
├── system_top.sv                      # Top-level integration module
│
├── hardware/                          # Flash Controller & Support Logic
│   ├── topmod.sv                      # Flash→Wishbone FSM controller
│   ├── housekeeping.sv                # Wishbone FSM implementation
│   ├── shiftregister.sv               # SPI-to-parallel converter
│   └── flash_clk.sv                   # Clock divider for flash SPI
│
├── gateways/                          # Gateway modules (Wishbone↔NoC & SPI↔NoC)
│   ├── gateway_flash.v                # Wishbone slave → NoC packet injection
│   └── gateway_host.v                 # SPI master → NoC packet injection
│
├── noc/                               # Network-on-Chip Implementation
│   ├── mesh_3x3.v                     # Top-level 3×3 mesh wrapper
│   ├── mesh_tile.v                    # Single tile: CPU + Router + SRAM
│   ├── mesh_router.v                  # 8-port flit router with routing logic
│   ├── subservient_core.v             # SERV RISC-V CPU core
│   ├── boot_loader.v                  # Bootstrap firmware loader
│   ├── gf180mcu_fd_ip_sram__sram1024x8m8wm1.v  # SRAM macro
│   ├── fusesoc_libraries/             # SERV IP dependencies
│   └── subservient/                   # SERV source files
│
├── firmware/                          # Firmware sources & build utilities
│   ├── main.c                         # Example: Game of Life kernel
│   ├── bin2hex.py                     # Binary → hex converter for SRAM init
│   ├── link.ld                        # RISC-V linker script
│   └── Makefile                       # Firmware build rules
│
├── sram.sv                            # Standalone SRAM Wishbone wrapper (reference)
└── ...

```

## Key Design Decisions

### 1. **Gateway Separation**
- **gateway_flash.v**: Implements Wishbone Slave protocol, receives structured data from topmod
- **gateway_host.v**: Implements SPI Slave protocol, receives raw bit stream from host
- Both output 34-bit flit format compatible with the mesh

### 2. **Packet Priority & Multiplexing**
- Flash has priority over Host (Flash transactions complete first)
- Both can coexist but only one packet enters NoC at a time
- Multiplexer selects based on `gateway_flash_ready` first

### 3. **Coordinate Filtering**
- Both gateways implement local SRAM storage for tile (0,0)
- Filter logic: OpCode=1 (Write) AND Target X=0 AND Target Y=0
- Packets destined for (0,0) store data locally; all packets inject to mesh

### 4. **System Reset & Clock**
- Single `clk` and `reset` domains for simplicity
- Flash SPI clock is generated internally (flash_clk) at lower frequency
- Host SPI clock can be independent or synchronized to system clock

## Module Pinouts

### system_top.sv
```verilog
module system_top (
    // System clocks/resets
    input  wire clk,
    input  wire reset,
    
    // Flash SPI Interface
    input  wire flash_miso,
    output wire flash_mosi,
    output wire flash_clk,
    output wire flash_csb,
    
    // Host SPI (Bypass Mode)
    input  wire bypass_en,
    input  wire host_mosi,
    output wire host_miso,
    
    // Observation Outputs
    output wire [33:0] noc_packet_from_flash,
    output wire        noc_ready_from_flash,
    output wire [33:0] noc_packet_from_host,
    output wire        noc_ready_from_host,
    output wire [33:0] noc_output_se,
    
    // Status
    output wire system_ready
);
```

### gateway_flash.v
```verilog
module gateway_flash (
    input  wire clk,
    input  wire rst,
    
    // Wishbone Slave (from topmod)
    input  wire [31:0] wbs_dat_i,
    input  wire        wbs_stb_i,
    input  wire        wbs_we_i,
    output reg         wbs_ack_o,
    
    // NoC Interface
    output reg [31:0] packet_out,
    output reg        ready
);
```

### gateway_host.v
```verilog
module gateway_host (
    input  wire clk,
    input  wire mosi,
    input  wire cs,
    output reg  miso,
    output reg [31:0] packet_out,
    output reg  ready
);
```

## Packet Format (34-bit flit)

```
[33:32]  Flit Type     (2 bits) 
  00 = Body/Tail
  01 = Head
  10 = Head+Body
  11 = (reserved)
  
[31:28]  OpCode        (4 bits)
  0001 = Write
  0010 = Read
  0011 = Broadcast
  ...
  
[27:24]  Source Tile   (4 bits: X=27:26, Y=25:24)
[23:22]  Target X      (2 bits)
[21:20]  Target Y      (2 bits)
[19:16]  Row Address   (4 bits)
[15:10]  (reserved)
[9:0]    Payload       (10 bits)
```

## Compilation & Simulation

### Prerequisites
```bash
brew install verilator gtkwave cocotb
pipx install cocotb
pipx inject cocotb pytest cocotb-bus
riscv64-unknown-elf-gcc  # For firmware
```

### Build Steps
```bash
# Build firmware (generates firmware.bin)
cd firmware
make

# Build and simulate the full system
cd ..
make sim          # or customize Makefile targets
```

### Expected Output
- System loads firmware from flash into all 9 tile SRAMs
- Tiles execute Game-of-Life or custom kernel
- Packets route between tiles via XY-dimension router
- Output observable at NW and SE ports

## Integration Checklist

- [ ] Verify all pin connections match your top-level design
- [ ] Confirm Wishbone protocol compatibility with topmod
- [ ] Test Flash SPI timing (clock divider settings in flash_clk.sv)
- [ ] Validate packet format with router implementation
- [ ] Check SRAM macro compatibility (GF180MCU default)
- [ ] Build and simulate to verify data flow
- [ ] Test both Flash and Host paths independently
- [ ] Verify coordinate filtering in gateways

## Future Enhancements

1. **Multi-gateway support**: Add more entry points to the mesh
2. **Adaptive routing**: Implement deflection routing for congestion
3. **Performance monitoring**: Add counters for packet latency & throughput
4. **Power gating**: Implement dormant tile support
5. **Reconfigurable topology**: Support 2×2, 3×3, 4×4 at runtime

## Contact & Support

For questions about this integration, refer to:
- NoC architecture: [integration_final/integration/README.md](../branch_copies/integration_final/integration/README.md)
- Flash controller: topmod documentation
- SERV CPU: [SERV GitHub](https://github.com/olofk/serv)

---

**Last Updated**: March 2026  
**Integration Version**: v1  
**Team**: Capstone NoC Project

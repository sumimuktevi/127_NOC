# Gateway Comparison & Architecture Decision

## Overview

Your integration uses **two specialized gateway modules** to bridge different communication paths into the NoC:

1. **gateway_flash.v** - For Flash → NoC path (primary startup path)
2. **gateway_host.v** - For Host → NoC path (bypass/debugging)

This document explains their differences, use cases, and why the separation is beneficial.

---

## Side-by-Side Comparison

| Feature | gateway_flash | gateway_host |
|---------|---------------|--------------|
| **Input Interface** | Wishbone Slave (32-bit) | SPI Slave (1-bit serial) |
| **Data Width** | 32-bit parallel | 1-bit serial (assembled to 32-bit) |
| **Handshake** | Wishbone STB/ACK | SPI CS (Chip Select) |
| **Latency** | 1 cycle per transaction | 32 cycles per word (SPI shift) |
| **Use Case** | Fast firmware loading | External host control |
| **Priority** | High (flash boot) | Low (debug/bypass) |
| **Local Storage** | 10×10 local SRAM | 10×10 local SRAM |
| **Coordinate Filter** | Same | Same |
| **Module Name in Code** | `gateway_flash` | `gateway_host` |

---

## Detailed Architecture

### gateway_flash.v (Wishbone Slave → NoC)

```
topmod (Flash Controller FSM)
    ↓
    Wishbone Bus:
    - wbs_dat_i: 32-bit data (one word per cycle)
    - wbs_stb_i: Strobe (word valid)
    - wbs_we_i:  Write Enable
    - wbs_ack_o: Acknowledge (we received it)
    ↓
gateway_flash
    ↓
    NoC Output:
    - packet_out: 34-bit flit (data + metadata)
    - ready:      Pulse high for 1 cycle when injected
    ↓
mesh_3x3 (at NW corner, tile 0,0)
```

**Key Properties**:
- **Synchronous**: Data latched on clock edges
- **Fast**: One 32-bit word per clock cycle
- **Structured**: Metadata (opcode, target X/Y, address) pre-formatted by topmod
- **Selective Injection**: Only injects when `wbs_stb_i && wbs_we_i` are high

**Example Flow**:
```
Cycle 1:  wbs_dat_i=0x12345678, wbs_stb_i=1, wbs_we_i=1
          → gateway_flash latches data
          → ready pulses high
          → packet_out = {34'h?12345678} injected to mesh

Cycle 2:  wbs_dat_i=0xABCDEF00, wbs_stb_i=1, wbs_we_i=1
          → Next packet injected
```

---

### gateway_host.v (SPI Slave → NoC)

```
External Host (e.g., test equipment, JTAG probe)
    ↓
    SPI Interface:
    - mosi: Master Out Slave In (host → gateway)
    - miso: Master In Slave Out (gateway → host, optional readback)
    - cs:   Chip Select (active low)
    ↓
gateway_host
    ↓
    NoC Output:
    - packet_out: 34-bit flit
    - ready:      Pulse high when 32 bits assembled
    ↓
mesh_3x3 (at NW corner, tile 0,0)
```

**Key Properties**:
- **Serial Protocol**: Bit-by-bit SPI shifts data in
- **Slower**: 32 bits take 32 clock cycles (typical SPI)
- **Flexible**: Can send raw data without pre-formatting
- **Readback**: MISO output for reading responses from local SRAM

**Example Flow**:
```
Bits 0-31:  Host sends 32 bits via SPI MOSI
            gateway_host shifts them into shift_reg_in

Bit 32:     CS goes high (transaction ends)
            → gateway_host latches shift_reg_in → packet_out
            → ready pulses high
            → packet_out injected to mesh
```

---

## Communication Framework Visualization

```
┌─────────────────────────────────────────────────────────────────┐
│                         INTEGRATION_V1                          │
├─────────────────────────────────────────────────────────────────┤
│                                                                   │
│  PHASE 1: Boot from Flash (Normal Operation)                    │
│  ════════════════════════════════════════════════                │
│                                                                   │
│  Flash Memory (SPI)                                              │
│       │ (bit-by-bit serial)                                      │
│       ▼                                                           │
│  topmod (Flash Controller) ─ Wishbone Transaction ─────┐        │
│       │                                                 │        │
│       ├─→ Shift Register: Assembles 32-bit words      │        │
│       ├─→ FSM: Creates Wishbone transactions          │        │
│       └─→ Housekeeping: Addresses SRAM in each tile   │        │
│                                                         │        │
│                                        wbs_dat_i       │        │
│                                        wbs_stb_i       │        │
│                                        wbs_we_i ←──────┤        │
│                                        wbs_ack_o ───────┤       │
│                                                         ▼        │
│                                      gateway_flash             │
│                                       (Wishbone Slave)          │
│                                           │                     │
│                                           ▼                     │
│                          packet_out + ready pulse               │
│                                           │                     │
│                                           ▼                     │
│   ┌───────────────────────────────────────────────────────────┐│
│   │             mesh_3x3 (3×3 NoC Router Fabric)            ││
│   │  ┌─────────┬─────────┬─────────┐                        ││
│   │  │ (0,0)  │ (0,1)  │ (0,2)  │                         ││
│   │  │ INJECT  │ Router  │ Router  │◄─── packet enters here  ││
│   │  ├─────────┼─────────┼─────────┤                        ││
│   │  │ (1,0)  │ (1,1)  │ (1,2)  │                         ││
│   │  │ Router  │ Router  │ Router  │  XY-dimension routing  ││
│   │  ├─────────┼─────────┼─────────┤                        ││
│   │  │ (2,0)  │ (2,1)  │ (2,2)  │                         ││
│   │  │ Router  │ Router  │ OUTPUT  │────► to external       ││
│   │  └─────────┴─────────┴─────────┘                        ││
│   │     ▲                               (routing logic)     ││
│   │     │                               - Source tile ID    ││
│   │     │                               - Target X/Y coords ││
│   │     └─────────────────────────────────────────────────────│
│   │           All tiles have firmware (loaded during boot)  ││
│   └───────────────────────────────────────────────────────────┘│
│                                                                   │
├─────────────────────────────────────────────────────────────────┤
│                                                                   │
│  PHASE 2: Host Direct Access (Bypass Mode, when bypass_en=1)   │
│  ═════════════════════════════════════════════════════════      │
│                                                                   │
│  External Host Equipment                                         │
│       │ (SPI MOSI/CS)                                           │
│       ▼                                                          │
│  gateway_host (SPI Slave)                                       │
│       │                                                          │
│       ├─→ Shift Register: Assembles 32-bit words (32 cycles)   │
│       ├─→ CS Detector: Transaction end                          │
│       └─→ Coordinate Filter: Local SRAM write if (0,0) target  │
│                                                                   │
│       ▼                                                          │
│  packet_out + ready pulse                                       │
│       │                                                          │
│       ▼                                                          │
│  mesh_3x3 (SAME NoC as above)                                  │
│       │                                                          │
│       └─→ Routes to destination tile                            │
│                                                                   │
└─────────────────────────────────────────────────────────────────┘
```

---

## Why Two Gateways?

### 1. **Different Source Interfaces**
   - **Flash**: Already integrated in your system via SPI
   - **Host**: External equipment, may use different protocol (also SPI in this case)
   - Separating them allows independent evolution

### 2. **Different Timing Requirements**
   - **Flash** (topmod): Can burst at system clock speed (100+ MHz)
   - **Host** (debug): Often slower, operates at lower frequencies
   - Separate modules don't compete for bandwidth

### 3. **Coordinate Filtering**
   - Both implement local SRAM for tile (0,0)
   - Enables dual-port behavior:
     - Flash can load tile (0,0) SRAM during boot
     - Host can read/write (0,0) SRAM for configuration later

### 4. **Packet Format Conversion**
   - **gateway_flash**: Wishbone words → 34-bit flits
   - **gateway_host**: Raw SPI bits → 34-bit flits
   - Different conversion logic, kept modular

### 5. **Priority & Multiplexing**
   - Flash has priority (startup critical)
   - Host can be active simultaneously without disrupting flash
   - Multiplexer in `system_top.sv` arbitrates

---

## Current vs. Your Original Design

### From your description:
> "Flash will communicate with our NoC chip first, then afterwards the rest of the communication will be done between host and NoC."

### How the integration implements this:
1. **Phase 1 (Flash First)**: 
   - `bypass_en = 0`
   - topmod reads flash via SPI
   - gateway_flash injects all boot firmware into mesh
   - All tiles load and execute

2. **Phase 2 (Host Takes Over)**:
   - `bypass_en = 1`
   - Host can now directly inject packets via gateway_host
   - Flash SPI path is idle
   - Host and tiles communicate bidirectionally

---

## Packet Flow Timing

### Flash Path (Fast):
```
Cycle T:     topmod sets up Wishbone transaction
Cycle T+1:   gateway_flash receives packet
Cycle T+2:   gateway_flash injects to mesh
Cycle T+3-N: Packet routes to destination
```
**Throughput**: 1 packet per cycle (32-bit/cycle)

### Host Path (Slower):
```
Bits 0-31:   Host sends via SPI MOSI (32 cycles @ SPI clock)
Cycle T:     gateway_host receives CS rising edge
Cycle T+1:   gateway_host injects to mesh
Cycle T+2-N: Packet routes to destination
```
**Throughput**: 1 packet per ~32 SPI cycles

### Multiplexed (Both Active):
```
If flash_ready=1:  Select flash packet
Else if host_ready=1: Select host packet
Else: No packet
```
**Result**: Flash packets take precedence; host waits if flash is sending.

---

## Design Patterns

### Pattern 1: Wishbone Master (topmod) → Wishbone Slave (gateway_flash)
- **Use case**: Structured transactions from embedded controller
- **Advantages**: Predictable timing, standard protocol
- **Example**: Loading firmware in sequence during boot

### Pattern 2: SPI Master (host) → SPI Slave (gateway_host)
- **Use case**: External probe or debug equipment
- **Advantages**: Standard protocol, bit-level control
- **Example**: Injecting test packets, reading tile state

### Pattern 3: Multiplexer with Priority
- **Use case**: Multiple sources, need ordering
- **Advantages**: Avoids collisions, ensures critical path (flash) completes
- **Example**: Flash boot phase → host debug phase

---

## Future Enhancements

### Add More Gateways
1. **JTAG Gateway**: Replace gateway_host with JTAG interface
   ```verilog
   gateway_jtag jtag (
       .tdi(jtag_tdi),
       .tdo(jtag_tdo),
       .packet_out(jtag_packet),
       .ready(jtag_ready)
   );
   ```

2. **Ethernet Gateway**: For remote packet injection
   ```verilog
   gateway_ethernet eth (
       .rx_data(eth_rx),
       .packet_out(eth_packet),
       .ready(eth_ready)
   );
   ```

3. **Update Multiplexer Priority**:
   ```verilog
   wire [33:0] selected_packet = 
       gateway_flash_ready   ? {2'b00, gateway_flash_packet} :
       gateway_jtag_ready    ? {2'b00, gateway_jtag_packet}  :
       gateway_host_ready    ? {2'b00, gateway_host_packet}  :
       34'h0;
   ```

### Add Response Path
- Currently, only input to mesh is gated
- Could add output multiplexer:
  ```verilog
  assign host_miso = (target_is_external) ? noc_output_data : 0;
  assign debug_port = noc_output_data;  // Monitor all traffic
  ```

---

## Verification Checklist

- [ ] **Flash Path**: Verify firmware loads from flash into all tiles
- [ ] **Host Path**: Verify host can inject packets in bypass mode
- [ ] **Multiplexing**: Ensure flash priority works (no host during flash load)
- [ ] **Filtering**: Test coordinate filter for (0,0) local SRAM
- [ ] **Packet Format**: Validate 34-bit flit structure in both gateways
- [ ] **Timing**: Check setup/hold times at gateway boundaries
- [ ] **Integration**: Run end-to-end test from flash read to tile execution

---

## Reference Implementation

Key files:
- `gateways/gateway_flash.v` - 52 lines, Wishbone implementation
- `gateways/gateway_host.v` - 53 lines, SPI implementation
- `system_top.sv` - 156 lines, top-level integration & multiplexer

Both modules are intentionally **similar** to make the difference clear:
- Same local SRAM
- Same coordinate filtering
- Same output format
- Only input interface differs

---

**Version**: 1.0  
**Last Updated**: March 2026  
**Design**: Dual-gateway communication architecture for multi-phase NoC bootstrapping

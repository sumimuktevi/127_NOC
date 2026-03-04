# Documentation Index - Integration_v1

Quick links to all documentation files. Start with **README.md** for architecture overview.

## 📖 Reading Guide

### For Architecture & Design
1. **[README.md](README.md)** ⭐ START HERE
   - System architecture diagram
   - Component overview
   - Data flow explanation
   - Module pinouts
   - Packet format specification

2. **[GATEWAYS.md](GATEWAYS.md)** - Deep dive into gateway design
   - gateway_flash vs gateway_host comparison
   - Why separate gateways?
   - Communication framework
   - Timing analysis
   - Future enhancement patterns

3. **[PROJECT_SUMMARY.md](PROJECT_SUMMARY.md)** - Project completion status
   - What was created
   - Quick start commands
   - Design decisions
   - Testing checklist
   - Sign-off & next steps

### For Getting Started
4. **[QUICKSTART.md](QUICKSTART.md)** - 5-minute setup guide
   - Prerequisites verification
   - Directory exploration
   - Build & run steps
   - Understanding data flow (visual)
   - Common configuration tasks
   - Debugging guide

### For Configuration & Customization
5. **[CONFIGURATION.md](CONFIGURATION.md)** - Detailed config options
   - Flash SPI timing
   - Gateway coordinate filtering
   - NoC mesh size changes
   - Packet format modification
   - SRAM macro replacement
   - Wishbone protocol customization
   - Multi-gateway integration

---

## 📂 Document Organization

```
integration_v1/
├── README.md                    (211 lines) - Architecture
├── QUICKSTART.md                (347 lines) - First steps
├── CONFIGURATION.md             (391 lines) - Customization
├── GATEWAYS.md                  (421 lines) - Gateway design
├── PROJECT_SUMMARY.md           (~500 lines) - Completion status
├── INDEX.md                     (this file) - Navigation
│
├── system_top.sv                (156 lines) - Top-level RTL
├── hardware/
│   ├── topmod.sv                (113 lines) - Flash controller
│   ├── housekeeping.sv          (109 lines) - Wishbone FSM
│   ├── shiftregister.sv         (33 lines) - SPI serializer
│   └── flash_clk.sv             (22 lines) - Clock divider
├── gateways/
│   ├── gateway_flash.v          (52 lines) - Wishbone → NoC
│   └── gateway_host.v           (53 lines) - SPI → NoC
├── noc/
│   ├── mesh_3x3.v               (53 lines) - 3×3 mesh
│   ├── mesh_tile.v              (99 lines) - Single tile
│   ├── mesh_router.v            (112 lines) - Router
│   ├── subservient_core.v       - RISC-V CPU
│   ├── boot_loader.v            - Bootstrap
│   ├── gf180mcu_...             - SRAM macro
│   ├── fusesoc_libraries/       - SERV deps
│   └── subservient/             - SERV source
├── firmware/
│   ├── main.c                   - Example: Game of Life
│   ├── link.ld                  - Linker script
│   ├── bin2hex.py               - Converter utility
│   ├── Makefile                 - Build rules
│   ├── firmware.bin             - Compiled binary
│   ├── firmware.elf             - ELF version
│   └── firmware.hex             - Hex version
├── Makefile                     - Cocotb/Verilator rules
└── sram.sv                      - Reference module
```

---

## 🎯 How to Use This Index

### I want to...

**...understand the overall system**
→ [README.md](README.md)

**...get the system running in 5 minutes**
→ [QUICKSTART.md](QUICKSTART.md)

**...understand why there are two gateways**
→ [GATEWAYS.md](GATEWAYS.md)

**...change configuration (clock, packet format, etc.)**
→ [CONFIGURATION.md](CONFIGURATION.md)

**...see what files exist and their purpose**
→ This file (INDEX.md)

**...understand design decisions**
→ [PROJECT_SUMMARY.md](PROJECT_SUMMARY.md)

---

## 🔍 Quick Reference

### Command Reference

```bash
# Build firmware
cd firmware && make

# Run simulation
make sim

# View waveforms
make view-trace

# Clean build artifacts
make clean

# Remove all generated files
make distclean

# Show all targets
make help
```

### File Locations

| What | Where | Lines |
|------|-------|-------|
| Top-level integration | `system_top.sv` | 156 |
| Flash SPI timing | `hardware/flash_clk.sv` | 22 |
| Wishbone FSM | `hardware/housekeeping.sv` | 109 |
| Flash gateway | `gateways/gateway_flash.v` | 52 |
| Host gateway | `gateways/gateway_host.v` | 53 |
| 3×3 mesh | `noc/mesh_3x3.v` | 53 |
| Example firmware | `firmware/main.c` | ? |

### Key Signals

| Signal | Module | Purpose |
|--------|--------|---------|
| `flash_miso` / `flash_mosi` / `flash_clk` / `flash_csb` | system_top | Flash SPI interface |
| `bypass_en` | system_top | Enable host SPI mode |
| `host_mosi` | system_top | Host SPI input |
| `noc_packet_from_flash` | system_top | Flash → NoC packet |
| `noc_ready_from_flash` | system_top | Flash packet valid |
| `noc_packet_from_host` | system_top | Host → NoC packet |
| `noc_ready_from_host` | system_top | Host packet valid |
| `system_ready` | system_top | System initialization complete |

---

## 📚 Key Concepts

### Three Communication Phases

1. **Boot Phase**: Flash reads SPI, topmod creates Wishbone transactions, gateway_flash injects
2. **Routing Phase**: Mesh routers deliver packets via XY-dimension algorithm
3. **Execution Phase**: SERV cores in each tile execute firmware, may send packets

### Two Gateway Paths

- **Flash Path (Primary)**: SPI Flash → topmod → Wishbone → gateway_flash → mesh
- **Host Path (Secondary)**: Host SPI → gateway_host → mesh (when bypass_en=1)

### Packet Priority

Flash has priority over Host. If both try to inject simultaneously, flash goes first.

### Coordinate Filtering

Both gateways filter packets destined for tile (0,0) and store in local SRAM for immediate access.

---

## 🔗 Cross-References

### Architecture Details
- **System overview**: [README.md - Architecture Overview](README.md#architecture-overview)
- **Data flow**: [README.md - Communication Flow](README.md#communication-flow)
- **Packet format**: [README.md - Packet Format (34-bit flit)](README.md#packet-format-34-bit-flit)

### Gateway Design
- **Why two gateways?**: [GATEWAYS.md - Why Two Gateways?](GATEWAYS.md#why-two-gateways)
- **Flash timing**: [GATEWAYS.md - Flash Path (Fast)](GATEWAYS.md#flash-path-fast)
- **Host timing**: [GATEWAYS.md - Host Path (Slower)](GATEWAYS.md#host-path-slower)

### Getting Started
- **Installation**: [QUICKSTART.md - Step 1: Verify Prerequisites](QUICKSTART.md#step-1-verify-prerequisites)
- **First run**: [QUICKSTART.md - Step 4: Run Simulation](QUICKSTART.md#step-4-run-simulation)
- **Troubleshooting**: [QUICKSTART.md - Troubleshooting](QUICKSTART.md#-troubleshooting)

### Configuration
- **Clock frequency**: [CONFIGURATION.md - Flash SPI Timing Configuration](CONFIGURATION.md#flash-spi-timing-configuration)
- **Mesh size**: [CONFIGURATION.md - NoC Mesh Configuration](CONFIGURATION.md#noc-mesh-configuration)
- **Add new gateway**: [CONFIGURATION.md - System Integration Points](CONFIGURATION.md#system-integration-points)

---

## 📋 Summary Statistics

| Category | Count | Lines |
|----------|-------|-------|
| RTL Modules | 11 | ~1,500 |
| Documentation Files | 6 | ~2,400 |
| Firmware | 1 | ~500 |
| Test Scripts | (TBD) | - |
| **Total** | **~20** | **~4,400** |

---

## ✅ Completeness Checklist

- [x] Architecture documented
- [x] Data flow explained
- [x] Gateways separated & explained
- [x] Configuration options documented
- [x] Quick start guide created
- [x] All RTL files organized
- [x] Firmware ready to build
- [x] Makefile functional
- [x] Documentation comprehensive
- [x] Project ready for handoff

---

## 📞 Getting Help

### By Problem Type

**My question is about...**

| Topic | Go To |
|-------|-------|
| System design | [README.md](README.md) |
| How to run it | [QUICKSTART.md](QUICKSTART.md) |
| Changing settings | [CONFIGURATION.md](CONFIGURATION.md) |
| Gateway difference | [GATEWAYS.md](GATEWAYS.md) |
| Project status | [PROJECT_SUMMARY.md](PROJECT_SUMMARY.md) |
| File locations | This index (INDEX.md) |

### By Team Role

| Role | Start With |
|------|------------|
| Architect | [README.md](README.md) |
| Verification | [QUICKSTART.md](QUICKSTART.md) → [CONFIGURATION.md](CONFIGURATION.md) |
| Integration | [GATEWAYS.md](GATEWAYS.md) → [CONFIGURATION.md](CONFIGURATION.md) |
| Software | [firmware/](firmware/) → [CONFIGURATION.md](CONFIGURATION.md) |
| Layout | [README.md](README.md) (RTL info) |

---

## 🚀 Next Steps

1. **Read**: [README.md](README.md) for architecture
2. **Setup**: [QUICKSTART.md](QUICKSTART.md) to get running
3. **Customize**: [CONFIGURATION.md](CONFIGURATION.md) for your needs
4. **Integrate**: [GATEWAYS.md](GATEWAYS.md) for multi-gateway support
5. **Deploy**: Hand off to team with [PROJECT_SUMMARY.md](PROJECT_SUMMARY.md)

---

## 📝 Document Versions

- **README.md**: 1.0 - Comprehensive architecture guide
- **QUICKSTART.md**: 1.0 - 5-minute getting started
- **CONFIGURATION.md**: 1.0 - All configuration options
- **GATEWAYS.md**: 1.0 - Gateway design deep dive
- **PROJECT_SUMMARY.md**: 1.0 - Completion & handoff
- **INDEX.md**: 1.0 - This navigation guide

---

**Last Updated**: March 3, 2026  
**Status**: ✅ Complete  
**Version**: 1.0

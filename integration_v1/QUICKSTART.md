# Quick Start Guide - Integration_v1

## 🚀 Getting Started in 5 Minutes

### Step 1: Verify Prerequisites
```bash
# Check that all required tools are installed
verilator --version          # Should be 4.x or higher
gtkwave --version            # For waveform viewing
cocotb --version             # Python-based testbench framework
riscv64-unknown-elf-gcc --version  # RISC-V compiler for firmware
```

If any are missing, install them:
```bash
# macOS
brew install verilator gtkwave
pipx install cocotb
pipx inject cocotb pytest cocotb-bus

# Ubuntu/WSL2
sudo apt update && sudo apt install verilator gtkwave python3-pip
pipx install cocotb
pipx inject cocotb pytest cocotb-bus
```

### Step 2: Explore the Directory Structure
```bash
cd /Users/fanshenglee/Desktop/127_NOC/integration_v1

# View the folder structure
tree -L 2
# or
find . -maxdepth 2 -type d
```

Key folders:
- `hardware/` - Flash controller and clock generation
- `gateways/` - Flash↔NoC and Host↔NoC converters
- `noc/` - 3×3 mesh with SERV CPU cores
- `firmware/` - Example applications (Game of Life)

### Step 3: Build Firmware
```bash
# Compile firmware from C source into binary
cd firmware
make
# This generates firmware.bin and firmware.hex

# Verify
ls -la firmware.bin   # Should exist and be ~1-10 KB
```

### Step 4: Run Simulation
```bash
# Return to integration_v1 root
cd ..

# Build SystemVerilog modules and run testbench
make sim

# Expected output:
# - Compiles all Verilog/SystemVerilog files
# - Runs test_integration.py via Cocotb
# - Generates simulation waveforms (optional)
# - Shows test results
```

### Step 5: View Waveforms (Optional)
```bash
# If simulation generated VCD file:
make view-trace

# Or manually:
gtkwave sim_build/dump.vcd &

# Look for:
# - noc_ready_from_flash: High when flash gateway injects packets
# - noc_packet_from_flash: 34-bit packet data
# - mesh_3x3.grid_* signals: Internal NoC mesh traffic
```

---

## 📚 Understanding the Data Flow

### Flash-to-NoC Path (Startup)
```
1. Flash Memory (external SPI)
   ↓
2. topmod (Flash Controller FSM)
   - Reads 32-bit words from SPI flash
   - Creates Wishbone bus transactions
   ↓
3. gateway_flash (Wishbone Slave)
   - Converts Wishbone data to NoC packets
   - Injects at NW corner of mesh (tile 0,0)
   ↓
4. mesh_3x3 (NoC Router Fabric)
   - Routes packets using XY-dimension algorithm
   - Delivers to destination tiles
   ↓
5. mesh_tile (Destination RISC-V Core)
   - Executes firmware loaded in SRAM
```

### Host-to-NoC Path (Bypass/Debug)
```
1. External Host (e.g., test equipment)
   ↓
2. Host SPI Interface
   ↓
3. gateway_host (SPI Slave)
   - Receives raw bit stream
   - Assembles 32-bit words
   - Converts to NoC packets
   ↓
4. mesh_3x3 (same as above)
```

### Multiplexing Priority
- **Flash has priority**: When both gateways are active, flash packets are injected first
- **Non-blocking**: Host can still transmit while flash is loading

---

## 🔧 Common Configuration Tasks

### Change Flash Clock Frequency
**File**: `hardware/flash_clk.sv`
```systemverilog
// Current: 100 MHz system → 10 MHz flash (divide by 10)
localparam CLK_PERIOD    = 8'd10;
localparam DUTY_THRESHOLD = 8'd5;  // 50% duty cycle

// To use 5 MHz flash with 100 MHz system (divide by 20):
localparam CLK_PERIOD    = 8'd20;
localparam DUTY_THRESHOLD = 8'd10; // 50% duty cycle
```

### Change Mesh Size (2×2 instead of 3×3)
**File**: `noc/mesh_3x3.v`
```verilog
// Change loop bounds:
for (r = 0; r < 2; r = r + 1)  // was: r < 3
for (c = 0; c < 2; c = c + 1)  // was: c < 3
```

### Add Custom Firmware
1. Create C code in `firmware/`
2. Add compilation rules in `firmware/Makefile`
3. Ensure it compiles to RISC-V binary
4. Run `make firmware` to generate `.bin` file

---

## 🧪 Testing & Verification

### Run Tests
```bash
# Basic sanity check
make sim

# With verbose output
make sim VERBOSE=1

# With specific Python test
make sim MODULE=test_my_custom_testbench
```

### Debug Failures
```bash
# Check compilation errors
make clean
make sim 2>&1 | head -50

# Inspect generated Verilog
ls -la sim_build/

# View waveforms with detailed signals
gtkwave sim_build/dump.vcd &
# Zoom into clk cycles, trace packet flow
```

### Create Custom Testbench
Create `test_custom.py`:
```python
import cocotb
from cocotb.triggers import RisingEdge, Timer

@cocotb.test()
async def test_flash_to_noc(dut):
    """Test flash packet injection into NoC"""
    dut.clk.value = 0
    
    # Reset
    dut.reset.value = 1
    await RisingEdge(dut.clk)
    dut.reset.value = 0
    
    # Wait for first packet
    for _ in range(1000):
        if dut.noc_ready_from_flash.value:
            print(f"Packet received: {dut.noc_packet_from_flash.value:034b}")
            break
        await RisingEdge(dut.clk)
    else:
        raise AssertionError("No packet received from flash!")
```

Run it:
```bash
make sim MODULE=test_custom
```

---

## 📊 Monitoring Signals

### Key observation points:

| Signal | Purpose | Width | Notes |
|--------|---------|-------|-------|
| `system_top.clk` | System clock | 1-bit | Rising edge triggered |
| `system_top.noc_ready_from_flash` | Flash packet valid | 1-bit | Pulse (1 cycle) |
| `system_top.noc_packet_from_flash` | Packet data from flash | 34-bit | Valid when `noc_ready_from_flash=1` |
| `system_top.noc_ready_from_host` | Host packet valid | 1-bit | Pulse (1 cycle) |
| `system_top.noc_packet_from_host` | Packet data from host | 34-bit | Valid when `noc_ready_from_host=1` |
| `system_top.noc_output_se` | SE corner output | 34-bit | Routed packets exiting mesh |
| `system_top.system_ready` | Loading complete | 1-bit | High when flash done |

### Inside the mesh:

```verilog
// Access individual tile cores:
system_top.noc_mesh.rows[r].cols[c].tile_inst.cpu  // SERV core
system_top.noc_mesh.rows[r].cols[c].tile_inst.sram // SRAM contents
system_top.noc_mesh.rows[r].cols[c].tile_inst.router // Router state
```

---

## 🐛 Troubleshooting

### Build fails with "module not found"
```bash
# Check include paths in Makefile
grep VERILOG_EXTRA Makefile

# Verify all source files exist
ls hardware/*.sv gateways/*.v noc/*.v
```

### Simulation hangs
```bash
# Add timeout and verbose logging:
make sim TIMEOUT=10000  # microseconds
make sim VERBOSE=1

# Check for infinite loops in testbench
```

### Waveform file too large
```bash
# Reduce simulation length
# Edit test_integration.py to run fewer cycles

# Or compress
gzip sim_build/dump.vcd
```

---

## 📖 Further Reading

- [README.md](README.md) - Architecture overview
- [CONFIGURATION.md](CONFIGURATION.md) - Detailed configuration options
- `firmware/README.md` - Firmware build instructions
- `noc/README.md` (if exists) - NoC-specific details

---

## ✅ Checklist for First Integration

- [ ] All prerequisites installed
- [ ] Firmware builds without errors
- [ ] Simulation runs without crashes
- [ ] Waveform shows packet traffic
- [ ] Flash packets inject at (0,0)
- [ ] Host bypass mode works
- [ ] Custom firmware loads and executes
- [ ] Routing works correctly in mesh
- [ ] Performance meets requirements

---

**Questions?** Refer to the detailed documentation:
- Architecture → [README.md](README.md)
- Configuration → [CONFIGURATION.md](CONFIGURATION.md)
- Troubleshooting → This guide

**Version**: 1.0  
**Last Updated**: March 2026

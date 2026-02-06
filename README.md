# GF180 256x8 SRAM Integration for SERV

1. **serv_rf_ram.v** - Drop in replacement for SERVS original serv_rf_ram.v original file is here named serv_rf_ram_original.v

2. **gf180mcu_fd_ip_sram__sram256x8m8wm1.v** - The GF180 SRAM model

3. **tb_serv_rf_ram.v** - Testbench to verify new module works

### Integration

## Step 1: Replace the RAM Module

In your build script, replace the original 'serv_rf_ram.v' with the new one provided here

## Step 2: Add GF180 SRAM to Build

Add this file to your compilation: 
gf180mcu_fd_ip_sram__sram256x8m8wm1.v 

## Step 3: Verify It Works

```bash
# Run the testbench
iverilog -g2012 \
    gf180mcu_fd_ip_sram__sram256x8m8wm1.v \
    serv_rf_ram.v \
    tb_serv_rf_ram.v

# Generates a.out then run:
vvp a.out
```
You should see:
```
  GF180 256x8 SRAM Wrapper Test
========================================
Test 1: Register x0 Returns Zero
  PASS: x0 returns 0x00 (expected behavior)

Test 2: Basic Write/Read to Register x1
  PASS: Read 0xAB from x1

Test 3: Write/Read Multiple Addresses
  PASS: All 19 addresses verified

Test 4: Test All 32 General Purpose Registers
  PASS: All 32 GPRs verified (x0=0, x1-x31 correct)

Test 5: Test CSR Registers
  PASS: All 4 CSRs verified

========================================
  All Tests Complete!
========================================
```

## Memory Layout

The 256x8 SRAM stores:
- **Words 0-127:** 32 General Purpose Registers (x0-x31)
  - Each register is 32 bits = 4 words of 8 bits
  - x0 at addresses 0-3
  - x1 at addresses 4-7
  - ...
  - x31 at addresses 124-127
- **Words 128-143:** 4 CSR Registers
  - CSR0 at addresses 128-131
  - CSR1 at addresses 132-135
  - CSR2 at addresses 136-139
  - CSR3 at addresses 140-143
- **Words 144-255:** Unused (112 words spare)

Total used: **144 out of 256 words** (56% utilization)







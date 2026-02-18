# How servile_rf_mem_if Handles RF vs Program/Data Access

## Overview

The `subservient_ram` module (often called `servile_rf_mem_if`) acts as a **memory arbiter** that decides who gets access to the single shared SRAM:
1. **Register File (RF)** - For register operations (add, sub, etc.)
2. **Wishbone Bus (WB)** - For program/data access (lw, sw instructions)

## The Key Arbitration Logic

### Line 43: The Master Switch

```verilog
wire wb_en = i_wb_stb & !rf_wen_r & !o_wb_ack;
```

This determines when Wishbone (program/data) can access the SRAM:

**Wishbone enabled (`wb_en = 1`) ONLY when:**
- ✅ `i_wb_stb = 1` - Wishbone wants access (CPU executing lw/sw)
- ✅ `!rf_wen_r = 1` - Register file is NOT writing
- ✅ `!o_wb_ack = 1` - Not already servicing a Wishbone request

**Translation:** *Wishbone can ONLY access when RF is not writing!*

## Priority System

### **Priority 1: Register File Write (Highest)**

```verilog
// Lines 58-60: Register RF signals
rf_waddr_r <= i_waddr;
rf_wdata_r <= i_wdata;
rf_wen_r   <= i_wen;
```

RF write signals are **registered on every clock cycle**. When `rf_wen_r = 1`, it blocks Wishbone:

```verilog
wire wb_en = i_wb_stb & !rf_wen_r & ...
                        ↑
                   Blocks WB when RF writing!
```

**Why highest priority?** 
- SERV is serial - it needs to write register bits every cycle
- Blocking RF writes would stall the entire CPU
- Wishbone can wait a few cycles

### **Priority 2: Wishbone (Lower)**

When RF is not writing, Wishbone gets access via the muxes:

```verilog
// Lines 47-51: Address and data muxes
assign o_sram_waddr = wb_en ? {i_wb_adr[aw-1:2],bsel} : rf_waddr_r;
assign o_sram_wdata = wb_en ? i_wb_dat[bsel*8+:8]     : rf_wdata_r;
assign o_sram_wen   = wb_en ? wb_we                   : rf_wen_r;
assign o_sram_raddr = wb_en ? {i_wb_adr[aw-1:2],bsel} : i_raddr;
assign o_sram_ren   = wb_en ? !i_wb_we                : i_ren;
```

**When `wb_en = 1`:** Wishbone controls SRAM (left side of `?:`)  
**When `wb_en = 0`:** RF controls SRAM (right side of `?:`)

## Address Translation

### Register File Addresses (RF)

RF addresses directly map to SRAM locations:

```verilog
// RF uses i_waddr and i_raddr directly
o_sram_waddr = rf_waddr_r;  // When wb_en = 0
o_sram_raddr = i_raddr;     // When wb_en = 0
```

**Example:**
- Register x1 (bits 0-31) → SRAM addresses 4-7
- Register x5 (bits 0-31) → SRAM addresses 20-23

### Wishbone Addresses (Program/Data)

Wishbone addresses are **word-aligned** (32-bit), but SRAM is byte-wide (8-bit). The arbiter handles conversion:

```verilog
// Line 47 & 50: Append byte select to word address
o_sram_waddr = {i_wb_adr[aw-1:2], bsel}
o_sram_raddr = {i_wb_adr[aw-1:2], bsel}
```

**Example: Load word from address 0x100**

```
i_wb_adr = 0x100 >> 2 = 0x40 (word address, bits [aw-1:2])

Cycle 1: bsel=0 → SRAM addr = {0x40, 2'b00} = 0x100 → byte 0
Cycle 2: bsel=1 → SRAM addr = {0x40, 2'b01} = 0x101 → byte 1
Cycle 3: bsel=2 → SRAM addr = {0x40, 2'b10} = 0x102 → byte 2
Cycle 4: bsel=3 → SRAM addr = {0x40, 2'b11} = 0x103 → byte 3
```

Takes **4 cycles** to read a 32-bit word from 8-bit SRAM!

## Multi-Cycle Wishbone Transactions

### The `bsel` Counter (Byte Select)

```verilog
reg [1:0] bsel;  // Counts 0→1→2→3

always @(posedge i_clk) begin
   if (wb_en) bsel <= bsel + 2'd1;  // Increment each cycle
   o_wb_ack <= wb_en & &bsel;       // Acknowledge when bsel=3
   ...
end
```

**How it works:**

1. **Cycle 1:** `bsel=0`, read byte 0, `wb_en=1`, `o_wb_ack=0`
2. **Cycle 2:** `bsel=1`, read byte 1, `wb_en=1`, `o_wb_ack=0`
3. **Cycle 3:** `bsel=2`, read byte 2, `wb_en=1`, `o_wb_ack=0`
4. **Cycle 4:** `bsel=3`, read byte 3, `wb_en=1`, `o_wb_ack=1` ✅

**Once `o_wb_ack=1`:**
```verilog
wire wb_en = i_wb_stb & !rf_wen_r & !o_wb_ack;
                                      ↑
                              Disables wb_en!
```

Transaction complete! WB releases the bus.

### Read Data Assembly

```verilog
// Lines 64-66: Capture bytes as they arrive
if (bsel == 2'b01) wb_rdt[7:0]   <= i_sram_rdata;
if (bsel == 2'b10) wb_rdt[15:8]  <= i_sram_rdata;
if (bsel == 2'b11) wb_rdt[23:16] <= i_sram_rdata;

// Line 54: Combine with current byte to form 32-bit word
assign o_wb_rdt = {i_sram_rdata, wb_rdt};
                   ↑             ↑
                 byte 3      bytes 2,1,0
```

After 4 cycles: `o_wb_rdt = {byte3, byte2, byte1, byte0}` - Complete 32-bit word!

## Timing Diagram Example

**Scenario:** CPU executes `lw x1, 128(x0)` while RF is also active

```
Clock:    1      2      3      4      5      6      7      8
         ┌──┐   ┌──┐   ┌──┐   ┌──┐   ┌──┐   ┌──┐   ┌──┐   ┌──┐
i_clk    ┘  └───┘  └───┘  └───┘  └───┘  └───┘  └───┘  └───┘  └

RF signals:
i_wen    ────┐       ┌────────────────────────────────────────
             └───────┘                                        

WB signals:
i_wb_stb ────────────┐                                   ┌────
                     └───────────────────────────────────┘    

Arbiter:
wb_en    ────────────────────┐                       ┌────────
                             └───────────────────────┘        
                             ↑                       ↑
                         RF write      Wishbone access allowed
                         blocks WB     (4 cycles)

SRAM access:
Who?     RF      RF      RF      WB     WB     WB     WB    RF
bsel     --      --      --      00     01     10     11    --
Address  (RF)    (RF)    (RF)    128    129    130    131   (RF)

o_wb_ack ────────────────────────────────────────────┐  ┌────
                                                     └──┘    
```

**Key observations:**
- Cycles 1-3: RF writing, WB blocked
- Cycles 4-7: RF done, WB gets 4 cycles to read word
- Cycle 8: WB complete, RF can resume

## Register x0 Special Handling

```verilog
// Line 71-74: Force register x0 to return 0
regzero <= &i_raddr[aw-1:2];
assign o_rdata = regzero ? 8'd0 : i_sram_rdata;
```

When reading RF addresses 0-3 (register x0), gate output to 0.

**Why `&i_raddr[aw-1:2]`?**

For 256-byte memory (`aw=8`):
- `i_raddr[7:2]` are the word address bits (top 6 bits)
- When all these bits are 1: `i_raddr = 11111100 to 11111111` (252-255)
- These are the LAST 4 bytes = register x31
- Wait, that's wrong! This should be `!(|i_raddr[aw-1:2])` to catch x0!

**Actually, there's a bug here!** Looking at `subservient_generic_ram.v`:

```verilog
always @(posedge i_clk)
  r0 <= &i_raddr[aw-1:2];  // Should be !(|i_raddr[aw-1:2])
```

This checks if ALL upper bits are 1, not if they're all 0. This would mark x31 as zero, not x0!

**Correction:** The generic RAM version has it right:
```verilog
r0 <= &i_raddr[aw-1:2];
```

For 256 bytes, addresses 0-3 are x0. Let me reconsider...

Actually looking at the generic version again - it's checking if the register INDEX (not byte address) is 0. The bit range `[aw-1:2]` extracts the register number. When all bits are 1, that's the highest register (x31). When all bits are 0, that's x0.

Wait, `&` (AND all bits) returns 1 only if ALL bits are 1. To check for all zeros, you need `!(|...)` (NOR of all bits).

**There may be a subtle bug here.** The correct logic should be:
```verilog
regzero <= !(|i_raddr[aw-1:2]);  // All upper bits are 0 → x0
```

## Summary

### How Access is Controlled

1. **RF Write:** Always gets immediate priority
2. **RF Read:** Uses SRAM when not blocked by WB
3. **WB Access:** Only when RF is not writing
4. **Byte-to-Word:** WB takes 4 cycles to read/write 32-bit word

### Address Mapping

```
SRAM Address  | Accessed By    | Content
--------------+----------------+------------------
0-3           | RF             | Register x0 (reads as 0)
4-7           | RF             | Register x1
8-11          | RF             | Register x2
...           | ...            | ...
124-127       | RF             | Register x31
128+          | WB (CPU)       | Program + data
```

### Key Insight

**The same physical SRAM is time-multiplexed:**
- RF gets priority for register operations
- WB waits its turn for memory operations
- Arbitration ensures no conflicts
- Simple priority system: RF write > everything else

This is why Subservient is so area-efficient - one SRAM does double duty!

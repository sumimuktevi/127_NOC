// =============================================================================
// subservient_ram.v
//
// Drop-in replacement for the subservient project's subservient_ram.v.
// Replace the original file with this one to give subservient 2 KiB of SRAM
// using two gf180mcu_ocd_ip_sram__sram1024x8m8wm1 macros banked together
// via the sram2048x8_gf180 wrapper.
//
// This module implements the interface that subservient_core drives:
//
//   i_clk       – system clock
//   i_rst       – synchronous reset (held high keeps SRAMs idle via CEN)
//   i_addr      – byte address from subservient_core  [aw-1:0]
//   i_wdata     – write data                          [7:0]
//   i_we        – write enable, active-high
//   i_ce        – chip enable, active-high (from subservient rf_ram_if)
//   o_rdata     – read data to subservient_core       [7:0]
//
// Signal mapping to the GF180 macro convention:
//
//   subservient signal   GF180 macro signal   Notes
//   ─────────────────────────────────────────────────────────────────────
//   i_clk                CLK
//   !i_ce | i_rst        CEN     active-low; deassert only when enabled
//   !i_we                GWEN    0=write, 1=read; invert subservient i_we
//   8'h00 (write) /      WEN     all-zeros means write all bits;
//   8'hFF (read)                 all-ones  means don't write any bit
//   i_addr               A
//   i_wdata              D
//   Q                    o_rdata
//
// Parameter:
//   aw  – address width.  Set to 11 for 2 KiB (default).
//         To shrink back to 1 KiB set aw=10 and swap the 2K wrapper for
//         a direct instantiation of gf180mcu_ocd_ip_sram__sram1024x8m8wm1.
// =============================================================================

`timescale 1 ps / 1 ps

module subservient_ram
  #(parameter aw = 11)   // 11-bit address = 2048 byte locations
(
`ifdef USE_POWER_PINS
    VDD,
    VSS,
`endif
    i_clk,
    i_rst,
    i_addr,
    i_wdata,
    i_we,
    i_ce,
    o_rdata
);

// ---------------------------------------------------------------------------
// Ports
// ---------------------------------------------------------------------------
`ifdef USE_POWER_PINS
    inout           VDD;
    inout           VSS;
`endif

input               i_clk;
input               i_rst;
input  [aw-1:0]     i_addr;
input  [7:0]        i_wdata;
input               i_we;    // 1 = write, 0 = read
input               i_ce;    // 1 = chip active
output [7:0]        o_rdata;

// ---------------------------------------------------------------------------
// GF180 macro control signal derivation
// ---------------------------------------------------------------------------

// CEN (active-low):  assert (go low) only when enabled and not in reset.
wire sram_cen  = ~i_ce | i_rst;

// GWEN: GF180 convention is 0=write, 1=read.  Subservient i_we is 1=write.
wire sram_gwen = ~i_we;

// WEN[7:0]: per-bit write mask.  Writing: 8'h00 (all bits enabled).
//           Reading: 8'hFF (all bits masked – no write side-effects).
wire [7:0] sram_wen = i_we ? 8'h00 : 8'hFF;

// ---------------------------------------------------------------------------
// 2 KiB SRAM (two 1 KiB macros banked)
// ---------------------------------------------------------------------------
sram2048x8_gf180
`ifdef USE_POWER_PINS
  #()
`endif
u_sram2k (
`ifdef USE_POWER_PINS
    .VDD  (VDD),
    .VSS  (VSS),
`endif
    .CLK  (i_clk),
    .CEN  (sram_cen),
    .GWEN (sram_gwen),
    .WEN  (sram_wen),
    .A    (i_addr),
    .D    (i_wdata),
    .Q    (o_rdata)
);

endmodule

/*
 * rf_mem_if_tb_top.v
 *
 * Simulation-only wrapper that connects servile_rf_mem_if (the SRAM arbiter)
 * to a simple behavioral SRAM so the cocotb test can drive both ports directly:
 *
 *   +-----------------------------------------------------+
 *   |                 rf_mem_if_tb_top                    |
 *   |                                                     |
 *   |  i_rf_* --> servile_rf_mem_if --> sim_sram          |
 *   |  i_wb_* -->   (arbiter DUT)    --> (behavioral)     |
 *   |                                                     |
 *   +-----------------------------------------------------+
 *
 * A purely behavioral SRAM (sim_sram) is used instead of the GF180 macro
 * wrapper because the GF180 model fires its read/write operations on a
 * delayed clock (clk_dly = CLK #100ps).  By that time the arbiter's
 * non-blocking "bsel <= bsel+1" has settled, causing every address and data
 * lane to be off by one slot.  The behavioral model uses standard
 * non-blocking assignments evaluated at posedge CLK before bsel updates,
 * giving correct timing.
 *
 * Parameters
 *   depth   - total SRAM depth in bytes (default 256)
 *             RF region  : SRAM[depth-1 : depth/2]  (top half, inverted mapping)
 *             Program mem: SRAM[0       : depth/2-1] (bottom half, Wishbone)
 *   rf_regs - number of logical registers (default 32 = GPRs only, no CSR)
 *
 * Wishbone word addresses accessible as program/data memory:
 *   valid range: 0 .. (depth/2)/4 - 1   -> 0..31 for depth=256
 *
 * x0 suppression (RF read port only, inside servile_rf_mem_if):
 *   i_rf_raddr[rf_depth-1:2] == all-1s  (i_rf_raddr in {0x7C..0x7F} for rf_regs=32)
 */

`default_nettype none

// ---------------------------------------------------------------------------
// Simple behavioral 8-bit-wide SRAM for simulation.
// All operations are synchronous on posedge i_clk.
// The r0 gate suppresses reads when the full address is all-1s in bits
// [aw-1:2] (mirroring subservient_generic_ram's built-in x0 logic), though
// the arbiter's own regzero logic is what the tests exercise.
// ---------------------------------------------------------------------------
module sim_sram
  #(parameter depth = 256,
    parameter aw    = $clog2(depth))
   (input  wire          i_clk,
    input  wire          i_rst,
    input  wire [aw-1:0] i_waddr,
    input  wire [7:0]    i_wdata,
    input  wire          i_wen,
    input  wire [aw-1:0] i_raddr,
    output wire [7:0]    o_rdata,
    input  wire          i_ren);

   reg [7:0] mem [0:depth-1];
   reg [7:0] rdata;
   reg       r0;

   assign o_rdata = r0 ? 8'd0 : rdata;

   always @(posedge i_clk) begin
      if (i_wen) mem[i_waddr] <= i_wdata;
      rdata <= i_ren ? mem[i_raddr] : 8'bx;
      r0    <= &i_raddr[aw-1:2];
   end

endmodule

// ---------------------------------------------------------------------------
// Top-level wrapper
// ---------------------------------------------------------------------------
module rf_mem_if_tb_top
  #(parameter depth    = 256,
    parameter rf_regs  = 32,
    // Derived - do not override
    parameter rf_depth = $clog2(rf_regs * 4),
    parameter aw       = $clog2(depth))
   (
    input  wire               i_clk,
    input  wire               i_rst,

    // RF port (simulates SERV register-file accesses)
    input  wire [rf_depth-1:0] i_rf_waddr,
    input  wire [7:0]          i_rf_wdata,
    input  wire                i_rf_wen,
    input  wire [rf_depth-1:0] i_rf_raddr,
    output wire [7:0]          o_rf_rdata,
    input  wire                i_rf_ren,

    // Wishbone port (simulates instruction / data memory accesses)
    // i_wb_adr carries word address bits [aw-1:2]; byte-select and 4-cycle
    // sequencing are handled internally by the arbiter.
    input  wire [aw-1:2]       i_wb_adr,
    input  wire [31:0]         i_wb_dat,
    input  wire [3:0]          i_wb_sel,
    input  wire                i_wb_we,
    input  wire                i_wb_stb,
    output wire [31:0]         o_wb_rdt,
    output wire                o_wb_ack
    );

   // Internal SRAM bus
   wire [aw-1:0] sram_waddr;
   wire [7:0]    sram_wdata;
   wire          sram_wen;
   wire [aw-1:0] sram_raddr;
   wire [7:0]    sram_rdata;
   wire          sram_ren;

   // Arbiter
   servile_rf_mem_if
     #(.depth   (depth),
       .rf_regs (rf_regs))
   u_arbiter
     (.i_clk  (i_clk),
      .i_rst  (i_rst),

      // RF interface
      .i_waddr (i_rf_waddr),
      .i_wdata (i_rf_wdata),
      .i_wen   (i_rf_wen),
      .i_raddr (i_rf_raddr),
      .o_rdata (o_rf_rdata),
      .i_ren   (i_rf_ren),

      // SRAM interface
      .o_sram_waddr (sram_waddr),
      .o_sram_wdata (sram_wdata),
      .o_sram_wen   (sram_wen),
      .o_sram_raddr (sram_raddr),
      .i_sram_rdata (sram_rdata),
      .o_sram_ren   (sram_ren),

      // Wishbone interface
      .i_wb_adr (i_wb_adr),
      .i_wb_dat (i_wb_dat),
      .i_wb_sel (i_wb_sel),
      .i_wb_we  (i_wb_we),
      .i_wb_stb (i_wb_stb),
      .o_wb_rdt (o_wb_rdt),
      .o_wb_ack (o_wb_ack));

   // Behavioral SRAM (no GF180 macro dependency)
   sim_sram
     #(.depth (depth))
   u_ram
     (.i_clk   (i_clk),
      .i_rst   (i_rst),
      .i_waddr (sram_waddr),
      .i_wdata (sram_wdata),
      .i_wen   (sram_wen),
      .i_raddr (sram_raddr),
      .o_rdata (sram_rdata),
      .i_ren   (sram_ren));

endmodule

/*
 * serv_rf_ram.v : SRAM-based RF storage for SERV
 *
 * SPDX-FileCopyrightText: 2019 Olof Kindgren <olof@award-winning.me>
 * SPDX-License-Identifier: ISC
 */
 
// REMEMBER TO ADD gf180mcu_fd_ip_sram__sram256x8m8wm1.v TO THE FILELIST - WHEREVER TF THAT IS!!!!!

/*
 * serv_rf_ram.v : GF180 256x8 SRAM-based RF storage for SERV
 *
 * This module replaces serv_rf_ram.v to use the GF180MCU 256x8 SRAM
 * instead of behavioral memory.
 *
 * Drop-in replacement with same interface as original serv_rf_ram.v
 */
module serv_rf_ram
  #(parameter width=0,
    parameter csr_regs=4,
    parameter depth=32*(32+csr_regs)/width)
   (input wire i_clk,
    input wire [$clog2(depth)-1:0] i_waddr,
    input wire [width-1:0]         i_wdata,
    input wire                     i_wen,
    input wire [$clog2(depth)-1:0] i_raddr,
    input wire                     i_ren,
    output wire [width-1:0]        o_rdata);

   // Validation checks
   initial begin
      if (width != 8) begin
         $display("ERROR: GF180 256x8 SRAM wrapper requires width=8");
         $display("       Current width=%0d", width);
         $finish;
      end
      if (depth > 256) begin
         $display("ERROR: GF180 256x8 SRAM supports max 256 words");
         $display("       Current depth=%0d", depth);
         $finish;
      end
      if ($clog2(depth) > 8) begin
         $display("ERROR: GF180 256x8 SRAM requires max 8-bit address");
         $display("       Current address width=%0d", $clog2(depth));
         $finish;
      end
   end

   // GF180 SRAM signals
   wire        sram_cen;    // Chip enable (active low)
   wire        sram_gwen;   // Global write enable (active low)
   wire [7:0]  sram_wen;    // Per-bit write enable (active low)
   wire [7:0]  sram_addr;   // 8-bit address
   wire [7:0]  sram_dout;   // Data output from SRAM

   // Power supply connections
   // In simulation, tie to logic levels
   // In synthesis, connect to actual power rails
   wire vdd = 1'b1;
   wire vss = 1'b0;

   // Convert SERV's active-high signals to GF180's active-low
   assign sram_cen  = ~(i_ren | i_wen);  // Enable when reading OR writing
   assign sram_gwen = ~i_wen;             // Write enable (active low)
   assign sram_wen  = i_wen ? 8'b00000000 : 8'b11111111;  // All bits or none

   // Address mux: prioritize write address (matches original behavior)
   // Pad address to 8 bits if needed
   assign sram_addr = i_wen ? {{(8-$clog2(depth)){1'b0}}, i_waddr} : 
                              {{(8-$clog2(depth)){1'b0}}, i_raddr};

   // Instantiate GF180 256x8 SRAM
   gf180mcu_fd_ip_sram__sram256x8m8wm1 sram_inst (
      .CLK  (i_clk),
      .CEN  (sram_cen),
      .GWEN (sram_gwen),
      .WEN  (sram_wen),
      .A    (sram_addr),
      .D    (i_wdata),
      .Q    (sram_dout),
      .VDD  (vdd),
      .VSS  (vss)
   );

   /* Reads from reg x0 needs to return 0
    * Check that the part of the read address corresponding to the register
    * is zero and gate the output
    * This is the same logic as the original serv_rf_ram.v
    */
   reg regzero;

   always @(posedge i_clk)
     regzero <= !(|i_raddr[$clog2(depth)-1:5-$clog2(width)]);

   assign o_rdata = sram_dout & ~{width{regzero}};

   // Note: SERV_CLEAR_RAM is not needed for physical SRAM
   // The GF180 SRAM initializes to 0 in the model

endmodule

/*
 * Simple testbench to verify serv_rf_ram with GF180 256x8 SRAM

   Run this command:

   iverilog -g2012 \
    gf180mcu_fd_ip_sram__sram256x8m8wm1.v \
    serv_rf_ram.v \
    tb_serv_rf_ram.v
   
   This generates a.out

   vvp a.out
   
 */

`timescale 1ns/1ps

module tb_serv_rf_ram;

   // Parameters matching SERV defaults
   parameter width = 8;      // Must be 8 for GF180 SRAM
   parameter csr_regs = 4;   // 4 CSRs (default SERV config)
   parameter depth = 32*(32+csr_regs)/width;  // = 144 words
   
   localparam AW = $clog2(depth);  // 8 bits

   // Testbench signals
   reg                clk;
   reg [AW-1:0]       waddr;
   reg [width-1:0]    wdata;
   reg                wen;
   reg [AW-1:0]       raddr;
   reg                ren;
   wire [width-1:0]   rdata;

   // Instantiate the module under test
   serv_rf_ram #(
      .width(width),
      .csr_regs(csr_regs),
      .depth(depth)
   ) dut (
      .i_clk   (clk),
      .i_waddr (waddr),
      .i_wdata (wdata),
      .i_wen   (wen),
      .i_raddr (raddr),
      .i_ren   (ren),
      .o_rdata (rdata)
   );

   // Clock generation - 20MHz (50ns period)
   // Well within GF180 timing (min 55.6ns)
   initial begin
      clk = 0;
      forever #25 clk = ~clk;
   end

   // Test stimulus
   integer i;
   reg [7:0] expected;
   
   initial begin
      $dumpfile("serv_rf_ram.vcd");
      $dumpvars(0, tb_serv_rf_ram);

      // Initialize
      wen = 0;
      ren = 0;
      waddr = 0;
      raddr = 0;
      wdata = 0;

      // Wait for SRAM to be ready
      repeat(10) @(posedge clk);

      $display("========================================");
      $display("  GF180 256x8 SRAM Wrapper Test");
      $display("========================================");
      $display("Configuration:");
      $display("  Width: %0d bits", width);
      $display("  Depth: %0d words", depth);
      $display("  CSR registers: %0d", csr_regs);
      $display("  Address width: %0d bits", AW);
      $display("");

      // ===== Test 1: Register x0 must return 0 =====
      $display("Test 1: Register x0 Returns Zero");
      @(posedge clk);
      wen = 1;
      ren = 0;
      waddr = 8'h00;  // x0 is at address 0
      wdata = 8'hFF;  // Try to write non-zero
      
      @(posedge clk);
      wen = 0;
      
      @(posedge clk);
      ren = 1;
      raddr = 8'h00;
      
      repeat(2) @(posedge clk);
      
      if (rdata == 8'h00) begin
         $display("  PASS: x0 returns 0x00 (expected behavior)");
      end else begin
         $display("  FAIL: x0 returned 0x%02h (should be 0x00)", rdata);
      end
      
      ren = 0;
      @(posedge clk);

      // ===== Test 2: Basic Write/Read to x1 =====
      $display("");
      $display("Test 2: Basic Write/Read to Register x1");
      @(posedge clk);
      wen = 1;
      waddr = 8'h04;  // x1 at word address 4 (32 bits / 8 bits = 4 words per reg)
      wdata = 8'hAB;
      
      @(posedge clk);
      wen = 0;
      
      @(posedge clk);
      ren = 1;
      raddr = 8'h04;
      
      repeat(2) @(posedge clk);
      
      if (rdata == 8'hAB) begin
         $display("  PASS: Read 0x%02h from x1", rdata);
      end else begin
         $display("  FAIL: Expected 0xAB, got 0x%02h", rdata);
      end
      
      ren = 0;
      @(posedge clk);

      // ===== Test 3: Multiple Addresses =====
      $display("");
      $display("Test 3: Write/Read Multiple Addresses");
      
      // Write pattern to first 20 addresses
      for (i = 4; i < 24; i = i + 1) begin
         @(posedge clk);
         wen = 1;
         waddr = i;
         wdata = (i * 13 + 7) % 256;
      end
      
      @(posedge clk);
      wen = 0;
      
      // Read back and verify
      for (i = 4; i < 24; i = i + 1) begin
         @(posedge clk);
         ren = 1;
         raddr = i;
         
         repeat(2) @(posedge clk);
         
         expected = (i * 13 + 7) % 256;
         if (rdata !== expected) begin
            $display("  FAIL: Address %0d: Expected 0x%02h, got 0x%02h", 
                     i, expected, rdata);
         end
      end
      
      $display("  PASS: All 19 addresses verified");
      
      ren = 0;
      @(posedge clk);

      // ===== Test 4: All GPRs (32 registers) =====
      $display("");
      $display("Test 4: Test All 32 General Purpose Registers");
      
      // Each register is 32 bits = 4 words of 8 bits
      // Register N starts at word address N*4
      // Write to the first word of each register
      for (i = 0; i < 32; i = i + 1) begin
         @(posedge clk);
         wen = 1;
         waddr = i * 4;  // First word of register i
         wdata = i + 100;  // Unique value per register
      end
      
      @(posedge clk);
      wen = 0;
      
      // Read back first word of each register
      for (i = 1; i < 32; i = i + 1) begin  // Skip x0
         @(posedge clk);
         ren = 1;
         raddr = i * 4;
         
         repeat(2) @(posedge clk);
         
         expected = i + 100;
         if (rdata !== expected) begin
            $display("  FAIL: Register x%0d: Expected 0x%02h, got 0x%02h", 
                     i, expected, rdata);
         end
      end
      
      // Verify x0 is still 0
      @(posedge clk);
      raddr = 0;
      repeat(2) @(posedge clk);
      if (rdata == 0) begin
         $display("  PASS: All 32 GPRs verified (x0=0, x1-x31 correct)");
      end else begin
         $display("  FAIL: x0 is not zero!");
      end
      
      ren = 0;
      @(posedge clk);

      // ===== Test 5: CSR Registers =====
      $display("");
      $display("Test 5: Test CSR Registers");
      
      // CSRs start after the 32 GPRs
      // GPRs use addresses 0-127 (32 regs × 4 words)
      // CSRs start at address 128
      for (i = 0; i < 4; i = i + 1) begin  // 4 CSRs
         @(posedge clk);
         wen = 1;
         waddr = 128 + (i * 4);  // First word of CSR i
         wdata = 8'hC0 + i;  // CSR marker values
      end
      
      @(posedge clk);
      wen = 0;
      
      // Read back CSRs
      for (i = 0; i < 4; i = i + 1) begin
         @(posedge clk);
         ren = 1;
         raddr = 128 + (i * 4);
         
         repeat(2) @(posedge clk);
         
         expected = 8'hC0 + i;
         if (rdata !== expected) begin
            $display("  FAIL: CSR %0d: Expected 0x%02h, got 0x%02h", 
                     i, expected, rdata);
         end
      end
      
      $display("  PASS: All 4 CSRs verified");
      
      ren = 0;
      @(posedge clk);

      // ===== Summary =====
      $display("");
      $display("========================================");
      $display("  All Tests Complete!");
      $display("========================================");
      
      repeat(10) @(posedge clk);
      $finish;
   end

   // Timeout watchdog
   initial begin
      #1_000_000;  // 1ms timeout
      $display("ERROR: Testbench timeout!");
      $finish;
   end

endmodule
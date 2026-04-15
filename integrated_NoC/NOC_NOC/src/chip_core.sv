// SPDX-FileCopyrightText: © 2025 XXX Authors
// SPDX-License-Identifier: Apache-2.0

`default_nettype none

// ============================================================================
// chip_core — NoC (3x3 SERV mesh) mapped to GF180 pad ring
// ============================================================================
//
// Pin assignment (1x1 slot: 12 input pads, 40 bidir pads):
//
//   clk_PAD             → clk        (dedicated Schmitt-trigger pad)
//   rst_n_PAD           → rst        (dedicated input pad, inverted to active-high)
//
//   input_PAD[0]        → flash_miso (SPI flash data out → chip in)
//   input_PAD[1]        → host_csb   (host SPI chip-select, active-low)
//   input_PAD[2]        → host_sclk  (host SPI clock)
//   input_PAD[3]        → host_mosi  (host SPI data in)
//   input_PAD[11:4]     → unused
//
//   bidir_PAD[0]        → flash_csb  (output: SPI flash chip-select)
//   bidir_PAD[1]        → flash_clk  (output: SPI flash clock)
//   bidir_PAD[2]        → flash_mosi (output: SPI flash data in)
//   bidir_PAD[3]        → host_miso  (output: host SPI data out)
//   bidir_PAD[39:4]     → unused (tristated)
//
// ============================================================================

module chip_core #(
    parameter NUM_INPUT_PADS  = 12,
    parameter NUM_BIDIR_PADS  = 40,
    parameter NUM_ANALOG_PADS = 2
    )(
    `ifdef USE_POWER_PINS
    inout  wire VDD,
    inout  wire VSS,
    `endif

    input  wire clk,
    input  wire rst_n,      // active-low from pad ring; top.v uses active-high rst

    input  wire [NUM_INPUT_PADS-1:0] input_in,
    output wire [NUM_INPUT_PADS-1:0] input_pu,
    output wire [NUM_INPUT_PADS-1:0] input_pd,

    input  wire [NUM_BIDIR_PADS-1:0] bidir_in,
    output wire [NUM_BIDIR_PADS-1:0] bidir_out,
    output wire [NUM_BIDIR_PADS-1:0] bidir_oe,
    output wire [NUM_BIDIR_PADS-1:0] bidir_cs,
    output wire [NUM_BIDIR_PADS-1:0] bidir_sl,
    output wire [NUM_BIDIR_PADS-1:0] bidir_ie,
    output wire [NUM_BIDIR_PADS-1:0] bidir_pu,
    output wire [NUM_BIDIR_PADS-1:0] bidir_pd,

    inout  wire [NUM_ANALOG_PADS-1:0] analog
);

    // -----------------------------------------------------------------------
    // Unused pad controls
    // -----------------------------------------------------------------------
    assign input_pu = '0;
    assign input_pd = '0;

    // bidir[0:3] are outputs (OE=1), rest are tristated (OE=0)
    assign bidir_oe = {{(NUM_BIDIR_PADS-4){1'b0}}, 4'b1111};
    assign bidir_ie = ~bidir_oe;    // input enable only on unused pads
    assign bidir_cs = '0;           // CMOS buffer (not Schmitt trigger)
    assign bidir_sl = '0;           // fast slew rate
    assign bidir_pu = '0;
    assign bidir_pd = '0;

    // Silence unused-input warning
    wire _unused = &{bidir_in, analog};

    // -----------------------------------------------------------------------
    // Reset polarity: pad ring is active-low, top.v is active-high
    // -----------------------------------------------------------------------
    wire rst = ~rst_n;

    // -----------------------------------------------------------------------
    // NoC outputs
    // -----------------------------------------------------------------------
    wire flash_csb_w;
    wire flash_clk_w;
    wire flash_mosi_w;
    wire host_miso_w;

    // Unused upper bidir outputs driven low
    assign bidir_out = {{(NUM_BIDIR_PADS-4){1'b0}},
                        host_miso_w,
                        flash_mosi_w,
                        flash_clk_w,
                        flash_csb_w};

    // -----------------------------------------------------------------------
    // NoC top-level instantiation
    // -----------------------------------------------------------------------
    top noc_top (
        .clk        (clk),
        .rst        (rst),

        // SPI flash (boot_controller)
        .flash_csb  (flash_csb_w),
        .flash_clk  (flash_clk_w),
        .flash_mosi (flash_mosi_w),
        .flash_miso (input_in[0]),

        // Host SPI (seed + readback)
        .host_csb   (input_in[1]),
        .host_sclk  (input_in[2]),
        .host_mosi  (input_in[3]),
        .host_miso  (host_miso_w)
    );

endmodule

`default_nettype wire

// // SPDX-FileCopyrightText: © 2025 XXX Authors
// // SPDX-License-Identifier: Apache-2.0

// `default_nettype none

// module chip_core #(
//     parameter NUM_INPUT_PADS,
//     parameter NUM_BIDIR_PADS,
//     parameter NUM_ANALOG_PADS
//     )(
//     `ifdef USE_POWER_PINS
//     inout  wire VDD,
//     inout  wire VSS,
//     `endif
    
//     input  wire clk,       // clock
//     input  wire rst_n,     // reset (active low)
    
//     input  wire [NUM_INPUT_PADS-1:0] input_in,   // Input value
//     output wire [NUM_INPUT_PADS-1:0] input_pu,   // Pull-up
//     output wire [NUM_INPUT_PADS-1:0] input_pd,   // Pull-down

//     input  wire [NUM_BIDIR_PADS-1:0] bidir_in,   // Input value
//     output wire [NUM_BIDIR_PADS-1:0] bidir_out,  // Output value
//     output wire [NUM_BIDIR_PADS-1:0] bidir_oe,   // Output enable
//     output wire [NUM_BIDIR_PADS-1:0] bidir_cs,   // Input type (0=CMOS Buffer, 1=Schmitt Trigger)
//     output wire [NUM_BIDIR_PADS-1:0] bidir_sl,   // Slew rate (0=fast, 1=slow)
//     output wire [NUM_BIDIR_PADS-1:0] bidir_ie,   // Input enable
//     output wire [NUM_BIDIR_PADS-1:0] bidir_pu,   // Pull-up
//     output wire [NUM_BIDIR_PADS-1:0] bidir_pd,   // Pull-down

//     inout  wire [NUM_ANALOG_PADS-1:0] analog  // Analog
// );

//     // See here for usage: https://gf180mcu-pdk.readthedocs.io/en/latest/IPs/IO/gf180mcu_fd_io/digital.html
    
//     // Disable pull-up and pull-down for input
//     assign input_pu = '0;
//     assign input_pd = '0;

//     // Set the bidir as output
//     assign bidir_oe = '1;
//     assign bidir_cs = '0;
//     assign bidir_sl = '0;
//     assign bidir_ie = ~bidir_oe;
//     assign bidir_pu = '0;
//     assign bidir_pd = '0;
    
//     logic _unused;
//     assign _unused = &bidir_in;

//     logic [NUM_BIDIR_PADS-1:0] count;

//     always_ff @(posedge clk) begin
//         if (!rst_n) begin
//             count <= '0;
//         end else begin
//             if (&input_in) begin
//                 count <= count + 1;
//             end
//         end
//     end

//     logic [7:0] sram_0_out;

//     gf180mcu_fd_ip_sram__sram512x8m8wm1 sram_0 (
//         `ifdef USE_POWER_PINS
//         .VDD  (VDD),
//         .VSS  (VSS),
//         `endif

//         .CLK  (clk),
//         .CEN  (1'b1),
//         .GWEN (1'b0),
//         .WEN  (8'b0),
//         .A    ('0),
//         .D    ('0),
//         .Q    (sram_0_out)
//     );

//     logic [7:0] sram_1_out;

//     gf180mcu_fd_ip_sram__sram512x8m8wm1 sram_1 (
//         `ifdef USE_POWER_PINS
//         .VDD  (VDD),
//         .VSS  (VSS),
//         `endif

//         .CLK  (clk),
//         .CEN  (1'b1),
//         .GWEN (1'b0),
//         .WEN  (8'b0),
//         .A    ('0),
//         .D    ('0),
//         .Q    (sram_1_out)
//     );

//     assign bidir_out = count ^ {24'd0, sram_0_out, sram_1_out};

// endmodule

// `default_nettype wire












// =============================================================================
// chip_core.sv
// NOC System — chip_core for gf180mcu wafer.space tapeout template
//
// Matches the NEWER mesh_3x3 interface:
//   - No internal boot_controller (boot bus driven from here)
//   - No flash SPI pins on mesh_3x3 (boot_controller lives here now)
//   - mesh_3x3 has flat readback ports (tied off — not exposed as pads)
//
// Pad mapping:
//   input_in[0] = flash_miso
//   input_in[1] = bypass_en   (spare in basic tapeout)
//   input_in[2] = host_mosi   (spare in basic tapeout)
//
//   bidir[0]  = flash_mosi    (output)
//   bidir[1]  = flash_clk     (output)
//   bidir[2]  = flash_csb     (output)
//   bidir[3]  = system_ready  (output)
//   bidir[4]  = noc_debug[3]  (output — valid bit of SE corner)
//   bidir[5]  = noc_debug[2]  (output)
//   bidir[6]  = noc_debug[1]  (output)
//   bidir[7]  = noc_debug[0]  (output)
// =============================================================================

`default_nettype none

module chip_core #(
    parameter NUM_INPUT_PADS  = 3,
    parameter NUM_BIDIR_PADS  = 8,
    parameter NUM_ANALOG_PADS = 0
)(
    `ifdef USE_POWER_PINS
    inout  wire VDD,
    inout  wire VSS,
    `endif

    input  wire                        clk,
    input  wire                        rst_n,      // active-LOW reset from pad

    // Input pads
    input  wire [NUM_INPUT_PADS-1:0]   input_in,
    output wire [NUM_INPUT_PADS-1:0]   input_pu,
    output wire [NUM_INPUT_PADS-1:0]   input_pd,

    // Bidirectional pads (used as outputs)
    input  wire [NUM_BIDIR_PADS-1:0]   bidir_in,
    output wire [NUM_BIDIR_PADS-1:0]   bidir_out,
    output wire [NUM_BIDIR_PADS-1:0]   bidir_oe,
    output wire [NUM_BIDIR_PADS-1:0]   bidir_cs,
    output wire [NUM_BIDIR_PADS-1:0]   bidir_sl,
    output wire [NUM_BIDIR_PADS-1:0]   bidir_ie,
    output wire [NUM_BIDIR_PADS-1:0]   bidir_pu,
    output wire [NUM_BIDIR_PADS-1:0]   bidir_pd,

    // Analog pads (unused)
    inout  wire [NUM_ANALOG_PADS-1:0]  analog
);

    // -------------------------------------------------------------------------
    // Reset conversion: active-low pad → active-high internal
    // -------------------------------------------------------------------------
    wire rst = ~rst_n;

    // -------------------------------------------------------------------------
    // Unpack input pads
    // -------------------------------------------------------------------------
    wire flash_miso = input_in[0];
    // input_in[1] = bypass_en  (spare)
    // input_in[2] = host_mosi  (spare)

    assign input_pu = {NUM_INPUT_PADS{1'b0}};
    assign input_pd = {NUM_INPUT_PADS{1'b0}};

    // -------------------------------------------------------------------------
    // Boot controller (was inside mesh_3x3 in old version, now lives here)
    // -------------------------------------------------------------------------
    wire [7:0] boot_data;
    wire [9:0] boot_addr;
    wire       boot_wen;
    wire       cpu_rst_n;           // high when boot is done
    wire       boot_mode = ~cpu_rst_n;

    wire flash_cs_n_int;
    wire flash_clk_int;
    wire flash_mosi_int;

    boot_controller boot_inst (
        .clk        (clk),
        .rst_n      (~rst),          // boot_controller takes active-low reset
        .flash_cs_n (flash_cs_n_int),
        .flash_clk  (flash_clk_int),
        .flash_mosi (flash_mosi_int),
        .flash_miso (flash_miso),
        .sram_wdata (boot_data),
        .sram_waddr (boot_addr),
        .sram_wen   (boot_wen),
        .cpu_reset_n(cpu_rst_n)
    );

    // -------------------------------------------------------------------------
    // system_ready: asserts once boot_controller deasserts flash CS
    // -------------------------------------------------------------------------
    reg system_ready_r;
    always @(posedge clk or posedge rst) begin
        if (rst)
            system_ready_r <= 1'b0;
        else if (!flash_cs_n_int)
            system_ready_r <= 1'b0;
        else
            system_ready_r <= 1'b1;
    end

    // -------------------------------------------------------------------------
    // 3×3 SERV NoC Mesh (new interface — boot bus driven from here)
    // -------------------------------------------------------------------------
    wire [33:0] noc_monitor_se;

    mesh_3x3 noc_mesh (
        .clk          (clk),
        .rst          (rst | boot_mode),  // keep mesh in reset during boot

        // Boot bus from our local boot_controller
        .boot_mode    (boot_mode),
        .boot_addr    (boot_addr),
        .boot_data    (boot_data),
        .boot_wen     (boot_wen),

        // No external packet injection in basic tapeout mode
        .inject_00_nw (34'b0),
        .monitor_22_se(noc_monitor_se),

        // Readback ports — tied off (not exposed as pads)
        .tile_rd_addr_0(10'b0), .tile_rd_addr_1(10'b0), .tile_rd_addr_2(10'b0),
        .tile_rd_addr_3(10'b0), .tile_rd_addr_4(10'b0), .tile_rd_addr_5(10'b0),
        .tile_rd_addr_6(10'b0), .tile_rd_addr_7(10'b0), .tile_rd_addr_8(10'b0),

        .tile_rd_req_0(1'b0), .tile_rd_req_1(1'b0), .tile_rd_req_2(1'b0),
        .tile_rd_req_3(1'b0), .tile_rd_req_4(1'b0), .tile_rd_req_5(1'b0),
        .tile_rd_req_6(1'b0), .tile_rd_req_7(1'b0), .tile_rd_req_8(1'b0)
        // tile_rd_data_* outputs left unconnected (not needed)
    );

    // -------------------------------------------------------------------------
    // Pack bidir outputs (OE=1, IE=0 → pure output pads)
    // -------------------------------------------------------------------------
    assign bidir_out = {
        noc_monitor_se[30],   // [7] noc_debug[0]
        noc_monitor_se[31],   // [6] noc_debug[1]
        noc_monitor_se[32],   // [5] noc_debug[2]
        noc_monitor_se[33],   // [4] noc_debug[3] (valid)
        system_ready_r,       // [3] system_ready
        flash_cs_n_int,       // [2] flash_csb
        flash_clk_int,        // [1] flash_clk
        flash_mosi_int        // [0] flash_mosi
    };

    assign bidir_oe  = {NUM_BIDIR_PADS{1'b1}};
    assign bidir_ie  = {NUM_BIDIR_PADS{1'b0}};
    assign bidir_cs  = {NUM_BIDIR_PADS{1'b0}};
    assign bidir_sl  = {NUM_BIDIR_PADS{1'b0}};
    assign bidir_pu  = {NUM_BIDIR_PADS{1'b0}};
    assign bidir_pd  = {NUM_BIDIR_PADS{1'b0}};

endmodule

`default_nettype wire
`timescale 1ns/1ps
`default_nettype none

module blinker_tile_wrapper (
    input  wire       clk,
    input  wire       rst,
    input  wire       boot_mode,
    input  wire [9:0] boot_addr,
    input  wire [7:0] boot_data,
    input  wire       boot_wen
);

    wire [33:0] north_out;
    wire [33:0] south_out;
    wire [33:0] east_out;
    wire [33:0] west_out;
    wire [33:0] ne_out;
    wire [33:0] nw_out;
    wire [33:0] se_out;
    wire [33:0] sw_out;

    mesh_tile #(
        .TILE_ID(4'b0000)
    ) dut (
        .clk      (clk),
        .rst      (rst),
        .boot_mode(boot_mode),
        .boot_addr(boot_addr),
        .boot_data(boot_data),
        .boot_wen (boot_wen),
        .north_in (34'd0),
        .south_in (34'd0),
        .east_in  (34'd0),
        .west_in  (34'd0),
        .north_out(north_out),
        .south_out(south_out),
        .east_out (east_out),
        .west_out (west_out),
        .ne_in    (34'd0),
        .nw_in    (34'd0),
        .se_in    (34'd0),
        .sw_in    (34'd0),
        .ne_out   (ne_out),
        .nw_out   (nw_out),
        .se_out   (se_out),
        .sw_out   (sw_out)
    );

endmodule

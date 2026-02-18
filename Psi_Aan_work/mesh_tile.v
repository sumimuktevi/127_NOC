`default_nettype none

module mesh_tile #(
    parameter [3:0] TILE_ID = 4'b0000 
)(
    input wire clk,
    input wire rst,
    
    input  wire [33:0] north_in, south_in, east_in, west_in,
    output wire [33:0] north_out, south_out, east_out, west_out,

    input  wire [33:0] ne_in, nw_in, se_in, sw_in,
    output wire [33:0] ne_out, nw_out, se_out, sw_out
);

    wire [31:0] wb_adr, wb_dat_c2r, wb_dat_r2c;
    wire [3:0]  wb_sel;
    wire        wb_we, wb_stb, wb_ack;

    wire [7:0] sram_waddr, sram_raddr;
    wire [7:0] sram_wdata, sram_rdata;
    wire       sram_wen, sram_ren;

    subservient_core #(.memsize(256)) core_inst (
        .i_clk(clk),
        .i_rst(rst),
        .i_timer_irq(1'b0),

        .o_sram_waddr(sram_waddr),
        .o_sram_wdata(sram_wdata),
        .o_sram_wen(sram_wen),
        .o_sram_raddr(sram_raddr),
        .i_sram_rdata(sram_rdata),
        .o_sram_ren(sram_ren),

        .o_wb_adr(wb_adr),
        .o_wb_dat(wb_dat_c2r),
        .o_wb_sel(wb_sel),
        .o_wb_we(wb_we),
        .o_wb_stb(wb_stb),
        .i_wb_rdt(wb_dat_r2c),
        .i_wb_ack(wb_ack)
    );

    mesh_router #(.MY_ID(TILE_ID)) router_inst (
        .clk(clk),
        .rst(rst),
        .local_wb_adr(wb_adr),
        .local_wb_dat_o(wb_dat_c2r),
        .local_wb_dat_i(wb_dat_r2c),
        .local_wb_we(wb_we),
        .local_wb_stb(wb_stb),
        .local_wb_ack(wb_ack),

        .n_out(north_out), .s_out(south_out), .e_out(east_out), .w_out(west_out),
        .ne_out(ne_out),   .nw_out(nw_out),   .se_out(se_out),   .sw_out(sw_out),
        .n_in(north_in),   .s_in(south_in),   .e_in(east_in),   .w_in(west_in),
        .ne_in(ne_in),     .nw_in(nw_in),     .se_in(se_in),     .sw_in(sw_in)
    );

    wire vdd_net = 1'b1;
    wire vss_net = 1'b0;

    gf180mcu_fd_ip_sram__sram256x8m8wm1 sram_inst (
        .CLK(clk),
        .CEN(~(sram_wen | sram_ren)), 
        .GWEN(~sram_wen),              
        .WEN(8'h00), 
        .A(sram_wen ? sram_waddr : sram_raddr),
        .D(sram_wdata),
        .Q(sram_rdata),
        .VDD(vdd_net),
        .VSS(vss_net)
    );

endmodule
`default_nettype none

module mesh_tile #(
    parameter [3:0] TILE_ID = 4'b0000 
)(
    input wire clk,
    input wire rst,
    input wire boot_mode,       // This signal will be HIGH when the Bootloader is active
    
    // this is from top-level boot_loader
    input wire [9:0] boot_addr,
    input wire [7:0] boot_data,
    input wire       boot_wen, // write en

    // Cardinal Ports
    input  wire [33:0] north_in, south_in, east_in, west_in,
    output wire [33:0] north_out, south_out, east_out, west_out,
    
    // Diagonal Ports
    input  wire [33:0] ne_in, nw_in, se_in, sw_in,
    output wire [33:0] ne_out, nw_out, se_out, sw_out
);

    // Wishbone Interconnect ---
    wire [31:0] wb_adr, wb_dat_c2r, wb_dat_r2c;
    wire [3:0]  wb_sel;
    wire        wb_we, wb_stb, wb_ack;

    // --- SRAM Interface ---
    wire [9:0] sram_waddr, sram_raddr;
    wire [7:0] sram_wdata, sram_rdata;
    wire       sram_wen, sram_ren;

    // --- MUX Logic ---
    // This is for the SRAM pins -> if boot_mode is active, it will use the bootloader signals
    //                              else, it will use the subservient core signals
    wire [9:0] final_a   = boot_mode ? boot_addr  : (sram_wen ? sram_waddr : sram_raddr);
    wire [7:0] final_d   = boot_mode ? boot_data  : sram_wdata;
    // Boot controller drives boot_wen LOW to write (active-LOW convention).
    // The SRAM .GWEN() port is also active-LOW, but mesh_tile passes ~final_gwen.
    // So we need final_gwen=1 when boot_wen=0 to produce GWEN=0 (write).
    // CPU path: sram_wen is active-HIGH → same ~final_gwen trick works fine.
    wire       final_gwen = boot_mode ? ~boot_wen  : sram_wen;
    // During boot: CEN follows ~boot_wen so it pulses HIGH between writes,
    // giving the SRAM model the required 1->0 transition that sets cen_fell.
    // During normal CPU operation: CEN is low only when the CPU accesses SRAM.
    wire       final_cen  = boot_mode ? ~boot_wen  : (sram_wen | sram_ren);

    // --- Subservient Core ---
    subservient_core #(.memsize(1024)) core_inst (
        .i_clk(clk),
        .i_rst(rst | boot_mode), // Keep CPU in reset during boot!
        .i_timer_irq(1'b0),
        // Memory
        .o_sram_waddr(sram_waddr),
        .o_sram_wdata(sram_wdata),
        .o_sram_wen(sram_wen),
        .o_sram_raddr(sram_raddr),
        .i_sram_rdata(sram_rdata),
        .o_sram_ren(sram_ren),
        // Peripherals (Mesh Router)
        .o_wb_adr(wb_adr),
        .o_wb_dat(wb_dat_c2r),
        .o_wb_sel(wb_sel),
        .o_wb_we(wb_we),
        .o_wb_stb(wb_stb),
        .i_wb_rdt(wb_dat_r2c),
        .i_wb_ack(wb_ack)
    );

    // --- Mesh Router ---
    mesh_router #(.MY_ID(TILE_ID)) router_inst (
        .clk(clk),
        .rst(rst),
        .local_wb_adr(wb_adr),
        .local_wb_dat_o(wb_dat_c2r),
        .local_wb_dat_i(wb_dat_r2c),
        .local_wb_we(wb_we),
        .local_wb_stb(wb_stb),
        .local_wb_ack(wb_ack),
        // Links
        .n_out(north_out), .s_out(south_out), .e_out(east_out), .w_out(west_out),
        .ne_out(ne_out),   .nw_out(nw_out),   .se_out(se_out),   .sw_out(sw_out),
        .n_in(north_in),   .s_in(south_in),   .e_in(east_in),   .w_in(west_in),
        .ne_in(ne_in),     .nw_in(nw_in),     .se_in(se_in),     .sw_in(sw_in)
    );

    // --- SRAM Instance ---
    // VDD/VSS omitted: guarded by `ifdef USE_POWER_PINS in model, not present in sim.
    gf180mcu_fd_ip_sram__sram1024x8m8wm1 sram_inst (
        .CLK (clk),
        .CEN (~final_cen),
        .GWEN(~final_gwen),
        .WEN (8'h00),
        .A   (final_a),
        .D   (final_d),
        .Q   (sram_rdata)
    );

endmodule
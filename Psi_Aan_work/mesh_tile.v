// `default_nettype none

// module mesh_tile #(
//     parameter [3:0] TILE_ID = 4'b0000 
// )(
//     input wire clk,
//     input wire rst,
//     input wire boot_mode,       // This signal will be HIGH when the Bootloader is active
    
//     // this is from top-level boot_loader
//     input wire [9:0] boot_addr,
//     input wire [7:0] boot_data,
//     input wire       boot_wen, // write en

//     // Cardinal Ports
//     input  wire [33:0] north_in, south_in, east_in, west_in,
//     output wire [33:0] north_out, south_out, east_out, west_out,
    
//     // Diagonal Ports
//     input  wire [33:0] ne_in, nw_in, se_in, sw_in,
//     output wire [33:0] ne_out, nw_out, se_out, sw_out
// );

//     // Wishbone Interconnect ---
//     wire [31:0] wb_adr, wb_dat_c2r, wb_dat_r2c;
//     wire [3:0]  wb_sel;
//     wire        wb_we, wb_stb, wb_ack;

//     // --- SRAM Interface ---
//     wire [9:0] sram_waddr, sram_raddr;
//     wire [7:0] sram_wdata, sram_rdata;
//     wire       sram_wen, sram_ren;

//     // --- MUX Logic ---
//     // This is for the SRAM pins -> if boot_mode is active, it will use the bootloader signals
//     //                              else, it will use the subservient core signals
//     wire [9:0] final_a   = boot_mode ? boot_addr  : (sram_wen ? sram_waddr : sram_raddr);
//     wire [7:0] final_d   = boot_mode ? boot_data  : sram_wdata;
//     // Boot controller drives boot_wen LOW to write (active-LOW convention).
//     // The SRAM .GWEN() port is also active-LOW, but mesh_tile passes ~final_gwen.
//     // So we need final_gwen=1 when boot_wen=0 to produce GWEN=0 (write).
//     // CPU path: sram_wen is active-HIGH → same ~final_gwen trick works fine.
//     wire       final_gwen = boot_mode ? ~boot_wen  : sram_wen;
//     // During boot: CEN follows ~boot_wen so it pulses HIGH between writes,
//     // giving the SRAM model the required 1->0 transition that sets cen_fell.
//     // During normal CPU operation: CEN is low only when the CPU accesses SRAM.
//     wire       final_cen  = boot_mode ? ~boot_wen  : (sram_wen | sram_ren);

//     // --- Subservient Core ---
//     subservient_core #(.memsize(1024)) core_inst (
//         .i_clk(clk),
//         .i_rst(rst | boot_mode), // Keep CPU in reset during boot!
//         .i_timer_irq(1'b0),
//         // Memory
//         .o_sram_waddr(sram_waddr),
//         .o_sram_wdata(sram_wdata),
//         .o_sram_wen(sram_wen),
//         .o_sram_raddr(sram_raddr),
//         .i_sram_rdata(sram_rdata),
//         .o_sram_ren(sram_ren),
//         // Peripherals (Mesh Router)
//         .o_wb_adr(wb_adr),
//         .o_wb_dat(wb_dat_c2r),
//         .o_wb_sel(wb_sel),
//         .o_wb_we(wb_we),
//         .o_wb_stb(wb_stb),
//         .i_wb_rdt(wb_dat_r2c),
//         .i_wb_ack(wb_ack)
//     );

//     // --- Mesh Router ---
//     mesh_router #(.MY_ID(TILE_ID)) router_inst (
//         .clk(clk),
//         .rst(rst),
//         .local_wb_adr(wb_adr),
//         .local_wb_dat_o(wb_dat_c2r),
//         .local_wb_dat_i(wb_dat_r2c),
//         .local_wb_we(wb_we),
//         .local_wb_stb(wb_stb),
//         .local_wb_ack(wb_ack),
//         // Links
//         .n_out(north_out), .s_out(south_out), .e_out(east_out), .w_out(west_out),
//         .ne_out(ne_out),   .nw_out(nw_out),   .se_out(se_out),   .sw_out(sw_out),
//         .n_in(north_in),   .s_in(south_in),   .e_in(east_in),   .w_in(west_in),
//         .ne_in(ne_in),     .nw_in(nw_in),     .se_in(se_in),     .sw_in(sw_in)
//     );

//     // --- SRAM Instance ---
//     // VDD/VSS omitted: guarded by `ifdef USE_POWER_PINS in model, not present in sim.
//     gf180mcu_fd_ip_sram__sram1024x8m8wm1 sram_inst (
//         .CLK (clk),
//         .CEN (~final_cen),
//         .GWEN(~final_gwen),
//         .WEN (8'h00),
//         .A   (final_a),
//         .D   (final_d),
//         .Q   (sram_rdata)
//     );

// endmodule










`default_nettype none

// =============================================================================
//  mesh_tile.v
//
//  Three write paths into the SRAM, in priority order:
//
//    1. boot_mode  (boot_controller fills SRAM from flash)
//    2. wbs_stb_i  (gateway broadcasts a host packet after boot)
//    3. CPU (subservient_core) normal operation
//
//  Wishbone packet format (matches gateway / test_mesh.py create_packet):
//    [31:28]  opcode  — only 4'h1 (WRITE) is handled here
//    [27:26]  core_x  — column of destination tile
//    [25:24]  core_y  — row    of destination tile
//    [23:16]  row_addr — SRAM address (0-based within the tile's 1 KB)
//    [15:8]   reserved
//    [7:0]    row_data — byte to write
//
//  A tile responds (asserts wbs_ack_o for one cycle) only when its own
//  TILE_ID matches the packet destination.
// =============================================================================

module mesh_tile #(
    parameter [3:0] TILE_ID = 4'b0000
)(
    input wire clk,
    input wire rst,          // synchronous reset (active-HIGH)
    input wire boot_mode,    // HIGH while boot_controller is running

    // Boot-controller write path
    input wire [9:0] boot_addr,
    input wire [7:0] boot_data,
    input wire       boot_wen,   // active-LOW from boot_controller

    // Wishbone gateway write path (broadcast from host after boot)
    input  wire [31:0] wbs_dat_i,
    input  wire        wbs_stb_i,
    input  wire        wbs_we_i,
    output reg         wbs_ack_o,

    // Cardinal NoC ports
    input  wire [33:0] north_in,  south_in,  east_in,  west_in,
    output wire [33:0] north_out, south_out, east_out, west_out,

    // Diagonal NoC ports
    input  wire [33:0] ne_in, nw_in, se_in, sw_in,
    output wire [33:0] ne_out, nw_out, se_out, sw_out
);

    // -------------------------------------------------------------------------
    //  Decode my own (row, col) from TILE_ID = {row[1:0], col[1:0]}
    // -------------------------------------------------------------------------
    wire [1:0] my_row = TILE_ID[3:2];
    wire [1:0] my_col = TILE_ID[1:0];

    // -------------------------------------------------------------------------
    //  Wishbone packet decode
    // -------------------------------------------------------------------------
    wire [3:0] pkt_opcode = wbs_dat_i[31:28];
    wire [1:0] pkt_col    = wbs_dat_i[27:26];   // core_x
    wire [1:0] pkt_row    = wbs_dat_i[25:24];   // core_y
    wire [7:0] pkt_addr   = wbs_dat_i[23:16];
    wire [7:0] pkt_data   = wbs_dat_i[7:0];

    wire pkt_for_me = wbs_stb_i && wbs_we_i
                      && (pkt_opcode == 4'h1)
                      && (pkt_row == my_row)
                      && (pkt_col == my_col);

    // One-cycle ack when the packet is addressed to this tile
    always @(posedge clk) begin
        if (rst)
            wbs_ack_o <= 1'b0;
        else
            wbs_ack_o <= pkt_for_me;
    end

    // -------------------------------------------------------------------------
    //  CPU Wishbone ↔ SRAM (subservient_core)
    // -------------------------------------------------------------------------
    wire [31:0] wb_adr, wb_dat_c2r, wb_dat_r2c;
    wire [3:0]  wb_sel;
    wire        wb_we, wb_stb, wb_ack;

    wire [9:0] sram_waddr, sram_raddr;
    wire [7:0] sram_wdata, sram_rdata;
    wire       sram_wen, sram_ren;

    // -------------------------------------------------------------------------
    //  SRAM signal mux  (boot > gateway > CPU)
    // -------------------------------------------------------------------------
    wire       gw_wen  = pkt_for_me;          // gateway wants to write

    // Final SRAM control signals
    wire [9:0] final_a;
    wire [7:0] final_d;
    wire       final_gwen;   // active-HIGH: write when 1
    wire       final_cen;    // active-HIGH: chip enabled when 1

    assign final_a = boot_mode  ? boot_addr            :
                     gw_wen     ? {2'b00, pkt_addr}    :
                                  (sram_wen ? sram_waddr : sram_raddr);

    assign final_d = boot_mode  ? boot_data  :
                     gw_wen     ? pkt_data   :
                                  sram_wdata;

    // GWEN is active-LOW on the SRAM macro, but we pass ~final_gwen below.
    // So final_gwen=1 → write, final_gwen=0 → no write.
    assign final_gwen = boot_mode ? ~boot_wen  :
                        gw_wen    ? 1'b1        :
                                    sram_wen;

    // CEN: chip must be enabled for both reads and writes
    assign final_cen  = boot_mode ? ~boot_wen           :
                        gw_wen    ? 1'b1                 :
                                    (sram_wen | sram_ren);

    // -------------------------------------------------------------------------
    //  Subservient RISC-V core  (held in reset during boot AND gateway writes)
    // -------------------------------------------------------------------------
    subservient_core #(.memsize(1024)) core_inst (
        .i_clk      (clk),
        .i_rst      (rst | boot_mode),   // keep CPU reset during boot
        .i_timer_irq(1'b0),
        // SRAM
        .o_sram_waddr(sram_waddr),
        .o_sram_wdata(sram_wdata),
        .o_sram_wen  (sram_wen),
        .o_sram_raddr(sram_raddr),
        .i_sram_rdata(sram_rdata),
        .o_sram_ren  (sram_ren),
        // Peripheral Wishbone
        .o_wb_adr(wb_adr),
        .o_wb_dat(wb_dat_c2r),
        .o_wb_sel(wb_sel),
        .o_wb_we (wb_we),
        .o_wb_stb(wb_stb),
        .i_wb_rdt(wb_dat_r2c),
        .i_wb_ack(wb_ack)
    );

    // -------------------------------------------------------------------------
    //  Mesh Router
    // -------------------------------------------------------------------------
    mesh_router #(.MY_ID(TILE_ID)) router_inst (
        .clk(clk), .rst(rst),
        .local_wb_adr  (wb_adr),
        .local_wb_dat_o(wb_dat_c2r),
        .local_wb_dat_i(wb_dat_r2c),
        .local_wb_we   (wb_we),
        .local_wb_stb  (wb_stb),
        .local_wb_ack  (wb_ack),
        // Cardinal
        .n_out(north_out), .s_out(south_out),
        .e_out(east_out),  .w_out(west_out),
        .n_in (north_in),  .s_in (south_in),
        .e_in (east_in),   .w_in (west_in),
        // Diagonal
        .ne_out(ne_out), .nw_out(nw_out),
        .se_out(se_out), .sw_out(sw_out),
        .ne_in (ne_in),  .nw_in (nw_in),
        .se_in (se_in),  .sw_in (sw_in)
    );

    // -------------------------------------------------------------------------
    //  GF180 SRAM macro
    //  CEN  is active-LOW  → pass ~final_cen
    //  GWEN is active-LOW  → pass ~final_gwen
    // -------------------------------------------------------------------------
    gf180mcu_fd_ip_sram__sram1024x8m8wm1 sram_inst (
        .CLK (clk),
        .CEN (~final_cen),
        .GWEN(~final_gwen),
        .WEN (8'h00),          // all bit-lanes enabled (WEN active-LOW, 0=write)
        .A   (final_a),
        .D   (final_d),
        .Q   (sram_rdata)
    );

endmodule
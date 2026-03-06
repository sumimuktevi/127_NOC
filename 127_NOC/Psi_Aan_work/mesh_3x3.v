// `default_nettype none

// module mesh_3x3 (
//     input wire clk,
//     input wire rst,
//     input wire [33:0] inject_00_nw,
//     output wire [33:0] monitor_22_se,
    
//     // SPI pins - These should be outputs to go out to the simulation/board
//     input  wire flash_miso, 
//     output wire flash_cs_n,
//     output wire flash_clk,
//     output wire flash_mosi, 

//     // WISHBONE PINS: CHANGED TO OUTPUT
//     output wire [31:0] wbs_dat_i,
//     output wire        wbs_stb_i,
//     output wire        wbs_we_i,
//     input  wire        wbs_ack_o // This stays input because it comes FROM the bus
// );

//     wire [7:0] boot_data;
//     wire [9:0] boot_addr;
//     wire       boot_wen, cpu_rst_n;
//     wire       boot_mode = !cpu_rst_n;

//     boot_controller boot_inst (
//         .clk(clk), .rst_n(!rst),
//         .flash_cs_n(flash_cs_n), .flash_clk(flash_clk), .flash_mosi(flash_mosi), .flash_miso(flash_miso),
//         .sram_wdata(boot_data), .sram_waddr(boot_addr), .sram_wen(boot_wen), .cpu_reset_n(cpu_rst_n)
//     );


//     gateway gw_inst (
//     .clk(clk),
//     .mosi(flash_mosi),
//     .cs(flash_cs_n),
//     .miso(flash_miso),
//     .wbs_dat_i(wbs_dat_i),
//     .wbs_stb_i(wbs_stb_i),
//     .wbs_we_i(wbs_we_i),
//     .wbs_ack_o(wbs_ack_o)
// );

//     wire [33:0] grid_n [0:2][0:2], grid_s [0:2][0:2], grid_e [0:2][0:2], grid_w [0:2][0:2];
//     wire [33:0] grid_ne[0:2][0:2], grid_nw[0:2][0:2], grid_se[0:2][0:2], grid_sw[0:2][0:2];

//     genvar r, c;
//     generate
//         for (r = 0; r < 3; r = r + 1) begin : rows
//             for (c = 0; c < 3; c = c + 1) begin : cols
//                 wire [33:0] n_i  = (r > 0) ? grid_s[r-1][c] : 34'b0;
//                 wire [33:0] s_i  = (r < 2) ? grid_n[r+1][c] : 34'b0;
//                 wire [33:0] e_i  = (c < 2) ? grid_w[r][c+1] : 34'b0;
//                 wire [33:0] w_i  = (c > 0) ? grid_e[r][c-1] : 34'b0;
//                 wire [33:0] ne_i = (r > 0 && c < 2) ? grid_sw[r-1][c+1] : 34'b0;
//                 wire [33:0] se_i = (r < 2 && c < 2) ? grid_nw[r+1][c+1] : 34'b0;
//                 wire [33:0] sw_i = (r < 2 && c > 0) ? grid_ne[r+1][c-1] : 34'b0;
//                 wire [33:0] nw_i = (r == 0 && c == 0) ? inject_00_nw : 
//                                   (r > 0 && c > 0)   ? grid_se[r-1][c-1] : 34'b0;

//                 mesh_tile #(.TILE_ID({2'(r), 2'(c)})) tile_inst (
//                     .clk(clk), .rst(!cpu_rst_n), .boot_mode(boot_mode),
//                     .boot_addr(boot_addr), .boot_data(boot_data), .boot_wen(boot_wen),
//                     .north_in(n_i), .south_in(s_i), .east_in(e_i), .west_in(w_i),
//                     .north_out(grid_n[r][c]), .south_out(grid_s[r][c]), .east_out(grid_e[r][c]), .west_out(grid_w[r][c]),
//                     .ne_in(ne_i), .nw_in(nw_i), .se_in(se_i), .sw_in(sw_i),
//                     .ne_out(grid_ne[r][c]), .nw_out(grid_nw[r][c]), .se_out(grid_se[r][c]), .sw_out(grid_sw[r][c])
//                 );
//             end
//         end
//     endgenerate

//     assign monitor_22_se = grid_se[2][2];
// endmodule


`default_nettype none

// =============================================================================
//  mesh_3x3.v  —  Top-level 3×3 NoC mesh
//
//  SPI pin arbitration
//  ───────────────────
//  • During boot  (boot_mode = 1, i.e. cpu_rst_n = 0):
//      flash_cs_n / flash_clk / flash_mosi  are driven by boot_controller.
//  • After boot   (boot_mode = 0, i.e. cpu_rst_n = 1):
//      flash_cs_n / flash_clk / flash_mosi  are driven by the host (testbench)
//      and feed into the gateway, which converts the SPI packet into a
//      Wishbone write that is broadcast to all mesh tiles.
//
//  Wishbone broadcast
//  ──────────────────
//  The gateway drives a single shared bus (wbs_dat_i / wbs_stb_i / wbs_we_i).
//  Every tile's router decodes the destination from the packet payload and
//  writes to its own SRAM only when the embedded (core_x, core_y) matches
//  TILE_ID.  wbs_ack_o is OR-reduced from all tiles (only one fires per cycle).
// =============================================================================
`default_nettype none

// =============================================================================
//  mesh_3x3.v  —  Top-level 3×3 NoC mesh
//
//  SPI pin split (critical)
//  ────────────────────────
//  Two completely separate SPI interfaces share the chip boundary:
//
//  1. flash_miso / flash_cs_n / flash_clk / flash_mosi
//       Used ONLY by the boot_controller during the boot phase.
//       flash_cs_n / flash_clk / flash_mosi are OUTPUT wires driven by
//       boot_controller.  The testbench drives flash_miso (data back from flash).
//
//  2. spi_mosi / spi_clk / spi_cs_n
//       Used ONLY by the gateway after boot.
//       All three are INPUT wires driven by the testbench (host SPI master).
//       These are completely independent of the flash_* ports so there is
//       no driver conflict — Verilator/Icarus cannot resolve a tri-state
//       output port being driven from both directions.
//
//  Wishbone broadcast
//  ──────────────────
//  The gateway decodes a 32-bit SPI packet and drives the shared Wishbone bus.
//  Every tile sees the same (wbs_dat_i, wbs_stb_i, wbs_we_i); each tile writes
//  to its SRAM only when the packet's (dest_row, dest_col) == its TILE_ID.
//  wbs_ack_o is OR-reduced across all 9 tile ack wires.
// =============================================================================
`default_nettype none

// =============================================================================
//  mesh_3x3.v  —  Top-level 3×3 NoC mesh
//
//  SPI pin split (critical)
//  ────────────────────────
//  Two completely separate SPI interfaces share the chip boundary:
//
//  1. flash_miso / flash_cs_n / flash_clk / flash_mosi
//       Used ONLY by the boot_controller during the boot phase.
//       flash_cs_n / flash_clk / flash_mosi are OUTPUT wires driven by
//       boot_controller.  The testbench drives flash_miso (data back from flash).
//
//  2. spi_mosi / spi_clk / spi_cs_n
//       Used ONLY by the gateway after boot.
//       All three are INPUT wires driven by the testbench (host SPI master).
//       These are completely independent of the flash_* ports so there is
//       no driver conflict — Verilator/Icarus cannot resolve a tri-state
//       output port being driven from both directions.
//
//  Wishbone broadcast
//  ──────────────────
//  The gateway decodes a 32-bit SPI packet and drives the shared Wishbone bus.
//  Every tile sees the same (wbs_dat_i, wbs_stb_i, wbs_we_i); each tile writes
//  to its SRAM only when the packet's (dest_row, dest_col) == its TILE_ID.
//  wbs_ack_o is OR-reduced across all 9 tile ack wires.
// =============================================================================

module mesh_3x3 (
    input  wire        clk,
    input  wire        rst,

    // Legacy injection / monitor
    input  wire [33:0] inject_00_nw,
    output wire [33:0] monitor_22_se,

    // ── Boot-phase SPI  (boot_controller ↔ SPI flash) ──────────────────────
    input  wire        flash_miso,   // data from flash → chip
    output wire        flash_cs_n,   // chip → flash (driven by boot_controller)
    output wire        flash_clk,    // chip → flash
    output wire        flash_mosi,   // chip → flash

    // ── Host-injection SPI  (testbench → gateway, post-boot) ───────────────
    // These are pure INPUTS.  The testbench drives them with spi_write_packet().
    input  wire        spi_mosi,
    input  wire        spi_clk,      // present for protocol accuracy; gateway
    input  wire        spi_cs_n,     //   uses system clk + CS-edge detection

    // cpu_rst_n: HIGH once boot_controller finishes loading firmware
    output wire        cpu_rst_n,

    // Wishbone status — exposed so testbench can poll gateway IDLE state
    // between consecutive spi_write_packet calls.
    output wire        wbs_stb_o,   // HIGH while gateway is processing a packet
    output wire        wbs_ack_o_mon // HIGH for one cycle when tile ACKs
);

    // -------------------------------------------------------------------------
    //  Boot controller
    // -------------------------------------------------------------------------
    wire [7:0]  boot_data;
    wire [9:0]  boot_addr;
    wire        boot_wen;
    wire        boot_mode = ~cpu_rst_n;

    boot_controller boot_inst (
        .clk        (clk),
        .rst_n      (~rst),
        .flash_cs_n (flash_cs_n),
        .flash_clk  (flash_clk),
        .flash_mosi (flash_mosi),
        .flash_miso (flash_miso),
        .sram_wdata (boot_data),
        .sram_waddr (boot_addr),
        .sram_wen   (boot_wen),
        .cpu_reset_n(cpu_rst_n)
    );

    // -------------------------------------------------------------------------
    //  Gateway — host SPI → Wishbone
    //  Wired to the dedicated spi_* input ports, not the flash_* outputs.
    // -------------------------------------------------------------------------
    wire [31:0] wbs_dat_i;
    wire        wbs_stb_i;
    wire        wbs_we_i;
    wire        wbs_ack_o;

    gateway gw_inst (
        .clk      (clk),
        .mosi     (spi_mosi),
        .cs       (spi_cs_n),
        .miso     (            ),   // open — no read-back needed
        .wbs_dat_i(wbs_dat_i),
        .wbs_stb_i(wbs_stb_i),
        .wbs_we_i (wbs_we_i),
        .wbs_ack_o(wbs_ack_o)
    );

    // -------------------------------------------------------------------------
    //  Mesh inter-tile wires
    // -------------------------------------------------------------------------
    wire [33:0] grid_n  [0:2][0:2];
    wire [33:0] grid_s  [0:2][0:2];
    wire [33:0] grid_e  [0:2][0:2];
    wire [33:0] grid_w  [0:2][0:2];
    wire [33:0] grid_ne [0:2][0:2];
    wire [33:0] grid_nw [0:2][0:2];
    wire [33:0] grid_se [0:2][0:2];
    wire [33:0] grid_sw [0:2][0:2];

    wire [8:0] tile_ack_flat;
    assign wbs_ack_o = |tile_ack_flat;

    // -------------------------------------------------------------------------
    //  Tile generate block
    //  Labels: TILE_ROW / TILE_COL  →  confirmed hierarchy path:
    //    mesh_3x3.TILE_ROW[r].TILE_COL[c].tile_inst.sram_inst
    // -------------------------------------------------------------------------
    genvar r, c;
    generate
        for (r = 0; r < 3; r = r + 1) begin : TILE_ROW
            for (c = 0; c < 3; c = c + 1) begin : TILE_COL

                wire [33:0] n_i  = (r > 0)          ? grid_s [r-1][c]   : 34'b0;
                wire [33:0] s_i  = (r < 2)          ? grid_n [r+1][c]   : 34'b0;
                wire [33:0] e_i  = (c < 2)          ? grid_w [r][c+1]   : 34'b0;
                wire [33:0] w_i  = (c > 0)          ? grid_e [r][c-1]   : 34'b0;
                wire [33:0] ne_i = (r > 0 && c < 2) ? grid_sw[r-1][c+1] : 34'b0;
                wire [33:0] sw_i = (r < 2 && c > 0) ? grid_ne[r+1][c-1] : 34'b0;
                wire [33:0] se_i = (r < 2 && c < 2) ? grid_nw[r+1][c+1] : 34'b0;
                wire [33:0] nw_i = (r == 0 && c == 0) ? inject_00_nw :
                                   (r > 0  && c > 0)  ? grid_se[r-1][c-1] : 34'b0;

                wire tile_wb_ack;
                assign tile_ack_flat[r*3+c] = tile_wb_ack;

                mesh_tile #(.TILE_ID({r[1:0], c[1:0]})) tile_inst (
                    .clk      (clk),
                    .rst      (~cpu_rst_n),
                    .boot_mode(boot_mode),

                    .boot_addr(boot_addr),
                    .boot_data(boot_data),
                    .boot_wen (boot_wen),

                    .wbs_dat_i(wbs_dat_i),
                    .wbs_stb_i(wbs_stb_i),
                    .wbs_we_i (wbs_we_i),
                    .wbs_ack_o(tile_wb_ack),

                    .north_in (n_i),  .south_in (s_i),
                    .east_in  (e_i),  .west_in  (w_i),
                    .north_out(grid_n [r][c]), .south_out(grid_s [r][c]),
                    .east_out (grid_e [r][c]), .west_out (grid_w [r][c]),

                    .ne_in(ne_i), .nw_in(nw_i),
                    .se_in(se_i), .sw_in(sw_i),
                    .ne_out(grid_ne[r][c]), .nw_out(grid_nw[r][c]),
                    .se_out(grid_se[r][c]), .sw_out(grid_sw[r][c])
                );
            end
        end
    endgenerate

    assign monitor_22_se = grid_se[2][2];

    // Wishbone monitor outputs for testbench polling
    assign wbs_stb_o    = wbs_stb_i;
    assign wbs_ack_o_mon = wbs_ack_o;

endmodule
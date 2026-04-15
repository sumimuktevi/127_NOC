`default_nettype none

// ============================================================================
// top.v — Full chip top level (GF180 tapeout + simulation)
// ============================================================================
//
// Boot + runtime sequence:
//
//   PHASE 1 — BOOT (cpu_rst_n = 0, host_rst_en = 0)
//     boot_controller reads firmware.bin from SPI flash.
//     Broadcasts boot_addr / boot_data / boot_wen to all 9 tile SRAMs.
//     When done, asserts cpu_reset_n (goes high).
//     All tile CPUs are still held in reset by: rst = !cpu_rst_n.
//     (boot_mode = !cpu_rst_n, so tiles stay in SRAM-write mode)
//
//   PHASE 2 — HOST SEED (host_rst_en = 1, host_rst = 1)
//     Host sends CMD 0x03 / 0xFF → asserts host_rst, takes over reset.
//     Host sends CMD 0x00 writes to overwrite current_grid bytes in all SRAMs.
//     The SRAM write bus is now owned by host_spi_slave (mux below).
//
//   PHASE 3 — RUN (host_rst_en = 1, host_rst = 0)
//     Host sends CMD 0x03 / 0x00 → releases host_rst.
//     All 9 SERV cores start executing firmware.
//     Firmware runs GoL, signals 0xCCCCCCCC on monitor_22_se when stable.
//
//   PHASE 4 — READBACK
//     Host sends CMD 0x02 to read result bytes back over SPI.
//     In simulation, Cocotb probes SRAM hierarchy directly (faster).
//
// SRAM write bus arbitration:
//   boot_mode = 1  →  boot_controller owns the bus
//   boot_mode = 0,
//   host_sram_wen  →  host_spi_slave owns the bus
//
// CPU reset arbitration:
//   host_rst_en = 0  →  cpu_rst_n from boot_controller controls tile rst
//   host_rst_en = 1  →  host_rst from host_spi_slave controls tile rst
//
// Flash path (housekeeping) is wired but NOT active in this build.
// It can be enabled later by asserting bypass_en = 0 on housekeeping_fsm.
//
// I/O for GF180 pad ring:
//   clk, rst                      — system clock + reset
//   flash_csb, flash_clk,
//   flash_mosi, flash_miso         — SPI flash (boot_controller)
//   host_csb, host_sclk,
//   host_mosi, host_miso           — Host SPI (bidirectional gateway)
// ============================================================================

module top (
    input  wire clk,
    input  wire rst,

    // SPI Flash (boot_controller)
    output wire flash_csb,
    output wire flash_clk,
    output wire flash_mosi,
    input  wire flash_miso,

    // Host SPI (bidirectional: seed write + result read)
    input  wire host_csb,
    input  wire host_sclk,
    input  wire host_mosi,
    output wire host_miso
);

    // -----------------------------------------------------------------------
    // Internal wires
    // -----------------------------------------------------------------------

    // boot_controller outputs
    wire [7:0] boot_data;
    wire [9:0] boot_addr;
    wire       boot_wen;
    wire       cpu_rst_n;           // high when boot is done

    // boot_mode: high during boot, low when CPUs should run
    //wire boot_mode = ~cpu_rst_n;
    //wire boot_mode = host_rst_en; //chnaged this line for flash

    // host_spi_slave outputs
    wire [9:0] host_sram_waddr;
    wire [7:0] host_sram_wdata;
    wire       host_sram_wen;
    wire       host_rst;
    wire       host_rst_en;

    // Readback crossbar
    wire [3:0] rd_tile;
    wire [9:0] rd_addr;
    wire       rd_req;
    wire [7:0] rd_data_from_xbar;

    // Per-tile readback wires (9 tiles, flat)
    wire [9:0] tile_rd_addr_0, tile_rd_addr_1, tile_rd_addr_2;
    wire [9:0] tile_rd_addr_3, tile_rd_addr_4, tile_rd_addr_5;
    wire [9:0] tile_rd_addr_6, tile_rd_addr_7, tile_rd_addr_8;

    wire tile_rd_req_0, tile_rd_req_1, tile_rd_req_2;
    wire tile_rd_req_3, tile_rd_req_4, tile_rd_req_5;
    wire tile_rd_req_6, tile_rd_req_7, tile_rd_req_8;

    wire [7:0] tile_rd_data_0, tile_rd_data_1, tile_rd_data_2;
    wire [7:0] tile_rd_data_3, tile_rd_data_4, tile_rd_data_5;
    wire [7:0] tile_rd_data_6, tile_rd_data_7, tile_rd_data_8;

    // NOC inject (unused in this build — housekeeping path dormant)
    wire [33:0] inject_00_nw = 34'h0;

    // monitor output from mesh
    wire [33:0] monitor_22_se;

    // -----------------------------------------------------------------------
    // SRAM write bus mux
    //   boot_mode = 1  →  boot_controller drives the bus
    //   boot_mode = 0  →  host_spi_slave drives the bus
    // -----------------------------------------------------------------------
   // wire [9:0] mux_boot_addr = boot_mode ? boot_addr       : host_sram_waddr;
    //wire [7:0] mux_boot_data = boot_mode ? boot_data       : host_sram_wdata;
    //wire       mux_boot_wen  = boot_mode ? boot_wen        : host_sram_wen;

    // -----------------------------------------------------------------------
    // CPU reset arbitration
    //   host_rst_en = 0  →  boot_controller owns reset (normal boot)
    //   host_rst_en = 1  →  host_spi_slave owns reset
    // -----------------------------------------------------------------------
    wire tile_rst = host_rst_en ? host_rst : ~cpu_rst_n;

    // -----------------------------------------------------------------------
    // boot_controller
    // -----------------------------------------------------------------------
    /*boot_controller boot_inst (
        .clk        (clk),
        .rst_n      (~rst),
        .flash_cs_n (flash_csb),
        .flash_clk  (flash_clk),
        .flash_mosi (flash_mosi),
        .flash_miso (flash_miso),
        .sram_wdata (boot_data),
        .sram_waddr (boot_addr),
        .sram_wen   (boot_wen),
        .cpu_reset_n(cpu_rst_n)
    );*/

// -----------------------------------------------------------------------
// Housekeeping <-> Boot Adapter Instantiation
// -----------------------------------------------------------------------
wire [9:0] hk_boot_addr;
wire [7:0] hk_boot_data;
wire       hk_boot_wen;
wire       wbs_ack_internal;
// -----------------------------------------------------------------------
    // Housekeeping Wishbone Interface
    // -----------------------------------------------------------------------
    wire [31:0] wbs_adr;
    wire [31:0] wbs_dat;
    wire        wbs_cyc;
    wire        wbs_stb;
    wire        wbs_we;
    // took out boot loader therefore chnaging the test and top handshake
    assign cpu_rst_n = 1'b1;

    // boot_mode: HIGH only while bytes are actively being written to SRAM
// Goes LOW automatically when no write is in progress
// This decouples boot_mode from host_rst_en entirely

wire any_sram_write = hk_boot_wen | host_sram_wen;

reg  boot_mode_r;
reg  write_active_prev;

always @(posedge clk) begin
    if (rst) begin
        boot_mode_r       <= 1'b1;
        write_active_prev <= 1'b0;
    end else begin
        write_active_prev <= any_sram_write;
        if (any_sram_write)
            boot_mode_r <= 1'b1;
        // Add a small hold: stay in boot_mode for 4 cycles after last write
        // so SRAM captures the final byte before CPUs start
        else if (!write_active_prev)
            boot_mode_r <= 1'b0;
    end
end

wire boot_mode = boot_mode_r;
// This adapter translates Housekeeping's 32-bit Wishbone writes 
// into 4 sequential 8-bit SRAM writes for the 3x3 Mesh.
hk_boot_adapter hk_adapt (
    .clk       (clk),
    .rst       (rst),

    // Wishbone Slave Interface (Driven by housekeeping_fsm)
    .wbs_adr   (wbs_adr),      // Address from Housekeeping FSM
    .wbs_dat   (wbs_dat),      // Data from Housekeeping FSM
    .wbs_cyc   (wbs_cyc),      // Cycle valid
    .wbs_stb   (wbs_stb),      // Strobe
    .wbs_we    (wbs_we),       // Write Enable (Should be 1 for boot)
    .wbs_ack(wbs_ack_internal),

    // Boot Bus Output (Connects to the 3-way Mux)
    .boot_addr (hk_boot_addr),
    .boot_data (hk_boot_data),
    .boot_wen  (hk_boot_wen)
);

// -----------------------------------------------------------------------
// SRAM Write Bus 3-Way Mux
// -----------------------------------------------------------------------
// Phase 1: boot_mode (High) -> boot_controller owns the bus
// Phase 2: host_rst_en (High) -> host_spi_slave owns the bus (Seeding)
// Phase 3: Default -> hk_boot_adapter owns the bus (Runtime/Housekeeping)
// -----------------------------------------------------------------------
// If we are in Host Reset mode, Host SPI Slave owns everything.
// Otherwise, the Housekeeping adapter owns it.
wire [9:0] mux_boot_addr = hk_boot_wen    ? hk_boot_addr    : host_sram_waddr;
wire [7:0] mux_boot_data = hk_boot_wen    ? hk_boot_data    : host_sram_wdata;
wire       mux_boot_wen  = hk_boot_wen    | host_sram_wen;
//wire [9:0] mux_boot_addr = boot_mode     ? boot_addr       : 
                           //host_rst_en   ? host_sram_waddr : hk_boot_addr;

//wire [7:0] mux_boot_data = boot_mode     ? boot_data       : 
                           //host_rst_en   ? host_sram_wdata : hk_boot_data;

//wire       mux_boot_wen  = boot_mode     ? boot_wen        : 
                          // host_rst_en   ? host_sram_wen   : hk_boot_wen;

    // -----------------------------------------------------------------------
    // mesh_3x3
    // -----------------------------------------------------------------------
    mesh_3x3 mesh_inst (
        .clk           (clk),
        .rst           (tile_rst),
        .inject_00_nw  (inject_00_nw),
        .monitor_22_se (monitor_22_se),

        // Boot SRAM write bus (muxed between boot_controller and host)
        .boot_mode     (boot_mode),
        .boot_addr     (mux_boot_addr),
        .boot_data     (mux_boot_data),
        .boot_wen      (mux_boot_wen),

        // SPI flash pins: mesh_3x3 no longer instantiates boot_controller
        // internally — boot_controller is at top level here.
        // These ports are removed from mesh_3x3 (see note below).

        // Readback ports (flat, one per tile)
        .tile_rd_addr_0(tile_rd_addr_0), .tile_rd_req_0(tile_rd_req_0), .tile_rd_data_0(tile_rd_data_0),
        .tile_rd_addr_1(tile_rd_addr_1), .tile_rd_req_1(tile_rd_req_1), .tile_rd_data_1(tile_rd_data_1),
        .tile_rd_addr_2(tile_rd_addr_2), .tile_rd_req_2(tile_rd_req_2), .tile_rd_data_2(tile_rd_data_2),
        .tile_rd_addr_3(tile_rd_addr_3), .tile_rd_req_3(tile_rd_req_3), .tile_rd_data_3(tile_rd_data_3),
        .tile_rd_addr_4(tile_rd_addr_4), .tile_rd_req_4(tile_rd_req_4), .tile_rd_data_4(tile_rd_data_4),
        .tile_rd_addr_5(tile_rd_addr_5), .tile_rd_req_5(tile_rd_req_5), .tile_rd_data_5(tile_rd_data_5),
        .tile_rd_addr_6(tile_rd_addr_6), .tile_rd_req_6(tile_rd_req_6), .tile_rd_data_6(tile_rd_data_6),
        .tile_rd_addr_7(tile_rd_addr_7), .tile_rd_req_7(tile_rd_req_7), .tile_rd_data_7(tile_rd_data_7),
        .tile_rd_addr_8(tile_rd_addr_8), .tile_rd_req_8(tile_rd_req_8), .tile_rd_data_8(tile_rd_data_8)
    );

    // -----------------------------------------------------------------------
    // host_spi_slave
    // -----------------------------------------------------------------------
    host_spi_slave host_spi (
        .sys_clk     (clk),
        .sys_rst     (rst),
        .spi_csb     (host_csb),
        .spi_sclk    (host_sclk),
        .spi_mosi    (host_mosi),
        .spi_miso    (host_miso),
        .sram_waddr  (host_sram_waddr),
        .sram_wdata  (host_sram_wdata),
        .sram_wen    (host_sram_wen),
        .host_rst    (host_rst),
        .host_rst_en (host_rst_en),
        .rd_tile     (rd_tile),
        .rd_addr     (rd_addr),
        .rd_req      (rd_req),
        .rd_data     (rd_data_from_xbar)
    );

    // -----------------------------------------------------------------------
    // rd_crossbar
    // -----------------------------------------------------------------------
    rd_crossbar xbar_inst (
        .clk           (clk),
        .rd_tile       (rd_tile),
        .rd_addr       (rd_addr),
        .rd_req        (rd_req),
        .rd_data       (rd_data_from_xbar),
        .tile_rd_addr_0(tile_rd_addr_0), .tile_rd_req_0(tile_rd_req_0), .tile_rd_data_0(tile_rd_data_0),
        .tile_rd_addr_1(tile_rd_addr_1), .tile_rd_req_1(tile_rd_req_1), .tile_rd_data_1(tile_rd_data_1),
        .tile_rd_addr_2(tile_rd_addr_2), .tile_rd_req_2(tile_rd_req_2), .tile_rd_data_2(tile_rd_data_2),
        .tile_rd_addr_3(tile_rd_addr_3), .tile_rd_req_3(tile_rd_req_3), .tile_rd_data_3(tile_rd_data_3),
        .tile_rd_addr_4(tile_rd_addr_4), .tile_rd_req_4(tile_rd_req_4), .tile_rd_data_4(tile_rd_data_4),
        .tile_rd_addr_5(tile_rd_addr_5), .tile_rd_req_5(tile_rd_req_5), .tile_rd_data_5(tile_rd_data_5),
        .tile_rd_addr_6(tile_rd_addr_6), .tile_rd_req_6(tile_rd_req_6), .tile_rd_data_6(tile_rd_data_6),
        .tile_rd_addr_7(tile_rd_addr_7), .tile_rd_req_7(tile_rd_req_7), .tile_rd_data_7(tile_rd_data_7),
        .tile_rd_addr_8(tile_rd_addr_8), .tile_rd_req_8(tile_rd_req_8), .tile_rd_data_8(tile_rd_data_8)
    );

endmodule
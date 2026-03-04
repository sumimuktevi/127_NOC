module system_top (
    input  wire clk,
    input  wire reset,
    
    // ============ FLASH Interface =============
    // Direct flash pins (memory-mapped ROM access)
    input  wire flash_miso,
    output wire flash_mosi,
    output wire flash_clk,
    output wire flash_csb,
    
    // ============ HOST Bypass Interface =============
    // Direct host access (for debugging/bypass mode)
    input  wire bypass_en,        // Enable bypass mode
    input  wire host_mosi,        // Host SPI MOSI
    output wire host_miso,        // Host SPI MISO (optional)
    
    // ============ NoC Packet Interface (for external observation) =============
    output wire [33:0] noc_packet_from_flash,
    output wire        noc_ready_from_flash,
    output wire [33:0] noc_packet_from_host,
    output wire        noc_ready_from_host,
    output wire [33:0] noc_output_se,     // SE corner output (3,3)
    
    // ============ System Status =============
    output wire system_ready      // Indicates system has finished loading from flash
);

    // ============================================
    // Internal Signals
    // ============================================
    
    // Wishbone Signals (Flash → Gateway → NoC)
    wire [31:0] wbs_adr;
    wire [31:0] wbs_dat;
    wire        wbs_cyc;
    wire        wbs_stb;
    wire        wbs_we;
    wire        wbs_ack;
    
    // Gateway outputs
    wire [31:0] gateway_flash_packet;
    wire        gateway_flash_ready;
    wire [31:0] gateway_host_packet;
    wire        gateway_host_ready;
    
    // NoC mesh injection point (NW corner, 0,0)
    wire [33:0] noc_inject_nw;
    wire [33:0] noc_monitor_se;
    
    // ============================================
    // STAGE 1: Flash Controller (topmod)
    // Reads from Flash SPI and creates Wishbone transactions
    // ============================================
    topmod flash_controller (
        .clk(clk),
        .reset(reset),
        .flash_miso(flash_miso),
        .flash_mosi(flash_mosi),
        .flash_clk(flash_clk),
        .flash_csb(flash_csb),
        .bypass_en(bypass_en),
        .host_mosi(host_mosi),
        .wbs_adr(wbs_adr),
        .wbs_dat(wbs_dat),
        .wbs_cyc(wbs_cyc),
        .wbs_stb(wbs_stb),
        .wbs_we(wbs_we),
        .wbs_ack(wbs_ack)
    );
    
    // ============================================
    // STAGE 2: Gateway Flash (Wishbone → NoC)
    // Receives Wishbone transactions and injects packets into NoC
    // ============================================
    gateway_flash flash_gateway (
        .clk(clk),
        .rst(reset),
        .wbs_dat_i(wbs_dat),
        .wbs_stb_i(wbs_stb),
        .wbs_we_i(wbs_we),
        .wbs_ack_o(wbs_ack),
        .packet_out(gateway_flash_packet),
        .ready(gateway_flash_ready)
    );
    
    // ============================================
    // STAGE 3: Gateway Host (Host SPI → NoC)
    // Receives SPI packets directly from host in bypass mode
    // ============================================
    gateway_host host_gateway (
        .clk(clk),
        .mosi(host_mosi),
        .cs(!bypass_en),      // CS active low, but inverted logic for bypass
        .miso(host_miso),
        .packet_out(gateway_host_packet),
        .ready(gateway_host_ready)
    );
    
    // ============================================
    // STAGE 4: NoC Packet Multiplexer
    // Select between flash-sourced or host-sourced packets
    // ============================================
    // Priority: Flash > Host (Flash takes precedence)
    wire [33:0] selected_packet = gateway_flash_ready ? 
                                  {2'b00, gateway_flash_packet} : 
                                  {2'b00, gateway_host_packet};
    wire        selected_ready = gateway_flash_ready || gateway_host_ready;
    
    // ============================================
    // STAGE 5: NoC Mesh (3×3 SERV-based Network)
    // Receives packets at NW corner (0,0) and routes XY-dimension-order
    // ============================================
    mesh_3x3 noc_mesh (
        .clk(clk),
        .rst(reset),
        .inject_00_nw(selected_packet),      // Packet injection at NW
        .monitor_22_se(noc_monitor_se),      // Output at SE (3,3)
        .flash_miso(flash_miso),             // For boot controller inside mesh
        .flash_cs_n(flash_csb),
        .flash_clk(flash_clk),
        .flash_mosi(flash_mosi)
    );
    
    // ============================================
    // Output Assignment & Status
    // ============================================
    assign noc_packet_from_flash = {2'b00, gateway_flash_packet};
    assign noc_ready_from_flash   = gateway_flash_ready;
    assign noc_packet_from_host   = {2'b00, gateway_host_packet};
    assign noc_ready_from_host    = gateway_host_ready;
    assign noc_output_se          = noc_monitor_se;
    
    // System is ready when flash controller has finished loading (needs implementation in topmod)
    // For now, we tie it to the flash_csb being inactive after some time
    reg system_ready_r;
    always @(posedge clk) begin
        if (reset)
            system_ready_r <= 0;
        else if (!flash_csb)  // CSB low = active transfer
            system_ready_r <= 0;
        else
            system_ready_r <= 1;
    end
    assign system_ready = system_ready_r;

endmodule

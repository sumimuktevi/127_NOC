module system_top (
    input  wire clk,
    input  wire reset,
    
    // FLASH Interface
    input  wire flash_miso,
    output wire flash_mosi,
    output wire flash_clk,
    output wire flash_csb,
    
    // HOST Bypass Interface
    input  wire bypass_en,        // Enable bypass mode
    input  wire host_mosi,        // Host SPI MOSI
    output wire host_miso,        // Host SPI MISO (optional)
    
    // NoC Packet Interface 
    output wire [33:0] noc_packet_from_flash,
    output wire        noc_ready_from_flash,
    output wire [33:0] noc_packet_from_host,
    output wire        noc_ready_from_host,
    output wire [33:0] noc_output_se,     // SE corner output (3,3)
    
    // System Status 
    output wire system_ready      // Indicates system has finished loading from flash
);

    // Internal Signals
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
    wire        gateway_host_valid_word = gateway_host_ready && (gateway_host_packet != 32'h0);
    wire        gateway_flash_valid_word = gateway_flash_ready && (gateway_flash_packet != 32'h0);
    
    // NoC mesh injection point (NW corner, 0,0)
    wire [33:0] noc_inject_nw;
    wire [33:0] noc_monitor_se;
    

    // Flash Controller (topmod)
    // Reads from Flash SPI and creates Wishbone transactions
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
    
    // Gateway Flash (Wishbone → NoC)
    // Receives Wishbone transactions and injects packets into NoC
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
    
    // Gateway Host (Host SPI → NoC)
    // Receives SPI packets directly from host in bypass mode
    gateway_host host_gateway (
        .clk(clk),
        .rst(reset),
        .mosi(host_mosi),
        .cs(!bypass_en),      // CS active low, but inverted logic for bypass
        .miso(host_miso),
        .packet_out(gateway_host_packet),
        .ready(gateway_host_ready)
    );
    
    // Select between flash-sourced or host-sourced packets.
    // Both gateways emit a 32-bit CPU-style injection word:
    //   [31:28] destination tile ID
    //   [27:0]  payload
    // Convert that word into the router's 34-bit on-wire flit here.
    // Host packets are emitted on the cycle CS rises, after bypass_en is dropped.
    // Give the host gateway priority on its ready pulse and suppress flash traffic
    // whenever a host word is being injected.
    wire host_packet_valid = gateway_host_valid_word;
    wire flash_packet_valid = gateway_flash_valid_word && !bypass_en && !host_packet_valid;

    wire [31:0] selected_packet_word =
        host_packet_valid  ? gateway_host_packet  :
        flash_packet_valid ? gateway_flash_packet :
        32'h0;

    wire [33:0] selected_packet_flit =
        (flash_packet_valid || host_packet_valid) ?
        {1'b1, selected_packet_word[31:28], 1'b0, selected_packet_word[27:0]} :
        34'h0;

    wire host_packet_is_local_00 = host_packet_valid && (gateway_host_packet[31:28] == 4'h0);
    wire [33:0] selected_packet_nw =
        host_packet_is_local_00 ? 34'h0 : selected_packet_flit;
    wire [33:0] selected_packet_local =
        host_packet_is_local_00 ? {1'b1, gateway_host_packet[31:28], 1'b0, gateway_host_packet[27:0]} : 34'h0;
    

    // NoC Mesh (3×3 SERV-based Network)
    // Receives packets at NW corner (0,0) and routes XY-dimension-order
    mesh_3x3 noc_mesh (
        .clk(clk),
        .rst(reset),
        .inject_00_nw(selected_packet_nw),      // Packet injection at NW
        .inject_00_local(selected_packet_local),// Direct local inject into tile (0,0)
        .monitor_22_se(noc_monitor_se),      // Output at SE (3,3)
        .flash_miso(flash_miso),             // For boot controller inside mesh
        .flash_cs_n(flash_csb),
        .flash_clk(flash_clk),
        .flash_mosi(flash_mosi)
    );
    
    // Output Assignment & Status
    assign noc_packet_from_flash = flash_packet_valid ?
                                   {1'b1, gateway_flash_packet[31:28], 1'b0, gateway_flash_packet[27:0]} :
                                   34'h0;
    assign noc_ready_from_flash   = flash_packet_valid;
    assign noc_packet_from_host   = host_packet_valid ?
                                   {1'b1, gateway_host_packet[31:28], 1'b0, gateway_host_packet[27:0]} :
                                   34'h0;
    assign noc_ready_from_host    = host_packet_valid;
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

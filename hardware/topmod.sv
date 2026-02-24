module topmod (
    input  wire clk,
    input  wire reset,
    
    // Physical Pins
    input  wire flash_miso,
    output wire flash_mosi,
    output wire flash_clk,
    output wire flash_csb,
    
    // Host Pins 
    input  wire bypass_en,
    input  wire host_mosi,
    
    // Wishbone Bus (NoC Gateway)
    output wire [31:0] wbs_adr,
    output wire [31:0] wbs_dat,
    output wire        wbs_cyc,
    output wire        wbs_stb,
    output wire        wbs_we,
    input  wire        wbs_ack
);

    wire fetch_en;
    wire h_csb;
    wire [31:0] shifted_word;
    wire word_ready;
    wire fetch_o;

    // Flash Clock Module (Flashs clock is slower than systems clock)
    flash_clk slow_clk (
        .clk(clk),
        .reset(reset),
        .enable(fetch_en),
        .flash_clk(flash_clk)
    );

    //FSM Module
    housekeeping_fsm FSM(
        .clk(clk),
        .reset(reset),
        .bypass_en(bypass_en),
        .word_ready(word_ready),
        .shifted_word(shifted_word),
        .fetch_en(fetch_en),
        .fetch_o(fetch_o),
        .flash_csb(h_csb),
        .wbs_adr(wbs_adr),
        .wbs_dat(wbs_dat),
        .wbs_cyc(wbs_cyc),
        .wbs_stb(wbs_stb),
        .wbs_we(wbs_we),
        .wbs_ack(wbs_ack)
    );

    reg flash_clk_delayed;
    wire flash_tick;

    always @(posedge clk) flash_clk_delayed <= flash_clk;
    assign flash_tick = (flash_clk && !flash_clk_delayed); // High for 1 fast clock cycle

    // Shift Register
    shiftregister word (
        .clk(clk),
        .reset(reset || bypass_en),
        .serial_in(flash_miso),
        .shift_en(fetch_en), 
        .fetch_o(fetch_o),
        .shifted_word(shifted_word),
        .done_word(word_ready)
    );

    // Change these from 'wire' or 'reg' to 'wire [7:0]'
wire [7:0] sram_addr; 
wire [7:0] sram_wen;  
wire [7:0] sram_dout;
wire sram_cen;
    
    // SRAM
    gf180mcu_fd_ip_sram__sram256x8m8wm1 ethan_sram (
    .CLK(clk),
    .CEN(sram_cen),   // Driven by your FSM
    .WEN(sram_wen),   // Driven by your FSM
    .A(sram_addr),    // Driven by your FSM
    .D(shifted_word[7:0]), // Taking the first byte of your 32-bit shift register
    .Q(sram_dout)     // Output from memory
);

    // If bypass is on, host_mosi directly to flash
    assign flash_mosi = (bypass_en) ? host_mosi : 1'b0;
    
    // If bypass is on, host controls CSB (usually low to write). Otherwise, FSM controls it.
    assign flash_csb  = (bypass_en) ? 1'b0 : h_csb;

    // 1. SRAM Control Signals
    // The SRAM is active when the FSM starts a Wishbone STROBE
    assign sram_cen = !wbs_stb; 
    
    // The SRAM writes when the FSM says Write Enable
    // We replicate the 1-bit wbs_we to the 8-bit mask WEN
    assign sram_wen = {8{!wbs_we}}; 

    // Offsets address by the base address (h1000)
    assign sram_addr = (wbs_adr - 32'h1000) >> 2;

    // WishBone handshake
    reg wbs_ack_r;
    always @(posedge clk) wbs_ack_r <= wbs_stb;
    assign wbs_ack = wbs_ack_r;
endmodule



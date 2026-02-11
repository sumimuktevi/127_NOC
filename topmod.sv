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

    // Flash Clock Module (Flashs clock is slower than systems clock)
    flash_clk slow_clk (
        .clk(clk),
        .reset(reset),
        .enable(fetch_en),
        .flash_clk(flash_clk)
    );

    //FSM Module
    housekeeping FSM(
        .clk(clk),
        .reset(reset),
        .bypass_en(bypass_en),
        .word_ready(word_ready),
        .shifted_word(shifted_word),
        .fetch_en(fetch_en),
        .flash_csb(h_csb),
        .wbs_adr(wbs_adr),
        .wbs_dat(wbs_dat),
        .wbs_cyc(wbs_cyc),
        .wbs_stb(wbs_stb),
        .wbs_we(wbs_we),
        .wbs_ack(wbs_ack)
    );

    // Shift Register
    shift_register word (
        .clk(clk),
        .reset(reset || bypass_en),
        .serial_in(flash_miso),
        .shift_en(fetch_en), 
        .word_out(shifted_word),
        .done_word(word_ready)
    );

    // If bypass is on, host_mosi directly to flash
    assign flash_mosi = (bypass_en) ? host_mosi : 1'b0;
    
    // If bypass is on, host controls CSB (usually low to write). Otherwise, FSM controls it.
    assign flash_csb  = (bypass_en) ? 1'b0 : h_csb;

endmodule



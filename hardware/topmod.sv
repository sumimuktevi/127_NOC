module topmod (
    input  wire clk,
    input  wire reset,
    
    // Physical Pins to Flash
    input  wire flash_miso,
    output wire flash_mosi,
    output wire flash_clk,
    output wire flash_csb,
    
    // Host Pins for Bypass
    input  wire bypass_en,
    input  wire host_mosi,
    
    // Wishbone Bus (To NoC Gateway)
    output wire [31:0] wbs_adr,
    output wire [31:0] wbs_dat,
    output wire        wbs_cyc,
    output wire        wbs_stb,
    output wire        wbs_we,
    input  wire        wbs_ack,

    // System Status
    output wire        done_loading
);

    wire        fetch_en;
    wire        h_csb;
    wire [31:0] shifted_word;
    wire        word_ready;
    wire [7:0]  sram_dout;
    
    // Power Nets for PDK Simulation Model
    wire vdd = 1'b1;
    wire vss = 1'b0;

    // 1. Flash Clock Divider
    flash_clk slow_clk (
        .clk(clk),
        .reset(reset),
        .enable(fetch_en),
        .flash_clk(flash_clk)
    );

    // 2. Housekeeping FSM
    housekeeping_fsm FSM (
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
        .wbs_ack(wbs_ack),
        .done_loading(done_loading)
    );

    // 3. SPI Sampling Synchronization
    reg flash_clk_delayed;
    wire flash_tick;
    always @(posedge clk) flash_clk_delayed <= flash_clk;
    assign flash_tick = (flash_clk && !flash_clk_delayed); 

    // 4. Shift Register
    shiftregister word (
        .clk(clk),
        .reset(reset || bypass_en),
        .serial_in(flash_miso),
        .shift_en(fetch_en), 
        .tick(flash_tick),
        .parallel_out(shifted_word),
        .done_word(word_ready)
    );

    // 5. Official GF180 PDK SRAM Model
    gf180mcu_fd_ip_sram__sram256x8m8wm1 sram_inst (
        .CLK(clk),
        .CEN(!wbs_stb),          
        .GWEN(!wbs_we),         
        .WEN(8'b00000000),      
        .A(wbs_adr[7:0]),       
        .D(shifted_word[7:0]),  
        .Q(sram_dout),          
        .VDD(vdd),
        .VSS(vss)
    );

    assign flash_mosi = (bypass_en) ? host_mosi : 1'b0;
    assign flash_csb  = (bypass_en) ? 1'b0 : h_csb;
    assign wbs_ack = wbs_stb;

endmodule
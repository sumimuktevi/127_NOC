module top_wrapper (
    input  wire        clk,
    input  wire        reset,
    input  wire        bypass_en,

    input  wire        host_mosi,
    output wire        host_miso,

    output wire        flash_mosi,
    output wire        flash_clk,
    output wire        flash_csb,
    input  wire        flash_miso,

    output wire [31:0] packet_out,
    output wire        packet_ready,
    output wire        system_ready
);

    wire [31:0] wbs_adr, wbs_dat;
    wire        wbs_cyc, wbs_stb, wbs_we, wbs_ack;

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
        .wbs_ack(wbs_ack),
        .done_loading(system_ready)
    );

    gateway noc_gateway (
        .clk(clk),
        .rst(reset),
        .wbs_dat_i(wbs_dat),
        .wbs_stb_i(wbs_stb),
        .wbs_we_i(wbs_we),
        .wbs_ack_o(wbs_ack),
        .packet_out(packet_out),
        .ready(packet_ready)
    );

    assign host_miso = (bypass_en) ? flash_miso : 1'bz;

endmodule
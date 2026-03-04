`timescale 1ns/1ps

module tb_integration;
    reg clk, reset, flash_miso;
    wire flash_clk, flash_mosi, flash_csb;
    wire bypass_en = 1'b0;
    wire host_mosi = 1'b0;
    wire [31:0] wbs_adr, wbs_dat;
    wire wbs_cyc, wbs_stb, wbs_we, wbs_ack;

    topmod dut (
        .clk(clk),
        .reset(reset),
        .flash_miso(flash_miso),
        .flash_clk(flash_clk),
        .flash_mosi(flash_mosi),
        .flash_csb(flash_csb),
        .bypass_en(bypass_en),
        .host_mosi(host_mosi),
        .wbs_ack(wbs_ack),
        .wbs_adr(wbs_adr),
        .wbs_dat(wbs_dat),
        .wbs_cyc(wbs_cyc),
        .wbs_stb(wbs_stb),
        .wbs_we(wbs_we)
    );

    // Fast clock
    always #5 clk = ~clk;

    // Continuously feed random bits on every flash_clk rising edge
    always @(posedge flash_clk) begin
        flash_miso <= $random;
    end

    // Main test sequence
    initial begin
        clk = 0; reset = 1; flash_miso = 0;
        #20 reset = 0;
        $display("--- Reset Released ---");
    end

    // Watch for completion
    initial begin
        wait(dut.FSM.done_loading == 1);
        $display("=== SUCCESS: All words loaded! FSM reached DONE (State 4) ===");
        $display("Final FSM State: %d", dut.FSM.state);
        $finish;
    end

    // Safety timeout — 90 words * ~380ns each = ~34200ns, give 5x headroom
    initial begin
        #200000;
        $display("!!! TIMEOUT: Still in State %d after 200us !!!", dut.FSM.state);
        $finish;
    end

    // Debug monitor
    always @(posedge clk) begin
        $display("DEBUG: Time=%t | BitCount=%d | Ready=%b | State=%d | fetch_en=%b | wbs_stb=%b | wbs_ack=%b",
                  $time, dut.word.bit_cnt, dut.word_ready,
                  dut.FSM.state, dut.fetch_en, dut.wbs_stb, dut.wbs_ack);
    end

endmodule



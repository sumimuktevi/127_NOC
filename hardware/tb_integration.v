module tb_integration2;
    reg clk, reset;
    wire flash_clk, flash_mosi, flash_csb;
    wire bypass_en = 1'b0;
    wire host_mosi = 1'b0;
    wire [31:0] wbs_adr, wbs_dat;
    wire wbs_cyc, wbs_stb, wbs_we, wbs_ack;

    // Alternating pattern: counts on posedge flash_clk, miso = LSB
    // Changes ON posedge flash_clk — shift register samples NEXT posedge
    // so miso is stable for a full clock period before being sampled
    reg [6:0] flash_bit_cnt;
    initial flash_bit_cnt = 0;
    always @(posedge flash_clk) flash_bit_cnt <= flash_bit_cnt + 1;
    wire flash_miso = flash_bit_cnt[0];  // single driver, no races

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

    always #5 clk = ~clk;

    initial begin
        clk = 0; reset = 1;
        #20 reset = 0;
        $display("--- Reset Released ---");
        $display("--- Expected: 0xAAAAAAAA or 0x55555555 ---");
    end

    // Word monitor — fires only on ack to avoid duplicates
    reg [31:0] word_count;
    initial word_count = 0;
    always @(posedge clk) begin
        if (dut.FSM.state == 3'd2 && dut.wbs_ack) begin
            word_count <= word_count + 1;
            $display("Word %3d | Addr: 0x%08h | Data: 0x%08h | %s",
                word_count + 1,
                dut.wbs_adr,
                dut.wbs_dat,
                (dut.wbs_dat == 32'hAAAAAAAA || dut.wbs_dat == 32'h55555555)
                    ? "PASS" : "FAIL");
        end
    end

    // Completion + SRAM verification
    initial begin
        wait(dut.FSM.done_loading == 1);
        $display("=== ALL %0d WORDS LOADED. Verifying SRAM... ===", word_count);
        $display("=== VERIFICATION COMPLETE ===");
        $finish;
    end

    

initial begin
    #2000000;
    $display("!!! TIMEOUT: State=%d words=%0d fetch_en=%b word_ready=%b flash_clk=%b bit_cnt=%0d shifted=%08h",
             dut.FSM.state, word_count, dut.fetch_en, dut.word_ready,
             dut.flash_clk, dut.word.bit_cnt, dut.word.shifted_word);
    $finish;
end


endmodule



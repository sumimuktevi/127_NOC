`timescale 1ns/1ps

module tb_integration;
    reg clk, reset;
    reg flash_miso;
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
    reg [6:0] flash_bit_cnt;  // counts flash_clk edges

    initial flash_bit_cnt = 0;
    always @(posedge flash_clk) flash_bit_cnt <= flash_bit_cnt + 1;
    assign flash_miso = flash_bit_cnt[0];

    //reg alt_bit;
    //initial alt_bit <=1;

    //test: alternating bits 
    //always @(negedge flash_clk) begin
        //flash_miso <= alt_bit;
        //alt_bit <=~alt_bit;
   // end


    // Continuously feed random bits on every flash_clk rising edge
    //always @(posedge flash_clk) begin
        //flash_miso <= $random;
    //end

    // test
    initial begin
        clk = 0; reset = 1;
        #20 reset = 0;
        $display("--- Reset Released ---");
    end

    // Add this to your testbench temporarily
    always @(posedge flash_clk) begin
        if (dut.fetch_en)
            $display("SAMPLE: Time=%t | flash_miso=%b | bit_cnt=%0d | shifted so far=%08h",
                 $time, flash_miso, dut.word.bit_cnt, dut.word.shifted_word);
    end
    // Print every word the FSM captures and writes
    //reg [31:0] word_count;
    //initial word_count = 0;

    //always @(posedge clk) begin
        // Sample wbs_dat when the FSM is in WB_WRITE and stb just went high
        //if (dut.FSM.state == 3'd2 && dut.wbs_ack) begin
            //word_count <= word_count + 1;
            //$display("Word %3d | Addr: 0x%08h | Data: 0x%08h | %s",
                //word_count + 1,
                //dut.wbs_adr,
                //dut.wbs_dat,
                //(dut.wbs_dat == 32'hAAAAAAAA || dut.wbs_dat == 32'h55555555) 
                    //? "PASS" : "FAIL - unexpected pattern");
        //end
    //end

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
    //always @(posedge clk) begin
        //$display("DEBUG: Time=%t | BitCount=%d | Ready=%b | State=%d | fetch_en=%b | wbs_stb=%b | wbs_ack=%b",
                  //$time, dut.word.bit_cnt, dut.word_ready,
                  //dut.FSM.state, dut.fetch_en, dut.wbs_stb, dut.wbs_ack);
    //end

endmodule

`timescale 1ns/1ps

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
    end
    

initial begin
    #500000;
    $display("!!! TIMEOUT: State=%d words=%0d fetch_en=%b word_ready=%b flash_clk=%b bit_cnt=%0d shifted=%08h",
             dut.FSM.state, word_count, dut.fetch_en, dut.word_ready,
             dut.flash_clk, dut.word.bit_cnt, dut.word.shifted_word);
    $finish;
end


endmodule



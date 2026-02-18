`timescale 1ns/1ps

module tb_integration;
    reg clk, reset, flash_miso;
    wire [3:0] sram_addr; // Adjust width to match your SRAM
    wire [7:0] sram_data;
    wire flash_clk;

    // Instantiate Top Module
    topmod dut (
        .clk(clk),
        .reset(reset),
        .flash_miso(flash_miso),
        .flash_clk(flash_clk)
        // Add other ports like sram wires here
    );

    // Fast Clock (10ns period)
    always #5 clk = ~clk;

    initial begin
        // 1. Initialize
        clk = 0; reset = 1; flash_miso = 0;
        
        // 2. Quick Reset
        #20 reset = 0;
        $display("--- Reset Released ---");

        // 3. Wait for FSM to wake up and start the slow clock
        wait(dut.fetch_en == 1);
        $display("--- FSM entered FETCH. Starting data stream... ---");

        // 4. Feed exactly 32 bits, synchronized to the flash_clk
        repeat (32) begin
            @(posedge flash_clk); 
            flash_miso = $random; // Inject random bits
        end

        // 5. Watch for the transition
        wait(dut.word_ready == 1);
        $display("--- Word Captured! FSM should move to WRITE ---");

        // 6. Final check
        #200;
        $display("Final FSM State: %d", dut.FSM.state);
        // ... (previous code above) ...
        wait(dut.word_ready == 1);
        $display("--- Word Captured! FSM should move to WRITE ---");

        // 6. Monitor SRAM Signals in State 2
        // We wait for the clock edge where the FSM actually drives the SRAM
        @(posedge clk); 
        #2; // Small delay to let signals settle in simulation
        
        if (dut.FSM.state == 2) begin
            $display("--- SRAM WRITE DETECTED ---");
            $display("SRAM Address: %h", dut.ethan_sram.A);
            $display("SRAM Data In: %h", dut.ethan_sram.D);
            $display("CEN: %b  WEN: %b", dut.ethan_sram.CEN, dut.ethan_sram.WEN);
            
            if (dut.ethan_sram.CEN == 0 && dut.ethan_sram.WEN == 0)
                $display(">>> SUCCESS: Data is being written to memory!");
            else
                $display(">>> ERROR: FSM is in State 2 but SRAM enables are inactive.");
        end

        #200;
        $display("Final FSM State: %d", dut.FSM.state);
        $finish;
    end

    // The "Safety Valve" - If it doesn't finish in 10us, kill it
    initial begin
        #10000;
        $display("!!! ERROR: Still stuck in State %d !!!", dut.FSM.state);
        $finish;
    end

    
endmodule



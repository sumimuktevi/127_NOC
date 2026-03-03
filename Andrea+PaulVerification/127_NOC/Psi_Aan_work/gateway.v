module gateway (
    input wire clk,          // Global System Clock
    input wire rst,          // System Reset
    
    // Wishbone Slave Interface (Connects to teammate's topmod)
    input  wire [31:0] wbs_dat_i, // 32-bit data from Flash FSM
    input  wire        wbs_stb_i, // Strobe: High when data is valid
    input  wire        wbs_we_i,  // Write Enable: High for writing
    output reg         wbs_ack_o, // Acknowledge: Tells FSM we got it
    
    // NoC Interface
    output reg [31:0] packet_out,
    output reg        ready       // Pulse high when packet is injected to NoC
);

    // Internal register to pipeline the ready pulse
    reg ready_next;

    // Wishbone Latch & NoC Injection Logic
    always @(posedge clk) begin
        if (rst) begin
            packet_out  <= 32'h0;
            ready       <= 1'b0;
            wbs_ack_o   <= 1'b0;
            ready_next  <= 1'b0;
        end else begin
            // ----------------------------------------------------------
            // BUG 1 FIX: Assert ack on every valid Wishbone write strobe.
            // Previously wbs_ack_o was never driven high, causing every
            // wishbone_write() call in the testbench to time out.
            // ----------------------------------------------------------
            if (wbs_stb_i && wbs_we_i) begin
                wbs_ack_o  <= 1'b1;   // Acknowledge this cycle
                packet_out <= wbs_dat_i;
                ready_next <= 1'b1;   // Schedule one-cycle ready pulse
            end else begin
                wbs_ack_o  <= 1'b0;
                ready_next <= 1'b0;
            end

            // Generate the one-cycle 'ready' pulse for the NoC routers
            ready <= ready_next;
        end
    end

endmodule
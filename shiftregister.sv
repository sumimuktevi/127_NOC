module shift register (
    input wire clk,
    input wire reset,
    input wire serial_in,   
    input wire shift_en,    // Should go high when FSM is in FETCH_BIT state
    output reg [31:0] parallel_out,
    output reg done_word    // Goes high when we get 32 bits
);

    reg [4:0] bit_cnt;

    always @(posedge clk) begin
        if (reset) begin
            bit_cnt <= 0;
            parallel_out <= 0;
            done_word <= 0;
        end else if (shift_en) begin
            // Shifts from right
            parallel_out <= {parallel_out[30:0], serial_in};
            
            if (bit_cnt == 5'd31) begin
                bit_cnt <= 0;
                done_word <= 1; 
            end else begin
                bit_cnt <= bit_cnt + 1;
                done_word <= 0;
            end
        end else begin
            done_word <= 0; 
        end
    end
endmodule



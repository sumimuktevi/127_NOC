module shiftregister (
    input wire clk,
    input wire reset,
    input wire serial_in,   
    input wire shift_en,    
    input wire tick,        // <--- Add this
    output reg [31:0] parallel_out,
    output reg done_word    
);

    reg [4:0] bit_cnt;

    always @(posedge clk) begin
        if (reset) begin
            bit_cnt <= 0;
            parallel_out <= 0;
            done_word <= 0;
        // ONLY shift when both enable AND the clock tick are high
        end else if (shift_en && tick) begin 
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
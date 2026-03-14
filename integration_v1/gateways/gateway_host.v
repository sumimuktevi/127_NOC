// Gateway for Host -> NoC path.
// A host transaction is one 32-bit word shifted MSB-first while cs=0.
// When cs rises, packet_out is updated and ready pulses for one clk cycle.
module gateway_host (
    input  wire       clk,
    input  wire       rst,
    input  wire       mosi,
    input  wire       cs,
    output reg        miso,
    output reg [31:0] packet_out,
    output reg        ready
);
    reg [31:0] shift_reg_in;
    reg [5:0]  bit_count;
    reg        cs_d;

    always @(posedge clk) begin
        if (rst) begin
            shift_reg_in <= 32'h0;
            packet_out   <= 32'h0;
            bit_count    <= 6'd0;
            ready        <= 1'b0;
            miso         <= 1'b0;
            cs_d         <= 1'b1;
        end else begin
            cs_d  <= cs;
            ready <= 1'b0;
            miso  <= 1'b0;

            if (!cs_d && cs) begin
                if (bit_count == 6'd32) begin
                    packet_out <= shift_reg_in;
                    ready      <= 1'b1;
                end
                bit_count <= 6'd0;
            end else if (cs_d && !cs) begin
                // Capture the first bit on the same clock that CS goes low.
                shift_reg_in <= {31'h0, mosi};
                bit_count    <= 6'd1;
            end else if (!cs) begin
                shift_reg_in <= {shift_reg_in[30:0], mosi};
                if (bit_count < 6'd32) begin
                    bit_count <= bit_count + 6'd1;
                end
            end
        end
    end

endmodule

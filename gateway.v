module gateway (
    input wire clk,
    input wire mosi,
    input wire cs,
    output reg miso,
    output reg [31:0] packet_out,
    output reg ready
);
    reg [31:0] shift_reg_in;
    integer bit_count = 0;
    reg [9:0] local_sram [0:9]; 

    // Internal wires to unpack the stable packet_out
    // [31:28] OpCode | [23:22] X | [21:20] Y | [19:16] RowAddr | [9:0] Data
    wire [1:0] target_x = packet_out[23:22];
    wire [1:0] target_y = packet_out[21:20];
    wire [3:0] row_addr = packet_out[19:16];
    wire [9:0] row_data = packet_out[9:0];

    // SPI Shift Logic
    always @(posedge clk) begin
        if (!cs) begin
            shift_reg_in <= {shift_reg_in[30:0], mosi};
            // Read logic: MISO sends data based on the LAST packet's address
            miso <= local_sram[row_addr][9 - (bit_count % 10)];
            bit_count <= bit_count + 1;
        end
    end

    // Transaction End: Latch packet and Write to SRAM
    always @(posedge cs) begin
        packet_out <= shift_reg_in;
        ready <= 1;
        
        // OP 1 = WRITE to Core (0,0)
        if (shift_reg_in[31:28] == 4'h1 && shift_reg_in[23:22] == 0 && shift_reg_in[21:20] == 0) begin
            local_sram[shift_reg_in[19:16]] <= shift_reg_in[9:0];
        end
        
        bit_count <= 0;
    end

    // Clear ready pulse
    always @(posedge clk) if (ready) ready <= 0;

endmodule
module gateway (
    input wire clk,      // SPI Clock
    input wire mosi,     // Master Out Slave In
    input wire cs,       // Chip Select (Active Low)
    output reg miso,     // Master In Slave Out
    output reg [31:0] packet_out,
    output reg ready     // Pulse high when 32 bits are ready
);
    reg [31:0] shift_reg_in;
    integer bit_count = 0;
    reg [9:0] local_sram [0:9]; 

    // Unpack logic for the stable packet_out
    wire [1:0] target_x = packet_out[23:22];
    wire [1:0] target_y = packet_out[21:20];
    wire [3:0] row_addr = packet_out[19:16];

    // SPI Shift Logic
    always @(posedge clk) begin
        if (!cs) begin
            shift_reg_in <= {shift_reg_in[30:0], mosi};
            // FIX: Match the Python bit-streaming order (MSB first)
            // We use 9 - (bit_count % 32) if the payload is at the end
            // but since we read back row_addr from the PREVIOUS packet:
            if (bit_count >= 22 && bit_count <= 31) begin
                miso <= local_sram[row_addr][31 - bit_count];
            end else begin
                miso <= 0;
            end
            bit_count <= bit_count + 1;
        end
    end

    // Transaction End: Latch packet and Filter for local storage
    always @(posedge cs) begin
        packet_out <= shift_reg_in;
        ready <= 1;
        
        // COORDINATE FILTER:
        // OpCode 1 (Write) AND Target X=0 AND Target Y=0
        if (shift_reg_in[31:28] == 4'h1 && 
            shift_reg_in[23:22] == 2'b00 && 
            shift_reg_in[21:20] == 2'b00) begin
            local_sram[shift_reg_in[19:16]] <= shift_reg_in[9:0];
        end
        
        bit_count <= 0;
    end

    // Pulse 'ready' for exactly one clock cycle
    always @(posedge clk) if (ready) ready <= 0;

endmodule
// module gateway (
//     input  wire        clk,
//     input  wire        mosi,
//     input  wire        cs,
//     output reg         miso,

//     // Wishbone Interface
//     output reg [31:0]  wbs_dat_i,
//     output reg         wbs_stb_i,
//     output reg         wbs_we_i,
//     input  wire        wbs_ack_o
// );

//     reg [31:0] shift_reg_in;
//     integer    bit_count = 0;
//     reg        ready = 0;

//     // SPI Shift Logic
//     always @(posedge clk) begin
//         if (!cs) begin
//             shift_reg_in <= {shift_reg_in[30:0], mosi};
//             // MISO logic: Simple pass-through or status response if needed
//             miso <= 0; 
//             bit_count <= bit_count + 1;
//         end else begin
//             bit_count <= 0;
//         end
//     end

//     // Transaction End: Trigger Wishbone Write
//     // When CS goes HIGH, we latch the data and assert the Wishbone strobe
//     always @(posedge cs) begin
//         // Only trigger WB write if it's a valid Opcode (e.g., 0x1)
//         if (shift_reg_in[31:28] == 4'h1) begin
//             wbs_dat_i <= shift_reg_in;
//             wbs_we_i  <= 1;
//             wbs_stb_i <= 1;
//         end
//     end

//     // Wishbone Acknowledgement Handling
//     // Once the bus responds, clear the strobe
//     always @(posedge clk) begin
//         if (wbs_ack_o) begin
//             wbs_stb_i <= 0;
//             wbs_we_i  <= 0;
//         end
//     end

// endmodule




`default_nettype none

module gateway (
    input  wire clk,
    input  wire mosi,
    input  wire cs,
    output reg         miso,
    output reg  [31:0] wbs_dat_i,   // reg because driven by always block
    output reg         wbs_stb_i,
    output reg         wbs_we_i,
    input  wire        wbs_ack_o
);

    reg [31:0] shift_reg_in;
    reg [5:0]  bit_count;           // reg, not integer (cleaner for synthesis)
    reg [1:0]  state;

    localparam IDLE = 2'b00, ACK_WAIT = 2'b10;

    // SPI Shift Logic
    always @(posedge clk) begin
        if (!cs) begin
            shift_reg_in <= {shift_reg_in[30:0], mosi};
            miso         <= 0;
            bit_count    <= bit_count + 1;
        end else begin
            bit_count <= 0;
        end
    end

    // Wishbone State Machine
    always @(posedge clk) begin
        case (state)
            IDLE: begin
                wbs_stb_i <= 0;
                wbs_we_i  <= 0;
                if (cs && bit_count > 0) begin
                    if (shift_reg_in[31:28] == 4'h1) begin
                        wbs_dat_i <= shift_reg_in;
                        wbs_we_i  <= 1;
                        wbs_stb_i <= 1;
                        state     <= ACK_WAIT;
                    end
                end
            end

            ACK_WAIT: begin
                if (wbs_ack_o) begin
                    wbs_stb_i <= 0;
                    wbs_we_i  <= 0;
                    state     <= IDLE;
                end
            end

            default: state <= IDLE;
        endcase
    end

endmodule

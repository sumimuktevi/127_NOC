`default_nettype none

module hk_boot_adapter (
    input  wire        clk,
    input  wire        rst,

    // Wishbone slave (from housekeeping FSM)
    input  wire [31:0] wbs_adr,
    input  wire [31:0] wbs_dat,
    input  wire        wbs_cyc,
    input  wire        wbs_stb,
    input  wire        wbs_we,
    output reg         wbs_ack,

    // Boot bus 
    output reg  [9:0]  boot_addr,
    output reg  [7:0]  boot_data,
    output reg         boot_wen     // active HIGH one cycle per byte
);
    localparam IDLE = 2'd0,
               BYTE = 2'd1,
               DONE = 2'd2;

    reg [1:0]  state;
    reg [1:0]  byte_idx;
    reg [31:0] dat_latch;
    reg [9:0]  base_addr;

    wire [7:0] cur_byte =
        (byte_idx == 2'd0) ? dat_latch[ 7: 0] :
        (byte_idx == 2'd1) ? dat_latch[15: 8] :
        (byte_idx == 2'd2) ? dat_latch[23:16] :
                             dat_latch[31:24];

    always @(posedge clk) begin
        if (rst) begin
            state     <= IDLE;
            byte_idx  <= 0;
            wbs_ack   <= 0;
            boot_wen  <= 0;
        end else begin
            wbs_ack  <= 0;
            boot_wen <= 0;

            case (state)
                IDLE: begin
                    if (wbs_cyc && wbs_stb && wbs_we) begin
                        dat_latch <= wbs_dat;
                        // FSM uses 0x1000 as base; strip it for SRAM offset
                        base_addr <= wbs_adr[9:0] - 10'h000; //math we have been using  
                        base_addr <= (wbs_adr[9:0] - 10'h000); // if offset handled handled the offset
                        byte_idx  <= 0;
                        state     <= BYTE;
                    end
                end

                BYTE: begin
                    boot_addr <= base_addr + {8'd0, byte_idx};
                    boot_data <= cur_byte;
                    boot_wen  <= 1;

                    if (byte_idx == 2'd3) begin
                        wbs_ack  <= 1;
                        byte_idx <= 0;
                        state    <= DONE; //handshake state
                    end else begin
                        byte_idx <= byte_idx + 1;
                    end
                end

                DONE: begin
                    //keep ack high until the Master drops stb
                    if (!wbs_stb) begin
                        state <= IDLE;
                    end else begin
                        wbs_ack <= 1; 
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end
endmodule


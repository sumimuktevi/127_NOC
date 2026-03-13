module sram_sim (
    input  wire        clk,
    input  wire        wbs_cyc,
    input  wire        wbs_stb,
    input  wire        wbs_we,
    input  wire [31:0] wbs_adr,
    input  wire [31:0] wbs_dat,
    output reg         wbs_ack
);
    // 10 words per SoClet (by powers of 2 but I am simulating 10 just incase it goes over and we can catch it)
    reg [31:0] memory [0:9]; 

    // First two bits are ignored because each row increments by 4 
    wire [3:0] index = wbs_adr[5:2]; 

    always @(posedge clk) begin
        wbs_ack <= 1'b0;
        if (wbs_cyc && wbs_stb) begin
            if (wbs_we) begin
                if (index < 10) begin
                    memory[index] <= wbs_dat;
                    $display("SUCCESS: SRAM Index %d filled with %b", index, wbs_dat);
                end else begin
                    $display("ERROR: FSM tried to write to Index %d (Out of Bounds!)", index);
                end
            end
            wbs_ack <= 1'b1;
        end
    end
endmodule





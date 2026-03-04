module sram(
    input wire clk,
    input wire rst,

    // Wishbone Interface (from Router)
    input  wire [31:0] wbs_adr_i, // Address
    input  wire [31:0] wbs_dat_i, // Packet: [31:24]Command | [23:16]DATA | [15:0]COORD
    input  wire        wbs_we_i,  // Write Enable; high means we are sending data to sram, low means we wnat data from sram

    // Strobe: Is high whne actual data is being sent. SRAM should lock in when both are high. 
    //Strobe and cycle are like the handshake signals ready and valid. 
    input  wire        wbs_stb_i,
    // Cycle: cycle stays high if the router wnats to send mulitple packets to the SRAM. 
    //It keep their communciation open so nothing else can interrupt the SRAM
    input  wire        wbs_cyc_i, 

    output reg         wbs_ack_o, // This goes high when the SocLet recieves the message

    // SRAM Hardware Interface (8-bit)
    output reg  [8:0]  sram_addr, // 9-bit for 512 entries ( 2^9=512)
    output reg  [7:0]  sram_din,  // Data to SRAM
    input  wire [7:0]  sram_dout, // Data from SRAM
    output reg         sram_we    // SRAM Write Enable; high means we are writing data into memory, low means we are reading data from SRAM
);

    // Decoding the 32-bit packet for the 8-bit SRAM
    wire [7:0] packet_data = wbs_dat_i[23:16]; // Extracts the 8-bit payload (data)
    wire [7:0] packet_cmd  = wbs_dat_i[31:24]; // Extracts Command
    
    // Simple state machine for Wishbone Acknowledge
    always @(posedge clk) begin
        if (rst) begin
            wbs_ack_o <= 0;
            sram_we   <= 0;
        end else begin
            //if we get a write command 
            if (wbs_stb_i && wbs_cyc_i && !wbs_ack_o) begin
                if (wbs_we_i && (packet_cmd == 8'hA1)) begin
                    sram_we   <= 1;
                    sram_addr <= wbs_adr_i[8:0]; 
                    sram_din  <= packet_data;    
                end
                wbs_ack_o <= 1; 
            end else begin
                wbs_ack_o <= 0;
                sram_we   <= 0;
            end
        end
    end
endmodule



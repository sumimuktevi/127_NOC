module boot_controller (
    input  wire clk,
    input  wire rst_n,
    output reg  flash_cs_n,
    output reg  flash_clk,
    output reg  flash_mosi,
    input  wire flash_miso,
    output reg  [7:0] sram_wdata,
    output reg  [9:0] sram_waddr,
    output reg        sram_wen,
    output reg        cpu_reset_n
);

    localparam IDLE=0, CMD=1, ADDR=2, READ=3, WRITE=4, DONE=5;
    reg [2:0] state;
    reg [7:0] bit_counter, shift_reg;
    reg       spi_phase, write_phase;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE; cpu_reset_n <= 0; sram_wen <= 1;
            sram_waddr <= 0; flash_cs_n <= 1; flash_clk <= 0;
            spi_phase <= 0; write_phase <= 0;
        end else begin
            case (state)
                IDLE: begin
                    flash_cs_n <= 0; bit_counter <= 0;
                    shift_reg <= 8'h03; state <= CMD;
                end
                CMD: begin
                    if (!spi_phase) begin
                        flash_clk <= 0; flash_mosi <= shift_reg[7]; spi_phase <= 1;
                    end else begin
                        flash_clk <= 1; shift_reg <= {shift_reg[6:0], 1'b0};
                        bit_counter <= bit_counter + 1; spi_phase <= 0;
                        if (bit_counter == 7) begin state <= ADDR; bit_counter <= 0; end
                    end
                end
                ADDR: begin
                    if (!spi_phase) begin
                        flash_clk <= 0; flash_mosi <= 0; spi_phase <= 1;
                    end else begin
                        flash_clk <= 1; bit_counter <= bit_counter + 1; spi_phase <= 0;
                        if (bit_counter == 23) begin state <= READ; bit_counter <= 0; end
                    end
                end
                READ: begin
                    if (!spi_phase) begin 
                        // 1. Send Rising Edge
                        flash_clk <= 1'b1; 
                        spi_phase <= 1'b1;
                    end else begin 
                        flash_clk <= 1'b0; 
                        shift_reg <= {shift_reg[6:0], flash_miso};
                        
                        if (bit_counter == 7) begin
                            sram_wdata  <= {shift_reg[6:0], flash_miso};
                            state       <= WRITE;
                            bit_counter <= 0;
                            spi_phase   <= 0;
                        end else begin
                            bit_counter <= bit_counter + 1'b1;
                            spi_phase   <= 0;
                        end
                    end
                end
                WRITE: begin
                    if (!write_phase) begin
                        sram_wen <= 0; write_phase <= 1;
                    end else begin
                        sram_wen <= 1; write_phase <= 0;
                        if (sram_waddr == 10'h3FF) state <= DONE;
                        else begin sram_waddr <= sram_waddr + 1; state <= READ; end
                    end
                end
                DONE: begin 
                    flash_cs_n <= 1; 
                    cpu_reset_n <= 1; // Start the CPUs
                end
            endcase
        end
    end
endmodule
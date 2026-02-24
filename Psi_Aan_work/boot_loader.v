module boot_controller (
    input  wire clk,
    input  wire rst_n,          // Global chip reset (external pin)
    
    // SPI Flash Interface
    output reg  flash_cs_n,
    output reg  flash_clk,
    output reg  flash_mosi,
    input  wire flash_miso,

    // Interface to the 9 Mesh Tiles
    output reg  [7:0] sram_wdata,
    output reg  [7:0] sram_waddr,
    output reg        sram_wen,
    output reg        cpu_reset_n // This goes to the i_rst of all 9 nodes
);

    // State Machine Definitions
    localparam IDLE  = 3'd0,
               CMD   = 3'd1, // Send "Read" command to Flash
               READ  = 3'd2, // Receive byte from SPI
               WRITE = 3'd3, // Pulse WEN to GF180 SRAM
               DONE  = 3'd4;

    reg [2:0] state;
    reg [7:0] bit_counter;      // Bit position within current byte
    reg [7:0] shift_reg;        // SPI shift register
    reg       spi_phase;        // 0=clock_low, 1=clock_high

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            cpu_reset_n <= 1'b0;    // KEEP CPUs FROZEN
            sram_wen <= 1'b1;       // WEN is active low
            sram_waddr <= 8'h0;
            sram_wdata <= 8'h0;
            flash_cs_n <= 1'b1;     // Flash not selected
            flash_clk <= 1'b0;
            flash_mosi <= 1'b0;
            bit_counter <= 8'h0;
            shift_reg <= 8'h03;     // Read command
            spi_phase <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    // Initialize: select flash and prepare to send read command
                    flash_cs_n <= 1'b0;        // Select flash
                    flash_clk <= 1'b0;
                    spi_phase <= 1'b0;
                    bit_counter <= 8'h0;
                    shift_reg <= 8'h03;        // Read command (0x03)
                    state <= CMD;
                end

                CMD: begin
                    // Send read command (0x03) via SPI, bit-by-bit
                    if (spi_phase == 1'b0) begin
                        // Clock LOW phase: setup MOSI with MSB
                        flash_clk <= 1'b0;
                        flash_mosi <= shift_reg[7];
                        spi_phase <= 1'b1;
                    end else begin
                        // Clock HIGH phase: shift and advance
                        flash_clk <= 1'b1;
                        shift_reg <= {shift_reg[6:0], 1'b0};
                        bit_counter <= bit_counter + 1'b1;
                        
                        if (bit_counter == 8'd7) begin
                            // All 8 bits of read command sent
                            state <= READ;
                            bit_counter <= 8'h0;
                            spi_phase <= 1'b0;
                            shift_reg <= 8'h00;  // Clear for read
                        end else begin
                            spi_phase <= 1'b0;
                        end
                    end
                end

                READ: begin
                    // Receive 8 bits from SPI flash (firmware byte)
                    if (spi_phase == 1'b0) begin
                        // Clock LOW phase
                        flash_clk <= 1'b0;
                        spi_phase <= 1'b1;
                    end else begin
                        // Clock HIGH phase: sample MISO and shift in
                        flash_clk <= 1'b1;
                        shift_reg <= {shift_reg[6:0], flash_miso};
                        bit_counter <= bit_counter + 1'b1;
                        
                        if (bit_counter == 8'd7) begin
                            // All 8 bits received, ready to write to SRAM
                            sram_wdata <= {shift_reg[6:0], flash_miso};  // Full byte
                            state <= WRITE;
                            bit_counter <= 8'h0;
                            spi_phase <= 1'b0;
                        end else begin
                            spi_phase <= 1'b0;
                        end
                    end
                end

                WRITE: begin
                    // Write the received byte to SRAM
                    flash_clk <= 1'b0;
                    sram_wen <= 1'b0;           // Enable write (active low)
                    sram_waddr <= sram_waddr;
                    
                    // One cycle to write, then check if done
                    if (sram_waddr == 8'hFF) begin
                        // All 256 bytes attempted, move to DONE
                        sram_wen <= 1'b1;
                        state <= DONE;
                    end else begin
                        // Read next byte from flash
                        sram_waddr <= sram_waddr + 1'b1;
                        spi_phase <= 1'b0;
                        state <= READ;
                        bit_counter <= 8'h0;
                        shift_reg <= 8'h00;
                        sram_wen <= 1'b1;       // Disable write
                    end
                end

                DONE: begin
                    // Boot sequence complete
                    flash_cs_n <= 1'b1;         // Deselect flash
                    flash_clk <= 1'b0;
                    flash_mosi <= 1'b0;
                    sram_wen <= 1'b1;
                    cpu_reset_n <= 1'b1;        // RELEASE THE CPUS!
                end

                default: begin
                    // Invalid state - go to IDLE
                    state <= IDLE;
                end
            endcase
        end
    end
endmodule
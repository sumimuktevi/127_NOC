`timescale 1ns/1ps
`default_nettype none

module tb_blinker_full_pipeline;

    localparam integer FLASH_DEPTH     = 1024;
    localparam integer GRID_W          = 5;
    localparam integer GRID_H          = 5;
    localparam integer GRID_BASE_ADDR  = 10'd384;
    localparam integer MAX_BOOT_CYCLES = 200000;
    localparam integer MAX_RUN_CYCLES  = 200000;

    reg clk = 1'b0;
    reg rst = 1'b1;

    wire flash_cs_n;
    wire flash_clk;
    wire flash_mosi;
    wire flash_miso;

    wire [7:0] boot_data;
    wire [9:0] boot_addr;
    wire       boot_wen;
    wire       cpu_reset_n;
    wire       boot_mode = !cpu_reset_n;
    wire       tile_rst  = rst | boot_mode;

    wire [33:0] north_out;
    wire [33:0] south_out;
    wire [33:0] east_out;
    wire [33:0] west_out;
    wire [33:0] ne_out;
    wire [33:0] nw_out;
    wire [33:0] se_out;
    wire [33:0] sw_out;

    reg [8*256-1:0] firmware_file;
    integer cycle_count;
    integer errors;
    integer grid_write_count;
    reg pattern_ok;

    always #30 clk = ~clk;

    boot_controller boot_inst (
        .clk        (clk),
        .rst_n      (!rst),
        .flash_cs_n (flash_cs_n),
        .flash_clk  (flash_clk),
        .flash_mosi (flash_mosi),
        .flash_miso (flash_miso),
        .sram_wdata (boot_data),
        .sram_waddr (boot_addr),
        .sram_wen   (boot_wen),
        .cpu_reset_n(cpu_reset_n)
    );

    mesh_tile #(
        .TILE_ID(4'b0000)
    ) dut (
        .clk      (clk),
        .rst      (tile_rst),
        .boot_mode(boot_mode),
        .boot_addr(boot_addr),
        .boot_data(boot_data),
        .boot_wen (boot_wen),
        .north_in (34'd0),
        .south_in (34'd0),
        .east_in  (34'd0),
        .west_in  (34'd0),
        .north_out(north_out),
        .south_out(south_out),
        .east_out (east_out),
        .west_out (west_out),
        .ne_in    (34'd0),
        .nw_in    (34'd0),
        .se_in    (34'd0),
        .sw_in    (34'd0),
        .ne_out   (ne_out),
        .nw_out   (nw_out),
        .se_out   (se_out),
        .sw_out   (sw_out)
    );

    tb_spi_flash_model #(
        .DEPTH(FLASH_DEPTH)
    ) flash (
        .cs_n (flash_cs_n),
        .sclk (flash_clk),
        .mosi (flash_mosi),
        .miso (flash_miso)
    );

    function [7:0] expected_cell;
        input integer r;
        input integer c;
        begin
            if ((r == 2) && ((c == 1) || (c == 2) || (c == 3)))
                expected_cell = 8'd1;
            else
                expected_cell = 8'd0;
        end
    endfunction

    function cell_matches_expected;
        input [7:0] actual;
        input [7:0] expected;
        begin
            if (expected == 8'd0)
                cell_matches_expected = (actual == 8'd0);
            else
                cell_matches_expected = (actual != 8'd0);
        end
    endfunction

    task load_flash_image;
        integer idx;
        begin
            for (idx = 0; idx < FLASH_DEPTH; idx = idx + 1)
                flash.mem[idx] = 8'd0;

            if ($value$plusargs("firmware=%s", firmware_file)) begin
                $display("Loading flash image from %0s", firmware_file);
                $readmemh(firmware_file, flash.mem);
            end else begin
                $display("ERROR: missing +firmware=<path/to/boot_flash_image.hex>");
                $finish(1);
            end
        end
    endtask

    task update_pattern_ok;
        integer r;
        integer c;
        integer addr;
        begin
            pattern_ok = 1'b1;
            for (r = 0; r < GRID_H; r = r + 1) begin
                for (c = 0; c < GRID_W; c = c + 1) begin
                    addr = GRID_BASE_ADDR + r*GRID_W + c;
                    if (!cell_matches_expected(dut.sram_inst.mem[addr], expected_cell(r, c)))
                        pattern_ok = 1'b0;
                end
            end
        end
    endtask

    task dump_grid;
        integer r;
        integer c;
        integer addr;
        begin
            for (r = 0; r < GRID_H; r = r + 1) begin
                $write("row %0d :", r);
                for (c = 0; c < GRID_W; c = c + 1) begin
                    addr = GRID_BASE_ADDR + r*GRID_W + c;
                    $write(" %0d", dut.sram_inst.mem[addr]);
                end
                $write("\n");
            end
        end
    endtask

    task check_final_pattern;
        integer r;
        integer c;
        integer addr;
        begin
            errors = 0;
            for (r = 0; r < GRID_H; r = r + 1) begin
                for (c = 0; c < GRID_W; c = c + 1) begin
                    addr = GRID_BASE_ADDR + r*GRID_W + c;
                    if (!cell_matches_expected(dut.sram_inst.mem[addr], expected_cell(r, c))) begin
                        $display(
                            "Mismatch at addr %0d (r=%0d c=%0d): got %0d expected %0d/nonzero",
                            addr, r, c, dut.sram_inst.mem[addr], expected_cell(r, c)
                        );
                        errors = errors + 1;
                    end
                end
            end

            if (errors != 0) begin
                $display("Final SRAM contents did not match the expected full-pipeline blinker state.");
                dump_grid();
                $finish(1);
            end
        end
    endtask

    always @(posedge clk) begin
        if (!boot_mode && dut.sram_write &&
            (dut.final_a >= GRID_BASE_ADDR) &&
            (dut.final_a < (GRID_BASE_ADDR + GRID_W*GRID_H))) begin
            grid_write_count <= grid_write_count + 1;
            $display(
                "Runtime grid write %0d at cycle %0d: addr=%0d data=%0d",
                grid_write_count + 1, cycle_count, dut.final_a, dut.final_d
            );
        end
    end

    initial begin
        $display("Starting full-pipeline blinker testbench");
        load_flash_image();

        repeat (4) @(posedge clk);
        rst <= 1'b0;

        cycle_count = 0;
        while ((cycle_count < MAX_BOOT_CYCLES) && !cpu_reset_n) begin
            @(posedge clk);
            cycle_count = cycle_count + 1;
        end

        if (!cpu_reset_n) begin
            $display("Timed out after %0d cycles waiting for bootloader to release the CPU.", MAX_BOOT_CYCLES);
            $finish(1);
        end

        $display("Boot completed after %0d cycles.", cycle_count);

        if (dut.sram_inst.mem[0] == 8'd0) begin
            $display("ERROR: SRAM address 0 stayed zero after boot; firmware does not appear to have loaded.");
            $finish(1);
        end

        cycle_count = 0;
        grid_write_count = 0;
        update_pattern_ok();
        while ((cycle_count < MAX_RUN_CYCLES) && !pattern_ok) begin
            @(posedge clk);
            cycle_count = cycle_count + 1;
            update_pattern_ok();
        end

        if (!pattern_ok) begin
            $display("Timed out after %0d cycles waiting for runtime SRAM writeback.", MAX_RUN_CYCLES);
            dump_grid();
            $finish(1);
        end

        $display("Observed expected full-pipeline blinker result after %0d runtime cycles.", cycle_count);
        check_final_pattern();
        dump_grid();
        $finish;
    end

endmodule

module tb_spi_flash_model #(
    parameter integer DEPTH = 1024
)(
    input  wire cs_n,
    input  wire sclk,
    input  wire mosi,
    output reg  miso
);
    reg [7:0] mem [0:DEPTH-1];
    reg [7:0] cmd_shift;
    reg [23:0] addr_shift;
    reg [23:0] stream_addr;
    reg [5:0] bit_count;
    reg [2:0] bit_idx;

    initial begin
        cmd_shift  = 8'd0;
        addr_shift = 24'd0;
        stream_addr = 24'd0;
        bit_count  = 6'd0;
        bit_idx    = 3'd7;
        miso       = 1'b0;
    end

    always @(posedge cs_n) begin
        cmd_shift   <= 8'd0;
        addr_shift  <= 24'd0;
        stream_addr <= 24'd0;
        bit_count   <= 6'd0;
        bit_idx     <= 3'd7;
        miso        <= 1'b0;
    end

    always @(posedge sclk) begin
        if (!cs_n) begin
            if (bit_count < 6'd8) begin
                cmd_shift <= {cmd_shift[6:0], mosi};
                bit_count <= bit_count + 6'd1;
            end else if (bit_count < 6'd32) begin
                addr_shift <= {addr_shift[22:0], mosi};
                bit_count <= bit_count + 6'd1;
                if (bit_count == 6'd31) begin
                    stream_addr <= {addr_shift[22:0], mosi};
                    bit_idx <= 3'd7;
                end
            end else begin
                if (cmd_shift == 8'h03)
                    miso <= mem[stream_addr][bit_idx];
                else
                    miso <= 1'b0;

                if (bit_idx == 3'd0) begin
                    bit_idx <= 3'd7;
                    stream_addr <= stream_addr + 24'd1;
                end else begin
                    bit_idx <= bit_idx - 3'd1;
                end
            end
        end
    end

endmodule

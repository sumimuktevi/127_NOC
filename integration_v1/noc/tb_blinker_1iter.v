`timescale 1ns/1ps
`default_nettype none

module tb_blinker_1iter;

    localparam integer SRAM_DEPTH      = 1024;
    localparam integer GRID_W          = 5;
    localparam integer GRID_H          = 5;
    localparam integer GRID_BASE_ADDR  = 10'd384;
    localparam integer MAX_WAIT_CYCLES = 2000000;

    reg clk = 1'b0;
    reg rst = 1'b1;
    reg boot_mode = 1'b1;
    reg [9:0] boot_addr = 10'd0;
    reg [7:0] boot_data = 8'd0;
    reg boot_wen = 1'b1;

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
    integer row;
    integer col;
    integer errors;
    integer grid_write_count;
    reg pattern_ok;
    reg saw_grid_write;

    always #30 clk = ~clk;

    mesh_tile #(
        .TILE_ID(4'b0000)
    ) dut (
        .clk      (clk),
        .rst      (rst),
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

    function [7:0] initial_cell;
        input integer r;
        input integer c;
        begin
            if (((r == 1) || (r == 2) || (r == 3)) && (c == 2))
                initial_cell = 8'd1;
            else
                initial_cell = 8'd0;
        end
    endfunction

    task load_firmware;
        integer idx;
        begin
            for (idx = 0; idx < SRAM_DEPTH; idx = idx + 1)
                dut.sram_inst.mem[idx] = 8'd0;

            if ($value$plusargs("firmware=%s", firmware_file)) begin
                $display("Loading firmware from %0s", firmware_file);
                $readmemh(firmware_file, dut.sram_inst.mem);
            end else begin
                $display("ERROR: missing +firmware=<path/to/game_of_life.hex>");
                $finish(1);
            end
        end
    endtask

    task seed_blinker;
        integer r;
        integer c;
        integer addr;
        begin
            for (r = 0; r < GRID_H; r = r + 1) begin
                for (c = 0; c < GRID_W; c = c + 1) begin
                    addr = GRID_BASE_ADDR + r*GRID_W + c;
                    dut.sram_inst.mem[addr] = initial_cell(r, c);
                end
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

    task dump_grid_visual;
        integer r;
        integer c;
        integer addr;
        begin
            for (r = 0; r < GRID_H; r = r + 1) begin
                $write("row %0d |", r);
                for (c = 0; c < GRID_W; c = c + 1) begin
                    addr = GRID_BASE_ADDR + r*GRID_W + c;
                    if (dut.sram_inst.mem[addr] == 8'd0)
                        $write(" .");
                    else
                        $write(" O");
                end
                $write("\n");
            end
        end
    endtask

    task dump_expected_visual;
        integer r;
        integer c;
        begin
            for (r = 0; r < GRID_H; r = r + 1) begin
                $write("row %0d |", r);
                for (c = 0; c < GRID_W; c = c + 1) begin
                    if (expected_cell(r, c) == 8'd0)
                        $write(" .");
                    else
                        $write(" O");
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
                $display("Final SRAM contents did not match the expected blinker-after-1-iteration state.");
                dump_grid();
                $finish(1);
            end
        end
    endtask

    always @(posedge clk) begin
        if (!boot_mode && dut.sram_write && (dut.final_a >= GRID_BASE_ADDR) &&
            (dut.final_a < (GRID_BASE_ADDR + (2*GRID_W*GRID_H)))) begin
            grid_write_count <= grid_write_count + 1;
            $display(
                "Grid SRAM write %0d at cycle %0d: addr=%0d data=%0d",
                grid_write_count + 1, cycle_count, dut.final_a, dut.final_d
            );
            saw_grid_write <= 1'b1;
        end
    end

    initial begin
        $display("Starting Game of Life blinker testbench");
        load_firmware();
        seed_blinker();
        dut.sram_inst.cen_fell = 1'b1;
        dut.sram_inst.cen_not_rst = 1'b0;
        dut.sram_inst.qo_reg = 8'd0;

        $display("Initial blinker seeded into SRAM (numeric):");
        dump_grid();
        $display("Initial blinker seeded into SRAM (visual):");
        dump_grid_visual();
        $display("Expected next-generation blinker (visual):");
        dump_expected_visual();

        repeat (4) @(posedge clk);
        rst <= 1'b0;
        repeat (2) @(posedge clk);
        boot_mode <= 1'b0;

        cycle_count = 0;
        grid_write_count = 0;
        saw_grid_write = 1'b0;
        update_pattern_ok();
        while ((cycle_count < MAX_WAIT_CYCLES) && !pattern_ok) begin
            @(posedge clk);
            cycle_count = cycle_count + 1;
            if ((cycle_count % 100000) == 0)
                $display("Progress: waited %0d cycles", cycle_count);
            update_pattern_ok();
        end

        if (!pattern_ok) begin
            $display("Timed out after %0d cycles waiting for SRAM writeback.", MAX_WAIT_CYCLES);
            dump_grid();
            $finish(1);
        end

        $display("Observed expected next-generation blinker after %0d cycles.", cycle_count);
        $display("Observed final SRAM grid (visual):");
        dump_grid_visual();
        $display("Observed final SRAM grid (numeric):");
        check_final_pattern();
        dump_grid();
        $finish;
    end

endmodule

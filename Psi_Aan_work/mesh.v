`default_nettype none

module mesh #(
    parameter integer MESH_R = 3,
    parameter integer MESH_C = 3
)(
    input  wire        clk,
    input  wire        rst,
    input  wire [33:0] inject_00_nw,
    output wire [33:0] monitor_last_se,
    input  wire        flash_miso,
    output wire        flash_cs_n,
    output wire        flash_clk,
    output wire        flash_mosi
);

    // ------------------------------------------------------------------------
    // Safety guard:
    // Current firmware/router encoding uses 4-bit tile IDs as {row[1:0], col[1:0]}
    // so this version is intentionally limited to meshes up to 4x4.
    // ------------------------------------------------------------------------
    initial begin
        if (MESH_R < 1 || MESH_C < 1) begin
            $error("mesh: MESH_R and MESH_C must both be >= 1");
        end
        if (MESH_R > 4 || MESH_C > 4) begin
            $error("mesh: current TILE_ID / router format only supports up to 4x4");
        end
    end

    wire [7:0]  boot_data;
    wire [10:0] boot_addr;
    wire        boot_wen;
    wire        cpu_rst_n;
    wire        boot_mode = !cpu_rst_n;

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
        .cpu_reset_n(cpu_rst_n)
    );

    // Keep the same array naming style so cocotb can still do:
    // dut.rows[r].cols[c].tile_inst
    wire [33:0] grid_n  [0:MESH_R-1][0:MESH_C-1];
    wire [33:0] grid_s  [0:MESH_R-1][0:MESH_C-1];
    wire [33:0] grid_e  [0:MESH_R-1][0:MESH_C-1];
    wire [33:0] grid_w  [0:MESH_R-1][0:MESH_C-1];
    wire [33:0] grid_ne [0:MESH_R-1][0:MESH_C-1];
    wire [33:0] grid_nw [0:MESH_R-1][0:MESH_C-1];
    wire [33:0] grid_se [0:MESH_R-1][0:MESH_C-1];
    wire [33:0] grid_sw [0:MESH_R-1][0:MESH_C-1];

    genvar r, c;
    generate
        for (r = 0; r < MESH_R; r = r + 1) begin : rows
            for (c = 0; c < MESH_C; c = c + 1) begin : cols
                localparam [3:0] THIS_TILE_ID = {r[1:0], c[1:0]};

                wire [33:0] n_i;
                wire [33:0] s_i;
                wire [33:0] e_i;
                wire [33:0] w_i;
                wire [33:0] ne_i;
                wire [33:0] nw_i;
                wire [33:0] se_i;
                wire [33:0] sw_i;

                assign n_i  = (r > 0)                 ? grid_s[r-1][c]   : 34'b0;
                assign s_i  = (r < MESH_R - 1)        ? grid_n[r+1][c]   : 34'b0;
                assign e_i  = (c < MESH_C - 1)        ? grid_w[r][c+1]   : 34'b0;
                assign w_i  = (c > 0)                 ? grid_e[r][c-1]   : 34'b0;

                assign ne_i = (r > 0 && c < MESH_C-1) ? grid_sw[r-1][c+1] : 34'b0;
                assign se_i = (r < MESH_R-1 && c < MESH_C-1) ? grid_nw[r+1][c+1] : 34'b0;
                assign sw_i = (r < MESH_R-1 && c > 0) ? grid_ne[r+1][c-1] : 34'b0;

                // Preserve existing behavior:
                // top-left corner can accept the external NW injection hook
                assign nw_i = (r == 0 && c == 0) ? inject_00_nw
                              : (r > 0 && c > 0) ? grid_se[r-1][c-1]
                              : 34'b0;

                mesh_tile #(
                    .TILE_ID(THIS_TILE_ID)
                ) tile_inst (
                    .clk      (clk),
                    .rst      (!cpu_rst_n),
                    .boot_mode(boot_mode),
                    .boot_addr(boot_addr),
                    .boot_data(boot_data),
                    .boot_wen (boot_wen),

                    .north_in (n_i),
                    .south_in (s_i),
                    .east_in  (e_i),
                    .west_in  (w_i),

                    .north_out(grid_n[r][c]),
                    .south_out(grid_s[r][c]),
                    .east_out (grid_e[r][c]),
                    .west_out (grid_w[r][c]),

                    .ne_in    (ne_i),
                    .nw_in    (nw_i),
                    .se_in    (se_i),
                    .sw_in    (sw_i),

                    .ne_out   (grid_ne[r][c]),
                    .nw_out   (grid_nw[r][c]),
                    .se_out   (grid_se[r][c]),
                    .sw_out   (grid_sw[r][c])
                );
            end
        end
    endgenerate

    // Preserve the old "watch the SE output of the last tile" idea,
    // but make it generic.
    assign monitor_last_se = grid_se[MESH_R-1][MESH_C-1];

endmodule
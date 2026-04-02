`default_nettype none

module mesh_2x1 (
    input wire clk,
    input wire rst,
    input  wire [33:0] inject_00_nw,
    output wire [33:0] monitor_10_se,
    input  wire flash_miso,
    output wire flash_cs_n,
    output wire flash_clk,
    output wire flash_mosi
);
    wire [7:0] boot_data;
    wire [10:0] boot_addr;
    wire       boot_wen, cpu_rst_n;
    wire       boot_mode = !cpu_rst_n;

    boot_controller boot_inst (
        .clk(clk), .rst_n(!rst),
        .flash_cs_n(flash_cs_n), .flash_clk(flash_clk), .flash_mosi(flash_mosi), .flash_miso(flash_miso),
        .sram_wdata(boot_data), .sram_waddr(boot_addr), .sram_wen(boot_wen), .cpu_reset_n(cpu_rst_n)
    );

    wire [33:0] grid_n [0:1][0:0], grid_s [0:1][0:0], grid_e [0:1][0:0], grid_w [0:1][0:0];
    wire [33:0] grid_ne[0:1][0:0], grid_nw[0:1][0:0], grid_se[0:1][0:0], grid_sw[0:1][0:0];

    genvar r, c;
    generate
        for (r = 0; r < 2; r = r + 1) begin : rows
            for (c = 0; c < 1; c = c + 1) begin : cols
                wire [33:0] n_i  = (r > 0) ? grid_s[r-1][c] : 34'b0;
                wire [33:0] s_i  = (r < 1) ? grid_n[r+1][c] : 34'b0;
                wire [33:0] e_i  = 34'b0;
                wire [33:0] w_i  = 34'b0;
                wire [33:0] ne_i = 34'b0;
                wire [33:0] se_i = 34'b0;
                wire [33:0] sw_i = 34'b0;
                wire [33:0] nw_i = (r == 0 && c == 0) ? inject_00_nw : 34'b0;

                mesh_tile #(.TILE_ID({2'(r), 2'(c)})) tile_inst (
                    .clk(clk), .rst(!cpu_rst_n), .boot_mode(boot_mode),
                    .boot_addr(boot_addr), .boot_data(boot_data), .boot_wen(boot_wen),
                    .north_in(n_i), .south_in(s_i), .east_in(e_i), .west_in(w_i),
                    .north_out(grid_n[r][c]), .south_out(grid_s[r][c]), .east_out(grid_e[r][c]), .west_out(grid_w[r][c]),
                    .ne_in(ne_i), .nw_in(nw_i), .se_in(se_i), .sw_in(sw_i),
                    .ne_out(grid_ne[r][c]), .nw_out(grid_nw[r][c]), .se_out(grid_se[r][c]), .sw_out(grid_sw[r][c])
                );
            end
        end
    endgenerate

    assign monitor_10_se = grid_se[1][0];
endmodule

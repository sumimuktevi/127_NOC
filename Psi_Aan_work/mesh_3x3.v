// Copyright 2026 [Aan Yadav & Psi Padhya]
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

`default_nettype none
/* verilator lint_off UNOPTFLAT */

module mesh_3x3 (
    input wire clk,
    input wire rst,
    input  wire [33:0] inject_00_nw,
    output wire [33:0] monitor_22_se,
    // SPI Flash Interface (for bootloader)
    input  wire flash_miso,
    output wire flash_cs_n,
    output wire flash_clk,
    output wire flash_mosi
);

    wire [33:0] grid_n [0:2][0:2], grid_s [0:2][0:2], grid_e [0:2][0:2], grid_w [0:2][0:2];
    wire [33:0] grid_ne[0:2][0:2], grid_nw[0:2][0:2], grid_se[0:2][0:2], grid_sw[0:2][0:2];
    
    // Boot controller signals
    wire boot_mode;
    wire [7:0] boot_addr;
    wire [7:0] boot_data;
    wire boot_wen;
    wire cpu_reset_n;

    // Instantiate the boot controller
    // cpu_reset_n: 0 = CPUs in reset (boot active), 1 = CPUs running (boot done)
    boot_controller boot_ctrl (
        .clk(clk),
        .rst_n(~rst),           // Inverted: rst_n is active-low
        .flash_miso(flash_miso),
        .flash_cs_n(flash_cs_n),
        .flash_clk(flash_clk),
        .flash_mosi(flash_mosi),
        .sram_wdata(boot_data),
        .sram_waddr(boot_addr),
        .sram_wen(boot_wen),
        .cpu_reset_n(cpu_reset_n)
    );
    
    // Convert cpu_reset_n (active-low) to boot_mode (active-high)
    // boot_mode = 1 during boot phase, 0 during normal operation
    assign boot_mode = ~cpu_reset_n;

    genvar r, c;
    generate
        for (r = 0; r < 3; r = r + 1) begin : rows
            for (c = 0; c < 3; c = c + 1) begin : cols
 
                wire [33:0] n_i = (r > 0) ? grid_s[r-1][c] : 34'b0;
                wire [33:0] s_i = (r < 2) ? grid_n[r+1][c] : 34'b0;
                wire [33:0] e_i = (c < 2) ? grid_w[r][c+1] : 34'b0;
                wire [33:0] w_i = (c > 0) ? grid_e[r][c-1] : 34'b0;

                wire [33:0] ne_i = (r > 0 && c < 2) ? grid_sw[r-1][c+1] : 34'b0;
                wire [33:0] se_i = (r < 2 && c < 2) ? grid_nw[r+1][c+1] : 34'b0;
                wire [33:0] sw_i = (r < 2 && c > 0) ? grid_ne[r+1][c-1] : 34'b0;

                wire [33:0] nw_i = (r == 0 && c == 0) ? inject_00_nw : 
                                  (r > 0 && c > 0)   ? grid_se[r-1][c-1] : 34'b0;

                mesh_tile #(.TILE_ID({2'(r), 2'(c)})) tile_inst (
                    .clk(clk),
                    .rst(rst),
                    .boot_mode(boot_mode),
                    .boot_addr(boot_addr),
                    .boot_data(boot_data),
                    .boot_wen(boot_wen),

                    .north_in(n_i),  .south_in(s_i),  .east_in(e_i),  .west_in(w_i),
                    .ne_in(ne_i),     .nw_in(nw_i),     .se_in(se_i),     .sw_in(sw_i),

                    .north_out(grid_n[r][c]), .south_out(grid_s[r][c]), 
                    .east_out(grid_e[r][c]),  .west_out(grid_w[r][c]),
                    .ne_out(grid_ne[r][c]),   .nw_out(grid_nw[r][c]), 
                    .se_out(grid_se[r][c]),   .sw_out(grid_sw[r][c])
                );
            end
        end
    endgenerate
    
    assign monitor_22_se = grid_se[2][2];

endmodule
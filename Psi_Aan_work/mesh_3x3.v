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
    output wire [33:0] monitor_22_se
);

    // Full grid declarations
    wire [33:0] grid_n [0:2][0:2], grid_s [0:2][0:2], grid_e [0:2][0:2], grid_w [0:2][0:2];
    wire [33:0] grid_ne[0:2][0:2], grid_nw[0:2][0:2], grid_se[0:2][0:2], grid_sw[0:2][0:2];

    genvar r, c;
    generate
        for (r = 0; r < 3; r = r + 1) begin : rows
            for (c = 0; c < 3; c = c + 1) begin : cols
                
                // Connection Logic for Northwest to Southeast Diagonal
                wire [33:0] nw_i_conn = (r == 0 && c == 0) ? inject_00_nw : 
                                        (r > 0 && c > 0)   ? grid_se[r-1][c-1] : 34'b0;

                mesh_tile #(.TILE_ID({2'(r), 2'(c)})) tile_inst (
                    .clk(clk), .rst(rst),
                    .nw_in(nw_i_conn),
                    .se_out(grid_se[r][c]),
                    // Tie off unused ports to 0
                    .north_in((r > 0) ? grid_s[r-1][c] : 34'b0),
                    .south_in((r < 2) ? grid_n[r+1][c] : 34'b0),
                    .east_in((c < 2) ? grid_w[r][c+1] : 34'b0),
                    .west_in((c > 0) ? grid_e[r][c-1] : 34'b0),
                    .ne_in(34'b0), .se_in(34'b0), .sw_in(34'b0),
                    .north_out(grid_n[r][c]), .south_out(grid_s[r][c]), 
                    .east_out(grid_e[r][c]),  .west_out(grid_w[r][c]),
                    .nw_out(grid_nw[r][c]),   .ne_out(grid_ne[r][c]), .sw_out(grid_sw[r][c])
                );
            end
        end
    endgenerate

    // Final Monitor: Extracting the output of the very last tile
    assign monitor_22_se = grid_se[2][2];

endmodule
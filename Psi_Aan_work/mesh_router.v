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

module mesh_router #(
    parameter [3:0] MY_ID = 4'b0000 // Upper 2 bits: Row, Lower 2 bits: Col
)(
    input  wire        clk,
    input  wire        rst,

    // Wishbone (from Subservient CPU)
    input  wire [31:0] local_wb_adr,
    input  wire [31:0] local_wb_dat_o,
    output reg  [31:0] local_wb_dat_i,
    input  wire        local_wb_we,
    input  wire        local_wb_stb,
    output reg         local_wb_ack,

    // Network links (34-bit flits)
    output reg [33:0] n_out, s_out, e_out, w_out,
    output reg [33:0] ne_out, nw_out, se_out, sw_out,

    input wire [33:0] n_in, s_in, e_in, w_in,
    input wire [33:0] ne_in, nw_in, se_in, sw_in
);

    wire [1:0] my_row = MY_ID[3:2];
    wire [1:0] my_col = MY_ID[1:0];

    // Decoding incoming packet from CPU
    reg [33:0] inject_flit;
    always @(posedge clk) begin
        if (rst) inject_flit <= 34'h0;
        else if (local_wb_stb && local_wb_we && local_wb_adr[31:28] == 4'h8) begin
            inject_flit <= {1'b1, local_wb_adr[3:2], local_wb_adr[1:0], 28'b0, local_wb_dat_o[0]};
        end else inject_flit <= 34'h0;
    end

    // DIAGONAL XY ROUTING TASK
    task route_flit;
        input [33:0] flit;
        reg [1:0] tgt_row, tgt_col;
    begin
        tgt_row = flit[32:31];
        tgt_col = flit[30:29];

        if (tgt_row > my_row && tgt_col > my_col)      se_out = flit;
        else if (tgt_row > my_row && tgt_col < my_col) sw_out = flit;
        else if (tgt_row < my_row && tgt_col > my_col) ne_out = flit;
        else if (tgt_row < my_row && tgt_col < my_col) nw_out = flit;
        else if (tgt_row > my_row)                     s_out  = flit;
        else if (tgt_row < my_row)                     n_out  = flit;
        else if (tgt_col > my_col)                     e_out  = flit;
        else if (tgt_col < my_col)                     w_out  = flit;
    end
    endtask

    always @(*) begin
        {n_out, s_out, e_out, w_out, ne_out, nw_out, se_out, sw_out} = 0;
        if (inject_flit[33] && inject_flit[32:29] != MY_ID) route_flit(inject_flit);
        // Transit packets (Check all 8 inputs)
        if (n_in[33]  && n_in[32:29]  != MY_ID) route_flit(n_in);
        if (s_in[33]  && s_in[32:29]  != MY_ID) route_flit(s_in);
        if (e_in[33]  && e_in[32:29]  != MY_ID) route_flit(e_in);
        if (w_in[33]  && w_in[32:29]  != MY_ID) route_flit(w_in);
        if (ne_in[33] && ne_in[32:29] != MY_ID) route_flit(ne_in);
        if (nw_in[33] && nw_in[32:29] != MY_ID) route_flit(nw_in);
        if (se_in[33] && se_in[32:29] != MY_ID) route_flit(se_in);
        if (sw_in[33] && sw_in[32:29] != MY_ID) route_flit(sw_in);
    end

    // Wishbone ACK
    always @(posedge clk) local_wb_ack <= (rst) ? 0 : local_wb_stb;

endmodule
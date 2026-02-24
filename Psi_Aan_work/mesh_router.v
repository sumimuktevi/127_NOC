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
    
    reg [33:0] next_n, next_s, next_e, next_w;
    reg [33:0] next_ne, next_nw, next_se, next_sw;

    task route_flit_comb;
        input [33:0] flit;
        reg [1:0] tgt_row, tgt_col;
    begin
        tgt_row = flit[32:31];
        tgt_col = flit[30:29];

        if (tgt_row == my_row && tgt_col == my_col) begin
            // Destination reached — eject out se_out
            next_se = flit;
        end else if (tgt_row > my_row && tgt_col > my_col) next_se = flit;
        else if (tgt_row > my_row && tgt_col < my_col)     next_sw = flit;
        else if (tgt_row < my_row && tgt_col > my_col)     next_ne = flit;
        else if (tgt_row < my_row && tgt_col < my_col)     next_nw = flit;
        else if (tgt_row > my_row)                         next_s  = flit;
        else if (tgt_row < my_row)                         next_n  = flit;
        else if (tgt_col > my_col)                         next_e  = flit;
        else if (tgt_col < my_col)                         next_w  = flit;
    end
    endtask

    always @(*) begin
        {next_n, next_s, next_e, next_w,
         next_ne, next_nw, next_se, next_sw} = 0;

        if (inject_flit[33]) route_flit_comb(inject_flit);
        if (n_in[33])        route_flit_comb(n_in);
        if (s_in[33])        route_flit_comb(s_in);
        if (e_in[33])        route_flit_comb(e_in);
        if (w_in[33])        route_flit_comb(w_in);
        if (ne_in[33])       route_flit_comb(ne_in);
        if (nw_in[33])       route_flit_comb(nw_in);
        if (se_in[33])       route_flit_comb(se_in);
        if (sw_in[33])       route_flit_comb(sw_in);
    end

    always @(posedge clk) begin
        if (rst) begin
            {n_out, s_out, e_out, w_out,
             ne_out, nw_out, se_out, sw_out} <= 0;
        end else begin
            n_out   <= next_n;
            s_out   <= next_s;
            e_out   <= next_e;
            w_out   <= next_w;
            ne_out  <= next_ne;
            nw_out  <= next_nw;
            se_out  <= next_se;
            sw_out  <= next_sw;
        end
    end

    // Wishbone ACK
    always @(posedge clk) local_wb_ack <= (rst) ? 0 : local_wb_stb;

endmodule
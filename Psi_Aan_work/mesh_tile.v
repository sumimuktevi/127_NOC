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

module mesh_tile #(
    parameter TILE_ID = 2'b00
)(
    input wire clk,
    input wire rst,

    // Network ports
    output wire [33:0] north_out,
    output wire [33:0] south_out,
    output wire [33:0] east_out,
    output wire [33:0] west_out,

    input wire [33:0] north_in,
    input wire [33:0] south_in,
    input wire [33:0] east_in,
    input wire [33:0] west_in
);


    // Wishbone wires CPU <-> Router
    wire [31:0] wb_adr;
    wire [31:0] wb_dat_o;
    wire [31:0] wb_dat_i;
    wire wb_we;
    wire wb_stb;
    wire wb_ack;

    // Subservient Core
    subservient_core core (

        .i_clk(clk),
        .i_rst(rst),
        .i_timer_irq(1'b0),

        .o_wb_adr(wb_adr),
        .o_wb_dat(wb_dat_o),
        .o_wb_sel(),
        .o_wb_we (wb_we),
        .o_wb_stb(wb_stb),

        .i_wb_rdt(wb_dat_i),
        .i_wb_ack(wb_ack)
    );

    // Router
    mesh_router #(.MY_ID(TILE_ID)) router (

        .clk(clk),
        .rst(rst),

        .local_wb_adr(wb_adr),
        .local_wb_dat_o(wb_dat_o),
        .local_wb_dat_i(wb_dat_i),
        .local_wb_we(wb_we),
        .local_wb_stb(wb_stb),
        .local_wb_ack(wb_ack),

        .north_out(north_out),
        .south_out(south_out),
        .east_out(east_out),
        .west_out(west_out),

        .north_in(north_in),
        .south_in(south_in),
        .east_in(east_in),
        .west_in(west_in)
    );

endmodule

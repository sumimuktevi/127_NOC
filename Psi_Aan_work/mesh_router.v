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
    parameter MY_ID = 2'b00 //this is assingned by mesh_2x2
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
    output reg [33:0] north_out,
    output reg [33:0] south_out,
    output reg [33:0] east_out,
    output reg [33:0] west_out,

    input wire [33:0] north_in,
    input wire [33:0] south_in,
    input wire [33:0] east_in,
    input wire [33:0] west_in
);

    // Tile position decode
    wire my_row = MY_ID[1];
    wire my_col = MY_ID[0];

    // Neighbor receive buffers
    // (what C code will read)
    reg north_buf, south_buf, east_buf, west_buf;
    reg north_valid, south_valid, east_valid, west_valid;

    // Wishbone address decode
    wire is_network_send =
        (local_wb_adr[31:28] == 4'h8) &&
        local_wb_stb && local_wb_we;

    wire is_network_recv =
        (local_wb_adr[31:28] == 4'h9) &&
        local_wb_stb && !local_wb_we;

    wire [3:0] recv_sel = local_wb_adr[3:0];

    // Flit injection register
    reg [33:0] inject_flit;

    always @(posedge clk) begin
        if (rst) begin
            inject_flit <= 34'h0;
        end
        else if (is_network_send) begin
            // Format:
            // [33] valid
            // [32] dest_row
            // [31] dest_col
            // [0]  cell_state
            inject_flit <= {
                1'b1,
                local_wb_adr[3],   // dest_row
                local_wb_adr[2],   // dest_col
                30'b0,
                local_wb_dat_o[0]  // alive/dead
            };
        end
        else begin
            inject_flit <= 34'h0;
        end
    end

    // ROUTING TASK (XY routing)
    task route_flit;
        input [33:0] flit;
    begin
        if (flit[31] != my_col) begin
            if (flit[31] > my_col)
                east_out = flit;
            else
                west_out = flit;
        end
        else begin
            if (flit[32] > my_row)
                south_out = flit;
            else
                north_out = flit;
        end
    end
    endtask

    // COMBINATIONAL ROUTING
    always @(*) begin

        // Default outputs
        north_out = 0;
        south_out = 0;
        east_out  = 0;
        west_out  = 0;

        // Injected packet
        if (inject_flit[33] &&
            inject_flit[32:31] != MY_ID)
            route_flit(inject_flit);

        // Transit packets
        if (north_in[33] &&
            north_in[32:31] != MY_ID)
            route_flit(north_in);

        if (south_in[33] &&
            south_in[32:31] != MY_ID)
            route_flit(south_in);

        if (east_in[33] &&
            east_in[32:31] != MY_ID)
            route_flit(east_in);

        if (west_in[33] &&
            west_in[32:31] != MY_ID)
            route_flit(west_in);
    end

    // Stores neighbor alive/dead values
    always @(posedge clk) begin
        if (rst) begin
            north_buf <= 0; south_buf <= 0;
            east_buf  <= 0; west_buf  <= 0;

            north_valid <= 0; south_valid <= 0;
            east_valid  <= 0; west_valid  <= 0;
        end
        else begin

            if (north_in[33] &&
                north_in[32:31] == MY_ID) begin
                north_buf   <= north_in[0];
                north_valid <= 1;
            end

            if (south_in[33] &&
                south_in[32:31] == MY_ID) begin
                south_buf   <= south_in[0];
                south_valid <= 1;
            end

            if (east_in[33] &&
                east_in[32:31] == MY_ID) begin
                east_buf   <= east_in[0];
                east_valid <= 1;
            end

            if (west_in[33] &&
                west_in[32:31] == MY_ID) begin
                west_buf   <= west_in[0];
                west_valid <= 1;
            end

        end
    end

    // Wishbone READ → C code sees neighbors
    always @(posedge clk) begin
        if (rst)
            local_wb_dat_i <= 0;
        else if (is_network_recv) begin
            case (recv_sel)
                4'h0: local_wb_dat_i <= north_buf;
                4'h4: local_wb_dat_i <= south_buf;
                4'h8: local_wb_dat_i <= east_buf;
                4'hC: local_wb_dat_i <= west_buf;
                default: local_wb_dat_i <= 0;
            endcase
        end
    end

    // Wishbone ACK
    always @(posedge clk) begin
        if (rst)
            local_wb_ack <= 0;
        else
            local_wb_ack <= local_wb_stb;
    end

endmodule

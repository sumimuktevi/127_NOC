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

module mesh_2x2 (

    input wire clk,
    input wire rst
);

    // Link wires
    wire [33:0] n00_n01, n01_n00;
    wire [33:0] n10_n11, n11_n10;
    wire [33:0] n00_n10, n10_n00;
    wire [33:0] n01_n11, n11_n01;

    // ---------------- Tiles ----------------

    mesh_tile #(.TILE_ID(2'b00)) t00 (
        .clk(clk), .rst(rst),

        .north_in(34'b0),
        .south_in(n01_n00),
        .east_in (n10_n00),
        .west_in (34'b0),

        .north_out(),
        .south_out(n00_n01),
        .east_out (n00_n10),
        .west_out ()
    );

    mesh_tile #(.TILE_ID(2'b01)) t01 (
        .clk(clk), .rst(rst),

        .north_in(n00_n01),
        .south_in(34'b0),
        .east_in (n11_n01),
        .west_in (34'b0),

        .north_out(n01_n00),
        .south_out(),
        .east_out (n01_n11),
        .west_out ()
    );

    mesh_tile #(.TILE_ID(2'b10)) t10 (
        .clk(clk), .rst(rst),

        .north_in(34'b0),
        .south_in(n11_n10),
        .east_in (34'b0),
        .west_in (n00_n10),

        .north_out(),
        .south_out(n10_n11),
        .east_out (),
        .west_out (n10_n00)
    );

    mesh_tile #(.TILE_ID(2'b11)) t11 (
        .clk(clk), .rst(rst),

        .north_in(n10_n11),
        .south_in(34'b0),
        .east_in (34'b0),
        .west_in (n01_n11),

        .north_out(n11_n10),
        .south_out(),
        .east_out (),
        .west_out (n11_n01)
    );

endmodule
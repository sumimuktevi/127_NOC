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
    parameter [3:0] TILE_ID = 4'b0000 
)(
    input wire clk,
    input wire rst,
    
    // Diagonal Ports (Used for your current Snake/Diagonal tests)
    input  wire [33:0] nw_in,
    output reg  [33:0] se_out,
    
    // Standard Ports (Reserved for XY Routing)
    input  wire [33:0] north_in, south_in, east_in, west_in,
    output reg  [33:0] north_out, south_out, east_out, west_out,
    
    // Unused Diagonal Ports
    input  wire [33:0] ne_in, sw_in, se_in,
    output wire [33:0] ne_out, sw_out, nw_out
);

    // Internal Registers & Routing
    // This logic ensures a packet only stays on a port for ONE cycle.
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            se_out    <= 34'b0;
            north_out <= 34'b0;
            south_out <= 34'b0;
            east_out  <= 34'b0;
            west_out  <= 34'b0;
        end else begin
            // Forwarding Logic: If a packet enters from the Northwest, 
            // move it to the Southeast on the next clock edge.
            if (nw_in[33]) begin
                se_out <= nw_in;
            end else begin
                se_out <= 34'b0; // Self-clearing
            end
            
            // Default unused outputs to 0
            north_out <= 34'b0;
            south_out <= 34'b0;
            east_out  <= 34'b0;
            west_out  <= 34'b0;
        end
    end

    // --- SRAM Instance (The "Storage" for your C code) ---
    // This is where your .hex file will eventually live.
    wire vdd_conn = 1'b1;
    wire vss_conn = 1'b0;
    wire [7:0] sram_q;

    gf180mcu_fd_ip_sram__sram256x8m8wm1 sram_inst (
        .CLK(clk),
        .CEN(rst),    
        .GWEN(1'b1), 
        .WEN(8'hFF),  
        .A(8'b0),     
        .D(8'b0),     
        .Q(sram_q),    
        .VDD(vdd_conn),
        .VSS(vss_conn)
    );

    assign ne_out = 34'b0;
    assign sw_out = 34'b0;
    assign nw_out = 34'b0;

endmodule
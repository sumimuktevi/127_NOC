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
    // SPI Flash Interface
    input  wire flash_miso,
    output wire flash_cs_n,
    output wire flash_clk,
    output wire flash_mosi,
    // Wishbone Interface
    input  wire [31:0] wbs_dat_i,
    input  wire        wbs_stb_i,
    input  wire        wbs_we_i,
    output wire        wbs_ack_o
);

    wire [33:0] grid_n [0:2][0:2], grid_s [0:2][0:2], grid_e [0:2][0:2], grid_w [0:2][0:2];
    wire [33:0] grid_ne[0:2][0:2], grid_nw[0:2][0:2], grid_se[0:2][0:2], grid_sw[0:2][0:2];

    // -----------------------------------------------------------------------
    // Packet format (must match create_packet in test_app.py):
    //   [31:28] opcode   (4'h1 = write)
    //   [27:26] core_x   (column, 2 bits)
    //   [25:24] core_y   (row,    2 bits)
    //   [23:16] addr     (8 bits — full byte address 0-255)
    //   [ 7: 0] data     (8 bits)
    // -----------------------------------------------------------------------

    wire [31:0] gw_packet;
    wire        gw_ready;

    // Decode boot signals from gateway packet
    wire [1:0]  gw_tgt_col  = gw_packet[27:26];   // core_x
    wire [1:0]  gw_tgt_row  = gw_packet[25:24];   // core_y
    wire [7:0]  gw_addr     = gw_packet[23:16];   // full 8-bit address, no shifting needed
    wire [7:0]  gw_data     = gw_packet[7:0];     // 8-bit data byte
    wire        gw_is_write = gw_ready && (gw_packet[31:28] == 4'h1);

    wire        boot_mode_wire;
    wire [7:0]  boot_addr_wire, boot_data_wire;
    wire        boot_wen_wire;
    wire        cpu_reset_n_wire; // FIX: intermediate wire so we can invert without
                                  // creating an unassignable ~wire expression

    // When the gateway fires a write, override the boot_controller signals
    // so the packet gets written into the correct tile's SRAM.
    // boot_mode must stay high while gw_is_write to keep CPUs in reset.
    wire boot_mode  = boot_mode_wire | gw_is_write;
    wire [7:0] boot_addr = gw_is_write ? gw_addr  : boot_addr_wire;
    wire [7:0] boot_data = gw_is_write ? gw_data  : boot_data_wire;
    wire       boot_wen  = gw_is_write ? 1'b1     : boot_wen_wire;

    // boot_mode_wire is the inverted cpu_reset_n from the boot_controller
    assign boot_mode_wire = ~cpu_reset_n_wire;

    boot_controller boot_ctrl (
        .clk(clk), .rst_n(~rst),
        .flash_miso(flash_miso), .flash_cs_n(flash_cs_n),
        .flash_clk(flash_clk), .flash_mosi(flash_mosi),
        .sram_wdata(boot_data_wire), .sram_waddr(boot_addr_wire),
        .sram_wen(boot_wen_wire), .cpu_reset_n(cpu_reset_n_wire)
    );

    gateway gw_inst (
        .clk(clk), .rst(rst),
        .wbs_dat_i(wbs_dat_i), .wbs_stb_i(wbs_stb_i),
        .wbs_we_i(wbs_we_i), .wbs_ack_o(wbs_ack_o),
        .packet_out(gw_packet), .ready(gw_ready)
    );

    genvar r, c;
    generate
        for (r = 0; r < 3; r = r + 1) begin : rows
            for (c = 0; c < 3; c = c + 1) begin : cols
                wire [33:0] n_i  = (r > 0)              ? grid_s [r-1][c]   : 34'b0;
                wire [33:0] s_i  = (r < 2)              ? grid_n [r+1][c]   : 34'b0;
                wire [33:0] e_i  = (c < 2)              ? grid_w [r][c+1]   : 34'b0;
                wire [33:0] w_i  = (c > 0)              ? grid_e [r][c-1]   : 34'b0;
                wire [33:0] ne_i = (r > 0 && c < 2)     ? grid_sw[r-1][c+1] : 34'b0;
                wire [33:0] se_i = (r < 2 && c < 2)     ? grid_nw[r+1][c+1] : 34'b0;
                wire [33:0] sw_i = (r < 2 && c > 0)     ? grid_ne[r+1][c-1] : 34'b0;

                // ---------------------------------------------------------------
                // BUG 2 FIX: The original flit was built as {1'b0, 1'b1, packet}
                // which placed the valid bit (bit 33) as 0, so every gateway
                // packet was silently dropped by the router's `if (nw_in[33])`
                // check.  Flit format: [33]=valid, [32:31]=tgt_row, [30:29]=tgt_col,
                // [28:0]=payload.  We no longer inject via the NoC for SRAM loading
                // (handled via boot pins above), but keep this correct for any
                // runtime NoC injection from inject_00_nw.
                // ---------------------------------------------------------------
                wire [33:0] nw_i = (r == 0 && c == 0) ? inject_00_nw :
                                   (r > 0  && c > 0)  ? grid_se[r-1][c-1] : 34'b0;

                // Per-tile boot_wen: only write to the tile the packet targets
                wire tile_boot_wen = boot_wen &&
                                     (gw_is_write ? (gw_tgt_row == r[1:0] && gw_tgt_col == c[1:0])
                                                  : 1'b1);

                mesh_tile #(.TILE_ID({2'(r), 2'(c)})) tile_inst (
                    .clk(clk), .rst(rst),
                    .boot_mode(boot_mode),
                    .boot_addr(boot_addr),
                    .boot_data(boot_data),
                    .boot_wen(tile_boot_wen),
                    .north_in(n_i),  .south_in(s_i),  .east_in(e_i),  .west_in(w_i),
                    .ne_in(ne_i),    .nw_in(nw_i),    .se_in(se_i),   .sw_in(sw_i),
                    .north_out(grid_n[r][c]),  .south_out(grid_s[r][c]),
                    .east_out(grid_e[r][c]),   .west_out(grid_w[r][c]),
                    .ne_out(grid_ne[r][c]),    .nw_out(grid_nw[r][c]),
                    .se_out(grid_se[r][c]),    .sw_out(grid_sw[r][c])
                );
            end
        end
    endgenerate

    assign monitor_22_se = grid_se[2][2];

endmodule
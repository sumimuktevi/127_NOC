// Copyright 2026 [Aan Yadav & Psi Padhya]
// SPDX-License-Identifier: Apache-2.0

`default_nettype none

// ============================================================================
// mesh_router — generic XY-routed mesh router for a tiled NoC
// ============================================================================
//
// Flit format (34 bits):
//   [33]     = Valid
//   [32:29]  = Destination tile ID  {dest_row[1:0], dest_col[1:0]}
//   [28:0]   = Payload (opaque to hardware)
//
// CPU Wishbone interface:
//   WRITE 0x80000000  inject flit:
//       word[31:28] = dest tile ID  → flit[32:29]
//       word[28:0]  = payload       → flit[28:0]
//       flit[33]    = 1 (valid, set by hardware)
//   READ  0x80000004  receive flit:
//       returns {3'b0, flit[28:0]} from head of ejection FIFO
//       FIFO pops automatically one cycle after the read (cpu_read_q)
//   READ  0x80000008  tile ID:
//       returns {28'b0, MY_ID}
//
// Ghost flit convention (firmware):
//   Firmware marks ghost flits with FLIT_VALID_BIT = bit10 of the payload
//   (0x400).  This is distinct from flit[33] which is the router valid bit.
//   recv_ghost() spins on bit10 of the WB read data.
//
// Ejection FIFO depth = 4 (one slot per possible direction).
// All tiles send simultaneously; the FIFO must hold all arriving flits before
// the CPU reads the first one.
// ============================================================================

module mesh_router #(
    parameter [3:0] MY_ID = 4'b0000
)(
    input  wire        clk,
    input  wire        rst,

    input  wire [31:0] local_wb_adr,
    input  wire [31:0] local_wb_dat_o,
    output wire [31:0] local_wb_dat_i,
    input  wire        local_wb_we,
    input  wire        local_wb_stb,
    output wire        local_wb_ack,

    output reg  [33:0] n_out, s_out, e_out, w_out,
    output reg  [33:0] ne_out, nw_out, se_out, sw_out,

    input  wire [33:0] n_in, s_in, e_in, w_in,
    input  wire [33:0] ne_in, nw_in, se_in, sw_in
);
    wire [1:0] my_row = MY_ID[3:2];
    wire [1:0] my_col = MY_ID[1:0];

    // -------------------------------------------------------------------------
    // Injection — latch every write cycle
    // -------------------------------------------------------------------------
    // ack = stb (immediate), so SERV deasserts stb the cycle after receiving
    // ack.  Each transaction is exactly one clock cycle; no edge detection
    // needed or correct.
    //
    reg [33:0] inject_flit;

    wire inject_write_now = local_wb_stb && local_wb_we &&
                            (local_wb_adr == 32'h80000000);

    always @(posedge clk) begin
        if (rst) begin
            inject_flit <= 34'h0;
        end else begin
            inject_flit <= 34'h0;   // default: no active flit this cycle

            if (inject_write_now) begin
                // [33]=valid, [32:29]=dest(4b), [28:0]=payload(29b)
                inject_flit <= {1'b1,
                                local_wb_dat_o[31:28],
                                local_wb_dat_o[28:0]};

                $display("[NOC t=%0t] ID=%0d INJECT raw=0x%08x dest=%0d bmap=0x%03x",
                         $time, MY_ID,
                         local_wb_dat_o,
                         local_wb_dat_o[31:28],
                         local_wb_dat_o[9:0]);
            end
        end
    end

    // -------------------------------------------------------------------------
    // Ejection FIFO — 4 entries (one per cardinal direction)
    // -------------------------------------------------------------------------
    localparam FIFO_DEPTH = 4;
    localparam FIFO_BITS  = 2;

    reg [33:0]          fifo_mem   [0:FIFO_DEPTH-1];
    reg [FIFO_BITS-1:0] fifo_wr_ptr, fifo_rd_ptr;
    reg [FIFO_BITS:0]   fifo_count;

    wire fifo_empty = (fifo_count == 0);
    wire fifo_full  = (fifo_count == FIFO_DEPTH[FIFO_BITS:0]);

    wire cpu_read = local_wb_stb && !local_wb_we &&
                    (local_wb_adr == 32'h80000004);

    wire [33:0] eject_flit_next;    // driven combinatorially by route_one

    wire fifo_push = eject_flit_next[33] && !fifo_full;

    // Pop one cycle after a successful (non-empty) read so the flit stays
    // in the FIFO while SERV samples dat_i on the same cycle as ack.
    reg cpu_read_q;
    always @(posedge clk) begin
        if (rst) cpu_read_q <= 1'b0;
        else     cpu_read_q <= cpu_read && !fifo_empty;
    end
    wire fifo_pop = cpu_read_q && !fifo_empty;

    integer i;
    always @(posedge clk) begin
        if (rst) begin
            fifo_wr_ptr <= 0;
            fifo_rd_ptr <= 0;
            fifo_count  <= 0;
            for (i = 0; i < FIFO_DEPTH; i = i + 1)
                fifo_mem[i] <= 34'h0;
        end else begin
            if (fifo_push) begin
                fifo_mem[fifo_wr_ptr] <= eject_flit_next;
                fifo_wr_ptr           <= fifo_wr_ptr + 1;
                $display("[NOC t=%0t] ID=%0d EJECT_IN  bmap=0x%03x count %0d->%0d",
                         $time, MY_ID,
                         eject_flit_next[9:0],
                         fifo_count, fifo_count + 1);
            end
            if (fifo_pop) begin
                $display("[NOC t=%0t] ID=%0d EJECT_OUT bmap=0x%03x count %0d->%0d",
                         $time, MY_ID,
                         fifo_mem[fifo_rd_ptr][9:0],
                         fifo_count, fifo_count - 1);
                fifo_rd_ptr <= fifo_rd_ptr + 1;
            end
            if      ( fifo_push && !fifo_pop) fifo_count <= fifo_count + 1;
            else if (!fifo_push &&  fifo_pop) fifo_count <= fifo_count - 1;
        end
    end

    // Combinatorial FIFO head — SERV sees valid data on the same cycle as ack.
    wire [33:0] fifo_head_comb = fifo_empty ? 34'h0 : fifo_mem[fifo_rd_ptr];

    // -------------------------------------------------------------------------
    // Wishbone response
    // -------------------------------------------------------------------------
    assign local_wb_dat_i =
        (local_wb_stb && !local_wb_we && local_wb_adr == 32'h80000008)
            ? {28'b0, MY_ID}
        : (local_wb_stb && !local_wb_we && local_wb_adr == 32'h80000004)
            ? {3'b0, fifo_head_comb[28:0]}
        : 32'h0;

    assign local_wb_ack = (~rst) & local_wb_stb;

    // -------------------------------------------------------------------------
    // Routing — XY dimension-order, combinatorial
    // -------------------------------------------------------------------------
    reg [33:0] next_n, next_s, next_e, next_w;
    reg [33:0] next_ne, next_nw, next_se, next_sw;
    reg [33:0] next_eject;

    task automatic route_one;
        input [33:0] flit;
        reg [1:0] tgt_row, tgt_col;
        begin
            // Flit layout: [33]=valid [32:29]=dest(4b) [28:0]=payload
            // dest[3:2] = row, dest[1:0] = col → flit[32:31]=row, flit[30:29]=col
            tgt_row = flit[32:31];
            tgt_col = flit[30:29];

            if (tgt_row == my_row && tgt_col == my_col) begin
                if (!next_eject[33] && !fifo_full) next_eject = flit;
            end else if (tgt_row > my_row && tgt_col > my_col) begin
                if (!next_se[33]) next_se = flit;
            end else if (tgt_row > my_row && tgt_col < my_col) begin
                if (!next_sw[33]) next_sw = flit;
            end else if (tgt_row < my_row && tgt_col > my_col) begin
                if (!next_ne[33]) next_ne = flit;
            end else if (tgt_row < my_row && tgt_col < my_col) begin
                if (!next_nw[33]) next_nw = flit;
            end else if (tgt_row > my_row) begin
                if (!next_s[33])  next_s  = flit;
            end else if (tgt_row < my_row) begin
                if (!next_n[33])  next_n  = flit;
            end else if (tgt_col > my_col) begin
                if (!next_e[33])  next_e  = flit;
            end else begin
                if (!next_w[33])  next_w  = flit;
            end
        end
    endtask

    always @(*) begin
        {next_n, next_s, next_e, next_w,
         next_ne, next_nw, next_se, next_sw, next_eject} = 0;

        if (inject_flit[33]) route_one(inject_flit);
        if (n_in[33])        route_one(n_in);
        if (s_in[33])        route_one(s_in);
        if (e_in[33])        route_one(e_in);
        if (w_in[33])        route_one(w_in);
        if (ne_in[33])       route_one(ne_in);
        if (nw_in[33])       route_one(nw_in);
        if (se_in[33])       route_one(se_in);
        if (sw_in[33])       route_one(sw_in);
    end

    assign eject_flit_next = next_eject;

    always @(posedge clk) begin
        if (rst) begin
            {n_out, s_out, e_out, w_out,
             ne_out, nw_out, se_out, sw_out} <= 0;
        end else begin
            n_out  <= next_n;   s_out  <= next_s;
            e_out  <= next_e;   w_out  <= next_w;
            ne_out <= next_ne;  nw_out <= next_nw;
            se_out <= next_se;  sw_out <= next_sw;
        end
    end

endmodule
// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___timing_commit(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_commit\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x0000000100000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h07788b41__0.commit(
                                                   "@( system_top.flash_controller.ethan_sram.CEN)");
    }
    if ((! (0x0000000400000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_hed70a126__0.commit(
                                                   "@( system_top.flash_controller.ethan_sram.cen_flag)");
    }
    if ((! (0x0000000800000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h67a6551e__0.commit(
                                                   "@( system_top.flash_controller.ethan_sram.CLK)");
    }
    if ((! (0x0000001000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h3358f293__0.commit(
                                                   "@(negedge system_top.flash_controller.ethan_sram.clk_dly)");
    }
    if ((! (0x0000002000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_hc3ccf441__0.commit(
                                                   "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.CEN)");
    }
    if ((! (0x0000004000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h4879b73b__0.commit(
                                                   "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.cen_flag)");
    }
    if ((! (0x0000008000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_hd7b21910__0.commit(
                                                   "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.CLK)");
    }
    if ((! (0x0000010000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_heacc708f__0.commit(
                                                   "@(negedge system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.clk_dly)");
    }
    if ((! (0x0000020000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h213df6f7__0.commit(
                                                   "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.CEN)");
    }
    if ((! (0x0000040000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h655c0289__0.commit(
                                                   "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.cen_flag)");
    }
    if ((! (0x0000080000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h3e379aec__0.commit(
                                                   "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.CLK)");
    }
    if ((! (0x0000100000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h4ba798b0__0.commit(
                                                   "@(negedge system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.clk_dly)");
    }
    if ((! (0x0000200000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h68d1e6e1__0.commit(
                                                   "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.CEN)");
    }
    if ((! (0x0000400000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_hdb9247f0__0.commit(
                                                   "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.cen_flag)");
    }
    if ((! (0x0000800000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h58490f8f__0.commit(
                                                   "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.CLK)");
    }
    if ((! (0x0001000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h98833698__0.commit(
                                                   "@(negedge system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.clk_dly)");
    }
    if ((! (0x0002000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_hb10b6336__0.commit(
                                                   "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.CEN)");
    }
    if ((! (0x0004000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h4f73c019__0.commit(
                                                   "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.cen_flag)");
    }
    if ((! (0x0008000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_hde2a4094__0.commit(
                                                   "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.CLK)");
    }
    if ((! (0x0010000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h448d3669__0.commit(
                                                   "@(negedge system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.clk_dly)");
    }
    if ((! (0x0020000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h394aab9d__0.commit(
                                                   "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.CEN)");
    }
    if ((! (0x0040000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_he4c023da__0.commit(
                                                   "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.cen_flag)");
    }
    if ((! (0x0080000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_hbbf7c1ec__0.commit(
                                                   "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.CLK)");
    }
    if ((! (0x0100000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h70ba2307__0.commit(
                                                   "@(negedge system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.clk_dly)");
    }
    if ((! (0x0200000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h0e4da9dd__0.commit(
                                                   "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.CEN)");
    }
    if ((! (0x0400000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h0fa7e2ac__0.commit(
                                                   "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.cen_flag)");
    }
    if ((! (0x0800000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h0fad9559__0.commit(
                                                   "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.CLK)");
    }
    if ((! (0x1000000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_he1ce4af5__0.commit(
                                                   "@(negedge system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.clk_dly)");
    }
    if ((! (0x2000000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_hd1f38e85__0.commit(
                                                   "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.CEN)");
    }
    if ((! (0x4000000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h021af753__0.commit(
                                                   "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.cen_flag)");
    }
    if ((! (0x8000000000000000ULL & vlSelfRef.__VactTriggered
            [4U]))) {
        vlSelfRef.__VtrigSched_h6ff48385__0.commit(
                                                   "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.CLK)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered[5U]))) {
        vlSelfRef.__VtrigSched_hfb6916ba__0.commit(
                                                   "@(negedge system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.clk_dly)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered[5U]))) {
        vlSelfRef.__VtrigSched_h493a6d68__0.commit(
                                                   "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.CEN)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered[5U]))) {
        vlSelfRef.__VtrigSched_ha581e8af__0.commit(
                                                   "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.cen_flag)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered[5U]))) {
        vlSelfRef.__VtrigSched_h512b3bff__0.commit(
                                                   "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.CLK)");
    }
    if ((! (0x0000000000000010ULL & vlSelfRef.__VactTriggered
            [5U]))) {
        vlSelfRef.__VtrigSched_hf8f64219__0.commit(
                                                   "@(negedge system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.clk_dly)");
    }
    if ((! (0x0000000000000020ULL & vlSelfRef.__VactTriggered
            [5U]))) {
        vlSelfRef.__VtrigSched_h655389c6__0.commit(
                                                   "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.CEN)");
    }
    if ((! (0x0000000000000040ULL & vlSelfRef.__VactTriggered
            [5U]))) {
        vlSelfRef.__VtrigSched_h987ae714__0.commit(
                                                   "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.cen_flag)");
    }
    if ((! (0x0000000000000080ULL & vlSelfRef.__VactTriggered
            [5U]))) {
        vlSelfRef.__VtrigSched_hcff63e74__0.commit(
                                                   "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.CLK)");
    }
    if ((! (0x0000000000000100ULL & vlSelfRef.__VactTriggered
            [5U]))) {
        vlSelfRef.__VtrigSched_h029f269e__0.commit(
                                                   "@(negedge system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.clk_dly)");
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000100000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h07788b41__0.resume(
                                                   "@( system_top.flash_controller.ethan_sram.CEN)");
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_hed70a126__0.resume(
                                                   "@( system_top.flash_controller.ethan_sram.cen_flag)");
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h67a6551e__0.resume(
                                                   "@( system_top.flash_controller.ethan_sram.CLK)");
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h3358f293__0.resume(
                                                   "@(negedge system_top.flash_controller.ethan_sram.clk_dly)");
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_hc3ccf441__0.resume(
                                                   "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.CEN)");
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h4879b73b__0.resume(
                                                   "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.cen_flag)");
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_hd7b21910__0.resume(
                                                   "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.CLK)");
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_heacc708f__0.resume(
                                                   "@(negedge system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.clk_dly)");
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h213df6f7__0.resume(
                                                   "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.CEN)");
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h655c0289__0.resume(
                                                   "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.cen_flag)");
    }
    if ((0x0000080000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h3e379aec__0.resume(
                                                   "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.CLK)");
    }
    if ((0x0000100000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h4ba798b0__0.resume(
                                                   "@(negedge system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.clk_dly)");
    }
    if ((0x0000200000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h68d1e6e1__0.resume(
                                                   "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.CEN)");
    }
    if ((0x0000400000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_hdb9247f0__0.resume(
                                                   "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.cen_flag)");
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h58490f8f__0.resume(
                                                   "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.CLK)");
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h98833698__0.resume(
                                                   "@(negedge system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.clk_dly)");
    }
    if ((0x0002000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_hb10b6336__0.resume(
                                                   "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.CEN)");
    }
    if ((0x0004000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h4f73c019__0.resume(
                                                   "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.cen_flag)");
    }
    if ((0x0008000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_hde2a4094__0.resume(
                                                   "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.CLK)");
    }
    if ((0x0010000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h448d3669__0.resume(
                                                   "@(negedge system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.clk_dly)");
    }
    if ((0x0020000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h394aab9d__0.resume(
                                                   "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.CEN)");
    }
    if ((0x0040000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_he4c023da__0.resume(
                                                   "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.cen_flag)");
    }
    if ((0x0080000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_hbbf7c1ec__0.resume(
                                                   "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.CLK)");
    }
    if ((0x0100000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h70ba2307__0.resume(
                                                   "@(negedge system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.clk_dly)");
    }
    if ((0x0200000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h0e4da9dd__0.resume(
                                                   "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.CEN)");
    }
    if ((0x0400000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h0fa7e2ac__0.resume(
                                                   "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.cen_flag)");
    }
    if ((0x0800000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h0fad9559__0.resume(
                                                   "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.CLK)");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_he1ce4af5__0.resume(
                                                   "@(negedge system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.clk_dly)");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_hd1f38e85__0.resume(
                                                   "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.CEN)");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h021af753__0.resume(
                                                   "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.cen_flag)");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VtrigSched_h6ff48385__0.resume(
                                                   "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.CLK)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[5U])) {
        vlSelfRef.__VtrigSched_hfb6916ba__0.resume(
                                                   "@(negedge system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.clk_dly)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[5U])) {
        vlSelfRef.__VtrigSched_h493a6d68__0.resume(
                                                   "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.CEN)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[5U])) {
        vlSelfRef.__VtrigSched_ha581e8af__0.resume(
                                                   "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.cen_flag)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[5U])) {
        vlSelfRef.__VtrigSched_h512b3bff__0.resume(
                                                   "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.CLK)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [5U])) {
        vlSelfRef.__VtrigSched_hf8f64219__0.resume(
                                                   "@(negedge system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.clk_dly)");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered
         [5U])) {
        vlSelfRef.__VtrigSched_h655389c6__0.resume(
                                                   "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.CEN)");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered
         [5U])) {
        vlSelfRef.__VtrigSched_h987ae714__0.resume(
                                                   "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.cen_flag)");
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered
         [5U])) {
        vlSelfRef.__VtrigSched_hcff63e74__0.resume(
                                                   "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.CLK)");
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered
         [5U])) {
        vlSelfRef.__VtrigSched_h029f269e__0.resume(
                                                   "@(negedge system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.clk_dly)");
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VactTriggered
         [4U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 6> &out, const VlUnpacked<QData/*63:0*/, 6> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((6U > n));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 6> &in);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___timing_commit(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtop___024root___timing_resume(vlSelf);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 6> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((6U > n));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 6> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("system_top.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("system_top.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("system_top.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.flash_miso & 0xfeU)))) {
        Verilated::overWidthError("flash_miso");
    }
    if (VL_UNLIKELY(((vlSelfRef.bypass_en & 0xfeU)))) {
        Verilated::overWidthError("bypass_en");
    }
    if (VL_UNLIKELY(((vlSelfRef.host_mosi & 0xfeU)))) {
        Verilated::overWidthError("host_mosi");
    }
}
#endif  // VL_DEBUG

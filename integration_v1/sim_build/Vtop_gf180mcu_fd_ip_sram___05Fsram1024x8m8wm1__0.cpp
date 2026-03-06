// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.WEN = 0U;
    vlSelfRef.VSS = 0U;
    vlSelfRef.VDD = 0U;
    vlSelfRef.ntf_Tcyc = 0U;
    vlSelfRef.ntf_Tckh = 0U;
    vlSelfRef.ntf_Tckl = 0U;
    vlSelfRef.ntf_tcs = 0U;
    vlSelfRef.ntf_tas = 0U;
    vlSelfRef.ntf_tds = 0U;
    vlSelfRef.ntf_tws = 0U;
    vlSelfRef.ntf_twis = 0U;
    vlSelfRef.ntf_tch = 0U;
    vlSelfRef.ntf_tah = 0U;
    vlSelfRef.ntf_tdh = 0U;
    vlSelfRef.ntf_twh = 0U;
    vlSelfRef.ntf_twih = 0U;
    vlSelfRef.marked_a = 0U;
    vlSelfRef.qo_reg = 0U;
    vlSelfRef.clk_dly = 0U;
    vlSelfRef.write_flag_dly = 0U;
    vlSelfRef.read_flag_dly = 0U;
    vlSelfRef.cen_dly = 0U;
    vlSelfRef.cen_fell = 0U;
    vlSelfRef.cen_not_rst = 0U;
    vlSelfRef.i = 0U;
    while (VL_GTS_III(32, 0x00000400U, vlSelfRef.i)) {
        vlSelfRef.mem[(0x000003ffU & vlSelfRef.i)] = 0U;
        vlSelfRef.i = ((IData)(1U) + vlSelfRef.i);
    }
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hc3ccf441__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h3b5fcd9c__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h3b5fcd9c__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4879b73b__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hb0bd7f62__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hb0bd7f62__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd7b21910__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                332);
        vlSelfRef.__Vintraval_hd9f3b4db__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                332);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hd9f3b4db__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd7b21910__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                331);
        vlSelfRef.__Vintraval_hed184258__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                331);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_hed184258__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_heacc708f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                444);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                445);
        vlSelfRef.ntf_tcs = 0U;
        vlSelfRef.ntf_tas = 0U;
        vlSelfRef.ntf_tds = 0U;
        vlSelfRef.ntf_tws = 0U;
        vlSelfRef.ntf_twis = 0U;
        vlSelfRef.ntf_tch = 0U;
        vlSelfRef.ntf_tah = 0U;
        vlSelfRef.ntf_tdh = 0U;
        vlSelfRef.ntf_twh = 0U;
        vlSelfRef.ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_heacc708f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                363);
        if ((1U & ((~ (IData)(vlSelfRef.no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.no_ck_viol))))) {
            if (vlSelfRef.write_flag_dly) {
                if (vlSelfRef.ntf_twh) {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = vlSelfRef.mem[vlSelfRef.marked_a];
                } else {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = (vlSelfRef.mem[vlSelfRef.marked_a] 
                           ^ (IData)(vlSelfRef.cdx));
                    vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                        ^ (IData)(vlSelfRef.cdx));
                }
            } else if (vlSelfRef.read_flag_dly) {
                vlSelfRef.qo_reg = 0U;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    379);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        } else {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    391);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        }
    }
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.we = (0x000000ffU & (~ (IData)(vlSelfRef.WEN)));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.CLK = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
    vlSelfRef.clk_dly = vlSelfRef.CLK;
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ntf_tcs = 0U;
    vlSelfRef.ntf_tas = 0U;
    vlSelfRef.ntf_tds = 0U;
    vlSelfRef.ntf_tws = 0U;
    vlSelfRef.ntf_twis = 0U;
    vlSelfRef.ntf_tch = 0U;
    vlSelfRef.ntf_tah = 0U;
    vlSelfRef.ntf_tdh = 0U;
    vlSelfRef.ntf_twh = 0U;
    vlSelfRef.ntf_twih = 0U;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((~ (IData)(vlSelfRef.CEN)) & (~ (IData)(vlSelfRef.cen_fell))) 
               & (~ (IData)(vlSelfRef.cen_not_rst))))) {
        vlSelfRef.cen_not_rst = 1U;
    }
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[0].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.cen_fell) {
        if (VL_UNLIKELY((vlSelfRef.ntf_tcs))) {
            VL_WRITEF_NX("---- ERROR: CEN setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_tas))) {
            VL_WRITEF_NX("---- ERROR: A setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_tds))) {
            VL_WRITEF_NX("---- ERROR: D setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_tws))) {
            VL_WRITEF_NX("---- ERROR: GWEN setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_twis))) {
            VL_WRITEF_NX("---- ERROR: WEN setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_tch))) {
            VL_WRITEF_NX("---- ERROR: CEN hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_tah))) {
            VL_WRITEF_NX("---- ERROR: A hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_tdh))) {
            VL_WRITEF_NX("---- ERROR: D hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_twh))) {
            VL_WRITEF_NX("---- ERROR: GWEN hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_twih))) {
            VL_WRITEF_NX("---- ERROR: WEN hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_Tcyc))) {
            VL_WRITEF_NX("---- ERROR: CLK period violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_Tckh))) {
            VL_WRITEF_NX("---- ERROR: CLK pulse width high violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.ntf_Tckl))) {
            VL_WRITEF_NX("---- ERROR: CLK pulse width low violation! ----\n",0);
        }
    }
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cdx = 0U;
    vlSelfRef.marked_a = vlSelfRef.A;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.write_flag) {
        if (vlSelfRef.no_st_viol) {
            vlSelfRef.mem[vlSelfRef.A] = vlSelfRef.cd5;
        } else {
            vlSelfRef.mem[vlSelfRef.A] = (vlSelfRef.mem
                                          [vlSelfRef.A] 
                                          ^ (IData)(vlSelfRef.cdx));
            vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                ^ (IData)(vlSelfRef.cdx));
        }
    } else if (vlSelfRef.read_flag) {
        vlSelfRef.qo_reg = ((IData)(vlSelfRef.no_st_viol)
                             ? vlSelfRef.mem[vlSelfRef.marked_a]
                             : 0U);
    }
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.Q = vlSelfRef.qo_reg;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__9(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__10(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h213df6f7__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_he1cca8ac__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_he1cca8ac__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h655c0289__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h4ae63bf0__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h4ae63bf0__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h3e379aec__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                332);
        vlSelfRef.__Vintraval_h9dc1ddd1__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                332);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h9dc1ddd1__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h3e379aec__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                331);
        vlSelfRef.__Vintraval_h94bd8d15__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                331);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h94bd8d15__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4ba798b0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                444);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                445);
        vlSelfRef.ntf_tcs = 0U;
        vlSelfRef.ntf_tas = 0U;
        vlSelfRef.ntf_tds = 0U;
        vlSelfRef.ntf_tws = 0U;
        vlSelfRef.ntf_twis = 0U;
        vlSelfRef.ntf_tch = 0U;
        vlSelfRef.ntf_tah = 0U;
        vlSelfRef.ntf_tdh = 0U;
        vlSelfRef.ntf_twh = 0U;
        vlSelfRef.ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4ba798b0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                363);
        if ((1U & ((~ (IData)(vlSelfRef.no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.no_ck_viol))))) {
            if (vlSelfRef.write_flag_dly) {
                if (vlSelfRef.ntf_twh) {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = vlSelfRef.mem[vlSelfRef.marked_a];
                } else {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = (vlSelfRef.mem[vlSelfRef.marked_a] 
                           ^ (IData)(vlSelfRef.cdx));
                    vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                        ^ (IData)(vlSelfRef.cdx));
                }
            } else if (vlSelfRef.read_flag_dly) {
                vlSelfRef.qo_reg = 0U;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    379);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        } else {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    391);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        }
    }
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.we = (0x000000ffU & (~ (IData)(vlSelfRef.WEN)));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.CLK = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
    vlSelfRef.clk_dly = vlSelfRef.CLK;
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[0].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h68d1e6e1__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h7c35743b__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h7c35743b__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hdb9247f0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_ha28a4b79__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_ha28a4b79__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h58490f8f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                332);
        vlSelfRef.__Vintraval_hba51efb5__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                332);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hba51efb5__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h58490f8f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                331);
        vlSelfRef.__Vintraval_h539c1c41__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                331);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h539c1c41__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h98833698__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                444);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                445);
        vlSelfRef.ntf_tcs = 0U;
        vlSelfRef.ntf_tas = 0U;
        vlSelfRef.ntf_tds = 0U;
        vlSelfRef.ntf_tws = 0U;
        vlSelfRef.ntf_twis = 0U;
        vlSelfRef.ntf_tch = 0U;
        vlSelfRef.ntf_tah = 0U;
        vlSelfRef.ntf_tdh = 0U;
        vlSelfRef.ntf_twh = 0U;
        vlSelfRef.ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h98833698__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                363);
        if ((1U & ((~ (IData)(vlSelfRef.no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.no_ck_viol))))) {
            if (vlSelfRef.write_flag_dly) {
                if (vlSelfRef.ntf_twh) {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = vlSelfRef.mem[vlSelfRef.marked_a];
                } else {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = (vlSelfRef.mem[vlSelfRef.marked_a] 
                           ^ (IData)(vlSelfRef.cdx));
                    vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                        ^ (IData)(vlSelfRef.cdx));
                }
            } else if (vlSelfRef.read_flag_dly) {
                vlSelfRef.qo_reg = 0U;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    379);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        } else {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    391);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        }
    }
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.we = (0x000000ffU & (~ (IData)(vlSelfRef.WEN)));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.CLK = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
    vlSelfRef.clk_dly = vlSelfRef.CLK;
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[0].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb10b6336__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_hc7587398__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_hc7587398__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4f73c019__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_ha6bb0ae3__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_ha6bb0ae3__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hde2a4094__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                332);
        vlSelfRef.__Vintraval_hf4691aea__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                332);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hf4691aea__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hde2a4094__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                331);
        vlSelfRef.__Vintraval_h59dc93e4__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                331);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h59dc93e4__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h448d3669__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                444);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                445);
        vlSelfRef.ntf_tcs = 0U;
        vlSelfRef.ntf_tas = 0U;
        vlSelfRef.ntf_tds = 0U;
        vlSelfRef.ntf_tws = 0U;
        vlSelfRef.ntf_twis = 0U;
        vlSelfRef.ntf_tch = 0U;
        vlSelfRef.ntf_tah = 0U;
        vlSelfRef.ntf_tdh = 0U;
        vlSelfRef.ntf_twh = 0U;
        vlSelfRef.ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h448d3669__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                363);
        if ((1U & ((~ (IData)(vlSelfRef.no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.no_ck_viol))))) {
            if (vlSelfRef.write_flag_dly) {
                if (vlSelfRef.ntf_twh) {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = vlSelfRef.mem[vlSelfRef.marked_a];
                } else {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = (vlSelfRef.mem[vlSelfRef.marked_a] 
                           ^ (IData)(vlSelfRef.cdx));
                    vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                        ^ (IData)(vlSelfRef.cdx));
                }
            } else if (vlSelfRef.read_flag_dly) {
                vlSelfRef.qo_reg = 0U;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    379);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        } else {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    391);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        }
    }
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.we = (0x000000ffU & (~ (IData)(vlSelfRef.WEN)));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.CLK = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
    vlSelfRef.clk_dly = vlSelfRef.CLK;
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[1].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h394aab9d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h6bf62d92__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h6bf62d92__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_he4c023da__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hd4e52b8d__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hd4e52b8d__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hbbf7c1ec__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                332);
        vlSelfRef.__Vintraval_h629dff74__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                332);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h629dff74__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hbbf7c1ec__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                331);
        vlSelfRef.__Vintraval_h53e31b1d__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                331);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h53e31b1d__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h70ba2307__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                444);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                445);
        vlSelfRef.ntf_tcs = 0U;
        vlSelfRef.ntf_tas = 0U;
        vlSelfRef.ntf_tds = 0U;
        vlSelfRef.ntf_tws = 0U;
        vlSelfRef.ntf_twis = 0U;
        vlSelfRef.ntf_tch = 0U;
        vlSelfRef.ntf_tah = 0U;
        vlSelfRef.ntf_tdh = 0U;
        vlSelfRef.ntf_twh = 0U;
        vlSelfRef.ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h70ba2307__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                363);
        if ((1U & ((~ (IData)(vlSelfRef.no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.no_ck_viol))))) {
            if (vlSelfRef.write_flag_dly) {
                if (vlSelfRef.ntf_twh) {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = vlSelfRef.mem[vlSelfRef.marked_a];
                } else {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = (vlSelfRef.mem[vlSelfRef.marked_a] 
                           ^ (IData)(vlSelfRef.cdx));
                    vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                        ^ (IData)(vlSelfRef.cdx));
                }
            } else if (vlSelfRef.read_flag_dly) {
                vlSelfRef.qo_reg = 0U;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    379);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        } else {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    391);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        }
    }
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.we = (0x000000ffU & (~ (IData)(vlSelfRef.WEN)));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.CLK = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
    vlSelfRef.clk_dly = vlSelfRef.CLK;
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[1].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h0e4da9dd__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h4ada1fc3__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h4ada1fc3__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h0fa7e2ac__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h0bab7184__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h0bab7184__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h0fad9559__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                332);
        vlSelfRef.__Vintraval_h46bf310d__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                332);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h46bf310d__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h0fad9559__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                331);
        vlSelfRef.__Vintraval_h39f8eaab__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                331);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h39f8eaab__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_he1ce4af5__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                444);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                445);
        vlSelfRef.ntf_tcs = 0U;
        vlSelfRef.ntf_tas = 0U;
        vlSelfRef.ntf_tds = 0U;
        vlSelfRef.ntf_tws = 0U;
        vlSelfRef.ntf_twis = 0U;
        vlSelfRef.ntf_tch = 0U;
        vlSelfRef.ntf_tah = 0U;
        vlSelfRef.ntf_tdh = 0U;
        vlSelfRef.ntf_twh = 0U;
        vlSelfRef.ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_he1ce4af5__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                363);
        if ((1U & ((~ (IData)(vlSelfRef.no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.no_ck_viol))))) {
            if (vlSelfRef.write_flag_dly) {
                if (vlSelfRef.ntf_twh) {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = vlSelfRef.mem[vlSelfRef.marked_a];
                } else {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = (vlSelfRef.mem[vlSelfRef.marked_a] 
                           ^ (IData)(vlSelfRef.cdx));
                    vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                        ^ (IData)(vlSelfRef.cdx));
                }
            } else if (vlSelfRef.read_flag_dly) {
                vlSelfRef.qo_reg = 0U;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    379);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        } else {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    391);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        }
    }
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.we = (0x000000ffU & (~ (IData)(vlSelfRef.WEN)));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.CLK = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
    vlSelfRef.clk_dly = vlSelfRef.CLK;
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[1].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd1f38e85__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h4fc14d6f__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h4fc14d6f__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h021af753__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_he1793c59__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_he1793c59__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h6ff48385__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                332);
        vlSelfRef.__Vintraval_h7b582ada__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                332);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h7b582ada__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h6ff48385__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                331);
        vlSelfRef.__Vintraval_h0526b7c3__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                331);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h0526b7c3__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hfb6916ba__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                444);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                445);
        vlSelfRef.ntf_tcs = 0U;
        vlSelfRef.ntf_tas = 0U;
        vlSelfRef.ntf_tds = 0U;
        vlSelfRef.ntf_tws = 0U;
        vlSelfRef.ntf_twis = 0U;
        vlSelfRef.ntf_tch = 0U;
        vlSelfRef.ntf_tah = 0U;
        vlSelfRef.ntf_tdh = 0U;
        vlSelfRef.ntf_twh = 0U;
        vlSelfRef.ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hfb6916ba__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                363);
        if ((1U & ((~ (IData)(vlSelfRef.no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.no_ck_viol))))) {
            if (vlSelfRef.write_flag_dly) {
                if (vlSelfRef.ntf_twh) {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = vlSelfRef.mem[vlSelfRef.marked_a];
                } else {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = (vlSelfRef.mem[vlSelfRef.marked_a] 
                           ^ (IData)(vlSelfRef.cdx));
                    vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                        ^ (IData)(vlSelfRef.cdx));
                }
            } else if (vlSelfRef.read_flag_dly) {
                vlSelfRef.qo_reg = 0U;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    379);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        } else {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    391);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        }
    }
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.we = (0x000000ffU & (~ (IData)(vlSelfRef.WEN)));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.CLK = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
    vlSelfRef.clk_dly = vlSelfRef.CLK;
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[2].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h493a6d68__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_hb7a6c3f7__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_hb7a6c3f7__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_ha581e8af__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hbe675abf__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hbe675abf__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h512b3bff__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                332);
        vlSelfRef.__Vintraval_ha83ed4ed__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                332);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_ha83ed4ed__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h512b3bff__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                331);
        vlSelfRef.__Vintraval_h9c51b0a6__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                331);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h9c51b0a6__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hf8f64219__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                444);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                445);
        vlSelfRef.ntf_tcs = 0U;
        vlSelfRef.ntf_tas = 0U;
        vlSelfRef.ntf_tds = 0U;
        vlSelfRef.ntf_tws = 0U;
        vlSelfRef.ntf_twis = 0U;
        vlSelfRef.ntf_tch = 0U;
        vlSelfRef.ntf_tah = 0U;
        vlSelfRef.ntf_tdh = 0U;
        vlSelfRef.ntf_twh = 0U;
        vlSelfRef.ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hf8f64219__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                363);
        if ((1U & ((~ (IData)(vlSelfRef.no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.no_ck_viol))))) {
            if (vlSelfRef.write_flag_dly) {
                if (vlSelfRef.ntf_twh) {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = vlSelfRef.mem[vlSelfRef.marked_a];
                } else {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = (vlSelfRef.mem[vlSelfRef.marked_a] 
                           ^ (IData)(vlSelfRef.cdx));
                    vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                        ^ (IData)(vlSelfRef.cdx));
                }
            } else if (vlSelfRef.read_flag_dly) {
                vlSelfRef.qo_reg = 0U;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    379);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        } else {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    391);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        }
    }
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.we = (0x000000ffU & (~ (IData)(vlSelfRef.WEN)));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.CLK = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
    vlSelfRef.clk_dly = vlSelfRef.CLK;
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[2].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h655389c6__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h139f9dbd__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h139f9dbd__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h987ae714__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h639012dc__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h639012dc__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hcff63e74__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                332);
        vlSelfRef.__Vintraval_h927e6592__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                332);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h927e6592__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hcff63e74__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                331);
        vlSelfRef.__Vintraval_hb1fe2520__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                331);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_hb1fe2520__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h029f269e__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                444);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                445);
        vlSelfRef.ntf_tcs = 0U;
        vlSelfRef.ntf_tas = 0U;
        vlSelfRef.ntf_tds = 0U;
        vlSelfRef.ntf_tws = 0U;
        vlSelfRef.ntf_twis = 0U;
        vlSelfRef.ntf_tch = 0U;
        vlSelfRef.ntf_tah = 0U;
        vlSelfRef.ntf_tdh = 0U;
        vlSelfRef.ntf_twh = 0U;
        vlSelfRef.ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h029f269e__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge system_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                363);
        if ((1U & ((~ (IData)(vlSelfRef.no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.no_ck_viol))))) {
            if (vlSelfRef.write_flag_dly) {
                if (vlSelfRef.ntf_twh) {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = vlSelfRef.mem[vlSelfRef.marked_a];
                } else {
                    vlSelfRef.mem[vlSelfRef.marked_a] 
                        = (vlSelfRef.mem[vlSelfRef.marked_a] 
                           ^ (IData)(vlSelfRef.cdx));
                    vlSelfRef.qo_reg = ((IData)(vlSelfRef.qo_reg) 
                                        ^ (IData)(vlSelfRef.cdx));
                }
            } else if (vlSelfRef.read_flag_dly) {
                vlSelfRef.qo_reg = 0U;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    379);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        } else {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    391);
            vlSelfRef.ntf_tch = 0U;
            vlSelfRef.ntf_tah = 0U;
            vlSelfRef.ntf_tdh = 0U;
            vlSelfRef.ntf_twh = 0U;
            vlSelfRef.ntf_twih = 0U;
            vlSelfRef.ntf_Tcyc = 0U;
            vlSelfRef.ntf_Tckh = 0U;
            vlSelfRef.ntf_Tckl = 0U;
        }
    }
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.we = (0x000000ffU & (~ (IData)(vlSelfRef.WEN)));
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.CLK = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
    vlSelfRef.clk_dly = vlSelfRef.CLK;
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nsystem_top.noc_mesh.rows[2].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.system_top__DOT__noc_mesh__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

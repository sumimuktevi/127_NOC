// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root____VbeforeTrig_h4949e8fe__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h4949e8fe__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CEN)");
        co_await vlSymsp->TOP.__VtrigSched_h4949e8fe__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h41852b86__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h41852b86__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_hf30a75fb__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hf30a75fb__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.cen_flag)");
        co_await vlSymsp->TOP.__VtrigSched_hf30a75fb__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h79309687__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h79309687__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_hbe09adf6__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hbe09adf6__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_hbe09adf6__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_hb10a1ac2__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hb10a1ac2__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hbe09adf6__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_hbe09adf6__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h25bf2e72__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h25bf2e72__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hbe09adf6__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_hbe09adf6__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h40a745c8__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h40a745c8__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h8a00da87__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h8a00da87__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h8a00da87__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                439);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                440);
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
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h8a00da87__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h8a00da87__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                359);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    375);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    387);
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
    co_return;
}

void Vtop___024root____VbeforeTrig_hb2a8c2dc__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hb2a8c2dc__0((&vlSymsp->TOP), 
                                                   "@(posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tws)");
        co_await vlSymsp->TOP.__VtrigSched_hb2a8c2dc__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                400);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    406);
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
    co_return;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.Q = vlSelfRef.qo_reg;
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((~ (IData)(vlSelfRef.CEN)) & (~ (IData)(vlSelfRef.cen_fell))) 
               & (~ (IData)(vlSelfRef.cen_not_rst))))) {
        vlSelfRef.cen_not_rst = 1U;
    }
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[0].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[0].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cdx = 0U;
    vlSelfRef.marked_a = vlSelfRef.A;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.no_hd_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tch) 
                                     | ((IData)(vlSelfRef.ntf_tah) 
                                        | ((IData)(vlSelfRef.ntf_tdh) 
                                           | ((IData)(vlSelfRef.ntf_twh) 
                                              | (IData)(vlSelfRef.ntf_twih)))))));
    vlSelfRef.no_st_viol = (1U & (~ ((IData)(vlSelfRef.ntf_tcs) 
                                     | ((IData)(vlSelfRef.ntf_tas) 
                                        | ((IData)(vlSelfRef.ntf_tds) 
                                           | ((IData)(vlSelfRef.ntf_twis) 
                                              | (IData)(vlSelfRef.ntf_tws)))))));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.Q = vlSelfRef.qo_reg;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__9(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst\n"); );
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

void Vtop___024root____VbeforeTrig_h4b2d107d__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h4b2d107d__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CEN)");
        co_await vlSymsp->TOP.__VtrigSched_h4b2d107d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_hf3959421__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_hf3959421__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h8c6af4f8__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h8c6af4f8__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.cen_flag)");
        co_await vlSymsp->TOP.__VtrigSched_h8c6af4f8__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h66f6d907__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h66f6d907__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_ha8d21c53__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_ha8d21c53__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_ha8d21c53__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h18c44b11__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h18c44b11__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_ha8d21c53__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_ha8d21c53__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h1d014f68__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h1d014f68__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_ha8d21c53__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_ha8d21c53__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h64df0bc8__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h64df0bc8__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h3595a461__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h3595a461__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h3595a461__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                439);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                440);
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
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h3595a461__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h3595a461__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                359);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    375);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    387);
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
    co_return;
}

void Vtop___024root____VbeforeTrig_hd5c0a705__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hd5c0a705__0((&vlSymsp->TOP), 
                                                   "@(posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tws)");
        co_await vlSymsp->TOP.__VtrigSched_hd5c0a705__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                400);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    406);
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
    co_return;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[0].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[0].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop___024root____VbeforeTrig_h8d8ee25f__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h8d8ee25f__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CEN)");
        co_await vlSymsp->TOP.__VtrigSched_h8d8ee25f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h2b3c50b3__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h2b3c50b3__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h45ef1562__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h45ef1562__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.cen_flag)");
        co_await vlSymsp->TOP.__VtrigSched_h45ef1562__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hb8f6b2c0__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hb8f6b2c0__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_hbb7f0d25__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hbb7f0d25__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_hbb7f0d25__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h809e2306__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h809e2306__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hbb7f0d25__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_hbb7f0d25__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_hc371d31b__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_hc371d31b__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hbb7f0d25__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_hbb7f0d25__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_hf747e08f__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_hf747e08f__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_hed9ffd5b__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hed9ffd5b__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_hed9ffd5b__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                439);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                440);
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
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hed9ffd5b__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_hed9ffd5b__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                359);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    375);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    387);
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
    co_return;
}

void Vtop___024root____VbeforeTrig_h66969ef6__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h66969ef6__0((&vlSymsp->TOP), 
                                                   "@(posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tws)");
        co_await vlSymsp->TOP.__VtrigSched_h66969ef6__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                400);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    406);
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
    co_return;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[0].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[0].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop___024root____VbeforeTrig_hcab6b0a3__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hcab6b0a3__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CEN)");
        co_await vlSymsp->TOP.__VtrigSched_hcab6b0a3__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_hf5b6492b__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_hf5b6492b__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h0e83b7e6__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h0e83b7e6__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.cen_flag)");
        co_await vlSymsp->TOP.__VtrigSched_h0e83b7e6__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h74583a2b__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h74583a2b__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h25ecab40__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h25ecab40__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h25ecab40__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h2938094b__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h2938094b__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h25ecab40__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h25ecab40__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h18e0dfb9__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h18e0dfb9__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h25ecab40__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h25ecab40__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h9dbf14fe__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h9dbf14fe__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h0f2ca335__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h0f2ca335__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h0f2ca335__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                439);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                440);
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
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h0f2ca335__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h0f2ca335__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                359);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    375);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    387);
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
    co_return;
}

void Vtop___024root____VbeforeTrig_h5af46c92__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h5af46c92__0((&vlSymsp->TOP), 
                                                   "@(posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tws)");
        co_await vlSymsp->TOP.__VtrigSched_h5af46c92__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                400);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    406);
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
    co_return;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[1].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[1].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop___024root____VbeforeTrig_hf0acb9df__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hf0acb9df__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CEN)");
        co_await vlSymsp->TOP.__VtrigSched_hf0acb9df__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_hf71e1088__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_hf71e1088__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_hbc15fac5__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hbc15fac5__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.cen_flag)");
        co_await vlSymsp->TOP.__VtrigSched_hbc15fac5__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hf4d78089__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hf4d78089__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h7013ceab__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h7013ceab__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h7013ceab__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h01043a23__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h01043a23__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h7013ceab__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h7013ceab__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_he4ef2e27__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_he4ef2e27__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h7013ceab__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h7013ceab__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h67974164__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h67974164__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h3e67ff77__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h3e67ff77__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h3e67ff77__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                439);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                440);
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
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h3e67ff77__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h3e67ff77__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                359);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    375);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    387);
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
    co_return;
}

void Vtop___024root____VbeforeTrig_h19c711bf__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h19c711bf__0((&vlSymsp->TOP), 
                                                   "@(posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tws)");
        co_await vlSymsp->TOP.__VtrigSched_h19c711bf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                400);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    406);
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
    co_return;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[1].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[1].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop___024root____VbeforeTrig_h4221c6e7__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h4221c6e7__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CEN)");
        co_await vlSymsp->TOP.__VtrigSched_h4221c6e7__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_he991c22f__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_he991c22f__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_had473856__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_had473856__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.cen_flag)");
        co_await vlSymsp->TOP.__VtrigSched_had473856__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h7005a6ef__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h7005a6ef__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_hcdb2aa59__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hcdb2aa59__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_hcdb2aa59__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h382ba90e__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h382ba90e__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hcdb2aa59__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_hcdb2aa59__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h92249f97__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h92249f97__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hcdb2aa59__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_hcdb2aa59__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_hbbff48ac__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_hbbff48ac__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h37c1397f__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h37c1397f__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h37c1397f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                439);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                440);
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
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h37c1397f__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h37c1397f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                359);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    375);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    387);
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
    co_return;
}

void Vtop___024root____VbeforeTrig_hea3a45a9__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hea3a45a9__0((&vlSymsp->TOP), 
                                                   "@(posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tws)");
        co_await vlSymsp->TOP.__VtrigSched_hea3a45a9__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                400);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    406);
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
    co_return;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[1].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[1].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop___024root____VbeforeTrig_he6f8e1a3__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_he6f8e1a3__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CEN)");
        co_await vlSymsp->TOP.__VtrigSched_he6f8e1a3__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h5a23a508__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h5a23a508__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h78dba416__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h78dba416__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.cen_flag)");
        co_await vlSymsp->TOP.__VtrigSched_h78dba416__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h0360147b__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h0360147b__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h90ec0981__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h90ec0981__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h90ec0981__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h316ba6b7__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h316ba6b7__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h90ec0981__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h90ec0981__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h30ca2840__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h30ca2840__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h90ec0981__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h90ec0981__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h8b9042de__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h8b9042de__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h295ecb2f__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h295ecb2f__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h295ecb2f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                439);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                440);
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
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h295ecb2f__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h295ecb2f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                359);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    375);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    387);
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
    co_return;
}

void Vtop___024root____VbeforeTrig_h1b730feb__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h1b730feb__0((&vlSymsp->TOP), 
                                                   "@(posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tws)");
        co_await vlSymsp->TOP.__VtrigSched_h1b730feb__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                400);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    406);
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
    co_return;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[2].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[2].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop___024root____VbeforeTrig_h1c8e6c30__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h1c8e6c30__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CEN)");
        co_await vlSymsp->TOP.__VtrigSched_h1c8e6c30__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h42515529__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h42515529__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_ha289cc0b__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_ha289cc0b__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.cen_flag)");
        co_await vlSymsp->TOP.__VtrigSched_ha289cc0b__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h2077df6d__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h2077df6d__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_haf237b42__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_haf237b42__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_haf237b42__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h35b14be4__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h35b14be4__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_haf237b42__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_haf237b42__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h4ade8445__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h4ade8445__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_haf237b42__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_haf237b42__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_hc425221e__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_hc425221e__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_ha7c2c8ba__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_ha7c2c8ba__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_ha7c2c8ba__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                439);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                440);
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
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_ha7c2c8ba__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_ha7c2c8ba__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                359);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    375);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    387);
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
    co_return;
}

void Vtop___024root____VbeforeTrig_h862a95b8__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h862a95b8__0((&vlSymsp->TOP), 
                                                   "@(posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tws)");
        co_await vlSymsp->TOP.__VtrigSched_h862a95b8__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                400);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    406);
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
    co_return;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[2].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[2].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop___024root____VbeforeTrig_hb8252f9b__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_hb8252f9b__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CEN)");
        co_await vlSymsp->TOP.__VtrigSched_hb8252f9b__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_hf0f3cff7__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_hf0f3cff7__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h5e384a36__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h5e384a36__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.cen_flag)");
        co_await vlSymsp->TOP.__VtrigSched_h5e384a36__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hcd52bc78__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hcd52bc78__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h6ee59175__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h6ee59175__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h6ee59175__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h65bd71ba__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h65bd71ba__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h6ee59175__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h6ee59175__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_hf2722b37__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_hf2722b37__0;
    }
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h6ee59175__0((&vlSymsp->TOP), 
                                                   "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CLK)");
        co_await vlSymsp->TOP.__VtrigSched_h6ee59175__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_hba3bcfaa__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_hba3bcfaa__0;
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_h6cab224e__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h6cab224e__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h6cab224e__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                439);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                440);
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
    co_return;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h6cab224e__0((&vlSymsp->TOP), 
                                                   "@(negedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.clk_dly)");
        co_await vlSymsp->TOP.__VtrigSched_h6cab224e__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                359);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    375);
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
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    387);
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
    co_return;
}

void Vtop___024root____VbeforeTrig_h6def2f7f__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtop___024root____VbeforeTrig_h6def2f7f__0((&vlSymsp->TOP), 
                                                   "@(posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tws)");
        co_await vlSymsp->TOP.__VtrigSched_h6def2f7f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                400);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                    406);
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
    co_return;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[2].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[2].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

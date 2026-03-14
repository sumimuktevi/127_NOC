// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h90514d06__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h64540f0b__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h64540f0b__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_he49828b4__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hba1301e0__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hba1301e0__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h5a39e086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h3d1b3f67__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h3d1b3f67__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h5a39e086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h0bef7dc4__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h0bef7dc4__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h5a39e086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h169f2855__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h169f2855__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h47932e5f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h47932e5f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hded0e516__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_tah or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_tas or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_tch or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_tcs or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_tdh or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_tds or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_twh or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_twih or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_twis or posedge top.mesh_inst.rows[0].cols[0].tile_inst.sram_inst.ntf_tws)", 
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
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.CLK = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((~ (IData)(vlSelfRef.CEN)) & (~ (IData)(vlSelfRef.cen_fell))) 
               & (~ (IData)(vlSelfRef.cen_not_rst))))) {
        vlSelfRef.cen_not_rst = 1U;
    }
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___act_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[0].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[0].cols[0].tile_inst.sram_inst ---------\n",0,
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cdx = 0U;
    vlSelfRef.marked_a = vlSelfRef.A;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.Q = vlSelfRef.qo_reg;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__9(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__10(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst\n"); );
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb055beca__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h1fe51221__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h1fe51221__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h0a758073__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h976e9f20__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h976e9f20__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hc54cf1ad__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_haade853a__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_haade853a__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hc54cf1ad__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_he2a906ee__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_he2a906ee__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hc54cf1ad__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h68841747__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h68841747__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb3c49020__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb3c49020__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hf71fd5c5__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_tah or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_tas or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_tch or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_tcs or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_tdh or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_tds or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_twh or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_twih or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_twis or posedge top.mesh_inst.rows[0].cols[1].tile_inst.sram_inst.ntf_tws)", 
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
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.CLK = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[0].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[0].cols[1].tile_inst.sram_inst ---------\n",0,
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h9a4e134f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h0cabcd0c__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h0cabcd0c__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h5cf0f07c__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h47a52208__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h47a52208__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb9fdf702__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h781c88d5__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h781c88d5__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb9fdf702__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_hb1cf9cfa__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_hb1cf9cfa__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb9fdf702__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h003c33fa__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h003c33fa__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h3a208dcd__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h3a208dcd__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_ha2d73b60__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_tah or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_tas or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_tch or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_tcs or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_tdh or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_tds or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_twh or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_twih or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_twis or posedge top.mesh_inst.rows[0].cols[2].tile_inst.sram_inst.ntf_tws)", 
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
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.CLK = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[0].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[0].cols[2].tile_inst.sram_inst ---------\n",0,
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hafa77a61__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h26f19c29__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h26f19c29__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h385c9362__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h5f126466__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h5f126466__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd9be6975__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_hdf9c3958__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hdf9c3958__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd9be6975__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_hf76e55d2__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_hf76e55d2__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd9be6975__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h5f05108d__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h5f05108d__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h6c758dc4__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h6c758dc4__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd1a11e33__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_tah or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_tas or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_tch or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_tcs or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_tdh or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_tds or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_twh or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_twih or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_twis or posedge top.mesh_inst.rows[1].cols[0].tile_inst.sram_inst.ntf_tws)", 
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
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.CLK = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[1].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[1].cols[0].tile_inst.sram_inst ---------\n",0,
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h9ae27a40__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h57734d2b__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h57734d2b__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h15ef2569__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hda17ec5b__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hda17ec5b__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h34cc90ab__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_h4aea692e__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h4aea692e__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h34cc90ab__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h236a0ccc__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h236a0ccc__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h34cc90ab__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h3837dd26__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h3837dd26__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h27d83e6a__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h27d83e6a__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h91291dd1__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_tah or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_tas or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_tch or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_tcs or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_tdh or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_tds or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_twh or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_twih or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_twis or posedge top.mesh_inst.rows[1].cols[1].tile_inst.sram_inst.ntf_tws)", 
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
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.CLK = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[1].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[1].cols[1].tile_inst.sram_inst ---------\n",0,
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hc3bff502__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h4af255d8__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h4af255d8__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h15972c49__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h8ec64077__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h8ec64077__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hda4da292__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_hbe394d53__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hbe394d53__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hda4da292__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_had27ea80__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_had27ea80__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hda4da292__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h64a81f5b__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h64a81f5b__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h51ed70ba__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h51ed70ba__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4ba7dd05__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_tah or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_tas or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_tch or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_tcs or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_tdh or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_tds or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_twh or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_twih or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_twis or posedge top.mesh_inst.rows[1].cols[2].tile_inst.sram_inst.ntf_tws)", 
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
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.CLK = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[1].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[1].cols[2].tile_inst.sram_inst ---------\n",0,
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb87b19c7__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h7030be43__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h7030be43__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h1c83c3c6__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hb630eeb0__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hb630eeb0__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h069ea1d7__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_ha7a83374__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_ha7a83374__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h069ea1d7__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h37258438__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h37258438__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h069ea1d7__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_hb4f6411e__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_hb4f6411e__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h322c8f23__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h322c8f23__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h03f84eef__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_tah or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_tas or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_tch or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_tcs or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_tdh or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_tds or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_twh or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_twih or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_twis or posedge top.mesh_inst.rows[2].cols[0].tile_inst.sram_inst.ntf_tws)", 
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
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.CLK = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[2].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[2].cols[0].tile_inst.sram_inst ---------\n",0,
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h8b6a0ce5__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h8476eee8__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h8476eee8__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hc15443ea__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h10902c28__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h10902c28__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd58c46db__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_hf419bd6d__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hf419bd6d__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd58c46db__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h22ab7d8d__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h22ab7d8d__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd58c46db__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_hadda94fa__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_hadda94fa__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4a861312__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4a861312__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h2d3686d7__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_tah or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_tas or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_tch or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_tcs or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_tdh or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_tds or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_twh or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_twih or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_twis or posedge top.mesh_inst.rows[2].cols[1].tile_inst.sram_inst.ntf_tws)", 
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
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.CLK = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[2].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[2].cols[1].tile_inst.sram_inst ---------\n",0,
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h06a92acf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h50e3d920__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h50e3d920__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h3f8a5a60__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hdb474428__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hdb474428__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h957dbd07__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                328);
        vlSelfRef.__Vintraval_he6d15efd__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                328);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_he6d15efd__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h957dbd07__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                327);
        vlSelfRef.__Vintraval_h782598e2__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                327);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h782598e2__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h957dbd07__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                                326);
        vlSelfRef.__Vintraval_h7a705ca3__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                326);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h7a705ca3__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hcedda1a6__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hcedda1a6__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.clk_dly)", 
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
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___eval_initial__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h8194abe7__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_tah or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_tas or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_tch or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_tcs or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_tdh or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_tds or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_twh or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_twih or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_twis or posedge top.mesh_inst.rows[2].cols[2].tile_inst.sram_inst.ntf_tws)", 
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
    co_return;}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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
    vlSelfRef.CLK = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.__VdfgRegularize_hefcf2c13_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                                & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = vlSelfRef.__VdfgRegularize_hefcf2c13_0_0;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___ico_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.read_flag = ((IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[2].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_sequent__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Ntop.mesh_inst.rows[2].cols[2].tile_inst.sram_inst ---------\n",0,
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_active)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_write)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1___nba_comb__TOP__top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.top__DOT__mesh_inst__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hf416ae29__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h4a4d3f7b__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h4a4d3f7b__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hd206e3ce__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h4d714d85__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h4d714d85__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h44c7105f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                320);
        vlSelfRef.__Vintraval_h9466889c__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                320);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h9466889c__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h44c7105f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                319);
        vlSelfRef.__Vintraval_hbcd67620__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                319);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_hbcd67620__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h44c7105f__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                318);
        vlSelfRef.__Vintraval_h6b973a35__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                318);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h6b973a35__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h33c5fa4e__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                431);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                432);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h33c5fa4e__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                351);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    367);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    379);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h5d37ba5b__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[0].cols[0].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                392);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    398);
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.VSS = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__vss_net;
    vlSelfRef.VDD = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__vdd_net;
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_cen)));
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___act_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___act_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___act_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___act_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((~ (IData)(vlSelfRef.CEN)) & (~ (IData)(vlSelfRef.cen_fell))) 
               & (~ (IData)(vlSelfRef.cen_not_rst))))) {
        vlSelfRef.cen_not_rst = 1U;
    }
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___act_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___act_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[0].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cdx = 0U;
    vlSelfRef.marked_a = vlSelfRef.A;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.no_ck_viol = (1U & (~ ((IData)(vlSelfRef.ntf_Tcyc) 
                                     | ((IData)(vlSelfRef.ntf_Tckh) 
                                        | (IData)(vlSelfRef.ntf_Tckl)))));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.Q = vlSelfRef.qo_reg;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_cen)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.WEN = 0U;
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
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.i)) {
        vlSelfRef.mem[(0x000000ffU & vlSelfRef.i)] = 0U;
        vlSelfRef.i = ((IData)(1U) + vlSelfRef.i);
    }
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h472bcf9c__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h541ac64a__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h541ac64a__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h676697ad__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h879c5562__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h879c5562__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h2d1fec37__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                320);
        vlSelfRef.__Vintraval_hf5aefd35__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                320);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hf5aefd35__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h2d1fec37__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                319);
        vlSelfRef.__Vintraval_h51c4c12f__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                319);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h51c4c12f__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h2d1fec37__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                318);
        vlSelfRef.__Vintraval_hb7d4ebc7__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                318);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_hb7d4ebc7__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hbc299b56__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                431);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                432);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hbc299b56__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                351);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    367);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    379);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hba7ce0af__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[0].cols[1].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                392);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    398);
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.VSS = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__vss_net;
    vlSelfRef.VDD = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__vdd_net;
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_cen)));
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[0].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_cen)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4095c225__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h2faa2e1a__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h2faa2e1a__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h411c109c__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_he489fecc__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_he489fecc__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h441cce2b__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                320);
        vlSelfRef.__Vintraval_h666cf47e__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                320);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h666cf47e__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h441cce2b__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                319);
        vlSelfRef.__Vintraval_ha0f027f6__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                319);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_ha0f027f6__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h441cce2b__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                318);
        vlSelfRef.__Vintraval_h63825e78__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                318);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h63825e78__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h494cf9fc__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                431);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                432);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h494cf9fc__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                351);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    367);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    379);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hf9e81190__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[0].cols[2].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                392);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    398);
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.VSS = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__vss_net;
    vlSelfRef.VDD = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__vdd_net;
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_cen)));
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[0].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_cen)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h44d7ac47__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h6ac41722__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h6ac41722__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb3bee31c__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_ha6788667__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_ha6788667__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hbb6c30e9__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                320);
        vlSelfRef.__Vintraval_hd0aef126__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                320);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hd0aef126__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hbb6c30e9__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                319);
        vlSelfRef.__Vintraval_h5244c191__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                319);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h5244c191__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hbb6c30e9__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                318);
        vlSelfRef.__Vintraval_hdc9caaa4__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                318);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_hdc9caaa4__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb34493d0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                431);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                432);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hb34493d0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                351);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    367);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    379);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h488ae307__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[1].cols[0].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                392);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    398);
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.VSS = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__vss_net;
    vlSelfRef.VDD = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__vdd_net;
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_cen)));
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[1].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_cen)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_ha3cb9c9c__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h885468c1__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h885468c1__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h1a2770eb__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h0116e17d__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h0116e17d__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_ha072c4a8__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                320);
        vlSelfRef.__Vintraval_hbcfa50b2__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                320);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hbcfa50b2__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_ha072c4a8__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                319);
        vlSelfRef.__Vintraval_h51a33acb__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                319);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h51a33acb__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_ha072c4a8__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                318);
        vlSelfRef.__Vintraval_ha98f660b__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                318);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_ha98f660b__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h98bed980__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                431);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                432);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h98bed980__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                351);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    367);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    379);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hca0aa37c__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[1].cols[1].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                392);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    398);
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.VSS = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__vss_net;
    vlSelfRef.VDD = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__vdd_net;
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_cen)));
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[1].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_cen)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h9c839ad9__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h6d404c11__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h6d404c11__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h53797c7c__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h2d9a9f11__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h2d9a9f11__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4394c098__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                320);
        vlSelfRef.__Vintraval_h355f200c__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                320);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h355f200c__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4394c098__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                319);
        vlSelfRef.__Vintraval_h09bb12df__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                319);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h09bb12df__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h4394c098__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                318);
        vlSelfRef.__Vintraval_hb2e8b799__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                318);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_hb2e8b799__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h50f71a06__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                431);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                432);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h50f71a06__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                351);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    367);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    379);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h8038f66d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[1].cols[2].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                392);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    398);
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.VSS = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__vss_net;
    vlSelfRef.VDD = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__vdd_net;
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_cen)));
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[1].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_cen)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h3aaae569__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_h1f73d33f__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_h1f73d33f__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_ha9832dce__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_h9e519176__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_h9e519176__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h249bada8__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                320);
        vlSelfRef.__Vintraval_hfc5dce8d__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                320);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_hfc5dce8d__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h249bada8__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                319);
        vlSelfRef.__Vintraval_hba6ecb0a__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                319);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_hba6ecb0a__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h249bada8__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                318);
        vlSelfRef.__Vintraval_h26c4758a__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                318);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h26c4758a__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h78d507c3__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                431);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                432);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h78d507c3__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                351);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    367);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    379);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h5c63c79e__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[2].cols[0].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                392);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    398);
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.VSS = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__vss_net;
    vlSelfRef.VDD = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__vdd_net;
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_cen)));
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[2].cols[0].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_cen)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h00fee9f3__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_hbcb89e4d__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_hbcb89e4d__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h7958bc8d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hf43d5b83__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hf43d5b83__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h75d7773a__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                320);
        vlSelfRef.__Vintraval_h93440f20__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                320);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h93440f20__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h75d7773a__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                319);
        vlSelfRef.__Vintraval_h6bf6a020__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                319);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h6bf6a020__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h75d7773a__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                318);
        vlSelfRef.__Vintraval_h83ccec8f__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                318);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h83ccec8f__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hcb940f20__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                431);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                432);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hcb940f20__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                351);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    367);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    379);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h288b0948__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[2].cols[1].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                392);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    398);
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.VSS = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__vss_net;
    vlSelfRef.VDD = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__vdd_net;
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_cen)));
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[2].cols[1].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_cen)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__final_a;
}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hbeee1b0c__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CEN)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                106);
        vlSelfRef.__Vintraval_hdc1ad977__0 = vlSelfRef.CEN;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                106);
        vlSelfRef.cen_dly = vlSelfRef.__Vintraval_hdc1ad977__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h68a9b35a__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.cen_flag)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                130);
        vlSelfRef.__Vintraval_hb7048b63__0 = vlSelfRef.cen_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                130);
        vlSelfRef.cen_flag_dly = vlSelfRef.__Vintraval_hb7048b63__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h51dca084__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                320);
        vlSelfRef.__Vintraval_h484c2083__0 = vlSelfRef.read_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                320);
        vlSelfRef.read_flag_dly = vlSelfRef.__Vintraval_h484c2083__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h51dca084__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                319);
        vlSelfRef.__Vintraval_h15649a68__0 = vlSelfRef.write_flag;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                319);
        vlSelfRef.write_flag_dly = vlSelfRef.__Vintraval_h15649a68__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h51dca084__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.CLK)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                318);
        vlSelfRef.__Vintraval_h97aca2db__0 = vlSelfRef.CLK;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                318);
        vlSelfRef.clk_dly = vlSelfRef.__Vintraval_h97aca2db__0;
    }
    co_return;}

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hec653951__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                431);
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                nullptr, 
                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                432);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_hec653951__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.clk_dly)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                351);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    367);
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
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    379);
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

VlCoroutine Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___eval_initial__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__Vtiming__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h34ef9fc8__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_Tckh or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_Tckl or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_Tcyc or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tah or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tas or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tch or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tcs or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tdh or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tds or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_twh or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_twih or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_twis or posedge mesh_3x3.rows[2].cols[2].tile_inst.sram_inst.ntf_tws)", 
                                                                "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                                392);
        if (vlSelfRef.cen_fell) {
            co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                                    nullptr, 
                                                    "gf180mcu_fd_ip_sram__sram256x8m8wm1.v", 
                                                    398);
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_0 = vlSelfRef.mem[0U];
    vlSelfRef.mem_1 = vlSelfRef.mem[1U];
    vlSelfRef.mem_2 = vlSelfRef.mem[2U];
    vlSelfRef.mem_3 = vlSelfRef.mem[3U];
    vlSelfRef.VSS = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__vss_net;
    vlSelfRef.VDD = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__vdd_net;
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CLK = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h980f65d1_0_0;
    __VdfgRegularize_h980f65d1_0_0 = 0;
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_cen)));
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
    vlSelfRef.cd2 = (vlSelfRef.mem[vlSelfRef.A] & (IData)(vlSelfRef.WEN));
    if (((~ (IData)(vlSelfRef.CEN)) & (IData)(vlSelfRef.cen_dly))) {
        vlSelfRef.cen_fell = 1U;
    }
    vlSelfRef.cd5 = ((IData)(vlSelfRef.cd2) | (IData)(vlSelfRef.cd4));
    __VdfgRegularize_h980f65d1_0_0 = ((~ (IData)(vlSelfRef.CEN)) 
                                      & (IData)(vlSelfRef.cen_fell));
    vlSelfRef.cen_flag = __VdfgRegularize_h980f65d1_0_0;
    vlSelfRef.read_flag = ((IData)(__VdfgRegularize_h980f65d1_0_0) 
                           & (IData)(vlSelfRef.GWEN));
    vlSelfRef.write_flag = ((~ ((IData)(vlSelfRef.GWEN) 
                                | (0x000000ffU == (IData)(vlSelfRef.WEN)))) 
                            & (IData)(__VdfgRegularize_h980f65d1_0_0));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Nmesh_3x3.rows[2].cols[2].tile_inst.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__1\n"); );
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

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.GWEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_gwen)));
    vlSelfRef.CEN = (1U & (~ (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_cen)));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.D = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_d;
    vlSelfRef.cd4 = ((IData)(vlSelfRef.D) & (IData)(vlSelfRef.we));
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__final_a;
}

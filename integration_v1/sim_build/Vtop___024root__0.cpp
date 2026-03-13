// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__3(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__4(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__5(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_ready = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rd = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sig_en = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__halt_en = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sim_ack = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__iscomp = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mdu_valid = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag_dly = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag_dly = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__i)) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem[(0x000003ffU 
                                                                                & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__i)] = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__i 
            = ((IData)(1U) + vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__i);
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_timer_irq = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__north_in = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__south_in = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__east_in = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__west_in = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__ne_in = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__nw_in = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__se_in = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sw_in = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__VDD = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__VSS = 0U;
    Vtop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__5(vlSelf);
}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VtrigSched_hb1038df9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.CEN)", 
                                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                             106);
        vlSelfRef.__Vintraval_h8cb8bb51__0 = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                             106);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly 
            = vlSelfRef.__Vintraval_h8cb8bb51__0;
    }
    co_return;}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VtrigSched_h769c8b03__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.cen_flag)", 
                                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                             130);
        vlSelfRef.__Vintraval_h9bfb8287__0 = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                             130);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag_dly 
            = vlSelfRef.__Vintraval_h9bfb8287__0;
    }
    co_return;}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VtrigSched_h043fc92a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.CLK)", 
                                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                             332);
        vlSelfRef.__Vintraval_h5fab31c3__0 = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000000c8ULL, 
                                             nullptr, 
                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                             332);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag_dly 
            = vlSelfRef.__Vintraval_h5fab31c3__0;
    }
    co_return;}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VtrigSched_h043fc92a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.CLK)", 
                                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                             331);
        vlSelfRef.__Vintraval_h9fdfa524__0 = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000000c8ULL, 
                                             nullptr, 
                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                             331);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag_dly 
            = vlSelfRef.__Vintraval_h9fdfa524__0;
    }
    co_return;}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VtrigSched_hb3cc8cbe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge pbm_tile_full_pipeline_wrapper.dut.sram_inst.clk_dly)", 
                                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                             444);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                             445);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih = 0U;
    }
    co_return;}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VtrigSched_hb3cc8cbe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge pbm_tile_full_pipeline_wrapper.dut.sram_inst.clk_dly)", 
                                                             "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                             363);
        if ((1U & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_hd_viol)) 
                   | (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_ck_viol))))) {
            if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag_dly) {
                if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh) {
                    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem[vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a] 
                        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
                        [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a];
                } else {
                    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem[vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a] 
                        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
                           [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a] 
                           ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cdx));
                    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg 
                        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg) 
                           ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cdx));
                }
            } else if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag_dly) {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg = 0U;
            }
            co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                                 nullptr, 
                                                 "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                 379);
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl = 0U;
        } else {
            co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                                 nullptr, 
                                                 "noc/gf180mcu_fd_ip_sram__sram1024x8m8wm1.v", 
                                                 391);
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl = 0U;
        }
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_ha7a8b8b4_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_h0ab4ebb5_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8 = 0;
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9 = 0;
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16 = 0;
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17 = 0;
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [0U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [1U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [2U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [3U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ext_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_ck_viol 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh) 
                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_miso 
        = vlSelfRef.flash_miso;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_cs_n 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_cs_n;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_mosi 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_mosi;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__north_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__n_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__south_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__s_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__east_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__e_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__west_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__w_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__ne_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__ne_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__nw_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__nw_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__se_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sw_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__sw_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ext_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_mdu_valid 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mdu_valid;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas) 
                       | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds) 
                          | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis) 
                             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws)))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_hd_viol 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah) 
                       | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh) 
                          | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh) 
                             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih)))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__we 
        = (0x000000ffU & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ebreak 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm30;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_timer_irq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_timer_irq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jump 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_jump;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_data 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ren 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgate) 
           & (0U == (6U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | (IData)((1U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 2U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_r2c 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_i;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 4U) & ((0U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | (3U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op) 
           | (0U == (5U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_source 
        = (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                 >> 4U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_signed 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 2U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wcnt 
        = (0x0000001fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt) 
                          - (IData)(4U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__e_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__east_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__n_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__north_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__ne_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__ne_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__nw_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__nw_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__s_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__south_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__se_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__sw_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sw_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__w_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__west_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op 
        = (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0 
        = (1U == (7U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mdu_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__iscomp;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt 
        = (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge 
        = (1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_cond_branch 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr 
        = (0x0000001fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                          >> 4U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en 
        = (IData)(((4U == (0x15U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                   & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq 
        = (0U == (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0to3 
        = (0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((4U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3)) 
           | (((1U == (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                             >> 1U))) << 1U) | (0U 
                                                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12to31 
        = (IData)((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                    >> 2U) | (3U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8 
        = (IData)((0x11U == (0x11U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
            << 0x00000018U) | vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dlo);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20) 
             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)) 
            << 1U) | (1U & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc 
        = (1U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr);
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16 
        = (IData)((5U == (5U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                  >> 1U) | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                            | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm30)) 
                               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 4U)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_valid 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20) 
           | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__halt_en) 
                    | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sig_en))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_branch_op 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__gen_wtrig_ratio_neq_2__DOT__wtrig0_r;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (IData)((0U == (0x14U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata0 
        = (1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr 
        = (0xfffffffcU & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_sh_right 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 1U)) & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__rst 
        = vlSelfRef.rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_word 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_half 
        = (1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_lsb 
        = (3U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en 
        = (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb));
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18 
        = (IData)((0U == (0x11U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_op_b_source 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    __Vtableidx2 = (((0U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                     << 6U) | ((0x00000020U & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)) 
                                               << 5U)) 
                               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = Vtop__ConstPool__TABLE_ha7a8b8b4_0[__Vtableidx2];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__Q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__new_irq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__cpu_reset_n 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__cpu_reset_n;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9 
        = (IData)((0x14U == (0x14U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_miso 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_miso;
    vlSelfRef.flash_cs_n = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_cs_n;
    vlSelfRef.flash_clk = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_clk;
    vlSelfRef.flash_mosi = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_mosi;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__north_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__north_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__south_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__south_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__east_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__east_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__west_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__west_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__ne_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__ne_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__nw_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__nw_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__se_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__se_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__sw_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sw_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mdu_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ext_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_valid 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_mdu_valid;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ebreak 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ebreak;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_timer_irq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_timer_irq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jump 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jump;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_data 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_data;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_r2c;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_source 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw = 0ULL;
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__inject_flit 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__inject_flit;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__n_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__n_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__s_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__s_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__e_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__e_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__w_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__w_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__ne_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__ne_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__nw_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__nw_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__sw_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__sw_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        }
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mdu_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mdu_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_cond_branch 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_cond_branch;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0to3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0to3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12to31 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12to31;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc 
        = (1U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr 
        = pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 2U)) & ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (9U 
                                                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U)) & (IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_sub 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_sub;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_branch_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_branch_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wen 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen0_r) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig0)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen1_r) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_dbus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_dbus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_sh_right 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__rst_n 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__rst)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_word 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_word;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_half 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_half;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) | ((IData)(((1U == (3U 
                                                 & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         & (IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18))) 
                                | ((IData)(((2U == 
                                             (6U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            & (IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18))) 
                                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_op_b_source 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_op_b_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__Q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__new_irq;
    vlSelfRef.cpu_reset_n = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__cpu_reset_n;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_mode 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__cpu_reset_n)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt7 
        = ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt2 
        = ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 2U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt1 
        = ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt3 
        = ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt11 
        = ((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12 
        = ((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0 
        = ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done 
        = ((7U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel 
        = ((0U == (7U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
           | ((3U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20)) 
                 | (0U == (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & ((~ (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_e_op 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (~ (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
              >> 2U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ebreak 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ebreak;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_funct3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_sh_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_timer_irq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_rs1_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_clr_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_mem_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_source 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_d_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_bool_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mdu_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_mdu_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bne_or_bge 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cond_branch 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_cond_branch;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_eq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0to3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12to31;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_shamt 
        = (7U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat 
                 >> 0x00000018U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_sig 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_sub 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_sub;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__branch_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_branch_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wdata 
        = (0x000000ffU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)
                           ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata1_r)
                           : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata0_r)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_dbus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_word 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_word;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_half 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_half;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_op_b_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_ctrl 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__tile_rst 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_mode) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__rst));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_mode;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt7;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt11 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt11;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)));
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_valid));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_e_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_e_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((((IData)((1U != (0x1dU & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
             << 3U) | (((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
                        | (8U != (9U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
                       << 2U)) | ((((1U == (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 1U))) 
                                    | ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16) 
                                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en))) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ebreak;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_funct3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_sh_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_rs1_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_clr_lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_mem_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_d_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_bool_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bne_or_bge;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_cond_branch 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cond_branch;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_eq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jal_or_jalr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__utype 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_sig;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_sub;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__branch_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_word;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_half;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid 
        = (1U & ((IData)((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                 | ((IData)((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))) 
                    | (((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                            >> 1U)) & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                          >> 1U))) 
                       | (((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                               >> 1U)) & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                          | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt)) 
                             & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                   >> 1U))))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_q 
        = (((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
            & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
               >> 0x00000018U)) | (((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                    & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                       >> 0x00000010U)) 
                                   | (((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                          >> 8U)) | 
                                      ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__two_stage_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_ctrl;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__tile_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__cpu_sram_init_pulse 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode_q));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt7 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt7 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt11;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__pc_rel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op22)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op22)) 
              & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_e_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jal_or_jalr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__utype;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext 
        = (0U != (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr 
                  >> 0x0000001eU));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
              | ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt)) 
                 | ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt) 
                        >> 1U)) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half)))));
    __Vtableidx1 = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                     << 3U) | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                                << 2U) | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
        = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vtableidx1];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
               >> 1U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__two_stage_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata) 
            << 0x00000018U) | vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__regzero)
            ? 0U : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3)
                  ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)
                  : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done) 
                     & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__pc_rel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mcause_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_e_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_misalign 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init 
        = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done))) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_active 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)
                  ? (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_wen))
                  : (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__cpu_sram_init_pulse))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_active)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                  + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                 + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mcause_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mie_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mstatus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_e_op) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm31));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_misalign;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_rd 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q)
            : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_signed) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__signbit)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_op));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
    if (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell = 1U;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mie_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mstatus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_imm 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                  ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                  : ((1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                      ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                      : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_c2r 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
                                                & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_pc_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_o 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_c2r;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_cyc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_pc_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_en;
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en) 
               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init) 
                  & (0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en 
            = (1U & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init)) 
                     | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done) 
                        & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right))));
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en = 0U;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen1 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__rd_wen 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen) 
           & (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_cyc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen1;
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 = 0x23U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 = 0x22U;
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 
            = (0x00000020U | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr));
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1 
        = ((0x00000020U & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                           << 5U)) | ((0x0000001cU 
                                       & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr) 
                                          & ((- (IData)((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                             << 2U))) 
                                      | (3U & ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)) 
                                               | (((- (IData)((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en))) 
                                                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr)) 
                                                  | ((- (IData)((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                     & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
                                                & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                                                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen0 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__rd_wen)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_cyc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                  + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                 + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_stb 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)
            ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wreg 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg1)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_waddr 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wcnt) 
                            >> 3U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreg 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg1)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_raddr 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt) 
                            >> 3U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_adr 
        = (0x000000ffU & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_adr 
                          >> 2U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_we 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_sel) 
              >> (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_waddr 
        = (0x000003ffU & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_waddr)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en 
        = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack))) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_raddr 
        = (0x000003ffU & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_ack;
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren 
            = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata 
            = (0x000000ffU & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_dat 
                              >> (0x0000001fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_we;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0;
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren 
            = (1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_ren));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata 
            = (0x000000ffU & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wdata));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_waddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_raddr;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_raddr;
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_d 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_data;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_write 
            = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_wen)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_a 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_addr;
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_d 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wdata;
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wen) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_write = 1U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_a 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_waddr;
        } else {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_write = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_a 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_raddr;
        }
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__D 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_d;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_write)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_a;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__D) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__we));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag 
        = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN) 
               | (0x000000ffU == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN)))) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
           [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd5 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2)))
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      (((((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly__0)) 
                                                         << 5U) 
                                                        | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK__0)) 
                                                           << 4U)) 
                                                       | (((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag__0)) 
                                                            << 3U) 
                                                           | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__clk__0)))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | (((((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__rst_n__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK__0)))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__rst_n__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__clk__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN;
    vlSelfRef.__Vtrigprevexpr___TOP__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag__0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (0x0000000200000000ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000800000000ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000001000000000ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [0U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [1U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [2U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [3U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_ck_viol 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh) 
                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__Q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
           [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__Q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd5 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata) 
            << 0x00000018U) | vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__regzero)
            ? 0U : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)
            ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2)))
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0;
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih = 0U;
}

void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
                & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell))) 
               & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst))))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst = 1U;
    }
}

void Vtop___024root___act_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas) 
                       | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds) 
                          | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis) 
                             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws)))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_hd_viol 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah) 
                       | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh) 
                          | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh) 
                             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih)))))));
}

void Vtop___024root___act_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell = 1U;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag 
        = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN) 
               | (0x000000ffU == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN)))) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0));
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000002400000000ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih = 0U;
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        if ((1U & (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
                    & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell))) 
                   & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst))))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst = 1U;
        }
    }
    if ((0x0000002400000002ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol 
            = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs) 
                        | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas) 
                           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds) 
                              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis) 
                                 | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws)))))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_hd_viol 
            = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch) 
                        | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah) 
                           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh) 
                              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh) 
                                 | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih)))))));
    }
    if ((0x0000000600000000ULL & vlSelfRef.__VactTriggered
         [0U])) {
        if (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell = 1U;
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag 
            = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN) 
                   | (0x000000ffU == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN)))) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0));
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Npbm_tile_full_pipeline_wrapper.dut.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Npbm_tile_full_pipeline_wrapper.dut.sram_inst ---------\n",0,
                 64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell) {
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs))) {
            VL_WRITEF_NX("---- ERROR: CEN setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas))) {
            VL_WRITEF_NX("---- ERROR: A setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds))) {
            VL_WRITEF_NX("---- ERROR: D setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws))) {
            VL_WRITEF_NX("---- ERROR: GWEN setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis))) {
            VL_WRITEF_NX("---- ERROR: WEN setup violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch))) {
            VL_WRITEF_NX("---- ERROR: CEN hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah))) {
            VL_WRITEF_NX("---- ERROR: A hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh))) {
            VL_WRITEF_NX("---- ERROR: D hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh))) {
            VL_WRITEF_NX("---- ERROR: GWEN hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih))) {
            VL_WRITEF_NX("---- ERROR: WEN hold violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc))) {
            VL_WRITEF_NX("---- ERROR: CLK period violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh))) {
            VL_WRITEF_NX("---- ERROR: CLK pulse width high violation! ----\n",0);
        }
        if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl))) {
            VL_WRITEF_NX("---- ERROR: CLK pulse width low violation! ----\n",0);
        }
    }
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata0_r 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata0) 
            << 7U) | (0x0000007fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata0_r) 
                                     >> 1U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata1_r 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata1) 
            << 8U) | (0x000000ffU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata1_r) 
                                     >> 1U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata0 
        = (0x0000007fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata0) 
                          >> 1U));
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata1 
        = (0x0000003fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata1) 
                          >> 1U));
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata1 
            = (0x0000007fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata) 
                              >> 1U));
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgnt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreq_r;
    if (((0x0000001fU == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt)) 
         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgate 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt)));
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq) 
         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq) 
               << 1U);
    }
    if ((1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wcnt))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen0_r 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen1_r 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen1;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__gen_wtrig_ratio_neq_2__DOT__wtrig0_r 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata0 
        = (1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreq_r 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq;
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rst) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgnt = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgate = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreq_r = 0U;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ren 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgate) 
           & (0U == (6U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wcnt 
        = (0x0000001fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt) 
                          - (IData)(4U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__gen_wtrig_ratio_neq_2__DOT__wtrig0_r;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0 
        = (1U == (7U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wdata 
        = (0x000000ffU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)
                           ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata1_r)
                           : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata0_r)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wen 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen0_r) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig0)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen1_r) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wen;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie = 0;
    CData/*3:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 = 0;
    // Body
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap) 
         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done))) {
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie;
    }
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en) 
         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt7))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    }
    if (((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en)) 
          & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3)) 
         | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done)))) {
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = ((7U & (IData)(__Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)) 
               | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op) 
                    & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak))) 
                   | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
                      & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in))) 
                  << 3U));
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = ((0x0bU & (IData)(__Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)) 
               | (4U & ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq) 
                          | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op)) 
                         | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
                            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                               >> 3U))) << 2U)));
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = ((0x0dU & (IData)(__Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)) 
               | (2U & (((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq) 
                           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op)) 
                          | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op) 
                             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd))) 
                         | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
                            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                               >> 2U))) << 1U)));
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = ((0x0eU & (IData)(__Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)) 
               | (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq) 
                         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op)) 
                        | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
                           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                              >> 1U)))));
    }
    if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
          & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done)) 
         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in));
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
    if (((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done)) 
          | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3)) 
             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en))) 
         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret)
                   ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie)
                   : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in)));
    }
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq) 
               & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq;
    }
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq = 0U;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__new_irq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__new_irq;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en) 
         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_rst))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_rst)
                ? 0U : (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__new_pc) 
                         << 0x0000001fU) | (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr 
                                            >> 1U)));
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc 
        = (1U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc 
        = (1U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_adr;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter = 0;
    CData/*7:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg = 0;
    CData/*2:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state = 0;
    CData/*1:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 0;
    // Body
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase;
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_cs_n = 0U;
            __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter = 0U;
            __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg = 3U;
            __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase))) {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk = 0U;
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_mosi 
                    = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg) 
                             >> 7U));
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 1U;
            } else if ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase))) {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk = 1U;
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 2U;
            } else {
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg 
                    = (0x000000feU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg) 
                                      << 1U));
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk = 0U;
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 0U;
                if ((7U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter))) {
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state = 2U;
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter = 0U;
                } else {
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter)));
                }
            }
        } else if ((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase))) {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk = 0U;
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_mosi = 0U;
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 1U;
            } else if ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase))) {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk = 1U;
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 2U;
            } else {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk = 0U;
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 0U;
                if ((0x17U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter))) {
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state = 3U;
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter = 0U;
                } else {
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase))) {
                if ((1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase))) {
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 0U;
                    if ((7U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter))) {
                        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_wdata 
                            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg;
                        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state = 4U;
                        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter = 0U;
                    } else {
                        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter)));
                    }
                } else {
                    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk = 0U;
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase))) {
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg 
                    = ((0x000000feU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg) 
                                       << 1U)) | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_miso));
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 2U;
            } else {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk = 1U;
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 1U;
            }
        } else if ((4U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase))) {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_wen = 0U;
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 1U;
            } else {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_wen = 1U;
                __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 0U;
                if ((0x03ffU == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_waddr))) {
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state = 5U;
                } else {
                    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_waddr 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_waddr)));
                    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state = 3U;
                }
            }
        } else if ((5U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_cs_n = 1U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__cpu_reset_n = 1U;
        } else {
            __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state = 0U;
        }
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_waddr = 0U;
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__cpu_reset_n = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_wen = 1U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_cs_n = 1U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk = 0U;
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase = 0U;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__bit_counter;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__shift_reg;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__state;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__spi_phase;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_cs_n 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_cs_n;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_clk 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_clk;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_mosi 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__flash_mosi;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_data 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__sram_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__cpu_reset_n 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_inst__DOT__cpu_reset_n;
    vlSelfRef.flash_cs_n = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_cs_n;
    vlSelfRef.flash_clk = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_clk;
    vlSelfRef.flash_mosi = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__flash_mosi;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_data 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_data;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_wen;
    vlSelfRef.cpu_reset_n = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__cpu_reset_n;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_mode 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__cpu_reset_n)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__tile_rst 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_mode) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__rst));
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel = 0;
    // Body
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__regzero 
        = (0x0000003fU == (0x0000003fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr) 
                                          >> 2U)));
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en) {
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack 
            = (3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel));
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack = 0U;
    }
    if ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt 
            = ((0x00ffff00U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata));
    }
    if ((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt 
            = ((0x00ff00ffU & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata) 
                  << 8U));
    }
    if ((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt 
            = ((0x0000ffffU & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata) 
                  << 0x00000010U));
    }
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_rst) {
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack = 0U;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_ack;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en) 
         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dlo 
            = (0x00ffffffU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load)
                               ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat
                               : ((0x00800000U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                  << 0x00000017U)) 
                                  | (0x007fffffU & 
                                     (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dlo 
                                      >> 1U)))));
    }
    if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en) 
          | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)) 
         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi 
            = (0x000000ffU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load)
                               ? (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
                                  >> 0x18U) : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                                               & (0x000000dfU 
                                                  | (0x00000020U 
                                                     & ((~ 
                                                         (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op) 
                                                           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt7)) 
                                                          & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)))) 
                                                        << 5U))))));
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
            << 0x00000018U) | vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dlo);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_shamt 
        = (7U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat 
                 >> 0x00000018U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_c2r 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_dat;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_dat;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data = 0;
    // Body
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en) {
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
            = ((3U & __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data) 
               | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init)
                     ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__q)
                     : ((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                         >> 0x1fU) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed))) 
                   << 0x0000001fU) | (0x7ffffffcU & 
                                      (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                                       >> 1U))));
    }
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init)
          ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0) 
             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt1))
          : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en))) {
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
            = ((0xfffffffcU & __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data) 
               | ((2U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init)
                           ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__q)
                           : (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                              >> 2U)) << 1U)) | (1U 
                                                 & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                                                    >> 1U))));
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr 
        = (0xfffffffcU & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_lsb 
        = (3U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext 
        = (0U != (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr 
                  >> 0x0000001eU));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_adr;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
          | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done)) 
         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r 
            = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst))) 
               & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending) 
                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init)) 
                  | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__ibus_cyc 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst));
    }
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init) 
               & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_jump 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch));
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt 
        = (7U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                 + (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
                          >> 3U))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb 
        = ((0x0000000eU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                           << 1U)) | (1U & ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb) 
                                              >> 3U) 
                                             & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done))) 
                                            | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rf_ready))));
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_jump = 0U;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt 
        = (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0to3 
        = (0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12to31 
        = (IData)((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                    >> 2U) | (3U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en 
        = (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jump 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_jump;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0to3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0to3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12to31 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12to31;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt7 
        = ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt2 
        = ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 2U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt1 
        = ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt3 
        = ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt11 
        = ((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12 
        = ((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0 
        = ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done 
        = ((7U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jump 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jump;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0to3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12to31;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt7;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt11 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt11;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt7 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt7 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt11;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2));
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20 = 0;
    CData/*5:0*/ __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25 = 0;
    // Body
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25;
    __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20;
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en) 
         | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en) 
               >> 1U)))) {
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en)
                ? ((0x000001feU & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
                                   >> 4U)) | (1U & 
                                              (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
                                               >> 0x0dU)))
                : ((0x00000100U & (((8U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                                     ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                                     : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20)) 
                                   << 8U)) | (0x000000ffU 
                                              & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                                                 >> 1U))));
    }
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en) 
         | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en) 
               >> 3U)))) {
        __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25 
            = (0x0000003fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en)
                               ? (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
                                  >> 0x12U) : ((0x00000020U 
                                                & (((4U 
                                                     & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                                                     ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm7)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                                                      ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                                                      : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20))) 
                                                   << 5U)) 
                                               | (0x0000001fU 
                                                  & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25) 
                                                     >> 1U)))));
    }
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en) 
         | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en) 
               >> 2U)))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20 
            = (0x0000001fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en)
                               ? (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
                                  >> 0x0dU) : ((0x00000010U 
                                                & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25) 
                                                   << 4U)) 
                                               | (0x0000000fU 
                                                  & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20) 
                                                     >> 1U)))));
    }
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en) 
         | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en)))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7 
            = (0x0000001fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en)
                               ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt
                               : ((0x00000010U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25) 
                                                  << 4U)) 
                                  | (0x0000000fU & 
                                     ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7) 
                                      >> 1U)))));
    }
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm31 
            = (1U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
                     >> 0x18U));
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20 
        = __Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                 >> 4U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr 
        = (0x0000001fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                          >> 4U));
    if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en) 
         | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm7 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en)
                      ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt
                      : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)));
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg0;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cdx = 0U;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_ck_viol 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh) 
                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_hd_viol 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah) 
                       | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh) 
                          | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh) 
                             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih)))))));
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8 = 0;
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9 = 0;
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16 = 0;
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17 = 0;
    CData/*0:0*/ pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18;
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_en) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm25 
            = (1U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x17U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op22 
            = (1U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x14U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm30 
            = (1U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x1cU));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26 
            = (1U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x18U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20 
            = (1U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x12U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21 
            = (1U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x13U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3 
            = (7U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x0aU));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode 
            = (0x0000001fU & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt);
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm30;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ebreak 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20) 
             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)) 
            << 1U) | (1U & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_valid 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20) 
           | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_source 
        = (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_signed 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 2U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op 
        = (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge 
        = (1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq 
        = (0U == (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((4U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3)) 
           | (((1U == (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                             >> 1U))) << 1U) | (0U 
                                                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_sh_right 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_word 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_half 
        = (1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | (IData)((1U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 2U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 4U) & ((0U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | (3U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op) 
           | (0U == (5U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_cond_branch 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en 
        = (IData)(((4U == (0x15U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                   & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op))));
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8 
        = (IData)((0x11U == (0x11U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16 
        = (IData)((5U == (5U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                  >> 1U) | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                            | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm30)) 
                               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 4U)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_branch_op 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (IData)((0U == (0x14U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 1U)) & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18 
        = (IData)((0U == (0x11U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_op_b_source 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    __Vtableidx2 = (((0U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                     << 6U) | ((0x00000020U & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)) 
                                               << 5U)) 
                               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = Vtop__ConstPool__TABLE_ha7a8b8b4_0[__Vtableidx2];
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9 
        = (IData)((0x14U == (0x14U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ebreak 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ebreak;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_source 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_sh_right 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_word 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_word;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_half 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_half;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_cond_branch 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_cond_branch;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr 
        = pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 2U)) & ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (9U 
                                                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U)) & (IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_sub 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_sub;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_branch_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_branch_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_dbus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_dbus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) | ((IData)(((1U == (3U 
                                                 & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         & (IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18))) 
                                | ((IData)(((2U == 
                                             (6U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            & (IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18))) 
                                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_op_b_source 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_op_b_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel 
        = ((0U == (7U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
           | ((3U == (3U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20)) 
                 | (0U == (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & ((~ (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_e_op 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (~ (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
              >> 2U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_sh_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ebreak 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ebreak;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_funct3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_source 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_d_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_bool_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bne_or_bge 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_eq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_sig 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_word 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_word;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_half 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_half;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_rs1_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_clr_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_mem_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cond_branch 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_cond_branch;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_sub 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_sub;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__branch_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_branch_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_dbus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_op_b_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_ctrl 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)));
    pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_valid));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_e_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_e_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((((IData)((1U != (0x1dU & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
             << 3U) | (((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
                        | (8U != (9U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
                       << 2U)) | ((((1U == (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 1U))) 
                                    | ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16) 
                                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en))) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_sh_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ebreak;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_addr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_funct3;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_source;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_d_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_signed 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_signed;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_bool_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bne_or_bge;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_eq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_sig;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_word;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_half;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_rs1_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_clr_lsb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_mem_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_cond_branch 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cond_branch;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jal_or_jalr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__utype 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__branch_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__two_stage_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_ctrl;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__pc_rel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op22)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((IData)(pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op22)) 
              & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_e_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jal_or_jalr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__utype;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__two_stage_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__pc_rel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mcause_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_e_op 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mcause_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mie_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mstatus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mie_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mstatus_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_we;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__rst) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__s_out = 0ULL;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__n_out = 0ULL;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__e_out = 0ULL;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__w_out = 0ULL;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__ne_out = 0ULL;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__nw_out = 0ULL;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_out = 0ULL;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__sw_out = 0ULL;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_i = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__inject_flit = 0ULL;
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__s_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__n_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__e_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__w_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__ne_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__nw_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__sw_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_i 
            = ((((IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_in 
                          >> 0x21U)) & ((3U & (IData)(
                                                      (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_in 
                                                       >> 0x1fU))) 
                                        == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) 
                & ((3U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_in 
                                  >> 0x1dU))) == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))
                ? (0x1fffffffU & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_in))
                : 0U);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__inject_flit 
            = ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb) 
                 & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_we)) 
                & (8U == (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_adr 
                          >> 0x1cU))) ? (0x0000000200000000ULL 
                                         | (((QData)((IData)(
                                                             (0x0000000fU 
                                                              & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_adr))) 
                                             << 0x0000001dU) 
                                            | (QData)((IData)(
                                                              (0x1fffffffU 
                                                               & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_o)))))
                : 0ULL);
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__south_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__s_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__north_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__n_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__east_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__e_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__west_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__w_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__ne_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__ne_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__nw_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__nw_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__se_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sw_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__sw_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_r2c 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_i;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se = 0ULL;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw = 0ULL;
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__inject_flit 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__inject_flit;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__n_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__n_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__s_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__s_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__e_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__e_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__w_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__w_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__ne_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__ne_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__nw_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__nw_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__se_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__sw_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__sw_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit 
                             >> 0x1fU)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        }
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__south_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__south_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__north_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__north_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__east_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__east_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__west_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__west_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__ne_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__ne_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__nw_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__nw_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__se_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__se_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__sw_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sw_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_r2c;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_rdt;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__signbit 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q;
    }
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r = 0U;
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_en) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy;
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub;
    }
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag) {
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem[vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd5;
        } else {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem[vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
                = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
                   [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
                   ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cdx));
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg 
                = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg) 
                   ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cdx));
        }
    } else if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol)
                ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
               [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a]
                : 0U);
    }
}

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode_q 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode));
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_q 
        = (((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
            & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
               >> 0x00000018U)) | (((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                    & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                       >> 0x00000010U)) 
                                   | (((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                          >> 8U)) | 
                                      ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2_q;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid 
        = (1U & ((IData)((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                 | ((IData)((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))) 
                    | (((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                            >> 1U)) & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                          >> 1U))) 
                       | (((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                               >> 1U)) & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                          | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt)) 
                             & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                   >> 1U))))))));
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3)
                  ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)
                  : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done) 
                     & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31))));
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                  + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                 + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4))));
}

void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1));
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
                                                & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                     << 3U) | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                                << 2U) | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
        = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vtableidx1];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
               >> 1U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_misalign 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_misalign;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_sel;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_sel 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_sel;
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
              | ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt)) 
                 | ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt) 
                        >> 1U)) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half)))));
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init 
        = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done))) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_e_op) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_op));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_pc_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_pc_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init)) 
              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done) 
                 & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen1 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? 0x22U : (0x00000020U | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg1;
}

void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc));
}

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm31));
}

void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_sub;
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_adr;
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_o 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_c2r;
}

void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0));
}

void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol 
        = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs) 
                    | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas) 
                       | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds) 
                          | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis) 
                             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws)))))));
}

void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [0U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [1U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [2U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_3 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [3U];
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__Q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__Q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata;
}

void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__tile_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_mode;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
}

void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_cyc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_stb 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_ack;
}

void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_rd 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q)
            : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_signed) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__signbit)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_rd;
}

void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op)
            ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en) 
               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init) 
                  & (0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))))
            : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en)));
}

void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? 0x23U : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__rd_wen 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen) 
           & (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1 
        = ((0x00000020U & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                           << 5U)) | ((0x0000001cU 
                                       & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr) 
                                          & ((- (IData)((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                             << 2U))) 
                                      | (3U & ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)) 
                                               | (((- (IData)((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en))) 
                                                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr)) 
                                                  | ((- (IData)((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                     & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr)))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen0 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__rd_wen)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen0;
}

void Vtop___024root___nba_comb__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_imm 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                  ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                  : ((1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                      ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                      : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
                                                & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                                                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
}

void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata) 
            << 0x00000018U) | vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__regzero)
            ? 0U : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
}

void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__cpu_sram_init_pulse 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode_q));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_active 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)
                  ? (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_wen))
                  : (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__cpu_sram_init_pulse))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_active)));
}

void Vtop___024root___nba_comb__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_cyc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_cyc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_stb;
}

void Vtop___024root___nba_comb__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wreg 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg1)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreg 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg1)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg0));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_waddr 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wcnt) 
                            >> 3U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_raddr 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt) 
                            >> 3U)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_waddr 
        = (0x000003ffU & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_waddr)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_raddr 
        = (0x000003ffU & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr)));
}

void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                  + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                 + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
}

void Vtop___024root___nba_comb__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2;
}

void Vtop___024root___nba_comb__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)
            ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt;
}

void Vtop___024root___nba_comb__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly))) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell = 1U;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0;
}

void Vtop___024root___nba_comb__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
}

void Vtop___024root___nba_comb__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_we;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_we;
}

void Vtop___024root___nba_comb__TOP__30(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_adr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_adr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_adr 
        = (0x000000ffU & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_adr 
                          >> 2U));
}

void Vtop___024root___nba_comb__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_stb;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_stb 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_stb;
}

void Vtop___024root___nba_comb__TOP__32(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out;
}

void Vtop___024root___nba_comb__TOP__33(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub));
}

void Vtop___024root___nba_comb__TOP__34(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_we 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_sel) 
              >> (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_ack;
}

void Vtop___024root___nba_comb__TOP__35(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel));
}

void Vtop___024root___nba_comb__TOP__36(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en 
        = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack))) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_stb));
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren 
            = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren 
            = (1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_ren));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_ren 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_ren;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wen 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wen;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_write 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)
                  ? (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_wen))
                  : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wen)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN 
        = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_write)));
}

void Vtop___024root___nba_comb__TOP__37(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__37\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd;
}

void Vtop___024root___nba_comb__TOP__38(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
}

void Vtop___024root___nba_comb__TOP__39(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__39\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
}

void Vtop___024root___nba_comb__TOP__40(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata 
        = (0x000000ffU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en)
                           ? (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_dat 
                              >> (0x0000001fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel), 3U)))
                           : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wdata)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wdata 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wdata;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_d 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_data)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wdata));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__D 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_d;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__D) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__we));
}

void Vtop___024root___nba_comb__TOP__41(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__41\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0;
    } else {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_waddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_raddr;
    }
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_waddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_waddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_raddr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_raddr;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_a 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_addr)
            : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wen)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_waddr)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_raddr)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_a;
}

void Vtop___024root___nba_comb__TOP__42(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__42\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag 
        = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN) 
               | (0x000000ffU == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN)))) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0));
}

void Vtop___024root___nba_comb__TOP__43(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__43\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in;
}

void Vtop___024root___nba_comb__TOP__44(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__44\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en;
}

void Vtop___024root___nba_comb__TOP__45(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__45\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
}

void Vtop___024root___nba_comb__TOP__46(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__46\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
           [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN));
}

void Vtop___024root___nba_comb__TOP__47(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__47\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1;
}

void Vtop___024root___nba_comb__TOP__48(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__48\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
}

void Vtop___024root___nba_comb__TOP__49(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__49\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq;
}

void Vtop___024root___nba_comb__TOP__50(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__50\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2)))
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready;
}

void Vtop___024root___nba_comb__TOP__51(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__51\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd5 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2) 
           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4));
}

void Vtop___024root___nba_comb__TOP__52(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__52\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd;
}

void Vtop___024root___nba_comb__TOP__53(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__53\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
}

void Vtop___024root___nba_comb__TOP__54(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__54\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie;
    __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie = 0;
    CData/*3:0*/ __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
    __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 = 0;
    CData/*1:0*/ __Vinline__nba_sequent__TOP__7___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel;
    __Vinline__nba_sequent__TOP__7___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__9___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
    __Vinline__nba_sequent__TOP__9___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data = 0;
    CData/*3:0*/ __Vinline__nba_comb__TOP__7___Vtableidx1;
    __Vinline__nba_comb__TOP__7___Vtableidx1 = 0;
    // Body
    if (VL_UNLIKELY(((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered
                      [0U])))) {
        VL_WRITEF_NX("-------- WARNING: CEN is not reset, memory is not operational ---------\n-------- @Time %0^: scope = %Npbm_tile_full_pipeline_wrapper.dut.sram_inst ---------\n",0,
                     64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
    }
    if (VL_UNLIKELY(((2ULL & vlSelfRef.__VnbaTriggered
                      [0U])))) {
        VL_WRITEF_NX("-------- MESSAGE: CEN is just reset, memory is operational ---------\n-------- @Time %0^: scope = %Npbm_tile_full_pipeline_wrapper.dut.sram_inst ---------\n",0,
                     64,VL_TIME_UNITED_D(1),-12,vlSymsp->name());
    }
    if ((0x00000000fff80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell) {
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs))) {
                VL_WRITEF_NX("---- ERROR: CEN setup violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas))) {
                VL_WRITEF_NX("---- ERROR: A setup violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds))) {
                VL_WRITEF_NX("---- ERROR: D setup violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws))) {
                VL_WRITEF_NX("---- ERROR: GWEN setup violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis))) {
                VL_WRITEF_NX("---- ERROR: WEN setup violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch))) {
                VL_WRITEF_NX("---- ERROR: CEN hold violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah))) {
                VL_WRITEF_NX("---- ERROR: A hold violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh))) {
                VL_WRITEF_NX("---- ERROR: D hold violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh))) {
                VL_WRITEF_NX("---- ERROR: GWEN hold violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih))) {
                VL_WRITEF_NX("---- ERROR: WEN hold violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc))) {
                VL_WRITEF_NX("---- ERROR: CLK period violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh))) {
                VL_WRITEF_NX("---- ERROR: CLK pulse width high violation! ----\n",0);
            }
            if (VL_UNLIKELY((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl))) {
                VL_WRITEF_NX("---- ERROR: CLK pulse width low violation! ----\n",0);
            }
        }
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie;
        __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
        if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap) 
             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done))) {
            __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie;
        }
        if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en) 
             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt7))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
        }
        if (((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en)) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3)) 
             | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap) 
                & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done)))) {
            __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
                = ((7U & __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                   | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op) 
                        & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak))) 
                       | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
                          & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in))) 
                      << 3U));
            __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
                = ((0x0bU & __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                   | (4U & ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq) 
                              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op)) 
                             | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
                                & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                                   >> 3U))) << 2U)));
            __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
                = ((0x0dU & __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                   | (2U & (((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq) 
                               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op)) 
                              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op) 
                                 & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd))) 
                             | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
                                & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                                   >> 2U))) << 1U)));
            __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
                = ((0x0eU & __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                   | (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq) 
                             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op)) 
                            | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
                               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0) 
                                  >> 1U)))));
        }
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
              & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done)) 
             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31 
                = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)
                    ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq)
                    : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in));
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 
            = __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0;
        if (((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done)) 
              | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3)) 
                 & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en))) 
             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie 
                = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap)) 
                   & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret)
                       ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie)
                       : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in)));
        }
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq 
                = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq) 
                   & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r)));
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq;
        }
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq = 0U;
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie 
            = __Vinline__nba_sequent__TOP__4___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__new_irq 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip) 
               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__new_irq;
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en) 
             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_rst))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr 
                = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_rst)
                    ? 0U : (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__new_pc) 
                             << 0x0000001fU) | (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr 
                                                >> 1U)));
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc 
            = (1U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc 
            = (1U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_adr;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__7___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__regzero 
            = (0x0000003fU == (0x0000003fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr) 
                                              >> 2U)));
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en) {
            __Vinline__nba_sequent__TOP__7___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel)));
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack 
                = (3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel));
        } else {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack = 0U;
        }
        if ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt 
                = ((0x00ffff00U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata));
        }
        if ((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt 
                = ((0x00ff00ffU & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt) 
                   | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata) 
                      << 8U));
        }
        if ((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt 
                = ((0x0000ffffU & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt) 
                   | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata) 
                      << 0x00000010U));
        }
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_rst) {
            __Vinline__nba_sequent__TOP__7___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel = 0U;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack = 0U;
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel 
            = __Vinline__nba_sequent__TOP__7___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_ack;
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en) 
             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dlo 
                = (0x00ffffffU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load)
                                   ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat
                                   : ((0x00800000U 
                                       & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                          << 0x00000017U)) 
                                      | (0x007fffffU 
                                         & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dlo 
                                            >> 1U)))));
        }
        if ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en) 
              | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)) 
             | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi 
                = (0x000000ffU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load)
                                   ? (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
                                      >> 0x18U) : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                                                   & (0x000000dfU 
                                                      | (0x00000020U 
                                                         & ((~ 
                                                             (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op) 
                                                               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt7)) 
                                                              & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)))) 
                                                            << 5U))))));
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                << 0x00000018U) | vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dlo);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_shamt 
            = (7U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat 
                     >> 0x00000018U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs2 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs2 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs2;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_c2r 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_dat;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_dat;
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__9___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en) {
            __Vinline__nba_sequent__TOP__9___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                = ((3U & __Vinline__nba_sequent__TOP__9___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data) 
                   | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init)
                         ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__q)
                         : ((vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                             >> 0x1fU) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed))) 
                       << 0x0000001fU) | (0x7ffffffcU 
                                          & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                                             >> 1U))));
        }
        if (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init)
              ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0) 
                 | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt1))
              : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en))) {
            __Vinline__nba_sequent__TOP__9___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                = ((0xfffffffcU & __Vinline__nba_sequent__TOP__9___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data) 
                   | ((2U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init)
                               ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__q)
                               : (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                                  >> 2U)) << 1U)) | 
                      (1U & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
                             >> 1U))));
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
            = __Vinline__nba_sequent__TOP__9___Vdly__pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr 
            = (0xfffffffcU & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_lsb 
            = (3U & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_lsb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb) 
                     >> 1U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext 
            = (0U != (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr 
                      >> 0x0000001eU));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_adr;
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cdx = 0U;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A;
    }
    if ((0x0000002400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_ck_viol 
            = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc) 
                        | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh) 
                           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl)))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_hd_viol 
            = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch) 
                        | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah) 
                           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh) 
                              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh) 
                                 | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih)))))));
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__signbit 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q;
        }
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r = 0U;
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_en) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy;
        } else {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub;
        }
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag) {
            if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol) {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem[vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
                    = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd5;
            } else {
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem[vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
                    = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
                       [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
                       ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cdx));
                vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg 
                    = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg) 
                       ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cdx));
            }
        } else if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg 
                = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol)
                    ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
                   [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a]
                    : 0U);
        }
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode_q 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode));
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_q 
            = (((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                   >> 0x00000018U)) | (((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                        & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                           >> 0x00000010U)) 
                                       | (((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                           & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                              >> 8U)) 
                                          | ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                             & vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2_q 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_q;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2_q;
    }
    if ((0x0000000000000900ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid 
            = (1U & ((IData)((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                     | ((IData)((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))) 
                        | (((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                                >> 1U)) & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                              >> 1U))) 
                           | (((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                                   >> 1U)) & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                              | ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt)) 
                                 & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                       >> 1U))))))));
    }
    if ((0x0000000000010100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3) 
                & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11) 
                  | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3)
                      ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)
                      : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done) 
                         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31))));
    }
    if ((0x0000000000002100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
            = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                      + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4) 
                         + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w))) 
                     >> 1U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                     + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w) 
                        + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4))));
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_en 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    }
    if ((0x0000000000000680ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1));
    }
    if ((0x0000000000000280ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = 
            ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
    }
    if ((0x0000000000000a00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_comb__TOP__7___Vtableidx1 = 
            (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
              << 3U) | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                         << 2U) | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
            = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vinline__nba_comb__TOP__7___Vtableidx1];
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
                & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
               | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
                   >> 1U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_misalign 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_misalign;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_sel;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_sel 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_sel;
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                  | ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt)) 
                     | ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt) 
                            >> 1U)) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half)))));
    }
    if ((0x0000000000010300ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init 
            = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done))) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_e_op) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
                  | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_op));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_pc_en 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_en 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_pc_en;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_en;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op) 
               & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init)) 
                  | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done) 
                     & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen1 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
                  | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
                ? 0x22U : (0x00000020U | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2 
            = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
                        | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
                           | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret)))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg1;
    }
    if ((0x0000000000002200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc));
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm31));
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_we 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_we;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_sub;
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_adr;
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_o 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_dat_c2r;
    }
    if ((0x0000000000004100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0));
    }
    if ((0x0000002400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol 
            = (1U & (~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs) 
                        | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas) 
                           | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds) 
                              | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis) 
                                 | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws)))))));
    }
    if ((0x0000002400040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
            [0U];
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
            [1U];
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_2 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
            [2U];
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_3 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
            [3U];
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__Q 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_rdata 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__Q;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_rdata;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__tile_rst;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__boot_mode;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__rst));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
    }
    if ((0x0000000000000b00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2) 
               & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_cyc 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_cyc;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_stb 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb) 
               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_stb 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb) 
               & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__wb_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_ack;
    }
    if ((0x0000000000009b00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_rd 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q)
                : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_signed) 
                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__signbit)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_rd 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_rd;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_rd;
    }
    if ((0x0000000000010b00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op)
                ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en) 
                   & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init) 
                      & (0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))))
                : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid) 
                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en)));
    }
    if ((0x0000000000010700ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
                ? 0x23U : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__rd_wen 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen) 
               & (0U != (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1 
            = ((0x00000020U & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                               << 5U)) | ((0x0000001cU 
                                           & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr) 
                                              & ((- (IData)((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                 << 2U))) 
                                          | (3U & (
                                                   (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)) 
                                                   | (((- (IData)((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en))) 
                                                       & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr)) 
                                                      | ((- (IData)((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr)))))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen0 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
                  | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__rd_wen)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen0;
    }
    if ((0x0000000000000700ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_imm 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                      ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                      : ((1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                          ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                          : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_imm;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = 
            ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
             & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
    }
    if ((0x0000002400040040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata) 
                << 0x00000018U) | vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__regzero)
                ? 0U : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
            = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
               >> 2U);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
            = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
               >> 7U);
    }
    if ((0x000000000000003cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__cpu_sram_init_pulse 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode_q));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_active 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)
                      ? (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_wen))
                      : (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__cpu_sram_init_pulse))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN 
            = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_active)));
    }
    if ((0x000000000000010cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_cyc 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_cyc 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_cyc;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_cyc;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_stb;
    }
    if ((0x0000000000010780ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wreg 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg1)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg0));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreg 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg1)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg0));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_waddr 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wreg) 
                << 2U) | (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wcnt) 
                                >> 3U)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_raddr 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreg) 
                << 2U) | (3U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt) 
                                >> 3U)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_waddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_waddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_raddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_raddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_waddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_waddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_raddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_raddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_waddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_waddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_raddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_waddr 
            = (0x000003ffU & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_waddr)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_raddr 
            = (0x000003ffU & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr)));
    }
    if ((0x0000000000000f80ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c 
            = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                      + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                         + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                     >> 1U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__q 
            = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                     + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                        + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
    }
    if ((0x00000024000400c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1)
                      ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata)
                      : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata1)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2;
    }
    if ((0x0000002500040840ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)
                ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_rdt
                : vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt;
    }
    if ((0x000000060000003cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly))) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell = 1U;
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0;
    }
    if ((0x000000000000014cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    }
    if ((0x000000000000030cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_we 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_we 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_we;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_we 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_we;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_we;
    }
    if ((0x000000000000290cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_adr 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
                ? vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
                : vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_adr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_adr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_adr 
            = (0x000000ffU & (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_adr 
                              >> 2U));
    }
    if ((0x0000000000000b0cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_stb 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_stb;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_stb 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_stb;
    }
    if ((0x00000024000402c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out;
    }
    if ((0x00000024000407c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool 
            = (((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
                & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                   ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
               | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
                   >> 1U) & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                             & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub));
    }
    if ((0x0000000000000b4cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_ack 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_ack) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_ack) 
                  | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sim_ack)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_we 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we) 
               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_sel) 
                  >> (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_ack;
    }
    if ((0x000000000000294cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_adr) 
                << 2U) | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel));
    }
    if ((0x0000000000000bccULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en 
            = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen) 
                   | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack))) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_stb));
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren 
                = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we)));
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_we;
        } else {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren 
                = (1U & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_ren));
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen;
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_ren 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wen 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_ren 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_ren;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wen 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wen;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_write 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)
                      ? (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_wen))
                      : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wen)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN 
            = (1U & (~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_write)));
    }
    if ((0x00000024000503c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
                & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
                  | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                     & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                        & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd;
    }
    if ((0x00000024000417c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | ((0x00000040U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                          >> 1U)) | 
                          (0x0000003fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                          - (IData)(1U)))));
    }
    if ((0x00000024000447c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy 
            = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                      + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                         + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                     >> 1U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                     + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                        + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                     + ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                        + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
               & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
                  | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
               & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
                  | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                     ^ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    }
    if ((0x0000000000001bccULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata 
            = (0x000000ffU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en)
                               ? (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_dat 
                                  >> (0x0000001fU & 
                                      VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel), 3U)))
                               : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wdata)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wdata 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wdata 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wdata;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_d 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_data)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wdata));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__D 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_d;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__D) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__we));
    }
    if ((0x0000000000012fccULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en) {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0;
        } else {
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_waddr;
            vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr 
                = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_raddr;
        }
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_waddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_raddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_waddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_waddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_raddr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_raddr;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_a 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_mode)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__boot_addr)
                : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_wen)
                    ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_waddr)
                    : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_raddr)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__final_a;
    }
    if ((0x0000000600000bfcULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag 
            = ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN) 
                   | (0x000000ffU == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN)))) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0));
    }
    if ((0x00000024000507c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
            = ((1U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
                : ((2U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                    : ((3U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                        ? ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                        : ((0U == (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in;
    }
    if ((0x00000024000517c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
                : (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                    << 7U) | (0x0000007fU & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                             >> 1U))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                     >> 5U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
                & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init) 
                   | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                      & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
                  & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done) 
                     & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                        | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en;
    }
    if ((0x0000002400044fc0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
                & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch)) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    }
    if ((0x0000002400052fccULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2 
            = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
               [vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN));
    }
    if ((0x00000024000527c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata1 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1;
    }
    if ((0x0000002400051fc0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q 
            = (vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
                ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    }
    if ((0x0000002400054fccULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq;
    }
    if ((0x0000002400055fccULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
                & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                    ? ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                       & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
                          | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2)))
                    : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
                  | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                      & ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                         & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
                     | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                        & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                           & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgnt));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready;
    }
    if ((0x0000002400053fccULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd5 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2) 
               | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4));
    }
    if ((0x0000002400055fc0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf) 
               | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
                  | ((((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                       >> 1U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                     | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                         >> 2U) & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd;
    }
    if ((0x0000002400053fc0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
            = (1U & (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                      + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                         + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                     >> 1U));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
            = (1U & ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                     + ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                        + (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
            = ((~ (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
               & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
                ? ((~ ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                       | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
                : ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                    ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                    : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
                & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
               | ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
                  & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    }
    if ((0x000000240005ffc0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
            = (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
                & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
               | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
                   & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
                  | (((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                      & (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                     | (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
            = ((IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
                ? (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
                : (IData)(vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0;
        vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata0 
            = vlSelfRef.pbm_tile_full_pipeline_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0;
    }
}

void Vtop___024root___timing_commit(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_commit\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x0000000200000000ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_hb1038df9__0.commit(
                                                   "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.CEN)");
    }
    if ((! (0x0000000800000000ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_h769c8b03__0.commit(
                                                   "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.cen_flag)");
    }
    if ((! (0x0000001000000000ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_h043fc92a__0.commit(
                                                   "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.CLK)");
    }
    if ((! (0x0000002000000000ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_hb3cc8cbe__0.commit(
                                                   "@(negedge pbm_tile_full_pipeline_wrapper.dut.sram_inst.clk_dly)");
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000200000000ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_hb1038df9__0.resume(
                                                   "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.CEN)");
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_h769c8b03__0.resume(
                                                   "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.cen_flag)");
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_h043fc92a__0.resume(
                                                   "@( pbm_tile_full_pipeline_wrapper.dut.sram_inst.CLK)");
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_hb3cc8cbe__0.resume(
                                                   "@(negedge pbm_tile_full_pipeline_wrapper.dut.sram_inst.clk_dly)");
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

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

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

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
            VL_FATAL_MT("noc/pbm_tile_full_pipeline_wrapper.v", 4, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("noc/pbm_tile_full_pipeline_wrapper.v", 4, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("noc/pbm_tile_full_pipeline_wrapper.v", 4, "", "Active region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.flash_miso & 0xfeU)))) {
        Verilated::overWidthError("flash_miso");
    }
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_subservient_core__M100___act_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__0(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___act_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

void Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__8(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_ha7a8b8b4_0;

void Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__9(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 = 0;
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    if (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en) {
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm25 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x17U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x14U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x1cU));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x18U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x12U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x13U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3 
            = (7U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x0aU));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode 
            = (0x0000001fU & vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt);
    }
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
             & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
            << 1U) | (1U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
           | ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq 
        = (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((4U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)) 
           | (((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                             >> 1U))) << 1U) | (0U 
                                                == (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | (IData)((1U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 4U) & ((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | (3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op) 
           | (0U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en 
        = (IData)(((4U == (0x15U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                   & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 
        = (IData)((0x11U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 
        = (IData)((5U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                  >> 1U) | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                            | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30)) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 4U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (IData)((0U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 1U)) & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 
        = (IData)((0U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    __Vtableidx14 = (((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      << 6U) | ((0x00000020U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)) 
                                                << 5U)) 
                                | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = Vtop__ConstPool__TABLE_ha7a8b8b4_0[__Vtableidx14];
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 
        = (IData)((0x14U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr 
        = servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 2U)) & ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (9U 
                                                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U)) & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) | ((IData)(((1U == (3U 
                                                 & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                | ((IData)(((2U == 
                                             (6U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel 
        = ((0U == (7U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
           | ((3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
                 | (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
              >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__ebreak = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__csr_addr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__csr_source = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_signed = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__sh_right = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__mem_word = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_half = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__mtval_pc = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__cond_branch = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__alu_sub = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__branch_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__shift_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__op_b_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((((IData)((1U != (0x1dU & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
             << 3U) | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                        | (8U != (9U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
                       << 2U)) | ((((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 1U))) 
                                    | ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16) 
                                       | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en))) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_addr;
    vlSelfRef.servile__DOT__mdu_op = vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__mtval_pc)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__rd_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__utype = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__wb_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b_sel;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__pc_rel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__mret = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)) 
              & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__e_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__utype;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we = vlSelfRef.servile__DOT__wb_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_en;
    vlSelfRef.servile__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__wb_dmem_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en;
    vlSelfRef.o_wb_we = vlSelfRef.servile__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we 
        = vlSelfRef.servile__DOT__wb_dmem_we;
}

void Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__10(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__6(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
                                                & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
}

extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_h0ab4ebb5_0;

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__7(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    __Vtableidx13 = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                      << 3U) | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                                 << 2U) | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
        = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vtableidx13];
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
               | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
               >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
    vlSelfRef.servile__DOT__wb_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_misalign;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel 
        = vlSelfRef.servile__DOT__wb_dbus_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__o_wb_ext_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__wb_dmem_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel;
    vlSelfRef.o_wb_sel = vlSelfRef.servile__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
        = vlSelfRef.servile__DOT__wb_dmem_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
    vlSelfRef.servile__DOT__o_wb_mem_sel = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel;
    vlSelfRef.wb_mem_sel = vlSelfRef.servile__DOT__o_wb_mem_sel;
    vlSelfRef.rf_mem_if__DOT__i_wb_sel = vlSelfRef.wb_mem_sel;
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__13(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__21(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                  ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                  : ((1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                      ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                      : (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
    vlSelfRef.servile__DOT__cpu__DOT__imm = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_11 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
                                                 & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                                                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__28(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                  + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                 + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
}

void Vtop_subservient_core__M100___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__0(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 = 0;
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__i_ext_rd = vlSelfRef.servile__DOT__mdu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_ext_ready = vlSelfRef.servile__DOT__mdu_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_mdu_valid = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_mdu_valid;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30;
    vlSelfRef.servile__DOT__i_timer_irq = vlSelfRef.i_timer_irq;
    vlSelfRef.servile__DOT__cpu__DOT__jump = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_jump;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | (IData)((1U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 4U) & ((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | (3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op) 
           | (0U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 2U)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__wcnt = 
        (0x0000001fU & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rcnt) 
                        - (IData)(4U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig0 
        = (1U == (7U & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rcnt)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mdu_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp 
        = vlSelfRef.servile__DOT__cpu__DOT__iscomp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ren = 
        ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgate) 
         & (0U == (6U & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rcnt))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt 
        = (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr 
        = (0x0000001fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                          >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en 
        = (IData)(((4U == (0x15U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                   & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op))));
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq 
        = (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt0to3 
        = (0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((4U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)) 
           | (((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                             >> 1U))) << 1U) | (0U 
                                                == (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt12to31 
        = (IData)((((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                    >> 2U) | (3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)))));
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_adr = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 
        = (IData)((0x11U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.wb_mem_ack = vlSelfRef.rf_mem_if__DOT__o_wb_ack;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
            << 0x00000018U) | vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dlo);
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
             & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
            << 1U) | (1U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc 
        = (1U & vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr);
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 
        = (IData)((5U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                  >> 1U) | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                            | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30)) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 4U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
           | ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)));
    vlSelfRef.servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__mux__DOT__halt_en) 
                    | (IData)(vlSelfRef.servile__DOT__mux__DOT__sig_en))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig0 
        = vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (IData)((0U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata0 
        = (1U & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata0));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr 
        = (0xfffffffcU & vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig1 
        = vlSelfRef.servile__DOT__rf_ram_if__DOT__gen_wtrig_ratio_neq_2__DOT__wtrig0_r;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 1U)) & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync 
        = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_lsb 
        = (3U & vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en 
        = (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 
        = (IData)((0U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    __Vtableidx16 = (((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      << 6U) | ((0x00000020U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)) 
                                                << 5U)) 
                                | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = Vtop__ConstPool__TABLE_ha7a8b8b4_0[__Vtableidx16];
    vlSelfRef.servile__DOT__cpu__DOT__new_irq = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r 
        = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 
        = (IData)((0x14U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mdu_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_ext_ready;
    vlSelfRef.servile__DOT__mdu_valid = vlSelfRef.servile__DOT__cpu__DOT__o_mdu_valid;
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_rs1 = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__i_timer_irq = vlSelfRef.servile__DOT__i_timer_irq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump 
        = vlSelfRef.servile__DOT__cpu__DOT__jump;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__csr_imm = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__mdu_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mdu_op;
    vlSelfRef.servile__DOT__o_rf_ren = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ren;
    vlSelfRef.servile__DOT__cpu__DOT__mem_bytecnt = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rs1_addr = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__rs2_addr = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__cnt0to3 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt0to3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__rd_addr = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr;
    vlSelfRef.servile__DOT__cpu__DOT__cnt12to31 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt12to31;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc 
        = (1U & vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_adr);
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_adr = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_adr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr 
        = servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 2U)) & ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (9U 
                                                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))))));
    vlSelfRef.servile__DOT__i_wb_mem_ack = vlSelfRef.wb_mem_ack;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_dat = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U)) & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en;
    vlSelfRef.servile__DOT__rdata0 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata0;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_adr = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_wen = 
        (((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wen0_r) 
          & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig0)) 
         | ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wen1_r) 
            & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig1)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__lsb = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__cnt_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) | ((IData)(((1U == (3U 
                                                 & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                | ((IData)(((2U == 
                                             (6U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_new_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__new_irq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt7 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt2 
        = ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt1 
        = ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt3 
        = ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt11 
        = ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt12 
        = ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt0 
        = ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_done 
        = ((7U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel 
        = ((0U == (7U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
           | ((3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
                 | (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
              >> 2U));
    vlSelfRef.servile__DOT__mdu_rs1 = vlSelfRef.servile__DOT__cpu__DOT__o_ext_rs1;
    vlSelfRef.servile__DOT__cpu__DOT__ebreak = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip 
        = vlSelfRef.servile__DOT__cpu__DOT__i_timer_irq;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__mtval_pc = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_source = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_imm;
    vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_signed = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mdu_op 
        = vlSelfRef.servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_mdu_op 
        = vlSelfRef.servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op 
        = vlSelfRef.servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.rf_ren = vlSelfRef.servile__DOT__o_rf_ren;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__cond_branch = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr 
        = vlSelfRef.servile__DOT__cpu__DOT__rs1_addr;
    vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2_addr;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt0to3;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_addr;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt12to31;
    vlSelfRef.servile__DOT__wb_ibus_adr = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_adr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__i_wb_mem_ack;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_shamt 
        = (7U & (vlSelfRef.servile__DOT__cpu__DOT__o_dbus_dat 
                 >> 0x00000018U));
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_rs2 = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.servile__DOT__wb_dbus_dat = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.servile__DOT__cpu__DOT__csr_addr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__alu_sub = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__branch_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata0 = vlSelfRef.servile__DOT__rdata0;
    vlSelfRef.servile__DOT__wb_dbus_adr = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_adr;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_wdata 
        = (0x000000ffU & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig1)
                           ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wdata1_r)
                           : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wdata0_r)));
    vlSelfRef.servile__DOT__o_rf_wdata = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_wdata;
    vlSelfRef.servile__DOT__o_rf_wen = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_wen;
    vlSelfRef.servile__DOT__cpu__DOT__sh_right = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__shift_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__mem_word = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_half = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__lsb) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__lsb;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__lsb;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__op_b_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__cnt7 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt7;
    vlSelfRef.servile__DOT__cpu__DOT__cnt2 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt2;
    vlSelfRef.servile__DOT__cpu__DOT__cnt1 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt1;
    vlSelfRef.servile__DOT__cpu__DOT__cnt3 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt3;
    vlSelfRef.servile__DOT__cpu__DOT__cnt11 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt11;
    vlSelfRef.servile__DOT__cpu__DOT__cnt12 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt12;
    vlSelfRef.servile__DOT__cpu__DOT__cnt0 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt0;
    vlSelfRef.servile__DOT__cpu__DOT__cnt_done = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((((IData)((1U != (0x1dU & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
             << 3U) | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                        | (8U != (9U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
                       << 2U)) | ((((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 1U))) 
                                    | ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16) 
                                       | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en))) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__ebreak;
    vlSelfRef.servile__DOT__mdu_op = vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__mtval_pc)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op;
    vlSelfRef.rf_mem_if__DOT__i_ren = vlSelfRef.rf_ren;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr 
        = vlSelfRef.servile__DOT__wb_ibus_adr;
    vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__rd_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op;
    vlSelfRef.servile__DOT__mdu_rs2 = vlSelfRef.servile__DOT__cpu__DOT__o_ext_rs2;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_dat 
        = vlSelfRef.servile__DOT__wb_dbus_dat;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__utype = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__wb_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata0;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_adr 
        = vlSelfRef.servile__DOT__wb_dbus_adr;
    vlSelfRef.rf_wdata = vlSelfRef.servile__DOT__o_rf_wdata;
    vlSelfRef.rf_wen = vlSelfRef.servile__DOT__o_rf_wen;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid 
        = (1U & ((IData)((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                 | ((IData)((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))) 
                    | (((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                            >> 1U)) & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                          >> 1U))) 
                       | (((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                               >> 1U)) & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                          | ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt)) 
                             & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                   >> 1U))))))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_q 
        = (((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
            & (vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
               >> 0x00000018U)) | (((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                    & (vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                       >> 0x00000010U)) 
                                   | (((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & (vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                          >> 8U)) | 
                                      ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat))));
    vlSelfRef.servile__DOT__cpu__DOT__two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b_sel;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt7 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt7 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt2;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_cnt1 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt3;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt11;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt12;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_cnt_done 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__pc_rel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__mret = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)) 
              & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__e_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__o_rreg0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_op;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_dat 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_dat 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__utype;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we = vlSelfRef.servile__DOT__wb_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_adr 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_adr 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.servile__DOT__mux__DOT__ext = (0U != 
                                             (vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_adr 
                                              >> 0x0000001eU));
    vlSelfRef.rf_mem_if__DOT__i_wdata = vlSelfRef.rf_wdata;
    vlSelfRef.rf_mem_if__DOT__i_wen = vlSelfRef.rf_wen;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__dat_valid 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
              | ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt)) 
                 | ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt) 
                        >> 1U)) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half)))));
    __Vtableidx15 = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                      << 3U) | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                                 << 2U) | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
        = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vtableidx15];
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
               | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
               >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__plus_4 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12)));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3)
                  ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)
                  : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en;
    vlSelfRef.servile__DOT__rreg0 = vlSelfRef.servile__DOT__cpu__DOT__o_rreg0;
    vlSelfRef.servile__DOT__o_wb_ext_dat = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_dat;
    vlSelfRef.servile__DOT__wb_dmem_dat = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_dat;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__cpu__DOT__rs1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs1;
    vlSelfRef.servile__DOT__o_wb_ext_adr = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_adr;
    vlSelfRef.servile__DOT__wb_dmem_adr = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg2_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init 
        = ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
               | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done))) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__plus_4) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__plus_4))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_e_op) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync)));
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm31));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreg0 
        = vlSelfRef.servile__DOT__rreg0;
    vlSelfRef.o_wb_dat = vlSelfRef.servile__DOT__o_wb_ext_dat;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat 
        = vlSelfRef.servile__DOT__wb_dmem_dat;
    vlSelfRef.servile__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__wb_dmem_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__rs1;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__rs1;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__rs1;
    vlSelfRef.o_wb_adr = vlSelfRef.servile__DOT__o_wb_ext_adr;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr 
        = vlSelfRef.servile__DOT__wb_dmem_adr;
    vlSelfRef.servile__DOT__wb_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_misalign;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__dat_valid)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q)
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_signed) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__signbit)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_op));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_done) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init));
    vlSelfRef.servile__DOT__cpu__DOT__init = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__trap = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                  ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                  : ((1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                      ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                      : (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_dat 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat;
    vlSelfRef.o_wb_we = vlSelfRef.servile__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we 
        = vlSelfRef.servile__DOT__wb_dmem_we;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
                                                & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1));
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel 
        = vlSelfRef.servile__DOT__wb_dbus_sel;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en)));
    vlSelfRef.servile__DOT__cpu__DOT__mem_rd = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_pc_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en;
    vlSelfRef.servile__DOT__cpu__DOT__rd_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_init 
        = vlSelfRef.servile__DOT__cpu__DOT__init;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_init 
        = vlSelfRef.servile__DOT__cpu__DOT__init;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap 
        = vlSelfRef.servile__DOT__cpu__DOT__trap;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mret) 
           | (IData)(vlSelfRef.servile__DOT__cpu__DOT__trap));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap 
        = vlSelfRef.servile__DOT__cpu__DOT__trap;
    vlSelfRef.servile__DOT__cpu__DOT__imm = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm;
    vlSelfRef.servile__DOT__o_wb_mem_dat = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_dat;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_pc_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_en;
    if (vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op) {
        vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
            = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_en) 
               & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_init) 
                  & (0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))));
        vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en 
            = (1U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_init)) 
                     | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done) 
                        & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right))));
    } else {
        vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
            = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_en));
        vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en = 0U;
    }
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wen1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)));
    if (vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap) {
        vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 = 0x23U;
        vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 = 0x22U;
    } else {
        vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 
            = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr;
        vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 
            = (0x00000020U | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr));
    }
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
                    | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
                       | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.wb_mem_dat = vlSelfRef.servile__DOT__o_wb_mem_dat;
    vlSelfRef.servile__DOT__o_wb_ext_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__wb_dmem_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel;
    vlSelfRef.servile__DOT__wb_dbus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__rd_wen 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen) 
           & (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr)));
    vlSelfRef.servile__DOT__cpu__DOT__o_wen1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wen1;
    vlSelfRef.servile__DOT__cpu__DOT__o_wreg0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0;
    vlSelfRef.servile__DOT__cpu__DOT__o_wreg1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1 
        = ((0x00000020U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                           << 5U)) | ((0x0000001cU 
                                       & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr) 
                                          & ((- (IData)((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                             << 2U))) 
                                      | (3U & ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)) 
                                               | (((- (IData)((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en))) 
                                                   & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr)) 
                                                  | ((- (IData)((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
                                                 & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                                                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
    vlSelfRef.rf_mem_if__DOT__i_wb_dat = vlSelfRef.wb_mem_dat;
    vlSelfRef.o_wb_sel = vlSelfRef.servile__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
        = vlSelfRef.servile__DOT__wb_dmem_sel;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_stb 
        = vlSelfRef.servile__DOT__wb_dbus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wen0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__rd_wen)));
    vlSelfRef.servile__DOT__wen1 = vlSelfRef.servile__DOT__cpu__DOT__o_wen1;
    vlSelfRef.servile__DOT__wreg0 = vlSelfRef.servile__DOT__cpu__DOT__o_wreg0;
    vlSelfRef.servile__DOT__wreg1 = vlSelfRef.servile__DOT__cpu__DOT__o_wreg1;
    vlSelfRef.servile__DOT__cpu__DOT__o_rreg1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                  + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                 + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_stb 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((IData)(vlSelfRef.servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0) 
              & (IData)(vlSelfRef.servile__DOT__mux__DOT__ext)));
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((~ (IData)(vlSelfRef.servile__DOT__mux__DOT__ext)) 
              & (IData)(vlSelfRef.servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0)));
    vlSelfRef.servile__DOT__cpu__DOT__o_wen0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wen0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wen1 
        = vlSelfRef.servile__DOT__wen1;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreg0 
        = vlSelfRef.servile__DOT__wreg0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreg1 
        = vlSelfRef.servile__DOT__wreg1;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__wreg = 
        ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig1)
          ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreg1)
          : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreg0));
    vlSelfRef.servile__DOT__rreg1 = vlSelfRef.servile__DOT__cpu__DOT__o_rreg1;
    vlSelfRef.servile__DOT__o_wb_mem_sel = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel;
    vlSelfRef.servile__DOT__o_wb_ext_stb = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_stb;
    vlSelfRef.servile__DOT__wb_dmem_stb = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__wen0 = vlSelfRef.servile__DOT__cpu__DOT__o_wen0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreg1 
        = vlSelfRef.servile__DOT__rreg1;
    vlSelfRef.wb_mem_sel = vlSelfRef.servile__DOT__o_wb_mem_sel;
    vlSelfRef.o_wb_stb = vlSelfRef.servile__DOT__o_wb_ext_stb;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb 
        = vlSelfRef.servile__DOT__wb_dmem_stb;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wen0 
        = vlSelfRef.servile__DOT__wen0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_waddr 
        = (((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wcnt) 
                            >> 3U)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__rreg = 
        ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig0)
          ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreg1)
          : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreg0));
    vlSelfRef.rf_mem_if__DOT__i_wb_sel = vlSelfRef.wb_mem_sel;
    vlSelfRef.servile__DOT__o_rf_waddr = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_waddr;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_raddr 
        = (((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rcnt) 
                            >> 3U)));
    vlSelfRef.rf_waddr = vlSelfRef.servile__DOT__o_rf_waddr;
    vlSelfRef.servile__DOT__o_rf_raddr = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_raddr;
    vlSelfRef.rf_mem_if__DOT__i_waddr = vlSelfRef.rf_waddr;
    vlSelfRef.rf_raddr = vlSelfRef.servile__DOT__o_rf_raddr;
    vlSelfRef.rf_mem_if__DOT__rf_waddr = (0x000000ffU 
                                          & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_waddr)));
    vlSelfRef.rf_mem_if__DOT__i_raddr = vlSelfRef.rf_raddr;
    vlSelfRef.rf_mem_if__DOT__rf_raddr = (0x000000ffU 
                                          & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_raddr)));
}

void Vtop_subservient_core__M100___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

void Vtop_subservient_core__M100___act_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__0(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___act_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

void Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__8(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
}

void Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__9(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 = 0;
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    if (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en) {
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm25 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x17U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x14U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x1cU));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x18U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x12U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x13U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3 
            = (7U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x0aU));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode 
            = (0x0000001fU & vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt);
    }
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
             & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
            << 1U) | (1U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
           | ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq 
        = (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((4U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)) 
           | (((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                             >> 1U))) << 1U) | (0U 
                                                == (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | (IData)((1U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 4U) & ((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | (3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op) 
           | (0U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en 
        = (IData)(((4U == (0x15U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                   & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 
        = (IData)((0x11U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 
        = (IData)((5U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                  >> 1U) | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                            | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30)) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 4U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (IData)((0U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 1U)) & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 
        = (IData)((0U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    __Vtableidx16 = (((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      << 6U) | ((0x00000020U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)) 
                                                << 5U)) 
                                | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = Vtop__ConstPool__TABLE_ha7a8b8b4_0[__Vtableidx16];
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 
        = (IData)((0x14U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr 
        = servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 2U)) & ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (9U 
                                                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U)) & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) | ((IData)(((1U == (3U 
                                                 & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                | ((IData)(((2U == 
                                             (6U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel 
        = ((0U == (7U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
           | ((3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
                 | (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
              >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__ebreak = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__csr_addr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__csr_source = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_signed = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__sh_right = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__mem_word = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_half = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__mtval_pc = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__cond_branch = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__alu_sub = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__branch_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__shift_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__op_b_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((((IData)((1U != (0x1dU & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
             << 3U) | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                        | (8U != (9U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
                       << 2U)) | ((((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 1U))) 
                                    | ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16) 
                                       | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en))) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_addr;
    vlSelfRef.servile__DOT__mdu_op = vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__mtval_pc)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__rd_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__utype = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__wb_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b_sel;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__pc_rel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__mret = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)) 
              & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__e_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__utype;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we = vlSelfRef.servile__DOT__wb_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_en;
    vlSelfRef.servile__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__wb_dmem_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en;
    vlSelfRef.o_wb_we = vlSelfRef.servile__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we 
        = vlSelfRef.servile__DOT__wb_dmem_we;
}

void Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__10(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__6(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
                                                & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__7(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __Vtableidx15 = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                      << 3U) | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                                 << 2U) | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
        = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vtableidx15];
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
               | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
               >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
    vlSelfRef.servile__DOT__wb_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_misalign;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel 
        = vlSelfRef.servile__DOT__wb_dbus_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__o_wb_ext_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__wb_dmem_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel;
    vlSelfRef.o_wb_sel = vlSelfRef.servile__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
        = vlSelfRef.servile__DOT__wb_dmem_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
    vlSelfRef.servile__DOT__o_wb_mem_sel = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel;
    vlSelfRef.wb_mem_sel = vlSelfRef.servile__DOT__o_wb_mem_sel;
    vlSelfRef.rf_mem_if__DOT__i_wb_sel = vlSelfRef.wb_mem_sel;
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__13(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__21(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                  ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                  : ((1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                      ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                      : (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
    vlSelfRef.servile__DOT__cpu__DOT__imm = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
                                                 & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                                                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__28(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                  + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                 + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
}

void Vtop_subservient_core__M100___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__0(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 = 0;
    CData/*3:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__i_ext_rd = vlSelfRef.servile__DOT__mdu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_ext_ready = vlSelfRef.servile__DOT__mdu_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_mdu_valid = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_mdu_valid;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30;
    vlSelfRef.servile__DOT__i_timer_irq = vlSelfRef.i_timer_irq;
    vlSelfRef.servile__DOT__cpu__DOT__jump = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_jump;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | (IData)((1U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 4U) & ((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | (3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op) 
           | (0U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 2U)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__wcnt = 
        (0x0000001fU & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rcnt) 
                        - (IData)(4U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig0 
        = (1U == (7U & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rcnt)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mdu_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp 
        = vlSelfRef.servile__DOT__cpu__DOT__iscomp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ren = 
        ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgate) 
         & (0U == (6U & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rcnt))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt 
        = (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr 
        = (0x0000001fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                          >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en 
        = (IData)(((4U == (0x15U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                   & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op))));
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq 
        = (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt0to3 
        = (0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((4U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)) 
           | (((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                             >> 1U))) << 1U) | (0U 
                                                == (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt12to31 
        = (IData)((((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                    >> 2U) | (3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)))));
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_adr = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 
        = (IData)((0x11U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.wb_mem_ack = vlSelfRef.rf_mem_if__DOT__o_wb_ack;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
            << 0x00000018U) | vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dlo);
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
             & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
            << 1U) | (1U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc 
        = (1U & vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr);
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 
        = (IData)((5U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                  >> 1U) | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                            | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30)) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 4U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
           | ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)));
    vlSelfRef.servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__mux__DOT__halt_en) 
                    | (IData)(vlSelfRef.servile__DOT__mux__DOT__sig_en))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig0 
        = vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (IData)((0U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata0 
        = (1U & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata0));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr 
        = (0xfffffffcU & vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig1 
        = vlSelfRef.servile__DOT__rf_ram_if__DOT__gen_wtrig_ratio_neq_2__DOT__wtrig0_r;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 1U)) & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync 
        = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_lsb 
        = (3U & vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en 
        = (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 
        = (IData)((0U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    __Vtableidx18 = (((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      << 6U) | ((0x00000020U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)) 
                                                << 5U)) 
                                | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = Vtop__ConstPool__TABLE_ha7a8b8b4_0[__Vtableidx18];
    vlSelfRef.servile__DOT__cpu__DOT__new_irq = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r 
        = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 
        = (IData)((0x14U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mdu_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_ext_ready;
    vlSelfRef.servile__DOT__mdu_valid = vlSelfRef.servile__DOT__cpu__DOT__o_mdu_valid;
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_rs1 = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__i_timer_irq = vlSelfRef.servile__DOT__i_timer_irq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump 
        = vlSelfRef.servile__DOT__cpu__DOT__jump;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__csr_imm = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__mdu_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mdu_op;
    vlSelfRef.servile__DOT__o_rf_ren = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ren;
    vlSelfRef.servile__DOT__cpu__DOT__mem_bytecnt = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rs1_addr = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__rs2_addr = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__cnt0to3 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt0to3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__rd_addr = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr;
    vlSelfRef.servile__DOT__cpu__DOT__cnt12to31 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt12to31;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc 
        = (1U & vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_adr);
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_adr = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_adr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr 
        = servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 2U)) & ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (9U 
                                                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))))));
    vlSelfRef.servile__DOT__i_wb_mem_ack = vlSelfRef.wb_mem_ack;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_dat = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U)) & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en;
    vlSelfRef.servile__DOT__rdata0 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata0;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_adr = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_wen = 
        (((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wen0_r) 
          & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig0)) 
         | ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wen1_r) 
            & (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig1)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__lsb = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__cnt_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) | ((IData)(((1U == (3U 
                                                 & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                | ((IData)(((2U == 
                                             (6U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_new_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__new_irq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt7 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt2 
        = ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt1 
        = ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt3 
        = ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt11 
        = ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt12 
        = ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt0 
        = ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_done 
        = ((7U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel 
        = ((0U == (7U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
           | ((3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
                 | (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
              >> 2U));
    vlSelfRef.servile__DOT__mdu_rs1 = vlSelfRef.servile__DOT__cpu__DOT__o_ext_rs1;
    vlSelfRef.servile__DOT__cpu__DOT__ebreak = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip 
        = vlSelfRef.servile__DOT__cpu__DOT__i_timer_irq;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__mtval_pc = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_source = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_imm;
    vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_signed = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mdu_op 
        = vlSelfRef.servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_mdu_op 
        = vlSelfRef.servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op 
        = vlSelfRef.servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.rf_ren = vlSelfRef.servile__DOT__o_rf_ren;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__cond_branch = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr 
        = vlSelfRef.servile__DOT__cpu__DOT__rs1_addr;
    vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2_addr;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt0to3;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_addr;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt12to31;
    vlSelfRef.servile__DOT__wb_ibus_adr = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_adr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__i_wb_mem_ack;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_shamt 
        = (7U & (vlSelfRef.servile__DOT__cpu__DOT__o_dbus_dat 
                 >> 0x00000018U));
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_rs2 = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.servile__DOT__wb_dbus_dat = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.servile__DOT__cpu__DOT__csr_addr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__alu_sub = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__branch_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata0 = vlSelfRef.servile__DOT__rdata0;
    vlSelfRef.servile__DOT__wb_dbus_adr = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_adr;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_wdata 
        = (0x000000ffU & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig1)
                           ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wdata1_r)
                           : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wdata0_r)));
    vlSelfRef.servile__DOT__o_rf_wdata = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_wdata;
    vlSelfRef.servile__DOT__o_rf_wen = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_wen;
    vlSelfRef.servile__DOT__cpu__DOT__sh_right = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__shift_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__mem_word = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_half = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__lsb) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__lsb;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__lsb;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__op_b_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__cnt7 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt7;
    vlSelfRef.servile__DOT__cpu__DOT__cnt2 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt2;
    vlSelfRef.servile__DOT__cpu__DOT__cnt1 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt1;
    vlSelfRef.servile__DOT__cpu__DOT__cnt3 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt3;
    vlSelfRef.servile__DOT__cpu__DOT__cnt11 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt11;
    vlSelfRef.servile__DOT__cpu__DOT__cnt12 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt12;
    vlSelfRef.servile__DOT__cpu__DOT__cnt0 = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt0;
    vlSelfRef.servile__DOT__cpu__DOT__cnt_done = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((((IData)((1U != (0x1dU & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
             << 3U) | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                        | (8U != (9U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
                       << 2U)) | ((((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 1U))) 
                                    | ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16) 
                                       | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en))) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__ebreak;
    vlSelfRef.servile__DOT__mdu_op = vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__mtval_pc)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op;
    vlSelfRef.rf_mem_if__DOT__i_ren = vlSelfRef.rf_ren;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr 
        = vlSelfRef.servile__DOT__wb_ibus_adr;
    vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__rd_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op;
    vlSelfRef.servile__DOT__mdu_rs2 = vlSelfRef.servile__DOT__cpu__DOT__o_ext_rs2;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_dat 
        = vlSelfRef.servile__DOT__wb_dbus_dat;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__utype = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__wb_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata0;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_adr 
        = vlSelfRef.servile__DOT__wb_dbus_adr;
    vlSelfRef.rf_wdata = vlSelfRef.servile__DOT__o_rf_wdata;
    vlSelfRef.rf_wen = vlSelfRef.servile__DOT__o_rf_wen;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid 
        = (1U & ((IData)((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                 | ((IData)((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))) 
                    | (((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                            >> 1U)) & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                          >> 1U))) 
                       | (((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                               >> 1U)) & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                          | ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt)) 
                             & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                   >> 1U))))))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_q 
        = (((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
            & (vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
               >> 0x00000018U)) | (((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                    & (vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                       >> 0x00000010U)) 
                                   | (((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & (vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                          >> 8U)) | 
                                      ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_dat))));
    vlSelfRef.servile__DOT__cpu__DOT__two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b_sel;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt7 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt7 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt2;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_cnt1 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt3;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt11;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt12;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_cnt_done 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done 
        = vlSelfRef.servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.servile__DOT__cpu__DOT__pc_rel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__mret = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)) 
              & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__e_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__o_rreg0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_op;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_dat 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_dat 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__utype;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we = vlSelfRef.servile__DOT__wb_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_adr 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_adr 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.servile__DOT__mux__DOT__ext = (0U != 
                                             (vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_adr 
                                              >> 0x0000001eU));
    vlSelfRef.rf_mem_if__DOT__i_wdata = vlSelfRef.rf_wdata;
    vlSelfRef.rf_mem_if__DOT__i_wen = vlSelfRef.rf_wen;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__dat_valid 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
              | ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt)) 
                 | ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt) 
                        >> 1U)) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half)))));
    __Vtableidx17 = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                      << 3U) | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                                 << 2U) | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
        = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vtableidx17];
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
               | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
               >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__plus_4 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12)));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3)
                  ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)
                  : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en;
    vlSelfRef.servile__DOT__rreg0 = vlSelfRef.servile__DOT__cpu__DOT__o_rreg0;
    vlSelfRef.servile__DOT__o_wb_ext_dat = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_dat;
    vlSelfRef.servile__DOT__wb_dmem_dat = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_dat;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__cpu__DOT__rs1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs1;
    vlSelfRef.servile__DOT__o_wb_ext_adr = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_adr;
    vlSelfRef.servile__DOT__wb_dmem_adr = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg2_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init 
        = ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
               | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done))) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__plus_4) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__plus_4))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_e_op) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync)));
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm31));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreg0 
        = vlSelfRef.servile__DOT__rreg0;
    vlSelfRef.o_wb_dat = vlSelfRef.servile__DOT__o_wb_ext_dat;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat 
        = vlSelfRef.servile__DOT__wb_dmem_dat;
    vlSelfRef.servile__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__wb_dmem_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__rs1;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__rs1;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1 
        = vlSelfRef.servile__DOT__cpu__DOT__rs1;
    vlSelfRef.o_wb_adr = vlSelfRef.servile__DOT__o_wb_ext_adr;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr 
        = vlSelfRef.servile__DOT__wb_dmem_adr;
    vlSelfRef.servile__DOT__wb_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_misalign;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__dat_valid)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q)
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_signed) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__signbit)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_op));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_done) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init));
    vlSelfRef.servile__DOT__cpu__DOT__init = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__trap = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                  ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                  : ((1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                      ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                      : (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_dat 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat;
    vlSelfRef.o_wb_we = vlSelfRef.servile__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we 
        = vlSelfRef.servile__DOT__wb_dmem_we;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
                                                & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1));
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel 
        = vlSelfRef.servile__DOT__wb_dbus_sel;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en)));
    vlSelfRef.servile__DOT__cpu__DOT__mem_rd = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_pc_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en;
    vlSelfRef.servile__DOT__cpu__DOT__rd_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_init 
        = vlSelfRef.servile__DOT__cpu__DOT__init;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_init 
        = vlSelfRef.servile__DOT__cpu__DOT__init;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap 
        = vlSelfRef.servile__DOT__cpu__DOT__trap;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mret) 
           | (IData)(vlSelfRef.servile__DOT__cpu__DOT__trap));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap 
        = vlSelfRef.servile__DOT__cpu__DOT__trap;
    vlSelfRef.servile__DOT__cpu__DOT__imm = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm;
    vlSelfRef.servile__DOT__o_wb_mem_dat = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_dat;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_pc_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_en;
    if (vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op) {
        vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
            = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_en) 
               & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_init) 
                  & (0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))));
        vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en 
            = (1U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_init)) 
                     | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done) 
                        & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right))));
    } else {
        vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
            = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_en));
        vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en = 0U;
    }
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wen1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)));
    if (vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap) {
        vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 = 0x23U;
        vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 = 0x22U;
    } else {
        vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 
            = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr;
        vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 
            = (0x00000020U | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr));
    }
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
                    | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
                       | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.wb_mem_dat = vlSelfRef.servile__DOT__o_wb_mem_dat;
    vlSelfRef.servile__DOT__o_wb_ext_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__wb_dmem_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel;
    vlSelfRef.servile__DOT__wb_dbus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__rd_wen 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen) 
           & (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr)));
    vlSelfRef.servile__DOT__cpu__DOT__o_wen1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wen1;
    vlSelfRef.servile__DOT__cpu__DOT__o_wreg0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0;
    vlSelfRef.servile__DOT__cpu__DOT__o_wreg1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1 
        = ((0x00000020U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                           << 5U)) | ((0x0000001cU 
                                       & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr) 
                                          & ((- (IData)((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                             << 2U))) 
                                      | (3U & ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)) 
                                               | (((- (IData)((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en))) 
                                                   & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr)) 
                                                  | ((- (IData)((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
                                                & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                                                   & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
    vlSelfRef.rf_mem_if__DOT__i_wb_dat = vlSelfRef.wb_mem_dat;
    vlSelfRef.o_wb_sel = vlSelfRef.servile__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
        = vlSelfRef.servile__DOT__wb_dmem_sel;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_stb 
        = vlSelfRef.servile__DOT__wb_dbus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wen0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__rd_wen)));
    vlSelfRef.servile__DOT__wen1 = vlSelfRef.servile__DOT__cpu__DOT__o_wen1;
    vlSelfRef.servile__DOT__wreg0 = vlSelfRef.servile__DOT__cpu__DOT__o_wreg0;
    vlSelfRef.servile__DOT__wreg1 = vlSelfRef.servile__DOT__cpu__DOT__o_wreg1;
    vlSelfRef.servile__DOT__cpu__DOT__o_rreg1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                  + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                 + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_stb 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((IData)(vlSelfRef.servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0) 
              & (IData)(vlSelfRef.servile__DOT__mux__DOT__ext)));
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((~ (IData)(vlSelfRef.servile__DOT__mux__DOT__ext)) 
              & (IData)(vlSelfRef.servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0)));
    vlSelfRef.servile__DOT__cpu__DOT__o_wen0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wen0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wen1 
        = vlSelfRef.servile__DOT__wen1;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreg0 
        = vlSelfRef.servile__DOT__wreg0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreg1 
        = vlSelfRef.servile__DOT__wreg1;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__wreg = 
        ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wtrig1)
          ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreg1)
          : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreg0));
    vlSelfRef.servile__DOT__rreg1 = vlSelfRef.servile__DOT__cpu__DOT__o_rreg1;
    vlSelfRef.servile__DOT__o_wb_mem_sel = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel;
    vlSelfRef.servile__DOT__o_wb_ext_stb = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_stb;
    vlSelfRef.servile__DOT__wb_dmem_stb = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__wen0 = vlSelfRef.servile__DOT__cpu__DOT__o_wen0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreg1 
        = vlSelfRef.servile__DOT__rreg1;
    vlSelfRef.wb_mem_sel = vlSelfRef.servile__DOT__o_wb_mem_sel;
    vlSelfRef.o_wb_stb = vlSelfRef.servile__DOT__o_wb_ext_stb;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb 
        = vlSelfRef.servile__DOT__wb_dmem_stb;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wen0 
        = vlSelfRef.servile__DOT__wen0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_waddr 
        = (((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__wcnt) 
                            >> 3U)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__rreg = 
        ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig0)
          ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreg1)
          : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreg0));
    vlSelfRef.rf_mem_if__DOT__i_wb_sel = vlSelfRef.wb_mem_sel;
    vlSelfRef.servile__DOT__o_rf_waddr = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_waddr;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_raddr 
        = (((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rcnt) 
                            >> 3U)));
    vlSelfRef.rf_waddr = vlSelfRef.servile__DOT__o_rf_waddr;
    vlSelfRef.servile__DOT__o_rf_raddr = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_raddr;
    vlSelfRef.rf_mem_if__DOT__i_waddr = vlSelfRef.rf_waddr;
    vlSelfRef.rf_raddr = vlSelfRef.servile__DOT__o_rf_raddr;
    vlSelfRef.rf_mem_if__DOT__rf_waddr = (0x000000ffU 
                                          & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_waddr)));
    vlSelfRef.rf_mem_if__DOT__i_raddr = vlSelfRef.rf_raddr;
    vlSelfRef.rf_mem_if__DOT__rf_raddr = (0x000000ffU 
                                          & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_raddr)));
}

void Vtop_subservient_core__M100___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___ico_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

void Vtop_subservient_core__M100___act_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__0(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___act_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

void Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__8(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
}

void Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__9(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 = 0;
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    if (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en) {
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm25 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x17U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x14U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x1cU));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x18U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x12U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x13U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3 
            = (7U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x0aU));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode 
            = (0x0000001fU & vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt);
    }
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
             & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
            << 1U) | (1U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
           | ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq 
        = (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((4U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)) 
           | (((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                             >> 1U))) << 1U) | (0U 
                                                == (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | (IData)((1U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 4U) & ((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | (3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op) 
           | (0U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en 
        = (IData)(((4U == (0x15U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                   & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8 
        = (IData)((0x11U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16 
        = (IData)((5U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                  >> 1U) | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                            | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30)) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 4U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (IData)((0U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 1U)) & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18 
        = (IData)((0U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    __Vtableidx18 = (((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      << 6U) | ((0x00000020U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)) 
                                                << 5U)) 
                                | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = Vtop__ConstPool__TABLE_ha7a8b8b4_0[__Vtableidx18];
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9 
        = (IData)((0x14U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr 
        = servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 2U)) & ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_8) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (9U 
                                                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U)) & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) | ((IData)(((1U == (3U 
                                                 & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                | ((IData)(((2U == 
                                             (6U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_18))) 
                                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel 
        = ((0U == (7U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
           | ((3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
                 | (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
              >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__ebreak = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__csr_addr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__csr_source = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_signed = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__sh_right = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__mem_word = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_half = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__mtval_pc = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__cond_branch = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__alu_sub = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__branch_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__shift_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__op_b_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((((IData)((1U != (0x1dU & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
             << 3U) | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_9) 
                        | (8U != (9U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
                       << 2U)) | ((((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 1U))) 
                                    | ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_16) 
                                       | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en))) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_addr;
    vlSelfRef.servile__DOT__mdu_op = vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__mtval_pc)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__rd_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__utype = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__wb_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b_sel;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__pc_rel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__mret = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_ha86f95b1_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)) 
              & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__e_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__utype;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we = vlSelfRef.servile__DOT__wb_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_en;
    vlSelfRef.servile__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__wb_dmem_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en;
    vlSelfRef.o_wb_we = vlSelfRef.servile__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we 
        = vlSelfRef.servile__DOT__wb_dmem_we;
}

void Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__10(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__6(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
                                                & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__7(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    __Vtableidx17 = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                      << 3U) | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                                 << 2U) | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
        = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vtableidx17];
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
               | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
               >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
    vlSelfRef.servile__DOT__wb_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_misalign;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel 
        = vlSelfRef.servile__DOT__wb_dbus_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__o_wb_ext_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__wb_dmem_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel;
    vlSelfRef.o_wb_sel = vlSelfRef.servile__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
        = vlSelfRef.servile__DOT__wb_dmem_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
    vlSelfRef.servile__DOT__o_wb_mem_sel = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel;
    vlSelfRef.wb_mem_sel = vlSelfRef.servile__DOT__o_wb_mem_sel;
    vlSelfRef.rf_mem_if__DOT__i_wb_sel = vlSelfRef.wb_mem_sel;
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__13(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__21(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                  ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                  : ((1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                      ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                      : (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
    vlSelfRef.servile__DOT__cpu__DOT__imm = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
                                                & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                                                   & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
}

void Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__28(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___nba_comb__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                  + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                 + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
}

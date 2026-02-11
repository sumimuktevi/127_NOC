// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_subservient_core
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__sim;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__debug;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__with_c;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__with_csr;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__with_mdu;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__mux__DOT__sim;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__PRE_REGISTER;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__DEBUG;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__MDU;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__COMPRESSED;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__ALIGN;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__state__DOT__WITH_CSR;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__state__DOT__ALIGN;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__state__DOT__MDU;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__decode__DOT__PRE_REGISTER;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__decode__DOT__MDU;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__bufreg__DOT__MDU;
constexpr CData/*0:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__mem_if__DOT__WITH_CSR;
constexpr CData/*1:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__CSR_SOURCE_CSR;
constexpr CData/*1:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__CSR_SOURCE_EXT;
constexpr CData/*1:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__CSR_SOURCE_SET;
constexpr CData/*1:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__CSR_SOURCE_CLR;
constexpr IData/*31:0*/ Vtop_subservient_core::memsize;
constexpr IData/*31:0*/ Vtop_subservient_core::RESET_STRATEGY;
constexpr IData/*31:0*/ Vtop_subservient_core::WITH_CSR;
constexpr IData/*31:0*/ Vtop_subservient_core::aw;
constexpr IData/*31:0*/ Vtop_subservient_core::regs;
constexpr IData/*31:0*/ Vtop_subservient_core::rf_width;
constexpr IData/*31:0*/ Vtop_subservient_core::rf_mem_if__DOT__depth;
constexpr IData/*31:0*/ Vtop_subservient_core::rf_mem_if__DOT__rf_regs;
constexpr IData/*31:0*/ Vtop_subservient_core::rf_mem_if__DOT__rf_depth;
constexpr IData/*31:0*/ Vtop_subservient_core::rf_mem_if__DOT__aw;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__width;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__reset_pc;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__reset_strategy;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_width;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__B;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__regs;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_l2d;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__mux__DOT__sim_sig_adr;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__mux__DOT__sim_halt_adr;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__width;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__reset_strategy;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__csr_regs;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__B;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__raw;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__l2w;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__aw;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__ratio;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__CMSB;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__rf_ram_if__DOT__l2r;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__WITH_CSR;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__B;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__RESET_STRATEGY;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__RESET_PC;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__state__DOT__RESET_STRATEGY;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__state__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__immdec__DOT__SHARED_RFADDR_IMM_REGS;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__immdec__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__bufreg__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__bufreg__DOT__B;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__bufreg2__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__bufreg2__DOT__B;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__ctrl__DOT__RESET_STRATEGY;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__ctrl__DOT__RESET_PC;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__ctrl__DOT__WITH_CSR;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__ctrl__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__ctrl__DOT__B;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__alu__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__alu__DOT__B;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__rf_if__DOT__WITH_CSR;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__rf_if__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__rf_if__DOT__B;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__mem_if__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__mem_if__DOT__B;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__RESET_STRATEGY;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__W;
constexpr IData/*31:0*/ Vtop_subservient_core::servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__B;


void Vtop_subservient_core___ctor_var_reset(Vtop_subservient_core* vlSelf);

void Vtop_subservient_core::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_subservient_core___ctor_var_reset(this);
}

void Vtop_subservient_core::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_subservient_core::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::Tdly;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::Tcyc;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::Tckh;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::Tckl;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::tcs;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::tas;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::tds;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::tws;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::twis;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::tch;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::tah;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::tdh;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::twh;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::twih;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::ta;


void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ctor_var_reset(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1* vlSelf);

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1___ctor_var_reset(this);
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

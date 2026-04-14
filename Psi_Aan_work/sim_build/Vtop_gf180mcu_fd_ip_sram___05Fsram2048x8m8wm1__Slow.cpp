// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1.h"

// Parameter definitions for Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::Tdly;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::Tcyc;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::Tckh;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::Tckl;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::tcs;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::tas;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::tds;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::tws;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::twis;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::tch;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::tah;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::tdh;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::twh;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::twih;
constexpr IData/*31:0*/ Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::ta;


void Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1___ctor_var_reset(Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1* vlSelf);

Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1___ctor_var_reset(this);
}

void Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1::~Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1() {
}

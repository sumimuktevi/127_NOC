// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , boot_mode{vlSymsp->TOP.boot_mode}
    , boot_wen{vlSymsp->TOP.boot_wen}
    , boot_data{vlSymsp->TOP.boot_data}
    , tile_rd_req_0{vlSymsp->TOP.tile_rd_req_0}
    , tile_rd_req_1{vlSymsp->TOP.tile_rd_req_1}
    , tile_rd_req_2{vlSymsp->TOP.tile_rd_req_2}
    , tile_rd_req_3{vlSymsp->TOP.tile_rd_req_3}
    , tile_rd_req_4{vlSymsp->TOP.tile_rd_req_4}
    , tile_rd_req_5{vlSymsp->TOP.tile_rd_req_5}
    , tile_rd_req_6{vlSymsp->TOP.tile_rd_req_6}
    , tile_rd_req_7{vlSymsp->TOP.tile_rd_req_7}
    , tile_rd_req_8{vlSymsp->TOP.tile_rd_req_8}
    , tile_rd_data_0{vlSymsp->TOP.tile_rd_data_0}
    , tile_rd_data_1{vlSymsp->TOP.tile_rd_data_1}
    , tile_rd_data_2{vlSymsp->TOP.tile_rd_data_2}
    , tile_rd_data_3{vlSymsp->TOP.tile_rd_data_3}
    , tile_rd_data_4{vlSymsp->TOP.tile_rd_data_4}
    , tile_rd_data_5{vlSymsp->TOP.tile_rd_data_5}
    , tile_rd_data_6{vlSymsp->TOP.tile_rd_data_6}
    , tile_rd_data_7{vlSymsp->TOP.tile_rd_data_7}
    , tile_rd_data_8{vlSymsp->TOP.tile_rd_data_8}
    , boot_addr{vlSymsp->TOP.boot_addr}
    , tile_rd_addr_0{vlSymsp->TOP.tile_rd_addr_0}
    , tile_rd_addr_1{vlSymsp->TOP.tile_rd_addr_1}
    , tile_rd_addr_2{vlSymsp->TOP.tile_rd_addr_2}
    , tile_rd_addr_3{vlSymsp->TOP.tile_rd_addr_3}
    , tile_rd_addr_4{vlSymsp->TOP.tile_rd_addr_4}
    , tile_rd_addr_5{vlSymsp->TOP.tile_rd_addr_5}
    , tile_rd_addr_6{vlSymsp->TOP.tile_rd_addr_6}
    , tile_rd_addr_7{vlSymsp->TOP.tile_rd_addr_7}
    , tile_rd_addr_8{vlSymsp->TOP.tile_rd_addr_8}
    , inject_00_nw{vlSymsp->TOP.inject_00_nw}
    , monitor_22_se{vlSymsp->TOP.monitor_22_se}
    , __PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst}
    , __PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst{vlSymsp->TOP.__PVT__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtop::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}

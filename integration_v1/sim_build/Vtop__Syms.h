// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__boot_inst;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__rf_mem_if;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__arbiter;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__alu;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__bufreg;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__bufreg2;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__ctrl;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__decode;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__gen_csr;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__gen_csr__csr;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__immdec;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__immdec__gen_immdec_w_eq_1;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__mem_if;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__rf_if;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__rf_if__gen_csr;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__state;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__state__gen_cnt_w_eq_1;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__cpu__state__gen_csr;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__mux;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__rf_ram_if;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__core_inst__servile__rf_ram_if__gen_wtrig_ratio_neq_2;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__router_inst;
    VerilatedScope* __Vscopep_pbm_tile_full_pipeline_wrapper__dut__sram_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

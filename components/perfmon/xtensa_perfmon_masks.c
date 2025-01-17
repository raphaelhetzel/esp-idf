// Copyright 2018-2019 Espressif Systems (Shanghai) PTE LTD
//
// Descriptions have been adapted from the comments in xt_perf_const.h,
// licensed under MIT license and copyright  by Tensilica Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "xtensa_perfmon_masks.h"

const xtensa_perfmon_select_t xtensa_perfmon_select_table[] = {
    // select, description
    {XTPERF_CNT_CYCLES, "Counts cycles"},
    {XTPERF_CNT_OVERFLOW, "Overflow of counter"},
    {XTPERF_CNT_INSN, "Successfully Retired Instructions"},
    {XTPERF_CNT_D_STALL, "Data-related GlobalStall cycles"},
    {XTPERF_CNT_I_STALL, "Instruction-related and Other GlobalStall cycles"},
    {XTPERF_CNT_EXR, "Exceptions and Pipeline Replays"},
    {XTPERF_CNT_BUBBLES, "Hold and Other Bubble cycles"},
    {XTPERF_CNT_I_TLB, "Instruction TLB Accesses (per instruction retiring)"},
    {XTPERF_CNT_I_MEM, "Instruction Memory Accesses (per instruction retiring)"},
    {XTPERF_CNT_D_TLB, "Data TLB Accesses"},
    {XTPERF_CNT_D_LOAD_U1, "Load Instruction (Data Memory)"},
    {XTPERF_CNT_D_LOAD_U2, "Load Instruction (Data Memory)"},
    {XTPERF_CNT_D_LOAD_U3, "Load Instruction (Data Memory)"},
    {XTPERF_CNT_D_STORE_U1, "Store Instruction (Data Memory)"},
    {XTPERF_CNT_D_STORE_U2, "Store Instruction (Data Memory)"},
    {XTPERF_CNT_D_STORE_U3, "Store Instruction (Data Memory)"},
    {XTPERF_CNT_D_ACCESS_U1, "Accesses to Data Memory (Load, Store, S32C1I, ...)"},
    {XTPERF_CNT_D_ACCESS_U2, "Accesses to Data Memory (Load, Store, S32C1I, ...)"},
    {XTPERF_CNT_D_ACCESS_U3, "Accesses to Data Memory (Load, Store, S32C1I, ...)"},
    {XTPERF_CNT_MULTIPLE_LS, "Multiple Load/Store"},
    {XTPERF_CNT_OUTBOUND_PIF, "Outbound PIF"},
    {XTPERF_CNT_INBOUND_PIF, "Inbound PIF"},
    {XTPERF_CNT_PREFETCH, "Prefetch"},
    {XTPERF_CNT_IDMA, "iDMA"},
    {XTPERF_CNT_INSN_LENGTH, "Length of Instructions"},
    {-1, ""},
};

const xtensa_perfmon_masks_t xtensa_perfmon_masks_table[] = {
    // select, mask, description
    {XTPERF_CNT_CYCLES, 1, "Amount of cycles"},
    {XTPERF_CNT_OVERFLOW, 1, "Overflow counter"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_JX, "JX instructions"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_CALLX, "CALLXn instructions"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_RET, "return instructions (RET, RETW, ...)"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_RF, "supervisor return instructions (RFDE, RFE, RFI, RFWO, RFWU)"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_BRANCH_TAKEN, "Conditional branch instructions where execution"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_BRANCH_TAKEN, "transfers to the target (aka. taken branch),"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_BRANCH_TAKEN, " or loopgtz/loopnez instr where execution skips"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_BRANCH_TAKEN, " the loop (aka. not-taken loop)"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_J, "J instr"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_CALL, "CALLn instr"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_BRANCH_NOT_TAKEN, "Conditional branch instr where execution"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_BRANCH_NOT_TAKEN, " falls through (aka. not-taken branch)"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_LOOP_TAKEN, "Loop instr where execution falls into loop (aka. taken loop)"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_LOOP_BEG, "Last inst of loop and execution transfers"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_LOOP_BEG, " to LBEG (aka. loopback taken)"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_LOOP_END, "Last inst of loop and execution falls "},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_LOOP_END, " through to LEND (aka. loopback fallthrough)"},
    {XTPERF_CNT_INSN, XTPERF_MASK_INSN_NON_BRANCH, "Non-branch instr (aka. non-CTI)"},
    {XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_STORE_BUF_FULL, "Store buffer full stall"},
    {XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_STORE_BUF_CONFLICT, "Store buffer conflict stall"},
    {XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_CACHE_MISS, "Data Cache-miss stall (unused)"},
    {XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_BUSY, "Data RAM/ROM/XLMI busy stall"},
    {XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_IN_PIF, "Data inbound-PIF request stall (includes s32c1i)"},
    {XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_MHT_LOOKUP, "MHT lookup stall"},
    {XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_UNCACHED_LOAD, "Uncached load stall (included in MHT lookup stall below)"},
    {XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_BANK_CONFLICT, "Bank-conflict stall"},
    {XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_CACHE_MISS, "ICache-miss stall"},
    {XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_BUSY, "Instruction RAM/ROM busy stall"},
    {XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_IN_PIF, "Instruction RAM inbound-PIF request stall"},
    {XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_TIE_PORT, "TIE port stall"},
    {XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_EXTERNAL_SIGNAL, "External RunStall signal status"},
    {XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_UNCACHED_FETCH, "Uncached fetch stall"},
    {XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_FAST_L32R, "FastL32R stall"},
    {XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_ITERATIVE_MUL, "Iterative multiply stall"},
    {XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_ITERATIVE_DIV, "Iterative divide stall"},
    {XTPERF_CNT_EXR, XTPERF_MASK_EXR_REPLAYS, "Other Pipeline Replay (i.e. excludes cache miss etc.)"},
    {XTPERF_CNT_EXR, XTPERF_MASK_EXR_LEVEL1_INT, "Level-1 interrupt"},
    {XTPERF_CNT_EXR, XTPERF_MASK_EXR_LEVELH_INT, "Greater-than-level-1 interrupt"},
    {XTPERF_CNT_EXR, XTPERF_MASK_EXR_DEBUG, "Debug exception"},
    {XTPERF_CNT_EXR, XTPERF_MASK_EXR_NMI, "NMI"},
    {XTPERF_CNT_EXR, XTPERF_MASK_EXR_WINDOW, "Window exception"},
    {XTPERF_CNT_EXR, XTPERF_MASK_EXR_ALLOCA, "Allocate exception"},
    {XTPERF_CNT_EXR, XTPERF_MASK_EXR_OTHER, "Other exceptions"},
    {XTPERF_CNT_EXR, XTPERF_MASK_EXR_MEM_ERR, "HW-corrected memory error"},
    {XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_PSO, "Processor domain PSO bubble"},
    {XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_D_CACHE_MISS, "R hold caused by Data Cache miss(unused)"},
    {XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_STORE_RELEASE, "R hold caused by Store release"},
    {XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_REG_DEP, "R hold caused by register dependency"},
    {XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_WAIT, "R hold caused by MEMW, EXTW or EXCW"},
    {XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_HALT,  "R hold caused by Halt instruction (TX only)"},
    {XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_CTI, "CTI bubble (e.g. branch delay slot)"},
    {XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_WAITI, "WAITI bubble i.e. a cycle spent in WaitI power down mode."},
    {XTPERF_CNT_I_TLB, XTPERF_MASK_I_TLB_HITS, "ITLB Hit"},
    {XTPERF_CNT_I_TLB, XTPERF_MASK_I_TLB_REPLAYS, "Replay of instruction due to ITLB miss"},
    {XTPERF_CNT_I_TLB, XTPERF_MASK_I_TLB_REFILLS, "HW-assisted TLB Refill completes"},
    {XTPERF_CNT_I_TLB, XTPERF_MASK_I_TLB_MISSES, "ITLB Miss Exception"},
    {XTPERF_CNT_I_MEM, XTPERF_MASK_I_MEM_CACHE_HITS, "Instruction Cache Hit"},
    {XTPERF_CNT_I_MEM, XTPERF_MASK_I_MEM_CACHE_MISSES, "Instruction Cache Miss"},
    {XTPERF_CNT_I_MEM, XTPERF_MASK_I_MEM_IRAM, "All InstRAM or InstROM accesses"},
    {XTPERF_CNT_I_MEM, XTPERF_MASK_I_MEM_BYPASS, "Bypass (i.e. uncached) fetch"},
    {XTPERF_CNT_D_TLB, XTPERF_MASK_D_TLB_HITS, "DTLB Hit"},
    {XTPERF_CNT_D_TLB, XTPERF_MASK_D_TLB_REPLAYS, "Replay of load/store due to DTLB miss"},
    {XTPERF_CNT_D_TLB, XTPERF_MASK_D_TLB_REFILLS, "HW-assisted TLB Refill completes"},
    {XTPERF_CNT_D_TLB, XTPERF_MASK_D_TLB_MISSES, "DTLB Miss Exception"},
    {XTPERF_CNT_D_LOAD_U1, XTPERF_MASK_D_LOAD_CACHE_HITS, "Data Cache Hit(unused)"},
    {XTPERF_CNT_D_LOAD_U1, XTPERF_MASK_D_LOAD_CACHE_MISSES, "Data Cache Miss(unused)"},
    {XTPERF_CNT_D_LOAD_U1, XTPERF_MASK_D_LOAD_LOCAL_MEM, "Load from local memory i.e. DataRAM, DataROM, InstRAM, InstROM"},
    {XTPERF_CNT_D_LOAD_U1, XTPERF_MASK_D_LOAD_BYPASS, "Bypass (i.e. uncached) load"},
    {XTPERF_CNT_D_LOAD_U2, XTPERF_MASK_D_LOAD_CACHE_HITS, "Data Cache Hit(unused)"},
    {XTPERF_CNT_D_LOAD_U2, XTPERF_MASK_D_LOAD_CACHE_MISSES, "Data Cache Miss(unused)"},
    {XTPERF_CNT_D_LOAD_U2, XTPERF_MASK_D_LOAD_LOCAL_MEM, "Load from local memory i.e. DataRAM, DataROM, InstRAM, InstROM"},
    {XTPERF_CNT_D_LOAD_U2, XTPERF_MASK_D_LOAD_BYPASS, "Bypass (i.e. uncached) load"},
    {XTPERF_CNT_D_LOAD_U3, XTPERF_MASK_D_LOAD_CACHE_HITS, "Data Cache Hit (unused)"},
    {XTPERF_CNT_D_LOAD_U3, XTPERF_MASK_D_LOAD_CACHE_MISSES, "Data Cache Miss (unused)"},
    {XTPERF_CNT_D_LOAD_U3, XTPERF_MASK_D_LOAD_LOCAL_MEM, "Load from local memory i.e. DataRAM, DataROM, InstRAM, InstROM"},
    {XTPERF_CNT_D_LOAD_U3, XTPERF_MASK_D_LOAD_BYPASS, "Bypass (i.e. uncached) load"},
    {XTPERF_CNT_D_STORE_U1, XTPERF_MASK_D_STORE_CACHE_HITS, "Data Cache Hit (unused)"},
    {XTPERF_CNT_D_STORE_U1, XTPERF_MASK_D_STORE_CACHE_MISSES, "Data Cache Miss (unused)"},
    {XTPERF_CNT_D_STORE_U1, XTPERF_MASK_D_STORE_LOCAL_MEM, "Store to local memory i.e. DataRAM, InstRAM"},
    {XTPERF_CNT_D_STORE_U1, XTPERF_MASK_D_STORE_PIF, "PIF Store"},
    {XTPERF_CNT_D_STORE_U2, XTPERF_MASK_D_STORE_CACHE_HITS, "Data Cache Hit(unused)"},
    {XTPERF_CNT_D_STORE_U2, XTPERF_MASK_D_STORE_CACHE_MISSES, "Data Cache Miss(unused)"},
    {XTPERF_CNT_D_STORE_U2, XTPERF_MASK_D_STORE_LOCAL_MEM, "Store to local memory i.e. DataRAM, InstRAM"},
    {XTPERF_CNT_D_STORE_U2, XTPERF_MASK_D_STORE_PIF, "PIF Store"},
    {XTPERF_CNT_D_STORE_U3, XTPERF_MASK_D_STORE_CACHE_HITS, "Data Cache Hit (unused)"},
    {XTPERF_CNT_D_STORE_U3, XTPERF_MASK_D_STORE_CACHE_MISSES, "Data Cache Miss (unused)"},
    {XTPERF_CNT_D_STORE_U3, XTPERF_MASK_D_STORE_LOCAL_MEM, "Store to local memory i.e. DataRAM, InstRAM"},
    {XTPERF_CNT_D_STORE_U3, XTPERF_MASK_D_STORE_PIF, "PIF Store"},
    {XTPERF_CNT_D_ACCESS_U1, XTPERF_MASK_D_ACCESS_CACHE_MISSES, "Cache Miss"},
    {XTPERF_CNT_D_ACCESS_U2, XTPERF_MASK_D_ACCESS_CACHE_MISSES, "Cache Miss"},
    {XTPERF_CNT_D_ACCESS_U3, XTPERF_MASK_D_ACCESS_CACHE_MISSES, "Cache Miss"},
    {XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_0S_0L, "0 stores and 0 loads"},
    {XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_0S_1L, "0 stores and 1 loads"},
    {XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_1S_0L, "1 stores and 0 loads"},
    {XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_1S_1L, "1 stores and 1 loads"},
    {XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_0S_2L, "0 stores and 2 loads"},
    {XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_2S_0L, "2 stores and 0 loads"},
    {XTPERF_CNT_OUTBOUND_PIF, XTPERF_MASK_OUTBOUND_PIF_CASTOUT, "Castout"},
    {XTPERF_CNT_OUTBOUND_PIF, XTPERF_MASK_OUTBOUND_PIF_PREFETCH, "Prefetch"},
    {XTPERF_CNT_INBOUND_PIF, XTPERF_MASK_INBOUND_PIF_I_DMA, "Data DMA"},
    {XTPERF_CNT_INBOUND_PIF, XTPERF_MASK_INBOUND_PIF_D_DMA, "Instruction DMA"},
    {XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_I_HIT, "I prefetch-buffer-lookup hit"},
    {XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_D_HIT, "D prefetch-buffer-lookup hit"},
    {XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_I_MISS, "I prefetch-buffer-lookup miss"},
    {XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_D_MISS, "D prefetch-buffer-lookup miss"},
    {XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_D_L1_FILL, "Direct fill to (L1) Data Cache (unused)"},
    {XTPERF_CNT_IDMA, XTPERF_MASK_IDMA_ACTIVE_CYCLES, "active cycles"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_16, "16-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_24, "24-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_32, "32-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_40, "40-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_48, "48-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_56, "56-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_64, "64-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_72, "72-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_80, "80-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_88, "88-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_96, "96-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_104, "104-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_112, "112-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_120, "120-bit"},
    {XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_128, "128-bit"},
    {-1, 0, ""},
};

// All availible combinations
const uint32_t xtensa_perfmon_select_mask_all[MAX_PERFMON_EVENTS * 2] = {
    XTPERF_CNT_CYCLES, XTPERF_MASK_CYCLES,
    XTPERF_CNT_OVERFLOW, XTPERF_MASK_OVERFLOW,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_JX,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_CALLX,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_RET,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_RF,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_BRANCH_TAKEN,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_J,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_CALL,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_BRANCH_NOT_TAKEN,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_LOOP_TAKEN,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_LOOP_BEG,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_LOOP_END,
    XTPERF_CNT_INSN, XTPERF_MASK_INSN_NON_BRANCH,
    XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_STORE_BUF_FULL,
    XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_STORE_BUF_CONFLICT,
    XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_CACHE_MISS,
    XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_BUSY,
    XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_IN_PIF,
    XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_MHT_LOOKUP,
    XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_UNCACHED_LOAD,
    XTPERF_CNT_D_STALL, XTPERF_MASK_D_STALL_BANK_CONFLICT,
    XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_CACHE_MISS,
    XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_BUSY,
    XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_IN_PIF,
    XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_TIE_PORT,
    XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_EXTERNAL_SIGNAL,
    XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_UNCACHED_FETCH,
    XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_FAST_L32R,
    XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_ITERATIVE_MUL,
    XTPERF_CNT_I_STALL, XTPERF_MASK_I_STALL_ITERATIVE_DIV,
    XTPERF_CNT_EXR, XTPERF_MASK_EXR_REPLAYS,
    XTPERF_CNT_EXR, XTPERF_MASK_EXR_LEVEL1_INT,
    XTPERF_CNT_EXR, XTPERF_MASK_EXR_LEVELH_INT,
    XTPERF_CNT_EXR, XTPERF_MASK_EXR_DEBUG,
    XTPERF_CNT_EXR, XTPERF_MASK_EXR_NMI,
    XTPERF_CNT_EXR, XTPERF_MASK_EXR_WINDOW,
    XTPERF_CNT_EXR, XTPERF_MASK_EXR_ALLOCA,
    XTPERF_CNT_EXR, XTPERF_MASK_EXR_OTHER,
    XTPERF_CNT_EXR, XTPERF_MASK_EXR_MEM_ERR,
    XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_PSO,
    XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_D_CACHE_MISS,
    XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_STORE_RELEASE,
    XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_REG_DEP,
    XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_WAIT,
    XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_R_HOLD_HALT,
    XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_CTI,
    XTPERF_CNT_BUBBLES, XTPERF_MASK_BUBBLES_WAITI,
    XTPERF_CNT_I_TLB, XTPERF_MASK_I_TLB_HITS,
    XTPERF_CNT_I_TLB, XTPERF_MASK_I_TLB_REPLAYS,
    XTPERF_CNT_I_TLB, XTPERF_MASK_I_TLB_REFILLS,
    XTPERF_CNT_I_TLB, XTPERF_MASK_I_TLB_MISSES,
    XTPERF_CNT_I_MEM, XTPERF_MASK_I_MEM_CACHE_HITS,
    XTPERF_CNT_I_MEM, XTPERF_MASK_I_MEM_CACHE_MISSES,
    XTPERF_CNT_I_MEM, XTPERF_MASK_I_MEM_IRAM,
    XTPERF_CNT_I_MEM, XTPERF_MASK_I_MEM_BYPASS,
    XTPERF_CNT_D_TLB, XTPERF_MASK_D_TLB_HITS,
    XTPERF_CNT_D_TLB, XTPERF_MASK_D_TLB_REPLAYS,
    XTPERF_CNT_D_TLB, XTPERF_MASK_D_TLB_REFILLS,
    XTPERF_CNT_D_TLB, XTPERF_MASK_D_TLB_MISSES,
    XTPERF_CNT_D_LOAD_U1, XTPERF_MASK_D_LOAD_CACHE_HITS,
    XTPERF_CNT_D_LOAD_U1, XTPERF_MASK_D_LOAD_CACHE_MISSES,
    XTPERF_CNT_D_LOAD_U1, XTPERF_MASK_D_LOAD_LOCAL_MEM,
    XTPERF_CNT_D_LOAD_U1, XTPERF_MASK_D_LOAD_BYPASS,
    XTPERF_CNT_D_LOAD_U2, XTPERF_MASK_D_LOAD_CACHE_HITS,
    XTPERF_CNT_D_LOAD_U2, XTPERF_MASK_D_LOAD_CACHE_MISSES,
    XTPERF_CNT_D_LOAD_U2, XTPERF_MASK_D_LOAD_LOCAL_MEM,
    XTPERF_CNT_D_LOAD_U2, XTPERF_MASK_D_LOAD_BYPASS,
    XTPERF_CNT_D_LOAD_U3, XTPERF_MASK_D_LOAD_CACHE_HITS,
    XTPERF_CNT_D_LOAD_U3, XTPERF_MASK_D_LOAD_CACHE_MISSES,
    XTPERF_CNT_D_LOAD_U3, XTPERF_MASK_D_LOAD_LOCAL_MEM,
    XTPERF_CNT_D_LOAD_U3, XTPERF_MASK_D_LOAD_BYPASS,
    XTPERF_CNT_D_STORE_U1, XTPERF_MASK_D_STORE_CACHE_HITS,
    XTPERF_CNT_D_STORE_U1, XTPERF_MASK_D_STORE_CACHE_MISSES,
    XTPERF_CNT_D_STORE_U1, XTPERF_MASK_D_STORE_LOCAL_MEM,
    XTPERF_CNT_D_STORE_U1, XTPERF_MASK_D_STORE_PIF,
    XTPERF_CNT_D_STORE_U2, XTPERF_MASK_D_STORE_CACHE_HITS,
    XTPERF_CNT_D_STORE_U2, XTPERF_MASK_D_STORE_CACHE_MISSES,
    XTPERF_CNT_D_STORE_U2, XTPERF_MASK_D_STORE_LOCAL_MEM,
    XTPERF_CNT_D_STORE_U2, XTPERF_MASK_D_STORE_PIF,
    XTPERF_CNT_D_STORE_U3, XTPERF_MASK_D_STORE_CACHE_HITS,
    XTPERF_CNT_D_STORE_U3, XTPERF_MASK_D_STORE_CACHE_MISSES,
    XTPERF_CNT_D_STORE_U3, XTPERF_MASK_D_STORE_LOCAL_MEM,
    XTPERF_CNT_D_STORE_U3, XTPERF_MASK_D_STORE_PIF,
    XTPERF_CNT_D_ACCESS_U1, XTPERF_MASK_D_ACCESS_CACHE_MISSES,
    XTPERF_CNT_D_ACCESS_U2, XTPERF_MASK_D_ACCESS_CACHE_MISSES,
    XTPERF_CNT_D_ACCESS_U3, XTPERF_MASK_D_ACCESS_CACHE_MISSES,
    XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_0S_0L,
    XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_0S_1L,
    XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_1S_0L,
    XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_1S_1L,
    XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_0S_2L,
    XTPERF_CNT_MULTIPLE_LS, XTPERF_MASK_MULTIPLE_LS_2S_0L,
    XTPERF_CNT_OUTBOUND_PIF, XTPERF_MASK_OUTBOUND_PIF_CASTOUT,
    XTPERF_CNT_OUTBOUND_PIF, XTPERF_MASK_OUTBOUND_PIF_PREFETCH,
    XTPERF_CNT_INBOUND_PIF, XTPERF_MASK_INBOUND_PIF_I_DMA,
    XTPERF_CNT_INBOUND_PIF, XTPERF_MASK_INBOUND_PIF_D_DMA,
    XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_I_HIT,
    XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_D_HIT,
    XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_I_MISS,
    XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_D_MISS,
    XTPERF_CNT_PREFETCH, XTPERF_MASK_PREFETCH_D_L1_FILL,
    XTPERF_CNT_IDMA, XTPERF_MASK_IDMA_ALL,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_16,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_24,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_32,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_40,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_48,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_56,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_64,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_72,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_80,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_88,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_96,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_104,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_112,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_120,
    XTPERF_CNT_INSN_LENGTH, XTPERF_MASK_INSN_LENGTH_128
};

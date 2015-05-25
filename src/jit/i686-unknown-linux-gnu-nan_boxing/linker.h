typedef void (*jit_link_func_t)(uint8_t *text, uint8_t *rodata, mrb_code *pc);
jit_link_func_t link_funcs[78];
static void op_nop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_nop__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_nop_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_nop__rodata__link(text, rodata, pc);
  op_nop__text__link(text, rodata, pc);
}
static void op_move__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_move__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 4)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 9)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_move_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_move__rodata__link(text, rodata, pc);
  op_move__text__link(text, rodata, pc);
}
static void op_loadl__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadl__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 8)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadl_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadl__rodata__link(text, rodata, pc);
  op_loadl__text__link(text, rodata, pc);
}
static void op_loadi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 4)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_sBx(*pc)) + (0));
}
static void op_loadi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadi__rodata__link(text, rodata, pc);
  op_loadi__text__link(text, rodata, pc);
}
static void op_loadsym__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadsym__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 8)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 16)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadsym_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadsym__rodata__link(text, rodata, pc);
  op_loadsym__text__link(text, rodata, pc);
}
static void op_loadnil__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadnil__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 4)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadnil_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadnil__rodata__link(text, rodata, pc);
  op_loadnil__text__link(text, rodata, pc);
}
static void op_loadself__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadself__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 4)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadself_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadself__rodata__link(text, rodata, pc);
  op_loadself__text__link(text, rodata, pc);
}
static void op_loadt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 4)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadt__rodata__link(text, rodata, pc);
  op_loadt__text__link(text, rodata, pc);
}
static void op_loadf__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadf__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 4)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadf_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadf__rodata__link(text, rodata, pc);
  op_loadf__text__link(text, rodata, pc);
}
static void op_getglobal__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getglobal__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 37)) = (int32_t)(((uintptr_t)mrb_gv_get) + (0) - ((uintptr_t)(text + 37)));
*((uint32_t *)(text + 45)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getglobal_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getglobal__rodata__link(text, rodata, pc);
  op_getglobal__text__link(text, rodata, pc);
}
static void op_setglobal__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setglobal__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 50)) = (int32_t)(((uintptr_t)mrb_gv_set) + (0) - ((uintptr_t)(text + 50)));
}
static void op_setglobal_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setglobal__rodata__link(text, rodata, pc);
  op_setglobal__text__link(text, rodata, pc);
}
static void op_getspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 30)) = (int32_t)(((uintptr_t)mrb_vm_special_get) + (0) - ((uintptr_t)(text + 30)));
*((uint32_t *)(text + 38)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getspecial_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getspecial__rodata__link(text, rodata, pc);
  op_getspecial__text__link(text, rodata, pc);
}
static void op_setspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 37)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 42)) = (int32_t)(((uintptr_t)mrb_vm_special_set) + (0) - ((uintptr_t)(text + 42)));
}
static void op_setspecial_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setspecial__rodata__link(text, rodata, pc);
  op_setspecial__text__link(text, rodata, pc);
}
static void op_getiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 37)) = (int32_t)(((uintptr_t)mrb_vm_iv_get) + (0) - ((uintptr_t)(text + 37)));
*((uint32_t *)(text + 45)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getiv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getiv__rodata__link(text, rodata, pc);
  op_getiv__text__link(text, rodata, pc);
}
static void op_setiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 50)) = (int32_t)(((uintptr_t)mrb_vm_iv_set) + (0) - ((uintptr_t)(text + 50)));
}
static void op_setiv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setiv__rodata__link(text, rodata, pc);
  op_setiv__text__link(text, rodata, pc);
}
static void op_getcv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getcv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 19)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 33)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 56)) = (int32_t)(((uintptr_t)mrb_vm_cv_get) + (0) - ((uintptr_t)(text + 56)));
*((uint32_t *)(text + 64)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getcv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getcv__rodata__link(text, rodata, pc);
  op_getcv__text__link(text, rodata, pc);
}
static void op_setcv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setcv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 50)) = (int32_t)(((uintptr_t)mrb_vm_cv_set) + (0) - ((uintptr_t)(text + 50)));
}
static void op_setcv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setcv__rodata__link(text, rodata, pc);
  op_setcv__text__link(text, rodata, pc);
}
static void op_getconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 29)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 52)) = (int32_t)(((uintptr_t)mrb_vm_const_get) + (0) - ((uintptr_t)(text + 52)));
*((uint32_t *)(text + 92)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getconst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getconst__rodata__link(text, rodata, pc);
  op_getconst__text__link(text, rodata, pc);
}
static void op_setconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 50)) = (int32_t)(((uintptr_t)mrb_vm_const_set) + (0) - ((uintptr_t)(text + 50)));
}
static void op_setconst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setconst__rodata__link(text, rodata, pc);
  op_setconst__text__link(text, rodata, pc);
}
static void op_getmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 39)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 77)) = (int32_t)(((uintptr_t)mrb_const_get) + (0) - ((uintptr_t)(text + 77)));
}
static void op_getmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getmcnst__rodata__link(text, rodata, pc);
  op_getmcnst__text__link(text, rodata, pc);
}
static void op_setmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 9)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 66)) = (int32_t)(((uintptr_t)mrb_const_set) + (0) - ((uintptr_t)(text + 66)));
}
static void op_setmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setmcnst__rodata__link(text, rodata, pc);
  op_setmcnst__text__link(text, rodata, pc);
}
static void op_getupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 53)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 78)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 90)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getupvar_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getupvar__rodata__link(text, rodata, pc);
  op_getupvar__text__link(text, rodata, pc);
}
static void op_setupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 59)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 64)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 85)) = (int32_t)(((uintptr_t)mrb_write_barrier) + (0) - ((uintptr_t)(text + 85)));
}
static void op_setupvar_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setupvar__rodata__link(text, rodata, pc);
  op_setupvar__text__link(text, rodata, pc);
}
static void op_jmp__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_jmp__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_jmp_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_jmp__rodata__link(text, rodata, pc);
  op_jmp__text__link(text, rodata, pc);
}
static void op_jmpif__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_jmpif__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 4)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_jmpif_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_jmpif__rodata__link(text, rodata, pc);
  op_jmpif__text__link(text, rodata, pc);
}
static void op_jmpnot__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_jmpnot__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 4)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_jmpnot_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_jmpnot__rodata__link(text, rodata, pc);
  op_jmpnot__text__link(text, rodata, pc);
}
static void op_onerr__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_onerr__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 69)) = (int32_t)(((uintptr_t)mrb_realloc) + (0) - ((uintptr_t)(text + 69)));
*((uint32_t *)(text + 110)) = (uint32_t)(((uintptr_t)GETARG_sBx(*pc)) + (0));
*((uint32_t *)(text + 117)) = (uint32_t)(((uintptr_t)pc) + (0));
}
static void op_onerr_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_onerr__rodata__link(text, rodata, pc);
  op_onerr__text__link(text, rodata, pc);
}
static void op_rescue__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_rescue__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 37)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 90)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_rescue_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_rescue__rodata__link(text, rodata, pc);
  op_rescue__text__link(text, rodata, pc);
}
static void op_poperr__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_poperr__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 1)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_poperr_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_poperr__rodata__link(text, rodata, pc);
  op_poperr__text__link(text, rodata, pc);
}
static void op_raise__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_raise__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 19)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 45)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 50)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 50)));
  *((int32_t *)(text + 79)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 79)));
}
static void op_raise_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_raise__rodata__link(text, rodata, pc);
  op_raise__text__link(text, rodata, pc);
}
static void op_epush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_epush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 33)) = (int32_t)(((uintptr_t)mrb_closure_new) + (0) - ((uintptr_t)(text + 33)));
  *((int32_t *)(text + 101)) = (int32_t)(((uintptr_t)mrb_realloc) + (0) - ((uintptr_t)(text + 101)));
}
static void op_epush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_epush__rodata__link(text, rodata, pc);
  op_epush__text__link(text, rodata, pc);
}
static void op_epop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_epop__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 49)) = (int32_t)(((uintptr_t)ecall) + (0) - ((uintptr_t)(text + 49)));
*((uint32_t *)(text + 64)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_epop_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_epop__rodata__link(text, rodata, pc);
  op_epop__text__link(text, rodata, pc);
}
static void op_send__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_send__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 33)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 41)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 49)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 62)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 62)));
  *((int32_t *)(text + 91)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 91)));
}
static void op_send_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_send__rodata__link(text, rodata, pc);
  op_send__text__link(text, rodata, pc);
}
static void op_sendb__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sendb__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 33)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 41)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 49)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 62)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 62)));
  *((int32_t *)(text + 91)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 91)));
}
static void op_sendb_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sendb__rodata__link(text, rodata, pc);
  op_sendb__text__link(text, rodata, pc);
}
static void op_fsend__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_fsend__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_fsend_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_fsend__rodata__link(text, rodata, pc);
  op_fsend__text__link(text, rodata, pc);
}
static void op_call__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_call__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 160)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 176)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 181)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 181)));
  *((int32_t *)(text + 248)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 248)));
  *((int32_t *)(text + 303)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 303)));
*((uint32_t *)(text + 414)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 419)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 419)));
  *((int32_t *)(text + 448)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 448)));
  *((int32_t *)(text + 469)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 469)));
  *((int32_t *)(text + 535)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 535)));
}
static void op_call_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_call__rodata__link(text, rodata, pc);
  op_call__text__link(text, rodata, pc);
}
static void op_super__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_super__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 93)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (0) - ((uintptr_t)(text + 93)));
*((uint32_t *)(text + 125)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 130)) = (int32_t)(((uintptr_t)mrb_intern_static) + (0) - ((uintptr_t)(text + 130)));
  *((int32_t *)(text + 153)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (0) - ((uintptr_t)(text + 153)));
*((uint32_t *)(text + 162)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 179)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 184)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 195)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 209)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 231)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 270)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 292)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 300)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 321)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 341)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 352)) = (int32_t)(((uintptr_t)cipush) + (0) - ((uintptr_t)(text + 352)));
*((uint32_t *)(text + 398)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 409)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 450)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 620)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 620)));
  *((int32_t *)(text + 659)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 659)));
  *((int32_t *)(text + 683)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 683)));
*((uint32_t *)(text + 723)) = (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 728)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 728)));
*((uint32_t *)(text + 760)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 765)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 765)));
  *((int32_t *)(text + 804)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 804)));
*((uint32_t *)(text + 828)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 833)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 833)));
  *((int32_t *)(text + 862)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 862)));
*((uint32_t *)(text + 869)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 889)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 955)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (0) - ((uintptr_t)(text + 955)));
}
static void op_super_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_super__rodata__link(text, rodata, pc);
  op_super__text__link(text, rodata, pc);
}
static void op_argary__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_argary__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 117)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 227)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 232)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 272)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 272)));
*((uint32_t *)(text + 280)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 364)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 414)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 419)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 496)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 501)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 512)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 533)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 563)) = (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 568)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 568)));
*((uint32_t *)(text + 602)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 607)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 607)));
  *((int32_t *)(text + 646)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 646)));
*((uint32_t *)(text + 670)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 675)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 675)));
  *((int32_t *)(text + 704)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 704)));
*((uint32_t *)(text + 721)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 755)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 755)));
*((uint32_t *)(text + 763)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_argary_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_argary__rodata__link(text, rodata, pc);
  op_argary__text__link(text, rodata, pc);
}
static void op_enter__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_enter__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 118)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
*((uint32_t *)(text + 126)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
  *((int32_t *)(text + 139)) = (int32_t)(((uintptr_t)mrb_convert_type) + (0) - ((uintptr_t)(text + 139)));
  *((int32_t *)(text + 219)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 219)));
*((uint32_t *)(text + 274)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 283)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 294)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 305)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 362)) = (int32_t)(((uintptr_t)argnum_error) + (0) - ((uintptr_t)(text + 362)));
*((uint32_t *)(text + 377)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 382)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 382)));
  *((int32_t *)(text + 411)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 411)));
*((uint32_t *)(text + 435)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 440)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 451)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 464)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 544)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 544)));
*((uint32_t *)(text + 594)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 599)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 610)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 623)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 669)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 688)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 699)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 712)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 725)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 877)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 882)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 893)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 906)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 963)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 968)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1062)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1073)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1086)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1137)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1142)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1155)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1244)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1282)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 1282)));
*((uint32_t *)(text + 1290)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1301)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1324)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1345)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 1356)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1361)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1378)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1418)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1423)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1476)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1481)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1492)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1527)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1594)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 1594)));
*((uint32_t *)(text + 1644)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1649)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1670)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1681)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1721)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1759)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1764)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1775)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1788)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1844)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1899)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1904)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1915)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1928)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1959)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 1964)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1969)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1998)) = (uint32_t)(((uintptr_t)pc) + (0));
}
static void op_enter_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_enter__rodata__link(text, rodata, pc);
  op_enter__text__link(text, rodata, pc);
}
static void op_enter_method_m__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_enter_method_m__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 131)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
*((uint32_t *)(text + 139)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
  *((int32_t *)(text + 152)) = (int32_t)(((uintptr_t)mrb_convert_type) + (0) - ((uintptr_t)(text + 152)));
*((uint32_t *)(text + 181)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 208)) = (int32_t)(((uintptr_t)argnum_error) + (0) - ((uintptr_t)(text + 208)));
*((uint32_t *)(text + 219)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 224)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 224)));
  *((int32_t *)(text + 253)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 253)));
  *((int32_t *)(text + 293)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 293)));
*((uint32_t *)(text + 307)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 349)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 354)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 382)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 417)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
}
static void op_enter_method_m_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_enter_method_m__rodata__link(text, rodata, pc);
  op_enter_method_m__text__link(text, rodata, pc);
}
static void op_karg__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_karg__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_karg_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_karg__rodata__link(text, rodata, pc);
  op_karg__text__link(text, rodata, pc);
}
static void op_kdict__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_kdict__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_kdict_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_kdict__rodata__link(text, rodata, pc);
  op_kdict__text__link(text, rodata, pc);
}
static void op_return__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_return__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 19)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 35)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 40)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 40)));
}
static void op_return_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_return__rodata__link(text, rodata, pc);
  op_return__text__link(text, rodata, pc);
}
static void op_break__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_break__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 19)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 35)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 40)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 40)));
}
static void op_break_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_break__rodata__link(text, rodata, pc);
  op_break__text__link(text, rodata, pc);
}
static void op_tailcall__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(rodata + 0)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 4)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 8)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 12)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 16)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 20)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 24)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 28)) = (uint32_t)(((uintptr_t)text) + (0));
}
static void op_tailcall__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 39)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 90)) = (uint32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 150)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (0) - ((uintptr_t)(text + 150)));
*((uint32_t *)(text + 163)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 199)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 204)) = (int32_t)(((uintptr_t)mrb_intern_static) + (0) - ((uintptr_t)(text + 204)));
  *((int32_t *)(text + 222)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (0) - ((uintptr_t)(text + 222)));
*((uint32_t *)(text + 234)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 264)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 273)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 301)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (0) - ((uintptr_t)(text + 301)));
*((uint32_t *)(text + 314)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 319)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 330)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 344)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 354)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 382)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 392)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 400)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 430)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 443)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 495)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 513)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 532)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 670)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 670)));
*((uint32_t *)(text + 681)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 697)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 702)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 702)));
  *((int32_t *)(text + 843)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 843)));
  *((int32_t *)(text + 888)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 888)));
}
static void op_tailcall_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_tailcall__rodata__link(text, rodata, pc);
  op_tailcall__text__link(text, rodata, pc);
}
static void op_blkpush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_blkpush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 112)) = (int32_t)(((uintptr_t)localjump_error) + (0) - ((uintptr_t)(text + 112)));
*((uint32_t *)(text + 123)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 128)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 128)));
  *((int32_t *)(text + 157)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 157)));
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 179)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 190)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 211)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_blkpush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_blkpush__rodata__link(text, rodata, pc);
  op_blkpush__text__link(text, rodata, pc);
}
static void op_add__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_add__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 136)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 187)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 223)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 270)) = (int32_t)(((uintptr_t)mrb_str_plus) + (0) - ((uintptr_t)(text + 270)));
*((uint32_t *)(text + 297)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 329)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 386)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 406)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 422)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 430)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 443)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 443)));
  *((int32_t *)(text + 472)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 472)));
*((uint32_t *)(text + 492)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_add_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_add__rodata__link(text, rodata, pc);
  op_add__text__link(text, rodata, pc);
}
static void op_addi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_addi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 53)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 70)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 83)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 107)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 129)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 154)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 173)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 189)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 197)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 210)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 210)));
  *((int32_t *)(text + 239)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 239)));
*((uint32_t *)(text + 259)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_addi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_addi__rodata__link(text, rodata, pc);
  op_addi__text__link(text, rodata, pc);
}
static void op_sub__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sub__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 119)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 170)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 200)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 233)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 291)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 314)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 330)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 338)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 351)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 351)));
  *((int32_t *)(text + 380)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 380)));
*((uint32_t *)(text + 400)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_sub_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sub__rodata__link(text, rodata, pc);
  op_sub__text__link(text, rodata, pc);
}
static void op_subi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_subi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 57)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 71)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 84)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 110)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 132)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 157)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 176)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 192)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 200)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 213)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 213)));
  *((int32_t *)(text + 242)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 242)));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_subi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_subi__rodata__link(text, rodata, pc);
  op_subi__text__link(text, rodata, pc);
}
static void op_mul__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_mul__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 130)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 177)) = (int32_t)(((uintptr_t)mrb_fixnum_mul) + (0) - ((uintptr_t)(text + 177)));
*((uint32_t *)(text + 232)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 295)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 353)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 376)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 392)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 400)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 413)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 413)));
  *((int32_t *)(text + 442)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 442)));
*((uint32_t *)(text + 449)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 470)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_mul_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_mul__rodata__link(text, rodata, pc);
  op_mul__text__link(text, rodata, pc);
}
static void op_div__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_div__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 118)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 156)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 186)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 240)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 263)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 279)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 287)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 300)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 300)));
  *((int32_t *)(text + 329)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 329)));
*((uint32_t *)(text + 339)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 354)) = (int32_t)(((uintptr_t)__isnan) + (0) - ((uintptr_t)(text + 354)));
*((uint32_t *)(text + 375)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 390)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_div_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_div__rodata__link(text, rodata, pc);
  op_div__text__link(text, rodata, pc);
}
static void op_eq__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_eq__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 66)) = (int32_t)(((uintptr_t)mrb_obj_eq) + (0) - ((uintptr_t)(text + 66)));
*((uint32_t *)(text + 115)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 170)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 215)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 245)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 271)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 303)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 343)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 351)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 359)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 367)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 380)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 380)));
  *((int32_t *)(text + 409)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 409)));
}
static void op_eq_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_eq__rodata__link(text, rodata, pc);
  op_eq__text__link(text, rodata, pc);
}
static void op_lt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_lt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 119)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 144)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 200)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 225)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 265)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 273)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 281)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 289)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 302)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 302)));
  *((int32_t *)(text + 331)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 331)));
}
static void op_lt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_lt__rodata__link(text, rodata, pc);
  op_lt__text__link(text, rodata, pc);
}
static void op_le__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_le__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 119)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 144)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 200)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 225)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 265)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 273)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 281)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 289)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 302)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 302)));
  *((int32_t *)(text + 331)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 331)));
}
static void op_le_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_le__rodata__link(text, rodata, pc);
  op_le__text__link(text, rodata, pc);
}
static void op_gt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_gt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 119)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 144)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 200)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 227)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 267)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 275)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 283)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 291)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 304)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 304)));
  *((int32_t *)(text + 333)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 333)));
}
static void op_gt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_gt__rodata__link(text, rodata, pc);
  op_gt__text__link(text, rodata, pc);
}
static void op_ge__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_ge__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 119)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 144)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 200)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 227)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 267)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 275)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 283)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 291)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 304)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 304)));
  *((int32_t *)(text + 333)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 333)));
}
static void op_ge_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_ge__rodata__link(text, rodata, pc);
  op_ge__text__link(text, rodata, pc);
}
static void op_array__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_array__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 40)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 45)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 45)));
*((uint32_t *)(text + 53)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_array_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_array__rodata__link(text, rodata, pc);
  op_array__text__link(text, rodata, pc);
}
static void op_arycat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_arycat__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 16)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 52)) = (int32_t)(((uintptr_t)mrb_ary_splat) + (0) - ((uintptr_t)(text + 52)));
  *((int32_t *)(text + 94)) = (int32_t)(((uintptr_t)mrb_ary_concat) + (0) - ((uintptr_t)(text + 94)));
}
static void op_arycat_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_arycat__rodata__link(text, rodata, pc);
  op_arycat__text__link(text, rodata, pc);
}
static void op_arypush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_arypush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 55)) = (int32_t)(((uintptr_t)mrb_ary_push) + (0) - ((uintptr_t)(text + 55)));
}
static void op_arypush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_arypush__rodata__link(text, rodata, pc);
  op_arypush__text__link(text, rodata, pc);
}
static void op_aref__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_aref__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 8)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 80)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 85)) = (int32_t)(((uintptr_t)mrb_ary_ref) + (0) - ((uintptr_t)(text + 85)));
*((uint32_t *)(text + 93)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 107)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_aref_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_aref__rodata__link(text, rodata, pc);
  op_aref__text__link(text, rodata, pc);
}
static void op_aset__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_aset__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 58)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 63)) = (int32_t)(((uintptr_t)mrb_ary_set) + (0) - ((uintptr_t)(text + 63)));
}
static void op_aset_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_aset__rodata__link(text, rodata, pc);
  op_aset__text__link(text, rodata, pc);
}
static void op_apost__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_apost__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 61)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 67)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 87)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 111)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 142)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 142)));
*((uint32_t *)(text + 154)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 228)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 228)));
*((uint32_t *)(text + 243)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 311)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 311)));
*((uint32_t *)(text + 323)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 334)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 378)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 387)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 396)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_apost_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_apost__rodata__link(text, rodata, pc);
  op_apost__text__link(text, rodata, pc);
}
static void op_string__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_string__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 49)) = (int32_t)(((uintptr_t)mrb_str_dup) + (0) - ((uintptr_t)(text + 49)));
*((uint32_t *)(text + 57)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_string_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_string__rodata__link(text, rodata, pc);
  op_string__text__link(text, rodata, pc);
}
static void op_strcat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_strcat__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 55)) = (int32_t)(((uintptr_t)mrb_str_concat) + (0) - ((uintptr_t)(text + 55)));
}
static void op_strcat_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_strcat__rodata__link(text, rodata, pc);
  op_strcat__text__link(text, rodata, pc);
}
static void op_hash__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_hash__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 32)) = (int32_t)(((uintptr_t)mrb_hash_new_capa) + (0) - ((uintptr_t)(text + 32)));
*((uint32_t *)(text + 40)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 45)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 52)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 137)) = (int32_t)(((uintptr_t)mrb_hash_set) + (0) - ((uintptr_t)(text + 137)));
*((uint32_t *)(text + 155)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_hash_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_hash__rodata__link(text, rodata, pc);
  op_hash__text__link(text, rodata, pc);
}
static void op_lambda__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_lambda__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_c(*pc)) + (0));
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_b(*pc)) + (0));
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 31)) = (int32_t)(((uintptr_t)_op_lambda) + (0) - ((uintptr_t)(text + 31)));
}
static void op_lambda_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_lambda__rodata__link(text, rodata, pc);
  op_lambda__text__link(text, rodata, pc);
}
static void op_range__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_range__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 50)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 73)) = (int32_t)(((uintptr_t)mrb_range_new) + (0) - ((uintptr_t)(text + 73)));
*((uint32_t *)(text + 81)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_range_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_range__rodata__link(text, rodata, pc);
  op_range__text__link(text, rodata, pc);
}
static void op_oclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_oclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 57)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_oclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_oclass__rodata__link(text, rodata, pc);
  op_oclass__text__link(text, rodata, pc);
}
static void op_class__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_class__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 183)) = (int32_t)(((uintptr_t)mrb_vm_define_class) + (0) - ((uintptr_t)(text + 183)));
*((uint32_t *)(text + 236)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_class_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_class__rodata__link(text, rodata, pc);
  op_class__text__link(text, rodata, pc);
}
static void op_module__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_module__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 159)) = (int32_t)(((uintptr_t)mrb_vm_define_module) + (0) - ((uintptr_t)(text + 159)));
*((uint32_t *)(text + 212)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_module_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_module__rodata__link(text, rodata, pc);
  op_module__text__link(text, rodata, pc);
}
static void op_exec__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_exec__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 45)) = (int32_t)(((uintptr_t)cipush) + (0) - ((uintptr_t)(text + 45)));
*((uint32_t *)(text + 54)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 61)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 119)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 134)) = (int32_t)(((uintptr_t)mrb_proc_new) + (0) - ((uintptr_t)(text + 134)));
  *((int32_t *)(text + 194)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 194)));
  *((int32_t *)(text + 245)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 245)));
  *((int32_t *)(text + 325)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 325)));
  *((int32_t *)(text + 360)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 360)));
*((uint32_t *)(text + 373)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 378)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 378)));
  *((int32_t *)(text + 407)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 407)));
}
static void op_exec_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_exec__rodata__link(text, rodata, pc);
  op_exec__text__link(text, rodata, pc);
}
static void op_method__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_method__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 9)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 36)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 59)) = (int32_t)(((uintptr_t)mrb_define_method_raw) + (0) - ((uintptr_t)(text + 59)));
}
static void op_method_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_method__rodata__link(text, rodata, pc);
  op_method__text__link(text, rodata, pc);
}
static void op_sclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 45)) = (int32_t)(((uintptr_t)mrb_singleton_class) + (0) - ((uintptr_t)(text + 45)));
*((uint32_t *)(text + 53)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_sclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sclass__rodata__link(text, rodata, pc);
  op_sclass__text__link(text, rodata, pc);
}
static void op_tclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_tclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 47)) = (uint32_t)(((uintptr_t)_mrb_str_const_type_error) + (0));
  *((int32_t *)(text + 52)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 52)));
*((uint32_t *)(text + 81)) = (uint32_t)(((uintptr_t)_str_const_no_target_class) + (0));
  *((int32_t *)(text + 86)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 86)));
  *((int32_t *)(text + 125)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 125)));
*((uint32_t *)(text + 152)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 157)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 157)));
  *((int32_t *)(text + 186)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 186)));
*((uint32_t *)(text + 249)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_tclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_tclass__rodata__link(text, rodata, pc);
  op_tclass__text__link(text, rodata, pc);
}
static void op_debug__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_debug__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 7)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)_str_const_op_debug_format) + (0));
  *((int32_t *)(text + 35)) = (int32_t)(((uintptr_t)printf) + (0) - ((uintptr_t)(text + 35)));
}
static void op_debug_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_debug__rodata__link(text, rodata, pc);
  op_debug__text__link(text, rodata, pc);
}
static void op_stop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_stop__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 7)) = (int32_t)(((uintptr_t)_op_stop) + (0) - ((uintptr_t)(text + 7)));
}
static void op_stop_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_stop__rodata__link(text, rodata, pc);
  op_stop__text__link(text, rodata, pc);
}
static void op_err__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_err__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 57)) = (int32_t)(((uintptr_t)mrb_str_dup) + (0) - ((uintptr_t)(text + 57)));
*((uint32_t *)(text + 71)) = (uint32_t)(((uintptr_t)_mrb_str_const_localjump_error) + (0));
  *((int32_t *)(text + 76)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 76)));
  *((int32_t *)(text + 112)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 112)));
*((uint32_t *)(text + 139)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 144)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 144)));
  *((int32_t *)(text + 173)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 173)));
}
static void op_err_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_err__rodata__link(text, rodata, pc);
  op_err__text__link(text, rodata, pc);
}
void init_linker() {
  static int init = 0;
  if(init == 0) {
    init = 1;
    link_funcs[0] = (jit_link_func_t) op_nop_link;
    link_funcs[1] = (jit_link_func_t) op_move_link;
    link_funcs[2] = (jit_link_func_t) op_loadl_link;
    link_funcs[3] = (jit_link_func_t) op_loadi_link;
    link_funcs[4] = (jit_link_func_t) op_loadsym_link;
    link_funcs[5] = (jit_link_func_t) op_loadnil_link;
    link_funcs[6] = (jit_link_func_t) op_loadself_link;
    link_funcs[7] = (jit_link_func_t) op_loadt_link;
    link_funcs[8] = (jit_link_func_t) op_loadf_link;
    link_funcs[9] = (jit_link_func_t) op_getglobal_link;
    link_funcs[10] = (jit_link_func_t) op_setglobal_link;
    link_funcs[11] = (jit_link_func_t) op_getspecial_link;
    link_funcs[12] = (jit_link_func_t) op_setspecial_link;
    link_funcs[13] = (jit_link_func_t) op_getiv_link;
    link_funcs[14] = (jit_link_func_t) op_setiv_link;
    link_funcs[15] = (jit_link_func_t) op_getcv_link;
    link_funcs[16] = (jit_link_func_t) op_setcv_link;
    link_funcs[17] = (jit_link_func_t) op_getconst_link;
    link_funcs[18] = (jit_link_func_t) op_setconst_link;
    link_funcs[19] = (jit_link_func_t) op_getmcnst_link;
    link_funcs[20] = (jit_link_func_t) op_setmcnst_link;
    link_funcs[21] = (jit_link_func_t) op_getupvar_link;
    link_funcs[22] = (jit_link_func_t) op_setupvar_link;
    link_funcs[23] = (jit_link_func_t) op_jmp_link;
    link_funcs[24] = (jit_link_func_t) op_jmpif_link;
    link_funcs[25] = (jit_link_func_t) op_jmpnot_link;
    link_funcs[26] = (jit_link_func_t) op_onerr_link;
    link_funcs[27] = (jit_link_func_t) op_rescue_link;
    link_funcs[28] = (jit_link_func_t) op_poperr_link;
    link_funcs[29] = (jit_link_func_t) op_raise_link;
    link_funcs[30] = (jit_link_func_t) op_epush_link;
    link_funcs[31] = (jit_link_func_t) op_epop_link;
    link_funcs[32] = (jit_link_func_t) op_send_link;
    link_funcs[33] = (jit_link_func_t) op_sendb_link;
    link_funcs[34] = (jit_link_func_t) op_fsend_link;
    link_funcs[35] = (jit_link_func_t) op_call_link;
    link_funcs[36] = (jit_link_func_t) op_super_link;
    link_funcs[37] = (jit_link_func_t) op_argary_link;
    link_funcs[38] = (jit_link_func_t) op_enter_link;
    link_funcs[39] = (jit_link_func_t) op_enter_method_m_link;
    link_funcs[40] = (jit_link_func_t) op_karg_link;
    link_funcs[41] = (jit_link_func_t) op_kdict_link;
    link_funcs[42] = (jit_link_func_t) op_return_link;
    link_funcs[43] = (jit_link_func_t) op_break_link;
    link_funcs[44] = (jit_link_func_t) op_tailcall_link;
    link_funcs[45] = (jit_link_func_t) op_blkpush_link;
    link_funcs[46] = (jit_link_func_t) op_add_link;
    link_funcs[47] = (jit_link_func_t) op_addi_link;
    link_funcs[48] = (jit_link_func_t) op_sub_link;
    link_funcs[49] = (jit_link_func_t) op_subi_link;
    link_funcs[50] = (jit_link_func_t) op_mul_link;
    link_funcs[51] = (jit_link_func_t) op_div_link;
    link_funcs[52] = (jit_link_func_t) op_eq_link;
    link_funcs[53] = (jit_link_func_t) op_lt_link;
    link_funcs[54] = (jit_link_func_t) op_le_link;
    link_funcs[55] = (jit_link_func_t) op_gt_link;
    link_funcs[56] = (jit_link_func_t) op_ge_link;
    link_funcs[57] = (jit_link_func_t) op_array_link;
    link_funcs[58] = (jit_link_func_t) op_arycat_link;
    link_funcs[59] = (jit_link_func_t) op_arypush_link;
    link_funcs[60] = (jit_link_func_t) op_aref_link;
    link_funcs[61] = (jit_link_func_t) op_aset_link;
    link_funcs[62] = (jit_link_func_t) op_apost_link;
    link_funcs[63] = (jit_link_func_t) op_string_link;
    link_funcs[64] = (jit_link_func_t) op_strcat_link;
    link_funcs[65] = (jit_link_func_t) op_hash_link;
    link_funcs[66] = (jit_link_func_t) op_lambda_link;
    link_funcs[67] = (jit_link_func_t) op_range_link;
    link_funcs[68] = (jit_link_func_t) op_oclass_link;
    link_funcs[69] = (jit_link_func_t) op_class_link;
    link_funcs[70] = (jit_link_func_t) op_module_link;
    link_funcs[71] = (jit_link_func_t) op_exec_link;
    link_funcs[72] = (jit_link_func_t) op_method_link;
    link_funcs[73] = (jit_link_func_t) op_sclass_link;
    link_funcs[74] = (jit_link_func_t) op_tclass_link;
    link_funcs[75] = (jit_link_func_t) op_debug_link;
    link_funcs[76] = (jit_link_func_t) op_stop_link;
    link_funcs[77] = (jit_link_func_t) op_err_link;
  }
}


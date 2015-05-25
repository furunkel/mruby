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
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
}
static void op_move_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_move__rodata__link(text, rodata, pc);
  op_move__text__link(text, rodata, pc);
}
static void op_loadl__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadl__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 9)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
}
static void op_loadl_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadl__rodata__link(text, rodata, pc);
  op_loadl__text__link(text, rodata, pc);
}
static void op_loadi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_sBx(*pc)) + (0));
}
static void op_loadi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadi__rodata__link(text, rodata, pc);
  op_loadi__text__link(text, rodata, pc);
}
static void op_loadsym__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadsym__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
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
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(text + 96)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 59)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 64)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 93)) = (int32_t)(((uintptr_t)mrb_write_barrier) + (0) - ((uintptr_t)(text + 93)));
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
*((uint32_t *)(rodata + 0)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 4)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 8)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 12)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 16)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 20)) = (uint32_t)(((uintptr_t)text) + (0));
}
static void op_rescue__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 36)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 49)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 98)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 115)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 129)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 155)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(text + 42)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 47)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 47)));
  *((int32_t *)(text + 76)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 76)));
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
*((uint32_t *)(text + 145)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 161)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 166)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 166)));
  *((int32_t *)(text + 241)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 241)));
  *((int32_t *)(text + 304)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 304)));
*((uint32_t *)(text + 415)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 420)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 420)));
  *((int32_t *)(text + 449)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 449)));
  *((int32_t *)(text + 470)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 470)));
  *((int32_t *)(text + 536)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 536)));
}
static void op_call_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_call__rodata__link(text, rodata, pc);
  op_call__text__link(text, rodata, pc);
}
static void op_super__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_super__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 96)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (0) - ((uintptr_t)(text + 96)));
*((uint32_t *)(text + 130)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 135)) = (int32_t)(((uintptr_t)mrb_intern_static) + (0) - ((uintptr_t)(text + 135)));
  *((int32_t *)(text + 158)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (0) - ((uintptr_t)(text + 158)));
*((uint32_t *)(text + 167)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 184)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 189)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 200)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 214)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 228)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 260)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 274)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 282)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 310)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 333)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 344)) = (int32_t)(((uintptr_t)cipush) + (0) - ((uintptr_t)(text + 344)));
*((uint32_t *)(text + 394)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 405)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 446)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 616)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 616)));
  *((int32_t *)(text + 655)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 655)));
  *((int32_t *)(text + 679)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 679)));
*((uint32_t *)(text + 716)) = (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 721)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 721)));
*((uint32_t *)(text + 753)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 758)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 758)));
  *((int32_t *)(text + 797)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 797)));
*((uint32_t *)(text + 818)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 823)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 823)));
  *((int32_t *)(text + 852)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 852)));
*((uint32_t *)(text + 863)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 883)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 949)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (0) - ((uintptr_t)(text + 949)));
}
static void op_super_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_super__rodata__link(text, rodata, pc);
  op_super__text__link(text, rodata, pc);
}
static void op_argary__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_argary__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 121)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 237)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 242)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 282)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 282)));
*((uint32_t *)(text + 290)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 386)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 436)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 441)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 530)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 535)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 540)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 551)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 609)) = (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 614)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 614)));
*((uint32_t *)(text + 646)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 651)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 651)));
  *((int32_t *)(text + 690)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 690)));
*((uint32_t *)(text + 711)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 716)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 716)));
  *((int32_t *)(text + 745)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 745)));
*((uint32_t *)(text + 770)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 804)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 804)));
*((uint32_t *)(text + 812)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_argary_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_argary__rodata__link(text, rodata, pc);
  op_argary__text__link(text, rodata, pc);
}
static void op_enter__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(rodata + 0)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 4)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 8)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 12)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 16)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 20)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 24)) = (uint32_t)(((uintptr_t)text) + (0));
}
static void op_enter__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 62)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 115)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
*((uint32_t *)(text + 123)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
  *((int32_t *)(text + 136)) = (int32_t)(((uintptr_t)mrb_convert_type) + (0) - ((uintptr_t)(text + 136)));
  *((int32_t *)(text + 204)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 204)));
*((uint32_t *)(text + 259)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 266)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 277)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 288)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 347)) = (int32_t)(((uintptr_t)argnum_error) + (0) - ((uintptr_t)(text + 347)));
*((uint32_t *)(text + 362)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 367)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 367)));
  *((int32_t *)(text + 396)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 396)));
*((uint32_t *)(text + 416)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 421)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 432)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 445)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 558)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 558)));
*((uint32_t *)(text + 612)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 617)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 628)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 641)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 683)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 705)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 716)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 729)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 742)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 913)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 918)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 929)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 942)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1006)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1011)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1134)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1145)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1158)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1199)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1204)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1217)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1299)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1339)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 1339)));
*((uint32_t *)(text + 1347)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1358)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1387)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1408)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 1419)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1424)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1441)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1481)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1486)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1546)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1551)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1562)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1593)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1660)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 1660)));
*((uint32_t *)(text + 1714)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1719)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1742)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1753)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1786)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1814)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1819)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1830)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1843)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1897)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1953)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1958)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1969)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1982)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2020)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 2025)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2030)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2059)) = (uint32_t)(((uintptr_t)pc) + (0));
}
static void op_enter_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_enter__rodata__link(text, rodata, pc);
  op_enter__text__link(text, rodata, pc);
}
static void op_enter_method_m__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_enter_method_m__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 92)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 176)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
*((uint32_t *)(text + 184)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
  *((int32_t *)(text + 197)) = (int32_t)(((uintptr_t)mrb_convert_type) + (0) - ((uintptr_t)(text + 197)));
*((uint32_t *)(text + 226)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 253)) = (int32_t)(((uintptr_t)argnum_error) + (0) - ((uintptr_t)(text + 253)));
*((uint32_t *)(text + 264)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 269)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 269)));
  *((int32_t *)(text + 298)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 298)));
  *((int32_t *)(text + 334)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 334)));
*((uint32_t *)(text + 348)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 397)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 402)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 430)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 473)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
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
*((uint32_t *)(rodata + 32)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 36)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 40)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 44)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 48)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 52)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 56)) = (uint32_t)(((uintptr_t)text) + (0));
}
static void op_tailcall__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 39)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 66)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 98)) = (uint32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 166)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (0) - ((uintptr_t)(text + 166)));
*((uint32_t *)(text + 179)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 215)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 220)) = (int32_t)(((uintptr_t)mrb_intern_static) + (0) - ((uintptr_t)(text + 220)));
  *((int32_t *)(text + 240)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (0) - ((uintptr_t)(text + 240)));
*((uint32_t *)(text + 252)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 310)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (0) - ((uintptr_t)(text + 310)));
*((uint32_t *)(text + 325)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 330)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 341)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 355)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 367)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 404)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 416)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 424)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 454)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 475)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 531)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 549)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 568)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 708)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 708)));
*((uint32_t *)(text + 719)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 735)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 740)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 740)));
  *((int32_t *)(text + 857)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 857)));
  *((int32_t *)(text + 902)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 902)));
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
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 179)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 184)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 195)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
}
static void op_blkpush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_blkpush__rodata__link(text, rodata, pc);
  op_blkpush__text__link(text, rodata, pc);
}
static void op_add__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_add__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 91)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 105)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 162)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 227)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 256)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 307)) = (int32_t)(((uintptr_t)mrb_str_plus) + (0) - ((uintptr_t)(text + 307)));
  *((int32_t *)(text + 368)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 368)));
  *((int32_t *)(text + 426)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 426)));
  *((int32_t *)(text + 477)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 477)));
*((uint32_t *)(text + 493)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 516)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 532)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 540)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 553)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 553)));
  *((int32_t *)(text + 582)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 582)));
*((uint32_t *)(text + 589)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 617)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 617)));
}
static void op_add_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_add__rodata__link(text, rodata, pc);
  op_add__text__link(text, rodata, pc);
}
static void op_addi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_addi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 49)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 54)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 73)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 89)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 97)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 110)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 110)));
  *((int32_t *)(text + 139)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 139)));
*((uint32_t *)(text + 173)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 197)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 197)));
*((uint32_t *)(text + 226)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 250)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 271)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 295)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 295)));
*((uint32_t *)(text + 311)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_addi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_addi__rodata__link(text, rodata, pc);
  op_addi__text__link(text, rodata, pc);
}
static void op_sub__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sub__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 32)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 88)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 102)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 159)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 205)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 258)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 258)));
  *((int32_t *)(text + 320)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 320)));
  *((int32_t *)(text + 373)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 373)));
*((uint32_t *)(text + 400)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 416)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 424)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 437)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 437)));
  *((int32_t *)(text + 466)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 466)));
  *((int32_t *)(text + 508)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 508)));
*((uint32_t *)(text + 524)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_sub_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sub__rodata__link(text, rodata, pc);
  op_sub__text__link(text, rodata, pc);
}
static void op_subi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_subi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 50)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 55)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 74)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 90)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 98)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 111)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 111)));
  *((int32_t *)(text + 140)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 140)));
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 198)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 198)));
*((uint32_t *)(text + 206)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 239)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 266)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 287)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 311)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 311)));
*((uint32_t *)(text + 327)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_subi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_subi__rodata__link(text, rodata, pc);
  op_subi__text__link(text, rodata, pc);
}
static void op_mul__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_mul__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 32)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 87)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 101)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 158)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 192)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 243)) = (int32_t)(((uintptr_t)mrb_fixnum_mul) + (0) - ((uintptr_t)(text + 243)));
  *((int32_t *)(text + 324)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 324)));
  *((int32_t *)(text + 385)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 385)));
  *((int32_t *)(text + 443)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 443)));
  *((int32_t *)(text + 494)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 494)));
*((uint32_t *)(text + 510)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 530)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 546)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 554)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 567)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 567)));
  *((int32_t *)(text + 596)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 596)));
*((uint32_t *)(text + 608)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_mul_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_mul__rodata__link(text, rodata, pc);
  op_mul__text__link(text, rodata, pc);
}
static void op_div__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_div__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 32)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 88)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 102)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 159)) = (uint32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 222)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 222)));
  *((int32_t *)(text + 282)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 282)));
  *((int32_t *)(text + 341)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 341)));
  *((int32_t *)(text + 391)) = (int32_t)(((uintptr_t)mrb_word_boxing_float_value) + (0) - ((uintptr_t)(text + 391)));
*((uint32_t *)(text + 407)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 427)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 443)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 451)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 464)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 464)));
  *((int32_t *)(text + 493)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 493)));
}
static void op_div_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_div__rodata__link(text, rodata, pc);
  op_div__text__link(text, rodata, pc);
}
static void op_eq__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_eq__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 70)) = (int32_t)(((uintptr_t)mrb_obj_eq) + (0) - ((uintptr_t)(text + 70)));
*((uint32_t *)(text + 137)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 151)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 208)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 347)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 355)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 363)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 371)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 384)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 384)));
  *((int32_t *)(text + 413)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 413)));
}
static void op_eq_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_eq__rodata__link(text, rodata, pc);
  op_eq__text__link(text, rodata, pc);
}
static void op_lt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_lt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 80)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 94)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 151)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 260)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 274)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 294)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 302)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 310)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 318)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 331)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 331)));
  *((int32_t *)(text + 360)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 360)));
}
static void op_lt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_lt__rodata__link(text, rodata, pc);
  op_lt__text__link(text, rodata, pc);
}
static void op_le__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_le__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 80)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 94)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 151)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 260)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 274)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 294)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 302)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 310)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 318)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 331)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 331)));
  *((int32_t *)(text + 360)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 360)));
}
static void op_le_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_le__rodata__link(text, rodata, pc);
  op_le__text__link(text, rodata, pc);
}
static void op_gt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_gt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 80)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 94)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 151)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 276)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 296)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 304)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 312)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 320)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 333)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 333)));
  *((int32_t *)(text + 362)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 362)));
}
static void op_gt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_gt__rodata__link(text, rodata, pc);
  op_gt__text__link(text, rodata, pc);
}
static void op_ge__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_ge__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 80)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 94)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 151)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 276)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 296)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 304)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 312)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 320)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 333)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 333)));
  *((int32_t *)(text + 362)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 362)));
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
*((uint32_t *)(text + 43)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 110)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 115)) = (int32_t)(((uintptr_t)mrb_ary_ref) + (0) - ((uintptr_t)(text + 115)));
*((uint32_t *)(text + 123)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 84)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 90)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 106)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 126)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 157)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 157)));
*((uint32_t *)(text + 177)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 276)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 276)));
*((uint32_t *)(text + 292)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 311)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 361)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 361)));
*((uint32_t *)(text + 377)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 396)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 457)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 466)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 478)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(rodata + 0)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 4)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 8)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 12)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 16)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 20)) = (uint32_t)(((uintptr_t)text) + (0));
}
static void op_oclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 32)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 84)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_oclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_oclass__rodata__link(text, rodata, pc);
  op_oclass__text__link(text, rodata, pc);
}
static void op_class__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(rodata + 0)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 4)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 8)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 12)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 16)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 20)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 24)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 28)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 32)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 36)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 40)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 44)) = (uint32_t)(((uintptr_t)text) + (0));
}
static void op_class__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 16)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 95)) = (uint32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 201)) = (int32_t)(((uintptr_t)mrb_vm_define_class) + (0) - ((uintptr_t)(text + 201)));
*((uint32_t *)(text + 226)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 265)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_class_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_class__rodata__link(text, rodata, pc);
  op_class__text__link(text, rodata, pc);
}
static void op_module__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(rodata + 0)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 4)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 8)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 12)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 16)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 20)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 24)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 28)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 32)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 36)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 40)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 44)) = (uint32_t)(((uintptr_t)text) + (0));
}
static void op_module__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 16)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 79)) = (uint32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 169)) = (int32_t)(((uintptr_t)mrb_vm_define_module) + (0) - ((uintptr_t)(text + 169)));
*((uint32_t *)(text + 194)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 233)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_module_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_module__rodata__link(text, rodata, pc);
  op_module__text__link(text, rodata, pc);
}
static void op_exec__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_exec__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 57)) = (int32_t)(((uintptr_t)cipush) + (0) - ((uintptr_t)(text + 57)));
*((uint32_t *)(text + 66)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 73)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 128)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 143)) = (int32_t)(((uintptr_t)mrb_proc_new) + (0) - ((uintptr_t)(text + 143)));
  *((int32_t *)(text + 203)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 203)));
  *((int32_t *)(text + 254)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 254)));
  *((int32_t *)(text + 334)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 334)));
  *((int32_t *)(text + 369)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 369)));
*((uint32_t *)(text + 382)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 387)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 387)));
  *((int32_t *)(text + 416)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 416)));
}
static void op_exec_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_exec__rodata__link(text, rodata, pc);
  op_exec__text__link(text, rodata, pc);
}
static void op_method__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_method__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 9)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 53)) = (int32_t)(((uintptr_t)mrb_define_method_raw) + (0) - ((uintptr_t)(text + 53)));
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
*((uint32_t *)(rodata + 0)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 4)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 8)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 12)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 16)) = (uint32_t)(((uintptr_t)text) + (0));
*((uint32_t *)(rodata + 20)) = (uint32_t)(((uintptr_t)text) + (0));
}
static void op_tclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 47)) = (uint32_t)(((uintptr_t)_mrb_str_const_type_error) + (0));
  *((int32_t *)(text + 52)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 52)));
*((uint32_t *)(text + 81)) = (uint32_t)(((uintptr_t)_str_const_no_target_class) + (0));
  *((int32_t *)(text + 86)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 86)));
  *((int32_t *)(text + 125)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 125)));
*((uint32_t *)(text + 149)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 154)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 154)));
  *((int32_t *)(text + 183)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 183)));
*((uint32_t *)(text + 212)) = (uint32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 248)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(text + 136)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 141)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 141)));
  *((int32_t *)(text + 170)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 170)));
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


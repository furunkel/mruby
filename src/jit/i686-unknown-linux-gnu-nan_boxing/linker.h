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
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_move_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_move__rodata__link(text, rodata, pc);
  op_move__text__link(text, rodata, pc);
}
static void op_loadl__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadl__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadl_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadl__rodata__link(text, rodata, pc);
  op_loadl__text__link(text, rodata, pc);
}
static void op_loadi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_sBx(*pc)) + (0));
}
static void op_loadi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadi__rodata__link(text, rodata, pc);
  op_loadi__text__link(text, rodata, pc);
}
static void op_loadsym__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadsym__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadsym_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadsym__rodata__link(text, rodata, pc);
  op_loadsym__text__link(text, rodata, pc);
}
static void op_loadnil__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadnil__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadnil_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadnil__rodata__link(text, rodata, pc);
  op_loadnil__text__link(text, rodata, pc);
}
static void op_loadself__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadself__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadself_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadself__rodata__link(text, rodata, pc);
  op_loadself__text__link(text, rodata, pc);
}
static void op_loadt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadt__rodata__link(text, rodata, pc);
  op_loadt__text__link(text, rodata, pc);
}
static void op_loadf__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadf__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadf_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadf__rodata__link(text, rodata, pc);
  op_loadf__text__link(text, rodata, pc);
}
static void op_getglobal__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getglobal__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 40)) = (int32_t)(((uintptr_t)mrb_gv_get) + (0) - ((uintptr_t)(text + 40)));
}
static void op_getglobal_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getglobal__rodata__link(text, rodata, pc);
  op_getglobal__text__link(text, rodata, pc);
}
static void op_setglobal__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setglobal__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 55)) = (int32_t)(((uintptr_t)mrb_gv_set) + (0) - ((uintptr_t)(text + 55)));
}
static void op_setglobal_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setglobal__rodata__link(text, rodata, pc);
  op_setglobal__text__link(text, rodata, pc);
}
static void op_getspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 33)) = (int32_t)(((uintptr_t)mrb_vm_special_get) + (0) - ((uintptr_t)(text + 33)));
}
static void op_getspecial_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getspecial__rodata__link(text, rodata, pc);
  op_getspecial__text__link(text, rodata, pc);
}
static void op_setspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 16)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 42)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 47)) = (int32_t)(((uintptr_t)mrb_vm_special_set) + (0) - ((uintptr_t)(text + 47)));
}
static void op_setspecial_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setspecial__rodata__link(text, rodata, pc);
  op_setspecial__text__link(text, rodata, pc);
}
static void op_getiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 40)) = (int32_t)(((uintptr_t)mrb_vm_iv_get) + (0) - ((uintptr_t)(text + 40)));
}
static void op_getiv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getiv__rodata__link(text, rodata, pc);
  op_getiv__text__link(text, rodata, pc);
}
static void op_setiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 55)) = (int32_t)(((uintptr_t)mrb_vm_iv_set) + (0) - ((uintptr_t)(text + 55)));
}
static void op_setiv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setiv__rodata__link(text, rodata, pc);
  op_setiv__text__link(text, rodata, pc);
}
static void op_getcv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getcv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 41)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 56)) = (int32_t)(((uintptr_t)mrb_vm_cv_get) + (0) - ((uintptr_t)(text + 56)));
}
static void op_getcv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getcv__rodata__link(text, rodata, pc);
  op_getcv__text__link(text, rodata, pc);
}
static void op_setcv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setcv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 55)) = (int32_t)(((uintptr_t)mrb_vm_cv_set) + (0) - ((uintptr_t)(text + 55)));
}
static void op_setcv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setcv__rodata__link(text, rodata, pc);
  op_setcv__text__link(text, rodata, pc);
}
static void op_getconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 32)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 47)) = (int32_t)(((uintptr_t)mrb_vm_const_get) + (0) - ((uintptr_t)(text + 47)));
*((uint32_t *)(text + 80)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getconst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getconst__rodata__link(text, rodata, pc);
  op_getconst__text__link(text, rodata, pc);
}
static void op_setconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 55)) = (int32_t)(((uintptr_t)mrb_vm_const_set) + (0) - ((uintptr_t)(text + 55)));
}
static void op_setconst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setconst__rodata__link(text, rodata, pc);
  op_setconst__text__link(text, rodata, pc);
}
static void op_getmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 36)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 44)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 71)) = (int32_t)(((uintptr_t)mrb_const_get) + (0) - ((uintptr_t)(text + 71)));
}
static void op_getmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getmcnst__rodata__link(text, rodata, pc);
  op_getmcnst__text__link(text, rodata, pc);
}
static void op_setmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 76)) = (int32_t)(((uintptr_t)mrb_const_set) + (0) - ((uintptr_t)(text + 76)));
}
static void op_setmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setmcnst__rodata__link(text, rodata, pc);
  op_setmcnst__text__link(text, rodata, pc);
}
static void op_getupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 34)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 69)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 94)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 106)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getupvar_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getupvar__rodata__link(text, rodata, pc);
  op_getupvar__text__link(text, rodata, pc);
}
static void op_setupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 75)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 80)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 101)) = (int32_t)(((uintptr_t)mrb_write_barrier) + (0) - ((uintptr_t)(text + 101)));
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
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_jmpif_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_jmpif__rodata__link(text, rodata, pc);
  op_jmpif__text__link(text, rodata, pc);
}
static void op_jmpnot__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_jmpnot__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_jmpnot_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_jmpnot__rodata__link(text, rodata, pc);
  op_jmpnot__text__link(text, rodata, pc);
}
static void op_onerr__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_onerr__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 84)) = (int32_t)(((uintptr_t)mrb_realloc) + (0) - ((uintptr_t)(text + 84)));
*((uint32_t *)(text + 125)) = (uint32_t)(((uintptr_t)GETARG_sBx(*pc)) + (0));
*((uint32_t *)(text + 132)) = (uint32_t)(((uintptr_t)pc) + (0));
}
static void op_onerr_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_onerr__rodata__link(text, rodata, pc);
  op_onerr__text__link(text, rodata, pc);
}
static void op_rescue__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_rescue__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 44)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 97)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_rescue_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_rescue__rodata__link(text, rodata, pc);
  op_rescue__text__link(text, rodata, pc);
}
static void op_poperr__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_poperr__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 8)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_poperr_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_poperr__rodata__link(text, rodata, pc);
  op_poperr__text__link(text, rodata, pc);
}
static void op_raise__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_raise__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 47)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 52)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 52)));
  *((int32_t *)(text + 81)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 81)));
}
static void op_raise_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_raise__rodata__link(text, rodata, pc);
  op_raise__text__link(text, rodata, pc);
}
static void op_epush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_epush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 35)) = (int32_t)(((uintptr_t)mrb_closure_new) + (0) - ((uintptr_t)(text + 35)));
  *((int32_t *)(text + 116)) = (int32_t)(((uintptr_t)mrb_realloc) + (0) - ((uintptr_t)(text + 116)));
}
static void op_epush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_epush__rodata__link(text, rodata, pc);
  op_epush__text__link(text, rodata, pc);
}
static void op_epop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_epop__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 65)) = (int32_t)(((uintptr_t)ecall) + (0) - ((uintptr_t)(text + 65)));
*((uint32_t *)(text + 80)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_epop_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_epop__rodata__link(text, rodata, pc);
  op_epop__text__link(text, rodata, pc);
}
static void op_send__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_send__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 35)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 43)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 51)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 64)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 64)));
  *((int32_t *)(text + 93)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 93)));
}
static void op_send_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_send__rodata__link(text, rodata, pc);
  op_send__text__link(text, rodata, pc);
}
static void op_sendb__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sendb__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 35)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 43)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 51)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 64)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 64)));
  *((int32_t *)(text + 93)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 93)));
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
*((uint32_t *)(text + 152)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 168)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 173)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 173)));
  *((int32_t *)(text + 217)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 217)));
  *((int32_t *)(text + 272)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 272)));
*((uint32_t *)(text + 383)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 388)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 388)));
  *((int32_t *)(text + 417)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 417)));
  *((int32_t *)(text + 438)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 438)));
  *((int32_t *)(text + 504)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 504)));
}
static void op_call_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_call__rodata__link(text, rodata, pc);
  op_call__text__link(text, rodata, pc);
}
static void op_super__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_super__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 86)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (0) - ((uintptr_t)(text + 86)));
*((uint32_t *)(text + 99)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 119)) = (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 124)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 124)));
*((uint32_t *)(text + 156)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 161)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 161)));
  *((int32_t *)(text + 181)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 181)));
*((uint32_t *)(text + 226)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 231)) = (int32_t)(((uintptr_t)mrb_intern_static) + (0) - ((uintptr_t)(text + 231)));
  *((int32_t *)(text + 252)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (0) - ((uintptr_t)(text + 252)));
*((uint32_t *)(text + 261)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 287)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 295)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 331)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (0) - ((uintptr_t)(text + 331)));
*((uint32_t *)(text + 352)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 357)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 365)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 406)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 414)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 447)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 459)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 471)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 476)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 524)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 530)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 543)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 590)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 609)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 620)) = (int32_t)(((uintptr_t)cipush) + (0) - ((uintptr_t)(text + 620)));
*((uint32_t *)(text + 670)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 681)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 775)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 775)));
*((uint32_t *)(text + 795)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 800)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 800)));
*((uint32_t *)(text + 821)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 919)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 919)));
  *((int32_t *)(text + 943)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 943)));
  *((int32_t *)(text + 987)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 987)));
}
static void op_super_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_super__rodata__link(text, rodata, pc);
  op_super__text__link(text, rodata, pc);
}
static void op_argary__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_argary__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 29)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 127)) = (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 132)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 132)));
*((uint32_t *)(text + 164)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 169)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 169)));
  *((int32_t *)(text + 189)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 189)));
*((uint32_t *)(text + 213)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 218)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 218)));
  *((int32_t *)(text + 247)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 247)));
*((uint32_t *)(text + 270)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 281)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 296)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 322)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 322)));
*((uint32_t *)(text + 381)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 437)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 442)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 474)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 474)));
*((uint32_t *)(text + 481)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 497)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 586)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 631)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 636)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 725)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 730)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 741)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 766)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_argary_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_argary__rodata__link(text, rodata, pc);
  op_argary__text__link(text, rodata, pc);
}
static void op_enter__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_enter__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 126)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
*((uint32_t *)(text + 134)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
  *((int32_t *)(text + 147)) = (int32_t)(((uintptr_t)mrb_convert_type) + (0) - ((uintptr_t)(text + 147)));
  *((int32_t *)(text + 219)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 219)));
*((uint32_t *)(text + 270)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 281)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 292)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 303)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 366)) = (int32_t)(((uintptr_t)argnum_error) + (0) - ((uintptr_t)(text + 366)));
*((uint32_t *)(text + 377)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 382)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 382)));
  *((int32_t *)(text + 411)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 411)));
*((uint32_t *)(text + 442)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 447)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 458)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 471)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 548)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 548)));
*((uint32_t *)(text + 616)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 621)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 632)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 645)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 691)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 713)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 724)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 737)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 750)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 942)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 947)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 958)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 972)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1046)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1051)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1197)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1202)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1213)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1284)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1297)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1310)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1376)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1381)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1453)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1458)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1469)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1500)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1554)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 1554)));
*((uint32_t *)(text + 1599)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1604)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1623)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1634)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1674)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1716)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1721)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1732)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1745)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1863)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1874)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1885)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1915)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 1915)));
*((uint32_t *)(text + 1928)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1953)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 1964)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1969)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1986)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2026)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2084)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2089)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2100)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2113)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2149)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 2154)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2159)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2188)) = (uint32_t)(((uintptr_t)pc) + (0));
}
static void op_enter_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_enter__rodata__link(text, rodata, pc);
  op_enter__text__link(text, rodata, pc);
}
static void op_enter_method_m__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_enter_method_m__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 137)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
*((uint32_t *)(text + 145)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
  *((int32_t *)(text + 158)) = (int32_t)(((uintptr_t)mrb_convert_type) + (0) - ((uintptr_t)(text + 158)));
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 205)) = (int32_t)(((uintptr_t)argnum_error) + (0) - ((uintptr_t)(text + 205)));
*((uint32_t *)(text + 216)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 221)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 221)));
  *((int32_t *)(text + 250)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 250)));
  *((int32_t *)(text + 291)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 291)));
*((uint32_t *)(text + 309)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 351)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 356)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 384)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 445)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
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
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 36)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 41)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 41)));
}
static void op_return_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_return__rodata__link(text, rodata, pc);
  op_return__text__link(text, rodata, pc);
}
static void op_break__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_break__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 36)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 41)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 41)));
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
*((uint32_t *)(text + 33)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 41)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 82)) = (uint32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 152)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (0) - ((uintptr_t)(text + 152)));
*((uint32_t *)(text + 165)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 201)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 206)) = (int32_t)(((uintptr_t)mrb_intern_static) + (0) - ((uintptr_t)(text + 206)));
  *((int32_t *)(text + 224)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (0) - ((uintptr_t)(text + 224)));
*((uint32_t *)(text + 236)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 246)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 286)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (0) - ((uintptr_t)(text + 286)));
*((uint32_t *)(text + 308)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 313)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 321)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 358)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 366)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 401)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 417)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 425)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 430)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 480)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 486)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 495)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 536)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 557)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 613)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 631)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 658)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 804)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 804)));
*((uint32_t *)(text + 815)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 831)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 836)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 836)));
  *((int32_t *)(text + 977)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 977)));
  *((int32_t *)(text + 1022)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 1022)));
}
static void op_tailcall_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_tailcall__rodata__link(text, rodata, pc);
  op_tailcall__text__link(text, rodata, pc);
}
static void op_blkpush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_blkpush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
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
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 71)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 139)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 147)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 192)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 213)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 229)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 264)) = (int32_t)(((uintptr_t)mrb_str_plus) + (0) - ((uintptr_t)(text + 264)));
*((uint32_t *)(text + 288)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 317)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 333)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 367)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 375)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 397)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 413)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 421)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 434)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 434)));
  *((int32_t *)(text + 463)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 463)));
*((uint32_t *)(text + 485)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_add_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_add__rodata__link(text, rodata, pc);
  op_add__text__link(text, rodata, pc);
}
static void op_addi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_addi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 56)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 89)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 97)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 121)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 141)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 151)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 158)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 177)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 193)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 201)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 214)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 214)));
  *((int32_t *)(text + 243)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 243)));
*((uint32_t *)(text + 271)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_addi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_addi__rodata__link(text, rodata, pc);
  op_addi__text__link(text, rodata, pc);
}
static void op_sub__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sub__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 71)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 126)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 175)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 196)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 232)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 248)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 283)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 291)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 313)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 329)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 337)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 350)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 350)));
  *((int32_t *)(text + 379)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 379)));
*((uint32_t *)(text + 401)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_sub_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sub__rodata__link(text, rodata, pc);
  op_sub__text__link(text, rodata, pc);
}
static void op_subi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_subi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 60)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 91)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 99)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 125)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 145)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 155)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 162)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 181)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 197)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 205)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 218)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 218)));
  *((int32_t *)(text + 247)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 247)));
*((uint32_t *)(text + 275)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_subi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_subi__rodata__link(text, rodata, pc);
  op_subi__text__link(text, rodata, pc);
}
static void op_mul__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_mul__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 75)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 134)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 146)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 177)) = (int32_t)(((uintptr_t)mrb_fixnum_mul) + (0) - ((uintptr_t)(text + 177)));
*((uint32_t *)(text + 232)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 257)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 293)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 309)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 344)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 352)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 374)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 390)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 398)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 411)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 411)));
  *((int32_t *)(text + 440)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 440)));
*((uint32_t *)(text + 447)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 474)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_mul_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_mul__rodata__link(text, rodata, pc);
  op_mul__text__link(text, rodata, pc);
}
static void op_div__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_div__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 71)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 126)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 164)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 194)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 210)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 238)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 246)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 265)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 281)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 289)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 302)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 302)));
  *((int32_t *)(text + 331)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 331)));
*((uint32_t *)(text + 355)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 370)) = (int32_t)(((uintptr_t)__isnan) + (0) - ((uintptr_t)(text + 370)));
}
static void op_div_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_div__rodata__link(text, rodata, pc);
  op_div__text__link(text, rodata, pc);
}
static void op_eq__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_eq__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 38)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 73)) = (int32_t)(((uintptr_t)mrb_obj_eq) + (0) - ((uintptr_t)(text + 73)));
*((uint32_t *)(text + 142)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 197)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 225)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 255)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 281)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 313)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 371)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 379)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 387)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 395)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 408)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 408)));
  *((int32_t *)(text + 437)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 437)));
}
static void op_eq_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_eq__rodata__link(text, rodata, pc);
  op_eq__text__link(text, rodata, pc);
}
static void op_lt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_lt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 70)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 125)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 150)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 180)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 206)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 214)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 235)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 275)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 283)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 291)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 299)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 312)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 312)));
  *((int32_t *)(text + 341)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 341)));
}
static void op_lt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_lt__rodata__link(text, rodata, pc);
  op_lt__text__link(text, rodata, pc);
}
static void op_le__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_le__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 70)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 125)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 150)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 180)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 206)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 214)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 235)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 275)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 283)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 291)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 299)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 312)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 312)));
  *((int32_t *)(text + 341)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 341)));
}
static void op_le_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_le__rodata__link(text, rodata, pc);
  op_le__text__link(text, rodata, pc);
}
static void op_gt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_gt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 70)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 125)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 150)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 180)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 206)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 214)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 237)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 277)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 285)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 293)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 301)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 314)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 314)));
  *((int32_t *)(text + 343)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 343)));
}
static void op_gt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_gt__rodata__link(text, rodata, pc);
  op_gt__text__link(text, rodata, pc);
}
static void op_ge__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_ge__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 70)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 125)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 150)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 180)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 206)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 214)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 237)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 277)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 285)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 293)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 301)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 314)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 314)));
  *((int32_t *)(text + 343)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 343)));
}
static void op_ge_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_ge__rodata__link(text, rodata, pc);
  op_ge__text__link(text, rodata, pc);
}
static void op_array__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_array__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 40)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 45)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 45)));
}
static void op_array_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_array__rodata__link(text, rodata, pc);
  op_array__text__link(text, rodata, pc);
}
static void op_arycat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_arycat__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 41)) = (int32_t)(((uintptr_t)mrb_ary_splat) + (0) - ((uintptr_t)(text + 41)));
*((uint32_t *)(text + 46)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 77)) = (int32_t)(((uintptr_t)mrb_ary_concat) + (0) - ((uintptr_t)(text + 77)));
}
static void op_arycat_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_arycat__rodata__link(text, rodata, pc);
  op_arycat__text__link(text, rodata, pc);
}
static void op_arypush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_arypush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 61)) = (int32_t)(((uintptr_t)mrb_ary_push) + (0) - ((uintptr_t)(text + 61)));
}
static void op_arypush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_arypush__rodata__link(text, rodata, pc);
  op_arypush__text__link(text, rodata, pc);
}
static void op_aref__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_aref__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 50)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 72)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 77)) = (int32_t)(((uintptr_t)mrb_ary_ref) + (0) - ((uintptr_t)(text + 77)));
*((uint32_t *)(text + 91)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 100)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 114)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_aref_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_aref__rodata__link(text, rodata, pc);
  op_aref__text__link(text, rodata, pc);
}
static void op_aset__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_aset__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 64)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 69)) = (int32_t)(((uintptr_t)mrb_ary_set) + (0) - ((uintptr_t)(text + 69)));
}
static void op_aset_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_aset__rodata__link(text, rodata, pc);
  op_aset__text__link(text, rodata, pc);
}
static void op_apost__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_apost__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 69)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 75)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 91)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 107)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 126)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 126)));
*((uint32_t *)(text + 131)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 144)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 161)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 175)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 180)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 192)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 198)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 284)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 284)));
*((uint32_t *)(text + 303)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 367)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 367)));
*((uint32_t *)(text + 372)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 387)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 409)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 434)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 492)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 506)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 516)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_apost_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_apost__rodata__link(text, rodata, pc);
  op_apost__text__link(text, rodata, pc);
}
static void op_string__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_string__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 49)) = (int32_t)(((uintptr_t)mrb_str_dup) + (0) - ((uintptr_t)(text + 49)));
}
static void op_string_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_string__rodata__link(text, rodata, pc);
  op_string__text__link(text, rodata, pc);
}
static void op_strcat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_strcat__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 61)) = (int32_t)(((uintptr_t)mrb_str_concat) + (0) - ((uintptr_t)(text + 61)));
}
static void op_strcat_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_strcat__rodata__link(text, rodata, pc);
  op_strcat__text__link(text, rodata, pc);
}
static void op_hash__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_hash__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 31)) = (int32_t)(((uintptr_t)mrb_hash_new_capa) + (0) - ((uintptr_t)(text + 31)));
*((uint32_t *)(text + 44)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 51)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 64)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 76)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 142)) = (int32_t)(((uintptr_t)mrb_hash_set) + (0) - ((uintptr_t)(text + 142)));
*((uint32_t *)(text + 198)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_hash_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_hash__rodata__link(text, rodata, pc);
  op_hash__text__link(text, rodata, pc);
}
static void op_lambda__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_lambda__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_c(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_b(*pc)) + (0));
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 36)) = (int32_t)(((uintptr_t)_op_lambda) + (0) - ((uintptr_t)(text + 36)));
}
static void op_lambda_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_lambda__rodata__link(text, rodata, pc);
  op_lambda__text__link(text, rodata, pc);
}
static void op_range__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_range__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 46)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 81)) = (int32_t)(((uintptr_t)mrb_range_new) + (0) - ((uintptr_t)(text + 81)));
*((uint32_t *)(text + 86)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_range_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_range__rodata__link(text, rodata, pc);
  op_range__text__link(text, rodata, pc);
}
static void op_oclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_oclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 49)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_oclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_oclass__rodata__link(text, rodata, pc);
  op_oclass__text__link(text, rodata, pc);
}
static void op_class__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_class__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 42)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 159)) = (int32_t)(((uintptr_t)mrb_vm_define_class) + (0) - ((uintptr_t)(text + 159)));
*((uint32_t *)(text + 207)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_class_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_class__rodata__link(text, rodata, pc);
  op_class__text__link(text, rodata, pc);
}
static void op_module__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_module__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 133)) = (int32_t)(((uintptr_t)mrb_vm_define_module) + (0) - ((uintptr_t)(text + 133)));
*((uint32_t *)(text + 176)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_module_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_module__rodata__link(text, rodata, pc);
  op_module__text__link(text, rodata, pc);
}
static void op_exec__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_exec__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 56)) = (int32_t)(((uintptr_t)cipush) + (0) - ((uintptr_t)(text + 56)));
*((uint32_t *)(text + 65)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 72)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 130)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 145)) = (int32_t)(((uintptr_t)mrb_proc_new) + (0) - ((uintptr_t)(text + 145)));
  *((int32_t *)(text + 221)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 221)));
*((uint32_t *)(text + 241)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 246)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 246)));
  *((int32_t *)(text + 275)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 275)));
  *((int32_t *)(text + 303)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 303)));
  *((int32_t *)(text + 360)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 360)));
  *((int32_t *)(text + 411)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 411)));
}
static void op_exec_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_exec__rodata__link(text, rodata, pc);
  op_exec__text__link(text, rodata, pc);
}
static void op_method__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_method__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 42)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 65)) = (int32_t)(((uintptr_t)mrb_define_method_raw) + (0) - ((uintptr_t)(text + 65)));
}
static void op_method_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_method__rodata__link(text, rodata, pc);
  op_method__text__link(text, rodata, pc);
}
static void op_sclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 45)) = (int32_t)(((uintptr_t)mrb_singleton_class) + (0) - ((uintptr_t)(text + 45)));
}
static void op_sclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sclass__rodata__link(text, rodata, pc);
  op_sclass__text__link(text, rodata, pc);
}
static void op_tclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_tclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 75)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 95)) = (uint32_t)(((uintptr_t)_mrb_str_const_type_error) + (0));
  *((int32_t *)(text + 100)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 100)));
*((uint32_t *)(text + 129)) = (uint32_t)(((uintptr_t)_str_const_no_target_class) + (0));
  *((int32_t *)(text + 134)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 134)));
  *((int32_t *)(text + 154)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 154)));
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 179)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 179)));
  *((int32_t *)(text + 208)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 208)));
}
static void op_tclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_tclass__rodata__link(text, rodata, pc);
  op_tclass__text__link(text, rodata, pc);
}
static void op_debug__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_debug__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 35)) = (uint32_t)(((uintptr_t)_str_const_op_debug_format) + (0));
  *((int32_t *)(text + 40)) = (int32_t)(((uintptr_t)printf) + (0) - ((uintptr_t)(text + 40)));
}
static void op_debug_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_debug__rodata__link(text, rodata, pc);
  op_debug__text__link(text, rodata, pc);
}
static void op_stop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_stop__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 12)) = (int32_t)(((uintptr_t)_op_stop) + (0) - ((uintptr_t)(text + 12)));
}
static void op_stop_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_stop__rodata__link(text, rodata, pc);
  op_stop__text__link(text, rodata, pc);
}
static void op_err__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_err__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 53)) = (int32_t)(((uintptr_t)mrb_str_dup) + (0) - ((uintptr_t)(text + 53)));
*((uint32_t *)(text + 68)) = (uint32_t)(((uintptr_t)_mrb_str_const_localjump_error) + (0));
  *((int32_t *)(text + 73)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 73)));
  *((int32_t *)(text + 93)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 93)));
*((uint32_t *)(text + 113)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 118)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 118)));
  *((int32_t *)(text + 147)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 147)));
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


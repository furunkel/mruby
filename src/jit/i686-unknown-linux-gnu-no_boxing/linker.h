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
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
}
static void op_move_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_move__rodata__link(text, rodata, pc);
  op_move__text__link(text, rodata, pc);
}
static void op_loadl__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadl__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
}
static void op_loadl_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadl__rodata__link(text, rodata, pc);
  op_loadl__text__link(text, rodata, pc);
}
static void op_loadi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 32)) = (uint32_t)(((uintptr_t)GETARG_sBx(*pc)) + (0));
}
static void op_loadi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadi__rodata__link(text, rodata, pc);
  op_loadi__text__link(text, rodata, pc);
}
static void op_loadsym__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadsym__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 32)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
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
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 43)) = (int32_t)(((uintptr_t)mrb_gv_get) + (0) - ((uintptr_t)(text + 43)));
}
static void op_getglobal_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getglobal__rodata__link(text, rodata, pc);
  op_getglobal__text__link(text, rodata, pc);
}
static void op_setglobal__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setglobal__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 29)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 67)) = (int32_t)(((uintptr_t)mrb_gv_set) + (0) - ((uintptr_t)(text + 67)));
}
static void op_setglobal_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setglobal__rodata__link(text, rodata, pc);
  op_setglobal__text__link(text, rodata, pc);
}
static void op_getspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 36)) = (int32_t)(((uintptr_t)mrb_vm_special_get) + (0) - ((uintptr_t)(text + 36)));
}
static void op_getspecial_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getspecial__rodata__link(text, rodata, pc);
  op_getspecial__text__link(text, rodata, pc);
}
static void op_setspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 54)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 59)) = (int32_t)(((uintptr_t)mrb_vm_special_set) + (0) - ((uintptr_t)(text + 59)));
}
static void op_setspecial_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setspecial__rodata__link(text, rodata, pc);
  op_setspecial__text__link(text, rodata, pc);
}
static void op_getiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 43)) = (int32_t)(((uintptr_t)mrb_vm_iv_get) + (0) - ((uintptr_t)(text + 43)));
}
static void op_getiv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getiv__rodata__link(text, rodata, pc);
  op_getiv__text__link(text, rodata, pc);
}
static void op_setiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 29)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 67)) = (int32_t)(((uintptr_t)mrb_vm_iv_set) + (0) - ((uintptr_t)(text + 67)));
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
*((uint32_t *)(text + 44)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 59)) = (int32_t)(((uintptr_t)mrb_vm_cv_get) + (0) - ((uintptr_t)(text + 59)));
}
static void op_getcv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getcv__rodata__link(text, rodata, pc);
  op_getcv__text__link(text, rodata, pc);
}
static void op_setcv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setcv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 29)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 67)) = (int32_t)(((uintptr_t)mrb_vm_cv_set) + (0) - ((uintptr_t)(text + 67)));
}
static void op_setcv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setcv__rodata__link(text, rodata, pc);
  op_setcv__text__link(text, rodata, pc);
}
static void op_getconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 33)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 48)) = (int32_t)(((uintptr_t)mrb_vm_const_get) + (0) - ((uintptr_t)(text + 48)));
*((uint32_t *)(text + 81)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getconst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getconst__rodata__link(text, rodata, pc);
  op_getconst__text__link(text, rodata, pc);
}
static void op_setconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 29)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 67)) = (int32_t)(((uintptr_t)mrb_vm_const_set) + (0) - ((uintptr_t)(text + 67)));
}
static void op_setconst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setconst__rodata__link(text, rodata, pc);
  op_setconst__text__link(text, rodata, pc);
}
static void op_getmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 45)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 83)) = (int32_t)(((uintptr_t)mrb_const_get) + (0) - ((uintptr_t)(text + 83)));
}
static void op_getmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getmcnst__rodata__link(text, rodata, pc);
  op_getmcnst__text__link(text, rodata, pc);
}
static void op_setmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 114)) = (int32_t)(((uintptr_t)mrb_const_set) + (0) - ((uintptr_t)(text + 114)));
}
static void op_setmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setmcnst__rodata__link(text, rodata, pc);
  op_setmcnst__text__link(text, rodata, pc);
}
static void op_getupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 42)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 110)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
}
static void op_getupvar_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getupvar__rodata__link(text, rodata, pc);
  op_getupvar__text__link(text, rodata, pc);
}
static void op_setupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 32)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 72)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 83)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 131)) = (int32_t)(((uintptr_t)mrb_write_barrier) + (0) - ((uintptr_t)(text + 131)));
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
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(text + 148)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 164)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 169)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 169)));
  *((int32_t *)(text + 219)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 219)));
  *((int32_t *)(text + 279)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 279)));
*((uint32_t *)(text + 390)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 395)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 395)));
  *((int32_t *)(text + 424)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 424)));
  *((int32_t *)(text + 445)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 445)));
  *((int32_t *)(text + 523)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 523)));
}
static void op_call_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_call__rodata__link(text, rodata, pc);
  op_call__text__link(text, rodata, pc);
}
static void op_super__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_super__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 104)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (0) - ((uintptr_t)(text + 104)));
*((uint32_t *)(text + 115)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 135)) = (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 140)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 140)));
*((uint32_t *)(text + 172)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 177)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 177)));
  *((int32_t *)(text + 201)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 201)));
*((uint32_t *)(text + 243)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 248)) = (int32_t)(((uintptr_t)mrb_intern_static) + (0) - ((uintptr_t)(text + 248)));
  *((int32_t *)(text + 271)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (0) - ((uintptr_t)(text + 271)));
*((uint32_t *)(text + 276)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 292)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 376)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (0) - ((uintptr_t)(text + 376)));
*((uint32_t *)(text + 397)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 402)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 410)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 461)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 469)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 504)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 518)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 528)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 533)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 584)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 594)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 600)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 612)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 665)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 693)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 712)) = (int32_t)(((uintptr_t)cipush) + (0) - ((uintptr_t)(text + 712)));
*((uint32_t *)(text + 758)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 769)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 904)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 904)));
*((uint32_t *)(text + 924)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 929)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 929)));
*((uint32_t *)(text + 950)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 1050)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 1050)));
  *((int32_t *)(text + 1074)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 1074)));
  *((int32_t *)(text + 1118)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 1118)));
}
static void op_super_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_super__rodata__link(text, rodata, pc);
  op_super__text__link(text, rodata, pc);
}
static void op_argary__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_argary__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 111)) = (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 116)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 116)));
*((uint32_t *)(text + 148)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 153)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 153)));
  *((int32_t *)(text + 177)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 177)));
*((uint32_t *)(text + 191)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 196)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 196)));
  *((int32_t *)(text + 225)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 225)));
*((uint32_t *)(text + 243)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 254)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 278)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 304)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 304)));
*((uint32_t *)(text + 348)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 380)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 406)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 411)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 443)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 443)));
*((uint32_t *)(text + 580)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 651)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 656)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 779)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 787)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 792)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 803)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
}
static void op_argary_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_argary__rodata__link(text, rodata, pc);
  op_argary__text__link(text, rodata, pc);
}
static void op_enter__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_enter__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 108)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
*((uint32_t *)(text + 116)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
  *((int32_t *)(text + 129)) = (int32_t)(((uintptr_t)mrb_convert_type) + (0) - ((uintptr_t)(text + 129)));
  *((int32_t *)(text + 202)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 202)));
*((uint32_t *)(text + 257)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 273)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 284)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 345)) = (int32_t)(((uintptr_t)argnum_error) + (0) - ((uintptr_t)(text + 345)));
*((uint32_t *)(text + 360)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 365)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 365)));
  *((int32_t *)(text + 394)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 394)));
*((uint32_t *)(text + 413)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 418)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 429)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 442)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 499)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 499)));
*((uint32_t *)(text + 561)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 566)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 577)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 590)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 628)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 658)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 669)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 682)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 695)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 952)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 957)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 968)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 982)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1075)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1080)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1282)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1287)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1298)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1372)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1385)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1398)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1494)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1499)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1583)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1588)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1599)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1637)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1710)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 1710)));
*((uint32_t *)(text + 1781)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1786)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1809)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1820)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1865)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1902)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1907)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1918)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1931)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2073)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2084)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2095)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 2128)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 2128)));
*((uint32_t *)(text + 2145)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2170)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 2181)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2186)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2203)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2243)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2326)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2331)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2342)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2355)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2410)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 2415)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2420)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2449)) = (uint32_t)(((uintptr_t)pc) + (0));
}
static void op_enter_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_enter__rodata__link(text, rodata, pc);
  op_enter__text__link(text, rodata, pc);
}
static void op_enter_method_m__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_enter_method_m__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 117)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
*((uint32_t *)(text + 125)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
  *((int32_t *)(text + 138)) = (int32_t)(((uintptr_t)mrb_convert_type) + (0) - ((uintptr_t)(text + 138)));
*((uint32_t *)(text + 162)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 193)) = (int32_t)(((uintptr_t)argnum_error) + (0) - ((uintptr_t)(text + 193)));
*((uint32_t *)(text + 204)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 209)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 209)));
  *((int32_t *)(text + 238)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 238)));
  *((int32_t *)(text + 286)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (0) - ((uintptr_t)(text + 286)));
*((uint32_t *)(text + 300)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 370)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 401)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 479)) = (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
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
*((uint32_t *)(text + 76)) = (uint32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 139)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (0) - ((uintptr_t)(text + 139)));
*((uint32_t *)(text + 154)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 190)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 195)) = (int32_t)(((uintptr_t)mrb_intern_static) + (0) - ((uintptr_t)(text + 195)));
  *((int32_t *)(text + 215)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (0) - ((uintptr_t)(text + 215)));
*((uint32_t *)(text + 227)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 237)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 295)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (0) - ((uintptr_t)(text + 295)));
*((uint32_t *)(text + 309)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 314)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 322)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 359)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 367)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 402)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 418)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 428)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 433)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 493)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 499)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 511)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 569)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 596)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 652)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 670)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 703)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 903)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 903)));
*((uint32_t *)(text + 914)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 930)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 935)) = (int32_t)(((uintptr_t)_op_return) + (0) - ((uintptr_t)(text + 935)));
  *((int32_t *)(text + 1086)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 1086)));
  *((int32_t *)(text + 1131)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 1131)));
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
*((uint32_t *)(text + 174)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 182)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 187)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 198)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
}
static void op_blkpush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_blkpush__rodata__link(text, rodata, pc);
  op_blkpush__text__link(text, rodata, pc);
}
static void op_add__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_add__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 50)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 106)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 121)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 206)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 214)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 291)) = (int32_t)(((uintptr_t)mrb_str_plus) + (0) - ((uintptr_t)(text + 291)));
*((uint32_t *)(text + 324)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 332)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 370)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 381)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 420)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 431)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 453)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 469)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 477)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 490)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 490)));
  *((int32_t *)(text + 519)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 519)));
}
static void op_add_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_add__rodata__link(text, rodata, pc);
  op_add__text__link(text, rodata, pc);
}
static void op_addi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_addi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 48)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 77)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 107)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 120)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 138)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 149)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 165)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 173)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 186)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 186)));
  *((int32_t *)(text + 215)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 215)));
}
static void op_addi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_addi__rodata__link(text, rodata, pc);
  op_addi__text__link(text, rodata, pc);
}
static void op_sub__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sub__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 48)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 83)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 94)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 153)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 164)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 199)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 210)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 250)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 261)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 283)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 299)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 307)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 320)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 320)));
  *((int32_t *)(text + 349)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 349)));
}
static void op_sub_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sub__rodata__link(text, rodata, pc);
  op_sub__text__link(text, rodata, pc);
}
static void op_subi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_subi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 51)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 78)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 110)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 123)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 141)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 152)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 168)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 176)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 189)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 189)));
  *((int32_t *)(text + 218)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 218)));
}
static void op_subi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_subi__rodata__link(text, rodata, pc);
  op_subi__text__link(text, rodata, pc);
}
static void op_mul__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_mul__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 50)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 106)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 114)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 175)) = (int32_t)(((uintptr_t)mrb_fixnum_mul) + (0) - ((uintptr_t)(text + 175)));
*((uint32_t *)(text + 223)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 231)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 269)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 280)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 321)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 332)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 354)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 370)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 378)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 391)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 391)));
  *((int32_t *)(text + 420)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 420)));
*((uint32_t *)(text + 446)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_mul_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_mul__rodata__link(text, rodata, pc);
  op_mul__text__link(text, rodata, pc);
}
static void op_div__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_div__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 47)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 82)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 93)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 142)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 153)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 188)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 199)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 239)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 250)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 272)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 288)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 296)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 309)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 309)));
  *((int32_t *)(text + 338)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 338)));
}
static void op_div_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_div__rodata__link(text, rodata, pc);
  op_div__text__link(text, rodata, pc);
}
static void op_eq__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_eq__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 34)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 42)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 127)) = (int32_t)(((uintptr_t)mrb_obj_eq) + (0) - ((uintptr_t)(text + 127)));
*((uint32_t *)(text + 202)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 213)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 239)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 250)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 278)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 306)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 317)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 368)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 395)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 403)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 411)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 419)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 432)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 432)));
  *((int32_t *)(text + 461)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 461)));
}
static void op_eq_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_eq__rodata__link(text, rodata, pc);
  op_eq__text__link(text, rodata, pc);
}
static void op_lt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_lt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 46)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 75)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 86)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 109)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 120)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 148)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 176)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 187)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 231)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 254)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 270)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 278)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 291)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 291)));
  *((int32_t *)(text + 320)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 320)));
}
static void op_lt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_lt__rodata__link(text, rodata, pc);
  op_lt__text__link(text, rodata, pc);
}
static void op_le__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_le__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 46)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 75)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 86)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 109)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 120)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 148)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 176)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 187)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 231)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 254)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 270)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 278)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 291)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 291)));
  *((int32_t *)(text + 320)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 320)));
}
static void op_le_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_le__rodata__link(text, rodata, pc);
  op_le__text__link(text, rodata, pc);
}
static void op_gt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_gt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 46)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 75)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 86)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 109)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 120)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 148)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 176)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 187)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 233)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 256)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 264)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 272)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 280)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 293)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 293)));
  *((int32_t *)(text + 322)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 322)));
}
static void op_gt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_gt__rodata__link(text, rodata, pc);
  op_gt__text__link(text, rodata, pc);
}
static void op_ge__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_ge__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 46)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 75)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 86)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 109)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 120)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 148)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 176)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 187)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 233)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 256)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 264)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 272)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 280)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 293)) = (int32_t)(((uintptr_t)_op_send) + (0) - ((uintptr_t)(text + 293)));
  *((int32_t *)(text + 322)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 322)));
}
static void op_ge_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_ge__rodata__link(text, rodata, pc);
  op_ge__text__link(text, rodata, pc);
}
static void op_array__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_array__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 45)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 50)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 50)));
}
static void op_array_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_array__rodata__link(text, rodata, pc);
  op_array__text__link(text, rodata, pc);
}
static void op_arycat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_arycat__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 64)) = (int32_t)(((uintptr_t)mrb_ary_splat) + (0) - ((uintptr_t)(text + 64)));
  *((int32_t *)(text + 113)) = (int32_t)(((uintptr_t)mrb_ary_concat) + (0) - ((uintptr_t)(text + 113)));
}
static void op_arycat_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_arycat__rodata__link(text, rodata, pc);
  op_arycat__text__link(text, rodata, pc);
}
static void op_arypush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_arypush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 91)) = (int32_t)(((uintptr_t)mrb_ary_push) + (0) - ((uintptr_t)(text + 91)));
}
static void op_arypush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_arypush__rodata__link(text, rodata, pc);
  op_arypush__text__link(text, rodata, pc);
}
static void op_aref__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_aref__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 39)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 64)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 77)) = (int32_t)(((uintptr_t)mrb_ary_ref) + (0) - ((uintptr_t)(text + 77)));
*((uint32_t *)(text + 95)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 108)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 133)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_aref_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_aref__rodata__link(text, rodata, pc);
  op_aref__text__link(text, rodata, pc);
}
static void op_aset__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_aset__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 94)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 99)) = (int32_t)(((uintptr_t)mrb_ary_set) + (0) - ((uintptr_t)(text + 99)));
}
static void op_aset_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_aset__rodata__link(text, rodata, pc);
  op_aset__text__link(text, rodata, pc);
}
static void op_apost__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_apost__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 55)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 61)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 77)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 89)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 96)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 119)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (0) - ((uintptr_t)(text + 119)));
*((uint32_t *)(text + 148)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 153)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 167)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 172)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 184)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 190)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 320)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 320)));
*((uint32_t *)(text + 333)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 347)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 418)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (0) - ((uintptr_t)(text + 418)));
*((uint32_t *)(text + 437)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 459)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 468)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 506)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 605)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 619)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 628)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_apost_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_apost__rodata__link(text, rodata, pc);
  op_apost__text__link(text, rodata, pc);
}
static void op_string__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_string__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 71)) = (int32_t)(((uintptr_t)mrb_str_dup) + (0) - ((uintptr_t)(text + 71)));
}
static void op_string_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_string__rodata__link(text, rodata, pc);
  op_string__text__link(text, rodata, pc);
}
static void op_strcat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_strcat__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 91)) = (int32_t)(((uintptr_t)mrb_str_concat) + (0) - ((uintptr_t)(text + 91)));
}
static void op_strcat_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_strcat__rodata__link(text, rodata, pc);
  op_strcat__text__link(text, rodata, pc);
}
static void op_hash__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_hash__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 26)) = (int32_t)(((uintptr_t)mrb_hash_new_capa) + (0) - ((uintptr_t)(text + 26)));
*((uint32_t *)(text + 43)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 48)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 55)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 72)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 84)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 204)) = (int32_t)(((uintptr_t)mrb_hash_set) + (0) - ((uintptr_t)(text + 204)));
*((uint32_t *)(text + 264)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 80)) = (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 135)) = (int32_t)(((uintptr_t)mrb_range_new) + (0) - ((uintptr_t)(text + 135)));
}
static void op_range_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_range__rodata__link(text, rodata, pc);
  op_range__text__link(text, rodata, pc);
}
static void op_oclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_oclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 7)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
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
*((uint32_t *)(text + 38)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 157)) = (int32_t)(((uintptr_t)mrb_vm_define_class) + (0) - ((uintptr_t)(text + 157)));
}
static void op_class_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_class__rodata__link(text, rodata, pc);
  op_class__text__link(text, rodata, pc);
}
static void op_module__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_module__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 94)) = (int32_t)(((uintptr_t)mrb_vm_define_module) + (0) - ((uintptr_t)(text + 94)));
}
static void op_module_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_module__rodata__link(text, rodata, pc);
  op_module__text__link(text, rodata, pc);
}
static void op_exec__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_exec__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 24)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 60)) = (int32_t)(((uintptr_t)cipush) + (0) - ((uintptr_t)(text + 60)));
*((uint32_t *)(text + 69)) = (uint32_t)(((uintptr_t)pc) + (0));
*((uint32_t *)(text + 76)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 127)) = (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 142)) = (int32_t)(((uintptr_t)mrb_proc_new) + (0) - ((uintptr_t)(text + 142)));
  *((int32_t *)(text + 229)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (0) - ((uintptr_t)(text + 229)));
*((uint32_t *)(text + 249)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 254)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 254)));
  *((int32_t *)(text + 283)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 283)));
  *((int32_t *)(text + 311)) = (int32_t)(((uintptr_t)cipop) + (0) - ((uintptr_t)(text + 311)));
  *((int32_t *)(text + 368)) = (int32_t)(((uintptr_t)stack_extend) + (0) - ((uintptr_t)(text + 368)));
  *((int32_t *)(text + 419)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 419)));
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
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 60)) = (int32_t)(((uintptr_t)mrb_singleton_class) + (0) - ((uintptr_t)(text + 60)));
}
static void op_sclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sclass__rodata__link(text, rodata, pc);
  op_sclass__text__link(text, rodata, pc);
}
static void op_tclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_tclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 42)) = (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 76)) = (uint32_t)(((uintptr_t)_mrb_str_const_type_error) + (0));
  *((int32_t *)(text + 81)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 81)));
*((uint32_t *)(text + 110)) = (uint32_t)(((uintptr_t)_str_const_no_target_class) + (0));
  *((int32_t *)(text + 115)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (0) - ((uintptr_t)(text + 115)));
  *((int32_t *)(text + 139)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 139)));
*((uint32_t *)(text + 156)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 161)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 161)));
  *((int32_t *)(text + 190)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 190)));
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
  *((int32_t *)(text + 64)) = (int32_t)(((uintptr_t)mrb_str_dup) + (0) - ((uintptr_t)(text + 64)));
*((uint32_t *)(text + 83)) = (uint32_t)(((uintptr_t)_mrb_str_const_localjump_error) + (0));
  *((int32_t *)(text + 88)) = (int32_t)(((uintptr_t)mrb_class_get) + (0) - ((uintptr_t)(text + 88)));
  *((int32_t *)(text + 116)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (0) - ((uintptr_t)(text + 116)));
*((uint32_t *)(text + 133)) = (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 138)) = (int32_t)(((uintptr_t)_op_raise) + (0) - ((uintptr_t)(text + 138)));
  *((int32_t *)(text + 167)) = (int32_t)(((uintptr_t)mrb_jit_enter) + (0) - ((uintptr_t)(text + 167)));
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


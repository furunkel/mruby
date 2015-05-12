typedef void (*jit_link_func_t)(uint8_t *op, uint8_t *data, mrb_code c);
jit_link_func_t link_funcs[78];
static void op_nop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_nop__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_nop_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_nop__rodata__link(text, rodata, c);
  op_nop__text__link(text, rodata, c);
}
static void op_move__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_move__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_move_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_move__rodata__link(text, rodata, c);
  op_move__text__link(text, rodata, c);
}
static void op_loadl__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_loadl__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 9)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 14)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_loadl_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_loadl__rodata__link(text, rodata, c);
  op_loadl__text__link(text, rodata, c);
}
static void op_loadi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_loadi__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_sBx(c)) + (0));
}
static void op_loadi_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_loadi__rodata__link(text, rodata, c);
  op_loadi__text__link(text, rodata, c);
}
static void op_loadsym__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_loadsym__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 26)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
}
static void op_loadsym_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_loadsym__rodata__link(text, rodata, c);
  op_loadsym__text__link(text, rodata, c);
}
static void op_loadnil__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_loadnil__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_loadnil_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_loadnil__rodata__link(text, rodata, c);
  op_loadnil__text__link(text, rodata, c);
}
static void op_loadself__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_loadself__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_loadself_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_loadself__rodata__link(text, rodata, c);
  op_loadself__text__link(text, rodata, c);
}
static void op_loadt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_loadt__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_loadt_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_loadt__rodata__link(text, rodata, c);
  op_loadt__text__link(text, rodata, c);
}
static void op_loadf__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_loadf__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_loadf_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_loadf__rodata__link(text, rodata, c);
  op_loadf__text__link(text, rodata, c);
}
static void op_getglobal__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_getglobal__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 35)) = (int32_t)(((uintptr_t)mrb_gv_get) + (-4) - ((uintptr_t)(text + 35)));
}
static void op_getglobal_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_getglobal__rodata__link(text, rodata, c);
  op_getglobal__text__link(text, rodata, c);
}
static void op_setglobal__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_setglobal__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 34)) = (int32_t)(((uintptr_t)mrb_gv_set) + (-4) - ((uintptr_t)(text + 34)));
}
static void op_setglobal_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_setglobal__rodata__link(text, rodata, c);
  op_setglobal__text__link(text, rodata, c);
}
static void op_getspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_getspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 28)) = (int32_t)(((uintptr_t)mrb_vm_special_get) + (-4) - ((uintptr_t)(text + 28)));
}
static void op_getspecial_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_getspecial__rodata__link(text, rodata, c);
  op_getspecial__text__link(text, rodata, c);
}
static void op_setspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_setspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 27)) = (int32_t)(((uintptr_t)mrb_vm_special_set) + (-4) - ((uintptr_t)(text + 27)));
}
static void op_setspecial_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_setspecial__rodata__link(text, rodata, c);
  op_setspecial__text__link(text, rodata, c);
}
static void op_getiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_getiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 35)) = (int32_t)(((uintptr_t)mrb_vm_iv_get) + (-4) - ((uintptr_t)(text + 35)));
}
static void op_getiv_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_getiv__rodata__link(text, rodata, c);
  op_getiv__text__link(text, rodata, c);
}
static void op_setiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_setiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 34)) = (int32_t)(((uintptr_t)mrb_vm_iv_set) + (-4) - ((uintptr_t)(text + 34)));
}
static void op_setiv_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_setiv__rodata__link(text, rodata, c);
  op_setiv__text__link(text, rodata, c);
}
static void op_getcv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_getcv__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 47)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 55)) = (int32_t)(((uintptr_t)mrb_vm_cv_get) + (-4) - ((uintptr_t)(text + 55)));
}
static void op_getcv_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_getcv__rodata__link(text, rodata, c);
  op_getcv__text__link(text, rodata, c);
}
static void op_setcv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_setcv__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 34)) = (int32_t)(((uintptr_t)mrb_vm_cv_set) + (-4) - ((uintptr_t)(text + 34)));
}
static void op_setcv_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_setcv__rodata__link(text, rodata, c);
  op_setcv__text__link(text, rodata, c);
}
static void op_getconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_getconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 33)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 41)) = (int32_t)(((uintptr_t)mrb_vm_const_get) + (-4) - ((uintptr_t)(text + 41)));
*((uint32_t *)(text + 82)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_getconst_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_getconst__rodata__link(text, rodata, c);
  op_getconst__text__link(text, rodata, c);
}
static void op_setconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_setconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 34)) = (int32_t)(((uintptr_t)mrb_vm_const_set) + (-4) - ((uintptr_t)(text + 34)));
}
static void op_setconst_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_setconst__rodata__link(text, rodata, c);
  op_setconst__text__link(text, rodata, c);
}
static void op_getmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_getmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 39)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 47)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 59)) = (int32_t)(((uintptr_t)mrb_const_get) + (-4) - ((uintptr_t)(text + 59)));
}
static void op_getmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_getmcnst__rodata__link(text, rodata, c);
  op_getmcnst__text__link(text, rodata, c);
}
static void op_setmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_setmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 25)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 47)) = (int32_t)(((uintptr_t)mrb_const_set) + (-4) - ((uintptr_t)(text + 47)));
}
static void op_setmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_setmcnst__rodata__link(text, rodata, c);
  op_setmcnst__text__link(text, rodata, c);
}
static void op_getupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_getupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 72)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 97)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 109)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_getupvar_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_getupvar__rodata__link(text, rodata, c);
  op_getupvar__text__link(text, rodata, c);
}
static void op_setupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_setupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 79)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 84)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 106)) = (int32_t)(((uintptr_t)mrb_write_barrier) + (-4) - ((uintptr_t)(text + 106)));
}
static void op_setupvar_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_setupvar__rodata__link(text, rodata, c);
  op_setupvar__text__link(text, rodata, c);
}
static void op_jmp__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_jmp__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_jmp_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_jmp__rodata__link(text, rodata, c);
  op_jmp__text__link(text, rodata, c);
}
static void op_jmpif__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_jmpif__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_jmpif_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_jmpif__rodata__link(text, rodata, c);
  op_jmpif__text__link(text, rodata, c);
}
static void op_jmpnot__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_jmpnot__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_jmpnot_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_jmpnot__rodata__link(text, rodata, c);
  op_jmpnot__text__link(text, rodata, c);
}
static void op_onerr__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_onerr__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  *((int32_t *)(text + 61)) = (int32_t)(((uintptr_t)mrb_realloc) + (-4) - ((uintptr_t)(text + 61)));
*((uint32_t *)(text + 101)) = (uint32_t)(((uintptr_t)GETARG_sBx(c)) + (0));
}
static void op_onerr_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_onerr__rodata__link(text, rodata, c);
  op_onerr__text__link(text, rodata, c);
}
static void op_rescue__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_rescue__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 30)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 67)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 85)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_rescue_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_rescue__rodata__link(text, rodata, c);
  op_rescue__text__link(text, rodata, c);
}
static void op_poperr__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_poperr__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 1)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_poperr_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_poperr__rodata__link(text, rodata, c);
  op_poperr__text__link(text, rodata, c);
}
static void op_raise__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_raise__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 43)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 43)));
}
static void op_raise_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_raise__rodata__link(text, rodata, c);
  op_raise__text__link(text, rodata, c);
}
static void op_epush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_epush__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 19)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 28)) = (int32_t)(((uintptr_t)mrb_closure_new) + (-4) - ((uintptr_t)(text + 28)));
  *((int32_t *)(text + 94)) = (int32_t)(((uintptr_t)mrb_realloc) + (-4) - ((uintptr_t)(text + 94)));
}
static void op_epush_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_epush__rodata__link(text, rodata, c);
  op_epush__text__link(text, rodata, c);
}
static void op_epop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_epop__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 12)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 40)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 63)) = (int32_t)(((uintptr_t)ecall) + (-4) - ((uintptr_t)(text + 63)));
}
static void op_epop_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_epop__rodata__link(text, rodata, c);
  op_epop__text__link(text, rodata, c);
}
static void op_send__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (135));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (164));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1201));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1213));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1225));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (164));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (153));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1237));
}
static void op_send__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 67)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 79)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((int32_t *)(text + 131)) = (int32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 199)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 199)));
*((uint32_t *)(text + 208)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 225)) = (int32_t)(((uintptr_t)mrb_p) + (-4) - ((uintptr_t)(text + 225)));
*((uint32_t *)(text + 247)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 257)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 257)));
  *((int32_t *)(text + 277)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 277)));
*((uint32_t *)(text + 285)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 307)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 324)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 324)));
*((uint32_t *)(text + 330)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 353)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 375)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 404)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 414)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 427)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 473)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 483)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 496)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 533)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 548)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 577)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 609)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 648)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 648)));
*((uint32_t *)(text + 692)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 907)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 907)));
  *((int32_t *)(text + 926)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 926)));
  *((int32_t *)(text + 1043)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1043)));
  *((int32_t *)(text + 1087)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1087)));
  *((int32_t *)(text + 1123)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 1123)));
}
static void op_send_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_send__rodata__link(text, rodata, c);
  op_send__text__link(text, rodata, c);
}
static void op_sendb__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (105));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (134));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1115));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1127));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1139));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (134));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (123));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1151));
}
static void op_sendb__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 33)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 45)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((int32_t *)(text + 101)) = (int32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 169)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 169)));
*((uint32_t *)(text + 178)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 195)) = (int32_t)(((uintptr_t)mrb_p) + (-4) - ((uintptr_t)(text + 195)));
*((uint32_t *)(text + 217)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 227)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 227)));
  *((int32_t *)(text + 247)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 247)));
*((uint32_t *)(text + 255)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 278)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 295)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 295)));
*((uint32_t *)(text + 301)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 325)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 347)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 377)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 387)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 400)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 442)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 452)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 465)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 501)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 516)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 545)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 577)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 616)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 616)));
*((uint32_t *)(text + 660)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 876)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 876)));
  *((int32_t *)(text + 895)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 895)));
  *((int32_t *)(text + 997)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 997)));
  *((int32_t *)(text + 1053)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1053)));
  *((int32_t *)(text + 1092)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1092)));
}
static void op_sendb_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_sendb__rodata__link(text, rodata, c);
  op_sendb__text__link(text, rodata, c);
}
static void op_fsend__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_fsend__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_fsend_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_fsend__rodata__link(text, rodata, c);
  op_fsend__text__link(text, rodata, c);
}
static void op_call__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_call__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  *((int32_t *)(text + 136)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 136)));
  *((int32_t *)(text + 196)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 196)));
*((uint32_t *)(text + 373)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 472)) = (int32_t)(((uintptr_t)ecall) + (-4) - ((uintptr_t)(text + 472)));
  *((int32_t *)(text + 493)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 493)));
  *((int32_t *)(text + 610)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 610)));
  *((int32_t *)(text + 667)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 667)));
  *((int32_t *)(text + 679)) = (int32_t)(((uintptr_t)localjump_error) + (-4) - ((uintptr_t)(text + 679)));
  *((int32_t *)(text + 688)) = (int32_t)(((uintptr_t)_mrb_str_const_fiber_error) + (-4) - ((uintptr_t)(text + 688)));
  *((int32_t *)(text + 696)) = (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 696)));
*((uint32_t *)(text + 704)) = (uint32_t)(((uintptr_t)_str_const_double_resume) + (0));
  *((int32_t *)(text + 717)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 717)));
  *((int32_t *)(text + 731)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 731)));
  *((int32_t *)(text + 750)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 750)));
  *((int32_t *)(text + 799)) = (int32_t)(((uintptr_t)longjmp) + (-4) - ((uintptr_t)(text + 799)));
}
static void op_call_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_call__rodata__link(text, rodata, c);
  op_call__text__link(text, rodata, c);
}
static void op_super__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_super__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  *((int32_t *)(text + 68)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 68)));
*((uint32_t *)(text + 76)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 94)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 104)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 104)));
  *((int32_t *)(text + 123)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 123)));
*((uint32_t *)(text + 131)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 170)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 184)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 184)));
*((uint32_t *)(text + 189)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 201)) = (int32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (-4) - ((uintptr_t)(text + 201)));
  *((int32_t *)(text + 209)) = (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 209)));
*((uint32_t *)(text + 221)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 231)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 231)));
  *((int32_t *)(text + 245)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 245)));
*((uint32_t *)(text + 280)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 302)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 327)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 337)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 350)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 389)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 399)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 412)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 453)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 482)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 493)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 493)));
*((uint32_t *)(text + 563)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 648)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 648)));
  *((int32_t *)(text + 667)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 667)));
*((uint32_t *)(text + 677)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 779)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 779)));
  *((int32_t *)(text + 792)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 792)));
  *((int32_t *)(text + 831)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 831)));
}
static void op_super_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_super__rodata__link(text, rodata, c);
  op_super__text__link(text, rodata, c);
}
static void op_argary__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_argary__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 28)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 66)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 122)) = (int32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (-4) - ((uintptr_t)(text + 122)));
  *((int32_t *)(text + 130)) = (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 130)));
*((uint32_t *)(text + 142)) = (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 152)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 152)));
  *((int32_t *)(text + 166)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 166)));
  *((int32_t *)(text + 185)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 185)));
*((uint32_t *)(text + 207)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 218)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 234)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 239)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 261)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (-4) - ((uintptr_t)(text + 261)));
*((uint32_t *)(text + 276)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 319)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 358)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 384)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 390)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 420)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (-4) - ((uintptr_t)(text + 420)));
*((uint32_t *)(text + 472)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 536)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 584)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 597)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 602)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 686)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 691)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 702)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 726)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_argary_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_argary__rodata__link(text, rodata, c);
  op_argary__text__link(text, rodata, c);
}
static void op_enter__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_enter__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 117)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
*((uint32_t *)(text + 123)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
  *((int32_t *)(text + 128)) = (int32_t)(((uintptr_t)mrb_convert_type) + (-4) - ((uintptr_t)(text + 128)));
  *((int32_t *)(text + 198)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (-4) - ((uintptr_t)(text + 198)));
*((uint32_t *)(text + 246)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 251)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 262)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 277)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 322)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 327)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
  *((int32_t *)(text + 346)) = (int32_t)(((uintptr_t)argnum_error) + (-4) - ((uintptr_t)(text + 346)));
  *((int32_t *)(text + 354)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 354)));
*((uint32_t *)(text + 374)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 379)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 390)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 403)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
  *((int32_t *)(text + 469)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (-4) - ((uintptr_t)(text + 469)));
*((uint32_t *)(text + 508)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 513)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 524)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 537)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 570)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 575)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 599)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 624)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 629)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 640)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 653)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 820)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 825)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 836)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 849)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 908)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 913)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 948)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 953)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 978)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 983)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1099)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1104)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1115)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1187)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1192)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1203)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1269)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1274)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1298)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1303)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1380)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1391)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1412)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1417)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1428)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
  *((int32_t *)(text + 1504)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (-4) - ((uintptr_t)(text + 1504)));
*((uint32_t *)(text + 1532)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1537)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1571)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1591)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1596)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1607)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1653)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1680)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1697)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1702)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1713)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1726)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1814)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1825)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1830)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
  *((int32_t *)(text + 1864)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (-4) - ((uintptr_t)(text + 1864)));
*((uint32_t *)(text + 1874)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1879)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1918)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1935)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1940)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1978)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 1991)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 2047)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 2052)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 2063)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 2076)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 2129)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 2142)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
}
static void op_enter_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_enter__rodata__link(text, rodata, c);
  op_enter__text__link(text, rodata, c);
}
static void op_enter_method_m__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_enter_method_m__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 108)) = (uint32_t)(((uintptr_t)_str_const_proc) + (0));
*((uint32_t *)(text + 114)) = (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
  *((int32_t *)(text + 119)) = (int32_t)(((uintptr_t)mrb_convert_type) + (-4) - ((uintptr_t)(text + 119)));
*((uint32_t *)(text + 136)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 158)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
  *((int32_t *)(text + 169)) = (int32_t)(((uintptr_t)argnum_error) + (-4) - ((uintptr_t)(text + 169)));
  *((int32_t *)(text + 177)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 177)));
  *((int32_t *)(text + 220)) = (int32_t)(((uintptr_t)mrb_gc_protect) + (-4) - ((uintptr_t)(text + 220)));
*((uint32_t *)(text + 237)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 293)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 313)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 326)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 355)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
*((uint32_t *)(text + 368)) = (uint32_t)(((uintptr_t)GETARG_Ax(c)) + (0));
}
static void op_enter_method_m_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_enter_method_m__rodata__link(text, rodata, c);
  op_enter_method_m__text__link(text, rodata, c);
}
static void op_karg__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_karg__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_karg_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_karg__rodata__link(text, rodata, c);
  op_karg__text__link(text, rodata, c);
}
static void op_kdict__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_kdict__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_kdict_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_kdict__rodata__link(text, rodata, c);
  op_kdict__text__link(text, rodata, c);
}
static void op_return__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_return__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 55)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 168)) = (int32_t)(((uintptr_t)ecall) + (-4) - ((uintptr_t)(text + 168)));
  *((int32_t *)(text + 189)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 189)));
  *((int32_t *)(text + 292)) = (int32_t)(((uintptr_t)localjump_error) + (-4) - ((uintptr_t)(text + 292)));
  *((int32_t *)(text + 301)) = (int32_t)(((uintptr_t)_mrb_str_const_fiber_error) + (-4) - ((uintptr_t)(text + 301)));
  *((int32_t *)(text + 309)) = (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 309)));
*((uint32_t *)(text + 317)) = (uint32_t)(((uintptr_t)_str_const_double_resume) + (0));
  *((int32_t *)(text + 330)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 330)));
  *((int32_t *)(text + 344)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 344)));
  *((int32_t *)(text + 373)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 373)));
  *((int32_t *)(text + 422)) = (int32_t)(((uintptr_t)longjmp) + (-4) - ((uintptr_t)(text + 422)));
}
static void op_return_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_return__rodata__link(text, rodata, c);
  op_return__text__link(text, rodata, c);
}
static void op_break__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_break__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 41)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 54)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 152)) = (int32_t)(((uintptr_t)ecall) + (-4) - ((uintptr_t)(text + 152)));
  *((int32_t *)(text + 173)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 173)));
  *((int32_t *)(text + 272)) = (int32_t)(((uintptr_t)localjump_error) + (-4) - ((uintptr_t)(text + 272)));
  *((int32_t *)(text + 281)) = (int32_t)(((uintptr_t)_mrb_str_const_fiber_error) + (-4) - ((uintptr_t)(text + 281)));
  *((int32_t *)(text + 289)) = (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 289)));
*((uint32_t *)(text + 297)) = (uint32_t)(((uintptr_t)_str_const_double_resume) + (0));
  *((int32_t *)(text + 310)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 310)));
  *((int32_t *)(text + 324)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 324)));
  *((int32_t *)(text + 353)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 353)));
  *((int32_t *)(text + 395)) = (int32_t)(((uintptr_t)longjmp) + (-4) - ((uintptr_t)(text + 395)));
}
static void op_break_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_break__rodata__link(text, rodata, c);
  op_break__text__link(text, rodata, c);
}
static void op_tailcall__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (105));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (133));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1190));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1202));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1214));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (133));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (122));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1226));
}
static void op_tailcall__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 40)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 49)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((int32_t *)(text + 101)) = (int32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 170)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 170)));
*((uint32_t *)(text + 178)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 205)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 218)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 218)));
  *((int32_t *)(text + 237)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 237)));
*((uint32_t *)(text + 249)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 259)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 279)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 279)));
*((uint32_t *)(text + 284)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 294)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 316)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 341)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 351)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 364)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 405)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 415)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 428)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 469)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 483)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 536)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 558)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 582)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 721)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 721)));
*((uint32_t *)(text + 757)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 856)) = (int32_t)(((uintptr_t)ecall) + (-4) - ((uintptr_t)(text + 856)));
  *((int32_t *)(text + 877)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 877)));
  *((int32_t *)(text + 1035)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1035)));
  *((int32_t *)(text + 1074)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1074)));
  *((int32_t *)(text + 1086)) = (int32_t)(((uintptr_t)localjump_error) + (-4) - ((uintptr_t)(text + 1086)));
  *((int32_t *)(text + 1095)) = (int32_t)(((uintptr_t)_mrb_str_const_fiber_error) + (-4) - ((uintptr_t)(text + 1095)));
  *((int32_t *)(text + 1103)) = (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 1103)));
*((uint32_t *)(text + 1111)) = (uint32_t)(((uintptr_t)_str_const_double_resume) + (0));
  *((int32_t *)(text + 1124)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 1124)));
  *((int32_t *)(text + 1138)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 1138)));
  *((int32_t *)(text + 1167)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 1167)));
  *((int32_t *)(text + 1277)) = (int32_t)(((uintptr_t)longjmp) + (-4) - ((uintptr_t)(text + 1277)));
}
static void op_tailcall_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_tailcall__rodata__link(text, rodata, c);
  op_tailcall__text__link(text, rodata, c);
}
static void op_blkpush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_blkpush__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 43)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 109)) = (int32_t)(((uintptr_t)localjump_error) + (-4) - ((uintptr_t)(text + 109)));
  *((int32_t *)(text + 117)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 117)));
*((uint32_t *)(text + 138)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 143)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 154)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
*((uint32_t *)(text + 178)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_blkpush_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_blkpush__rodata__link(text, rodata, c);
  op_blkpush__text__link(text, rodata, c);
}
static void op_add__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_add__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 19)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 67)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 140)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 192)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 216)) = (int32_t)(((uintptr_t)mrb_str_plus) + (-4) - ((uintptr_t)(text + 216)));
*((uint32_t *)(text + 238)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 282)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 307)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 336)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 372)) = (int32_t)(((uintptr_t)op_send) + (-4) - ((uintptr_t)(text + 372)));
*((uint32_t *)(text + 379)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_add_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_add__rodata__link(text, rodata, c);
  op_add__text__link(text, rodata, c);
}
static void op_addi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (262));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (315));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1163));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1175));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1187));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (315));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (280));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1199));
}
static void op_addi__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 49)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 57)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 99)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 110)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 127)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 140)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 165)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 181)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 198)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((int32_t *)(text + 258)) = (int32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 287)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 348)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 348)));
  *((int32_t *)(text + 372)) = (int32_t)(((uintptr_t)mrb_p) + (-4) - ((uintptr_t)(text + 372)));
*((uint32_t *)(text + 394)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 404)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 404)));
  *((int32_t *)(text + 423)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 423)));
*((uint32_t *)(text + 435)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 476)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 512)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 548)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 588)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 620)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 659)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 659)));
*((uint32_t *)(text + 703)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 914)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 914)));
  *((int32_t *)(text + 933)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 933)));
  *((int32_t *)(text + 1032)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 1032)));
  *((int32_t *)(text + 1115)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1115)));
  *((int32_t *)(text + 1154)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1154)));
}
static void op_addi_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_addi__rodata__link(text, rodata, c);
  op_addi__text__link(text, rodata, c);
}
static void op_sub__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_sub__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 9)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 57)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 118)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 169)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 215)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 239)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 268)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 302)) = (int32_t)(((uintptr_t)op_send) + (-4) - ((uintptr_t)(text + 302)));
*((uint32_t *)(text + 309)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_sub_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_sub__rodata__link(text, rodata, c);
  op_sub__text__link(text, rodata, c);
}
static void op_subi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (268));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (321));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1169));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1181));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1193));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (321));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (286));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1205));
}
static void op_subi__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 49)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 62)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 103)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 114)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 133)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 146)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 171)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 187)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 204)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((int32_t *)(text + 264)) = (int32_t)(((uintptr_t)rodata) + (0));
*((uint32_t *)(text + 293)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 354)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 354)));
  *((int32_t *)(text + 378)) = (int32_t)(((uintptr_t)mrb_p) + (-4) - ((uintptr_t)(text + 378)));
*((uint32_t *)(text + 400)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 410)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 410)));
  *((int32_t *)(text + 429)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 429)));
*((uint32_t *)(text + 441)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 482)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 518)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 554)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 594)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 626)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 665)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 665)));
*((uint32_t *)(text + 709)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 920)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 920)));
  *((int32_t *)(text + 939)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 939)));
  *((int32_t *)(text + 1038)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 1038)));
  *((int32_t *)(text + 1121)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1121)));
  *((int32_t *)(text + 1160)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1160)));
}
static void op_subi_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_subi__rodata__link(text, rodata, c);
  op_subi__text__link(text, rodata, c);
}
static void op_mul__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_mul__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 62)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 126)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 145)) = (int32_t)(((uintptr_t)mrb_fixnum_mul) + (-4) - ((uintptr_t)(text + 145)));
*((uint32_t *)(text + 199)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 224)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 265)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 294)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 316)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 349)) = (int32_t)(((uintptr_t)op_send) + (-4) - ((uintptr_t)(text + 349)));
*((uint32_t *)(text + 356)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 384)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_mul_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_mul__rodata__link(text, rodata, c);
  op_mul__text__link(text, rodata, c);
}
static void op_div__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_div__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 58)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 118)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 155)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 196)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 219)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 256)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 284)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 301)) = (int32_t)(((uintptr_t)__isnan) + (-4) - ((uintptr_t)(text + 301)));
*((uint32_t *)(text + 310)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 354)) = (int32_t)(((uintptr_t)op_send) + (-4) - ((uintptr_t)(text + 354)));
}
static void op_div_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_div__rodata__link(text, rodata, c);
  op_div__text__link(text, rodata, c);
}
static void op_eq__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (406));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (435));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1394));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1406));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1418));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (435));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (424));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1430));
}
static void op_eq__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 38)) = (int32_t)(((uintptr_t)mrb_obj_eq) + (-4) - ((uintptr_t)(text + 38)));
*((uint32_t *)(text + 51)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 98)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 151)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 184)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 212)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 234)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 268)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 307)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 334)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 346)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((int32_t *)(text + 402)) = (int32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 468)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 468)));
*((uint32_t *)(text + 477)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 498)) = (int32_t)(((uintptr_t)mrb_p) + (-4) - ((uintptr_t)(text + 498)));
*((uint32_t *)(text + 520)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 530)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 530)));
  *((int32_t *)(text + 549)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 549)));
*((uint32_t *)(text + 557)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 575)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 592)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 592)));
*((uint32_t *)(text + 598)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 612)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 634)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 659)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 669)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 682)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 725)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 735)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 748)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 789)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 804)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 832)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 864)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 903)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 903)));
*((uint32_t *)(text + 947)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 1162)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 1162)));
  *((int32_t *)(text + 1181)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 1181)));
  *((int32_t *)(text + 1281)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 1281)));
  *((int32_t *)(text + 1346)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1346)));
  *((int32_t *)(text + 1385)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1385)));
}
static void op_eq_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_eq__rodata__link(text, rodata, c);
  op_eq__text__link(text, rodata, c);
}
static void op_lt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (395));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (424));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1375));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1387));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1399));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (424));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (413));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1411));
}
static void op_lt__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 67)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 120)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 152)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 185)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 225)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 259)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 279)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 319)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 339)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((int32_t *)(text + 391)) = (int32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 457)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 457)));
*((uint32_t *)(text + 466)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 487)) = (int32_t)(((uintptr_t)mrb_p) + (-4) - ((uintptr_t)(text + 487)));
*((uint32_t *)(text + 509)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 519)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 519)));
  *((int32_t *)(text + 538)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 538)));
*((uint32_t *)(text + 546)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 564)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 581)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 581)));
*((uint32_t *)(text + 587)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 601)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 623)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 648)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 658)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 671)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 709)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 719)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 732)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 773)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 788)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 816)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 848)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 887)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 887)));
*((uint32_t *)(text + 931)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 1145)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 1145)));
  *((int32_t *)(text + 1164)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 1164)));
  *((int32_t *)(text + 1263)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 1263)));
  *((int32_t *)(text + 1327)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1327)));
  *((int32_t *)(text + 1366)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1366)));
}
static void op_lt_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_lt__rodata__link(text, rodata, c);
  op_lt__text__link(text, rodata, c);
}
static void op_le__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (395));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (424));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1375));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1387));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1399));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (424));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (413));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1411));
}
static void op_le__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 67)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 120)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 152)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 185)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 225)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 259)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 279)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 319)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 339)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((int32_t *)(text + 391)) = (int32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 457)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 457)));
*((uint32_t *)(text + 466)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 487)) = (int32_t)(((uintptr_t)mrb_p) + (-4) - ((uintptr_t)(text + 487)));
*((uint32_t *)(text + 509)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 519)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 519)));
  *((int32_t *)(text + 538)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 538)));
*((uint32_t *)(text + 546)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 564)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 581)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 581)));
*((uint32_t *)(text + 587)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 601)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 623)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 648)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 658)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 671)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 709)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 719)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 732)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 773)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 788)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 816)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 848)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 887)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 887)));
*((uint32_t *)(text + 931)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 1145)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 1145)));
  *((int32_t *)(text + 1164)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 1164)));
  *((int32_t *)(text + 1263)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 1263)));
  *((int32_t *)(text + 1327)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1327)));
  *((int32_t *)(text + 1366)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1366)));
}
static void op_le_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_le__rodata__link(text, rodata, c);
  op_le__text__link(text, rodata, c);
}
static void op_gt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (384));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (413));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1359));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1371));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1383));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (413));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (402));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1395));
}
static void op_gt__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 67)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 120)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 152)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 192)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 215)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 248)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 268)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 308)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 328)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((int32_t *)(text + 380)) = (int32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 446)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 446)));
*((uint32_t *)(text + 455)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 476)) = (int32_t)(((uintptr_t)mrb_p) + (-4) - ((uintptr_t)(text + 476)));
*((uint32_t *)(text + 498)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 508)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 508)));
  *((int32_t *)(text + 527)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 527)));
*((uint32_t *)(text + 535)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 553)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 570)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 570)));
*((uint32_t *)(text + 576)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 590)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 612)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 637)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 647)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 660)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 693)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 703)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 716)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 757)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 772)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 800)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 832)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 871)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 871)));
*((uint32_t *)(text + 915)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 1129)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 1129)));
  *((int32_t *)(text + 1148)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 1148)));
  *((int32_t *)(text + 1247)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 1247)));
  *((int32_t *)(text + 1311)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1311)));
  *((int32_t *)(text + 1350)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1350)));
}
static void op_gt_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_gt__rodata__link(text, rodata, c);
  op_gt__text__link(text, rodata, c);
}
static void op_ge__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint64_t *)(rodata + 0)) = (uint64_t)(((uintptr_t)text) + (384));
*((uint64_t *)(rodata + 8)) = (uint64_t)(((uintptr_t)text) + (413));
*((uint64_t *)(rodata + 16)) = (uint64_t)(((uintptr_t)text) + (1359));
*((uint64_t *)(rodata + 24)) = (uint64_t)(((uintptr_t)text) + (1371));
*((uint64_t *)(rodata + 32)) = (uint64_t)(((uintptr_t)text) + (1383));
*((uint64_t *)(rodata + 40)) = (uint64_t)(((uintptr_t)text) + (413));
*((uint64_t *)(rodata + 48)) = (uint64_t)(((uintptr_t)text) + (402));
*((uint64_t *)(rodata + 56)) = (uint64_t)(((uintptr_t)text) + (1395));
}
static void op_ge__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 18)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 67)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 120)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 152)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 192)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 215)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 248)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 268)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 308)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 328)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((int32_t *)(text + 380)) = (int32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 446)) = (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 446)));
*((uint32_t *)(text + 455)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 476)) = (int32_t)(((uintptr_t)mrb_p) + (-4) - ((uintptr_t)(text + 476)));
*((uint32_t *)(text + 498)) = (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 508)) = (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 508)));
  *((int32_t *)(text + 527)) = (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 527)));
*((uint32_t *)(text + 535)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 553)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 570)) = (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 570)));
*((uint32_t *)(text + 576)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 590)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 612)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 637)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 647)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 660)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 693)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 703)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 716)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 757)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 772)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 800)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 832)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 871)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 871)));
*((uint32_t *)(text + 915)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 1129)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 1129)));
  *((int32_t *)(text + 1148)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 1148)));
  *((int32_t *)(text + 1247)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 1247)));
  *((int32_t *)(text + 1311)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 1311)));
  *((int32_t *)(text + 1350)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 1350)));
}
static void op_ge_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_ge__rodata__link(text, rodata, c);
  op_ge__text__link(text, rodata, c);
}
static void op_array__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_array__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 32)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 37)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (-4) - ((uintptr_t)(text + 37)));
}
static void op_array_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_array__rodata__link(text, rodata, c);
  op_array__text__link(text, rodata, c);
}
static void op_arycat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_arycat__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 29)) = (int32_t)(((uintptr_t)mrb_ary_splat) + (-4) - ((uintptr_t)(text + 29)));
*((uint32_t *)(text + 34)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 49)) = (int32_t)(((uintptr_t)mrb_ary_concat) + (-4) - ((uintptr_t)(text + 49)));
}
static void op_arycat_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_arycat__rodata__link(text, rodata, c);
  op_arycat__text__link(text, rodata, c);
}
static void op_arypush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_arypush__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 31)) = (int32_t)(((uintptr_t)mrb_ary_push) + (-4) - ((uintptr_t)(text + 31)));
}
static void op_arypush_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_arypush__rodata__link(text, rodata, c);
  op_arypush__text__link(text, rodata, c);
}
static void op_aref__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_aref__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 49)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 58)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 63)) = (int32_t)(((uintptr_t)mrb_ary_ref) + (-4) - ((uintptr_t)(text + 63)));
*((uint32_t *)(text + 74)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 83)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 94)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_aref_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_aref__rodata__link(text, rodata, c);
  op_aref__text__link(text, rodata, c);
}
static void op_aset__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_aset__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 31)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 36)) = (int32_t)(((uintptr_t)mrb_ary_set) + (-4) - ((uintptr_t)(text + 36)));
}
static void op_aset_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_aset__rodata__link(text, rodata, c);
  op_aset__text__link(text, rodata, c);
}
static void op_apost__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_apost__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 16)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 85)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 90)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 109)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 114)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 136)) = (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (-4) - ((uintptr_t)(text + 136)));
*((uint32_t *)(text + 141)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 214)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 228)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (-4) - ((uintptr_t)(text + 228)));
*((uint32_t *)(text + 237)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 298)) = (int32_t)(((uintptr_t)mrb_ary_new_capa) + (-4) - ((uintptr_t)(text + 298)));
*((uint32_t *)(text + 303)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 315)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 327)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 342)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 401)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 410)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 420)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_apost_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_apost__rodata__link(text, rodata, c);
  op_apost__text__link(text, rodata, c);
}
static void op_string__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_string__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 27)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 36)) = (int32_t)(((uintptr_t)mrb_str_dup) + (-4) - ((uintptr_t)(text + 36)));
}
static void op_string_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_string__rodata__link(text, rodata, c);
  op_string__text__link(text, rodata, c);
}
static void op_strcat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_strcat__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 31)) = (int32_t)(((uintptr_t)mrb_str_concat) + (-4) - ((uintptr_t)(text + 31)));
}
static void op_strcat_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_strcat__rodata__link(text, rodata, c);
  op_strcat__text__link(text, rodata, c);
}
static void op_hash__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_hash__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 22)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 27)) = (int32_t)(((uintptr_t)mrb_hash_new_capa) + (-4) - ((uintptr_t)(text + 27)));
*((uint32_t *)(text + 35)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 60)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
*((uint32_t *)(text + 65)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 100)) = (int32_t)(((uintptr_t)mrb_hash_set) + (-4) - ((uintptr_t)(text + 100)));
*((uint32_t *)(text + 122)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_hash_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_hash__rodata__link(text, rodata, c);
  op_hash__text__link(text, rodata, c);
}
static void op_lambda__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_lambda__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_b(c)) + (0));
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_c(c)) + (0));
  *((int32_t *)(text + 20)) = (int32_t)(((uintptr_t)_op_lambda) + (-4) - ((uintptr_t)(text + 20)));
}
static void op_lambda_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_lambda__rodata__link(text, rodata, c);
  op_lambda__text__link(text, rodata, c);
}
static void op_range__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_range__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 47)) = (int32_t)(((uintptr_t)mrb_range_new) + (-4) - ((uintptr_t)(text + 47)));
}
static void op_range_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_range__rodata__link(text, rodata, c);
  op_range__text__link(text, rodata, c);
}
static void op_oclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_oclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 54)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_oclass_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_oclass__rodata__link(text, rodata, c);
  op_oclass__text__link(text, rodata, c);
}
static void op_class__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_class__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 130)) = (int32_t)(((uintptr_t)mrb_vm_define_class) + (-4) - ((uintptr_t)(text + 130)));
*((uint32_t *)(text + 180)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_class_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_class__rodata__link(text, rodata, c);
  op_class__text__link(text, rodata, c);
}
static void op_module__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_module__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 13)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 21)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 118)) = (int32_t)(((uintptr_t)mrb_vm_define_module) + (-4) - ((uintptr_t)(text + 118)));
*((uint32_t *)(text + 168)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
}
static void op_module_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_module__rodata__link(text, rodata, c);
  op_module__text__link(text, rodata, c);
}
static void op_exec__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_exec__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 11)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 31)) = (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 31)));
*((uint32_t *)(text + 141)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 150)) = (int32_t)(((uintptr_t)mrb_proc_new) + (-4) - ((uintptr_t)(text + 150)));
  *((int32_t *)(text + 217)) = (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 217)));
  *((int32_t *)(text + 236)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 236)));
  *((int32_t *)(text + 281)) = (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 281)));
  *((int32_t *)(text + 331)) = (int32_t)(((uintptr_t)mrb_proc_call_jit) + (-4) - ((uintptr_t)(text + 331)));
  *((int32_t *)(text + 362)) = (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 362)));
}
static void op_exec_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_exec__rodata__link(text, rodata, c);
  op_exec__text__link(text, rodata, c);
}
static void op_method__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_method__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 45)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 62)) = (int32_t)(((uintptr_t)mrb_define_method_vm) + (-4) - ((uintptr_t)(text + 62)));
}
static void op_method_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_method__rodata__link(text, rodata, c);
  op_method__text__link(text, rodata, c);
}
static void op_sclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_sclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 23)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
  *((int32_t *)(text + 32)) = (int32_t)(((uintptr_t)mrb_singleton_class) + (-4) - ((uintptr_t)(text + 32)));
}
static void op_sclass_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_sclass__rodata__link(text, rodata, c);
  op_sclass__text__link(text, rodata, c);
}
static void op_tclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_tclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 75)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
  *((int32_t *)(text + 88)) = (int32_t)(((uintptr_t)_mrb_str_const_type_error) + (-4) - ((uintptr_t)(text + 88)));
  *((int32_t *)(text + 96)) = (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 96)));
*((uint32_t *)(text + 104)) = (uint32_t)(((uintptr_t)_str_const_no_target_class) + (0));
  *((int32_t *)(text + 117)) = (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 117)));
  *((int32_t *)(text + 131)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 131)));
  *((int32_t *)(text + 164)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 164)));
}
static void op_tclass_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_tclass__rodata__link(text, rodata, c);
  op_tclass__text__link(text, rodata, c);
}
static void op_debug__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_debug__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 5)) = (uint32_t)(((uintptr_t)_str_const_op_debug_format) + (0));
*((uint32_t *)(text + 10)) = (uint32_t)(((uintptr_t)GETARG_A(c)) + (0));
*((uint32_t *)(text + 15)) = (uint32_t)(((uintptr_t)GETARG_B(c)) + (0));
*((uint32_t *)(text + 20)) = (uint32_t)(((uintptr_t)GETARG_C(c)) + (0));
  *((int32_t *)(text + 27)) = (int32_t)(((uintptr_t)printf) + (-4) - ((uintptr_t)(text + 27)));
}
static void op_debug_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_debug__rodata__link(text, rodata, c);
  op_debug__text__link(text, rodata, c);
}
static void op_stop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_stop__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  *((int32_t *)(text + 5)) = (int32_t)(((uintptr_t)_op_stop) + (-4) - ((uintptr_t)(text + 5)));
}
static void op_stop_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_stop__rodata__link(text, rodata, c);
  op_stop__text__link(text, rodata, c);
}
static void op_err__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
}
static void op_err__text__link(uint8_t *text, uint8_t *rodata, mrb_code c) {
*((uint32_t *)(text + 17)) = (uint32_t)(((uintptr_t)GETARG_Bx(c)) + (0));
  *((int32_t *)(text + 29)) = (int32_t)(((uintptr_t)mrb_str_dup) + (-4) - ((uintptr_t)(text + 29)));
  *((int32_t *)(text + 39)) = (int32_t)(((uintptr_t)_mrb_str_const_localjump_error) + (-4) - ((uintptr_t)(text + 39)));
  *((int32_t *)(text + 47)) = (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 47)));
  *((int32_t *)(text + 61)) = (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 61)));
  *((int32_t *)(text + 94)) = (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 94)));
}
static void op_err_link(uint8_t *text, uint8_t *rodata, mrb_code c) {
  op_err__rodata__link(text, rodata, c);
  op_err__text__link(text, rodata, c);
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


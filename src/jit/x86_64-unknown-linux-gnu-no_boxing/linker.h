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
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 17)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
}
static void op_move_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_move__rodata__link(text, rodata, pc);
  op_move__text__link(text, rodata, pc);
}
static void op_loadl__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadl__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 19)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (20) - ((uintptr_t)(text + 19)));
*((uint32_t *)(text + 24)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
}
static void op_loadl_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadl__rodata__link(text, rodata, pc);
  op_loadl__text__link(text, rodata, pc);
}
static void op_loadi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 27)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 27)));
*((uint32_t *)(text + 32)) += (uint32_t)(((uintptr_t)GETARG_sBx(*pc)) + (0));
}
static void op_loadi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadi__rodata__link(text, rodata, pc);
  op_loadi__text__link(text, rodata, pc);
}
static void op_loadsym__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadsym__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 27)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 27)));
*((uint32_t *)(text + 32)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 42)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 42)));
}
static void op_loadsym_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadsym__rodata__link(text, rodata, pc);
  op_loadsym__text__link(text, rodata, pc);
}
static void op_loadnil__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadnil__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 27)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 27)));
}
static void op_loadnil_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadnil__rodata__link(text, rodata, pc);
  op_loadnil__text__link(text, rodata, pc);
}
static void op_loadself__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadself__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_loadself_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadself__rodata__link(text, rodata, pc);
  op_loadself__text__link(text, rodata, pc);
}
static void op_loadt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 27)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 27)));
}
static void op_loadt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadt__rodata__link(text, rodata, pc);
  op_loadt__text__link(text, rodata, pc);
}
static void op_loadf__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_loadf__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 27)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 27)));
}
static void op_loadf_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_loadf__rodata__link(text, rodata, pc);
  op_loadf__text__link(text, rodata, pc);
}
static void op_getglobal__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getglobal__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 6)));
*((uint32_t *)(text + 11)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 22)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 22)));
  *((int32_t *)(text + 29)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 29)));
*((uint32_t *)(text + 34)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 42)) += (int32_t)(((uintptr_t)mrb_gv_get) + (-4) - ((uintptr_t)(text + 42)));
}
static void op_getglobal_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getglobal__rodata__link(text, rodata, pc);
  op_getglobal__text__link(text, rodata, pc);
}
static void op_setglobal__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setglobal__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 10)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 10)));
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 25)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 25)));
*((uint32_t *)(text + 30)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 47)) += (int32_t)(((uintptr_t)mrb_gv_set) + (-4) - ((uintptr_t)(text + 47)));
}
static void op_setglobal_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setglobal__rodata__link(text, rodata, pc);
  op_setglobal__text__link(text, rodata, pc);
}
static void op_getspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 6)));
*((uint32_t *)(text + 11)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 22)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 22)));
*((uint32_t *)(text + 27)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 32)) += (int32_t)(((uintptr_t)mrb_vm_special_get) + (-4) - ((uintptr_t)(text + 32)));
}
static void op_getspecial_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getspecial__rodata__link(text, rodata, pc);
  op_getspecial__text__link(text, rodata, pc);
}
static void op_setspecial__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setspecial__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 10)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 10)));
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 32)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 37)) += (int32_t)(((uintptr_t)mrb_vm_special_set) + (-4) - ((uintptr_t)(text + 37)));
}
static void op_setspecial_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setspecial__rodata__link(text, rodata, pc);
  op_setspecial__text__link(text, rodata, pc);
}
static void op_getiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 6)));
*((uint32_t *)(text + 11)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 22)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 22)));
  *((int32_t *)(text + 29)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 29)));
*((uint32_t *)(text + 34)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 42)) += (int32_t)(((uintptr_t)mrb_vm_iv_get) + (-4) - ((uintptr_t)(text + 42)));
}
static void op_getiv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getiv__rodata__link(text, rodata, pc);
  op_getiv__text__link(text, rodata, pc);
}
static void op_setiv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setiv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 10)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 10)));
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 25)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 25)));
*((uint32_t *)(text + 30)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 47)) += (int32_t)(((uintptr_t)mrb_vm_iv_set) + (-4) - ((uintptr_t)(text + 47)));
}
static void op_setiv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setiv__rodata__link(text, rodata, pc);
  op_setiv__text__link(text, rodata, pc);
}
static void op_getcv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getcv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 6)));
*((int32_t *)(text + 22)) += (int32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 29)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 29)));
*((uint32_t *)(text + 34)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 45)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 45)));
  *((int32_t *)(text + 52)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 52)));
*((uint32_t *)(text + 57)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 65)) += (int32_t)(((uintptr_t)mrb_vm_cv_get) + (-4) - ((uintptr_t)(text + 65)));
  *((int32_t *)(text + 81)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 81)));
}
static void op_getcv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getcv__rodata__link(text, rodata, pc);
  op_getcv__text__link(text, rodata, pc);
}
static void op_setcv__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setcv__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 10)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 10)));
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 25)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 25)));
*((uint32_t *)(text + 30)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 47)) += (int32_t)(((uintptr_t)mrb_vm_cv_set) + (-4) - ((uintptr_t)(text + 47)));
}
static void op_setcv_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setcv__rodata__link(text, rodata, pc);
  op_setcv__text__link(text, rodata, pc);
}
static void op_getconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
*((int32_t *)(text + 19)) += (int32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 26)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 26)));
  *((int32_t *)(text + 33)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 33)));
*((uint32_t *)(text + 38)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 46)) += (int32_t)(((uintptr_t)mrb_vm_const_get) + (-4) - ((uintptr_t)(text + 46)));
  *((int32_t *)(text + 53)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 53)));
  *((int32_t *)(text + 76)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 76)));
  *((int32_t *)(text + 91)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 91)));
*((uint32_t *)(text + 96)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_getconst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getconst__rodata__link(text, rodata, pc);
  op_getconst__text__link(text, rodata, pc);
}
static void op_setconst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setconst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 10)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 10)));
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 25)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 25)));
*((uint32_t *)(text + 30)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 47)) += (int32_t)(((uintptr_t)mrb_vm_const_set) + (-4) - ((uintptr_t)(text + 47)));
}
static void op_setconst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setconst__rodata__link(text, rodata, pc);
  op_setconst__text__link(text, rodata, pc);
}
static void op_getmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 4)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 4)));
*((int32_t *)(text + 20)) += (int32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 27)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 27)));
  *((int32_t *)(text + 34)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 34)));
*((uint32_t *)(text + 39)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 53)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 53)));
*((uint32_t *)(text + 58)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 74)) += (int32_t)(((uintptr_t)mrb_const_get) + (-4) - ((uintptr_t)(text + 74)));
  *((int32_t *)(text + 81)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 81)));
  *((int32_t *)(text + 104)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 104)));
  *((int32_t *)(text + 119)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 119)));
}
static void op_getmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getmcnst__rodata__link(text, rodata, pc);
  op_getmcnst__text__link(text, rodata, pc);
}
static void op_setmcnst__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setmcnst__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 10)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 10)));
*((uint32_t *)(text + 16)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 34)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 34)));
*((uint32_t *)(text + 39)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 72)) += (int32_t)(((uintptr_t)mrb_const_set) + (-4) - ((uintptr_t)(text + 72)));
}
static void op_setmcnst_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_setmcnst__rodata__link(text, rodata, pc);
  op_setmcnst__text__link(text, rodata, pc);
}
static void op_getupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_getupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 1)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 12)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 12)));
  *((int32_t *)(text + 19)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 19)));
*((uint32_t *)(text + 46)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 108)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
}
static void op_getupvar_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_getupvar__rodata__link(text, rodata, pc);
  op_getupvar__text__link(text, rodata, pc);
}
static void op_setupvar__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_setupvar__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 30)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 73)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 73)));
*((uint32_t *)(text + 78)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 91)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 123)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 123)));
  *((int32_t *)(text + 128)) += (int32_t)(((uintptr_t)mrb_write_barrier) + (-4) - ((uintptr_t)(text + 128)));
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
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_jmpif_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_jmpif__rodata__link(text, rodata, pc);
  op_jmpif__text__link(text, rodata, pc);
}
static void op_jmpnot__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_jmpnot__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_jmpnot_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_jmpnot__rodata__link(text, rodata, pc);
  op_jmpnot__text__link(text, rodata, pc);
}
static void op_onerr__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_onerr__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 44)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 44)));
  *((int32_t *)(text + 65)) += (int32_t)(((uintptr_t)mrb_realloc) + (-4) - ((uintptr_t)(text + 65)));
  *((int32_t *)(text + 72)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 72)));
  *((int32_t *)(text + 87)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 87)));
  *((int32_t *)(text + 114)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 114)));
*((uint32_t *)(text + 127)) += (uint32_t)(((uintptr_t)GETARG_sBx(*pc)) + (0));
*((int32_t *)(text + 135)) += (int32_t)(((uintptr_t)pc) + (0));
}
static void op_onerr_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_onerr__rodata__link(text, rodata, pc);
  op_onerr__text__link(text, rodata, pc);
}
static void op_rescue__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_rescue__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 40)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 40)));
  *((int32_t *)(text + 51)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 51)));
  *((int32_t *)(text + 62)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 62)));
}
static void op_rescue_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_rescue__rodata__link(text, rodata, pc);
  op_rescue__text__link(text, rodata, pc);
}
static void op_poperr__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_poperr__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 1)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 19)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 19)));
}
static void op_poperr_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_poperr__rodata__link(text, rodata, pc);
  op_poperr__text__link(text, rodata, pc);
}
static void op_raise__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_raise__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 37)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 37)));
*((uint32_t *)(text + 46)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 51)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 56)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 56)));
  *((int32_t *)(text + 63)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 63)));
  *((int32_t *)(text + 70)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 70)));
  *((int32_t *)(text + 77)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 77)));
*((uint32_t *)(text + 82)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 87)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 87)));
}
static void op_raise_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_raise__rodata__link(text, rodata, pc);
  op_raise__text__link(text, rodata, pc);
}
static void op_epush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_epush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 4)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 4)));
  *((int32_t *)(text + 11)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 11)));
*((uint32_t *)(text + 20)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 29)) += (int32_t)(((uintptr_t)mrb_closure_new) + (-4) - ((uintptr_t)(text + 29)));
  *((int32_t *)(text + 39)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 39)));
  *((int32_t *)(text + 80)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 80)));
  *((int32_t *)(text + 101)) += (int32_t)(((uintptr_t)mrb_realloc) + (-4) - ((uintptr_t)(text + 101)));
  *((int32_t *)(text + 108)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 108)));
  *((int32_t *)(text + 123)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 123)));
  *((int32_t *)(text + 150)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 150)));
  *((int32_t *)(text + 168)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 168)));
  *((int32_t *)(text + 175)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 175)));
}
static void op_epush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_epush__rodata__link(text, rodata, pc);
  op_epush__text__link(text, rodata, pc);
}
static void op_epop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_epop__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 7)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 18)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 18)));
*((uint32_t *)(text + 38)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 57)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 57)));
  *((int32_t *)(text + 66)) += (int32_t)(((uintptr_t)ecall) + (-4) - ((uintptr_t)(text + 66)));
  *((int32_t *)(text + 72)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 72)));
  *((int32_t *)(text + 79)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 79)));
}
static void op_epop_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_epop__rodata__link(text, rodata, pc);
  op_epop__text__link(text, rodata, pc);
}
static void op_send__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_send__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 25)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 30)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 36)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 42)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 47)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 47)));
  *((int32_t *)(text + 54)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 54)));
  *((int32_t *)(text + 61)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 61)));
  *((int32_t *)(text + 68)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 68)));
*((uint32_t *)(text + 73)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 78)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 78)));
}
static void op_send_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_send__rodata__link(text, rodata, pc);
  op_send__text__link(text, rodata, pc);
}
static void op_sendb__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sendb__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 25)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 30)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 36)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 42)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 47)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 47)));
  *((int32_t *)(text + 54)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 54)));
  *((int32_t *)(text + 61)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 61)));
  *((int32_t *)(text + 68)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 68)));
*((uint32_t *)(text + 73)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 78)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 78)));
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
  *((int32_t *)(text + 19)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 19)));
  *((int32_t *)(text + 85)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 85)));
  *((int32_t *)(text + 110)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (28) - ((uintptr_t)(text + 110)));
  *((int32_t *)(text + 121)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 121)));
  *((int32_t *)(text + 137)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 137)));
*((uint32_t *)(text + 164)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 169)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 176)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 181)) += (int32_t)(((uintptr_t)_op_return) + (-4) - ((uintptr_t)(text + 181)));
  *((int32_t *)(text + 193)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 193)));
  *((int32_t *)(text + 211)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 211)));
  *((int32_t *)(text + 217)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 217)));
  *((int32_t *)(text + 222)) += (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 222)));
  *((int32_t *)(text + 229)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 229)));
  *((int32_t *)(text + 263)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 263)));
  *((int32_t *)(text + 290)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 290)));
  *((int32_t *)(text + 297)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 297)));
  *((int32_t *)(text + 302)) += (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 302)));
  *((int32_t *)(text + 309)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 309)));
  *((int32_t *)(text + 332)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 332)));
  *((int32_t *)(text + 343)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (20) - ((uintptr_t)(text + 343)));
  *((int32_t *)(text + 354)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 354)));
  *((int32_t *)(text + 370)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (20) - ((uintptr_t)(text + 370)));
  *((int32_t *)(text + 381)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 381)));
  *((int32_t *)(text + 398)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 398)));
  *((int32_t *)(text + 405)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 405)));
*((uint32_t *)(text + 436)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 441)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 446)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 446)));
  *((int32_t *)(text + 453)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 453)));
  *((int32_t *)(text + 460)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 460)));
  *((int32_t *)(text + 467)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 467)));
*((uint32_t *)(text + 472)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 477)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 477)));
  *((int32_t *)(text + 487)) += (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 487)));
  *((int32_t *)(text + 494)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 494)));
  *((int32_t *)(text + 509)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 509)));
  *((int32_t *)(text + 538)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 538)));
  *((int32_t *)(text + 549)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 549)));
  *((int32_t *)(text + 556)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 556)));
  *((int32_t *)(text + 563)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 563)));
  *((int32_t *)(text + 570)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 570)));
*((uint32_t *)(text + 575)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 580)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 580)));
}
static void op_call_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_call__rodata__link(text, rodata, pc);
  op_call__text__link(text, rodata, pc);
}
static void op_super__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_super__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 31)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 31)));
  *((int32_t *)(text + 58)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 58)));
  *((int32_t *)(text + 106)) += (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 106)));
*((uint32_t *)(text + 115)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 131)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 131)));
*((uint32_t *)(text + 136)) += (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 146)) += (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 146)));
  *((int32_t *)(text + 155)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 155)));
  *((int32_t *)(text + 167)) += (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 167)));
*((uint32_t *)(text + 175)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 187)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 187)));
  *((int32_t *)(text + 194)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 194)));
*((uint32_t *)(text + 199)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 231)) += (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 231)));
*((uint32_t *)(text + 237)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 247)) += (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 255)) += (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 255)));
  *((int32_t *)(text + 265)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 265)));
*((uint32_t *)(text + 270)) += (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 280)) += (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 280)));
  *((int32_t *)(text + 296)) += (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 296)));
  *((int32_t *)(text + 312)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 312)));
*((uint32_t *)(text + 317)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 339)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 364)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 378)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 395)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 443)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 453)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 461)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 523)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 523)));
*((uint32_t *)(text + 528)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 556)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 556)));
*((uint32_t *)(text + 565)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 584)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 584)));
  *((int32_t *)(text + 589)) += (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 589)));
  *((int32_t *)(text + 602)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 602)));
*((int32_t *)(text + 647)) += (int32_t)(((uintptr_t)pc) + (4));
  *((int32_t *)(text + 654)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 654)));
*((uint32_t *)(text + 663)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 681)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 681)));
  *((int32_t *)(text + 737)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 737)));
  *((int32_t *)(text + 769)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 769)));
  *((int32_t *)(text + 775)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 775)));
  *((int32_t *)(text + 780)) += (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 780)));
  *((int32_t *)(text + 787)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 787)));
*((uint32_t *)(text + 803)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 808)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 813)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 813)));
  *((int32_t *)(text + 820)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 820)));
  *((int32_t *)(text + 827)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 827)));
  *((int32_t *)(text + 834)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 834)));
*((uint32_t *)(text + 844)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 862)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 862)));
  *((int32_t *)(text + 873)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (20) - ((uintptr_t)(text + 873)));
  *((int32_t *)(text + 884)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 884)));
  *((int32_t *)(text + 898)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 898)));
  *((int32_t *)(text + 905)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 905)));
  *((int32_t *)(text + 956)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 956)));
  *((int32_t *)(text + 963)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 963)));
  *((int32_t *)(text + 968)) += (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 968)));
  *((int32_t *)(text + 981)) += (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 981)));
  *((int32_t *)(text + 988)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 988)));
  *((int32_t *)(text + 1003)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 1003)));
  *((int32_t *)(text + 1010)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 1010)));
  *((int32_t *)(text + 1021)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 1021)));
*((uint32_t *)(text + 1030)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 1035)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 1035)));
}
static void op_super_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_super__rodata__link(text, rodata, pc);
  op_super__text__link(text, rodata, pc);
}
static void op_argary__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_argary__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 29)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 34)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 50)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 50)));
*((uint32_t *)(text + 71)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 120)) += (uint32_t)(((uintptr_t)_mrb_str_const_nomethod_error) + (0));
  *((int32_t *)(text + 128)) += (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 128)));
  *((int32_t *)(text + 138)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 138)));
*((uint32_t *)(text + 143)) += (uint32_t)(((uintptr_t)_str_const_super_outside_method) + (0));
  *((int32_t *)(text + 153)) += (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 153)));
  *((int32_t *)(text + 169)) += (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 169)));
*((uint32_t *)(text + 178)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 183)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 188)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 188)));
  *((int32_t *)(text + 195)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 195)));
  *((int32_t *)(text + 202)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 202)));
  *((int32_t *)(text + 209)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 209)));
*((uint32_t *)(text + 214)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 219)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 219)));
*((uint32_t *)(text + 240)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 253)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 253)));
*((uint32_t *)(text + 258)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 272)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 272)));
*((uint32_t *)(text + 277)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 282)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 304)) += (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (-4) - ((uintptr_t)(text + 304)));
*((uint32_t *)(text + 323)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 353)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 387)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 387)));
*((uint32_t *)(text + 392)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 406)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 406)));
*((uint32_t *)(text + 417)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 423)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 453)) += (int32_t)(((uintptr_t)mrb_ary_new_capa) + (-4) - ((uintptr_t)(text + 453)));
  *((int32_t *)(text + 470)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 470)));
*((uint32_t *)(text + 493)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 558)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 620)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 632)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 637)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 722)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 722)));
*((uint32_t *)(text + 727)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 741)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 746)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 757)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 805)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 805)));
  *((int32_t *)(text + 812)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 812)));
}
static void op_argary_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_argary__rodata__link(text, rodata, pc);
  op_argary__text__link(text, rodata, pc);
}
static void op_enter__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_enter__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 31)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 31)));
  *((int32_t *)(text + 50)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 50)));
*((uint32_t *)(text + 113)) += (uint32_t)(((uintptr_t)_str_const_proc) + (0));
*((uint32_t *)(text + 119)) += (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
  *((int32_t *)(text + 124)) += (int32_t)(((uintptr_t)mrb_convert_type) + (-4) - ((uintptr_t)(text + 124)));
  *((int32_t *)(text + 148)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 148)));
  *((int32_t *)(text + 167)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 167)));
  *((int32_t *)(text + 175)) += (int32_t)(((uintptr_t)mrb_gc_protect) + (-4) - ((uintptr_t)(text + 175)));
  *((int32_t *)(text + 182)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 182)));
*((uint32_t *)(text + 227)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 232)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 243)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 257)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 302)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 307)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 326)) += (int32_t)(((uintptr_t)argnum_error) + (-4) - ((uintptr_t)(text + 326)));
*((uint32_t *)(text + 331)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 336)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 341)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 341)));
  *((int32_t *)(text + 348)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 348)));
  *((int32_t *)(text + 355)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 355)));
  *((int32_t *)(text + 362)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 362)));
*((uint32_t *)(text + 367)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 372)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 372)));
*((uint32_t *)(text + 388)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 393)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 404)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 417)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 464)) += (int32_t)(((uintptr_t)mrb_gc_protect) + (-4) - ((uintptr_t)(text + 464)));
  *((int32_t *)(text + 482)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 482)));
*((uint32_t *)(text + 495)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 500)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 511)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 524)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 557)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 562)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 586)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 609)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 609)));
*((uint32_t *)(text + 614)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 619)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 630)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 643)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 698)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 698)));
  *((int32_t *)(text + 717)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 717)));
  *((int32_t *)(text + 740)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 740)));
  *((int32_t *)(text + 860)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 860)));
*((uint32_t *)(text + 865)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 870)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 881)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 894)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 942)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 942)));
*((uint32_t *)(text + 960)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 965)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1003)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1008)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1033)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1038)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1199)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 1199)));
*((uint32_t *)(text + 1204)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1209)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1220)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1302)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1307)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1318)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1393)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1398)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1422)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1427)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1498)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1509)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1530)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1535)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1546)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1583)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 1583)));
  *((int32_t *)(text + 1604)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 1604)));
  *((int32_t *)(text + 1621)) += (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (-4) - ((uintptr_t)(text + 1621)));
*((uint32_t *)(text + 1645)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1650)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1684)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1702)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 1702)));
*((uint32_t *)(text + 1707)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1712)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1723)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1778)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1808)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1825)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1830)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1841)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1854)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 1980)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 1993)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 1993)));
*((uint32_t *)(text + 1998)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2003)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 2033)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 2033)));
  *((int32_t *)(text + 2040)) += (int32_t)(((uintptr_t)mrb_ary_new_capa) + (-4) - ((uintptr_t)(text + 2040)));
*((uint32_t *)(text + 2053)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2058)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2080)) += (uint32_t)(((uintptr_t)pc) + (4));
*((uint32_t *)(text + 2091)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2108)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2113)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 2142)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 2142)));
*((uint32_t *)(text + 2157)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2170)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 2227)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 2227)));
*((uint32_t *)(text + 2232)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2237)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2248)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2261)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 2307)) += (uint32_t)(((uintptr_t)pc) + (4));
*((uint32_t *)(text + 2312)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 2327)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 2327)));
*((uint32_t *)(text + 2332)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((int32_t *)(text + 2351)) += (int32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 2358)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 2358)));
*((uint32_t *)(text + 2397)) += (uint32_t)(((uintptr_t)ctx) + (0));
}
static void op_enter_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_enter__rodata__link(text, rodata, pc);
  op_enter__text__link(text, rodata, pc);
}
static void op_enter_method_m__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_enter_method_m__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 24)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 24)));
  *((int32_t *)(text + 43)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 43)));
*((uint32_t *)(text + 115)) += (uint32_t)(((uintptr_t)_str_const_proc) + (0));
*((uint32_t *)(text + 121)) += (uint32_t)(((uintptr_t)_str_const_to_proc) + (0));
  *((int32_t *)(text + 126)) += (int32_t)(((uintptr_t)mrb_convert_type) + (-4) - ((uintptr_t)(text + 126)));
*((uint32_t *)(text + 146)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 166)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 166)));
*((uint32_t *)(text + 171)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 182)) += (int32_t)(((uintptr_t)argnum_error) + (-4) - ((uintptr_t)(text + 182)));
*((uint32_t *)(text + 187)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 192)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 197)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 197)));
  *((int32_t *)(text + 204)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 204)));
  *((int32_t *)(text + 211)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 211)));
  *((int32_t *)(text + 218)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 218)));
*((uint32_t *)(text + 223)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 228)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 228)));
  *((int32_t *)(text + 240)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 240)));
  *((int32_t *)(text + 255)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 255)));
  *((int32_t *)(text + 263)) += (int32_t)(((uintptr_t)mrb_gc_protect) + (-4) - ((uintptr_t)(text + 263)));
  *((int32_t *)(text + 270)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 270)));
*((uint32_t *)(text + 283)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 299)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 299)));
  *((int32_t *)(text + 340)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 340)));
*((uint32_t *)(text + 354)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 377)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 394)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 462)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
*((uint32_t *)(text + 475)) += (uint32_t)(((uintptr_t)GETARG_Ax(*pc)) + (0));
  *((int32_t *)(text + 535)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 535)));
*((uint32_t *)(text + 557)) += (uint32_t)(((uintptr_t)ctx) + (0));
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
*((uint32_t *)(text + 9)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 14)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 21)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 26)) += (int32_t)(((uintptr_t)_op_return) + (-4) - ((uintptr_t)(text + 26)));
  *((int32_t *)(text + 33)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 33)));
  *((int32_t *)(text + 40)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 40)));
*((uint32_t *)(text + 79)) += (uint32_t)(((uintptr_t)ctx) + (0));
}
static void op_return_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_return__rodata__link(text, rodata, pc);
  op_return__text__link(text, rodata, pc);
}
static void op_break__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_break__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 9)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 14)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 19)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 24)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 29)) += (int32_t)(((uintptr_t)_op_return) + (-4) - ((uintptr_t)(text + 29)));
  *((int32_t *)(text + 36)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 36)));
  *((int32_t *)(text + 43)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 43)));
*((uint32_t *)(text + 82)) += (uint32_t)(((uintptr_t)ctx) + (0));
}
static void op_break_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_break__rodata__link(text, rodata, pc);
  op_break__text__link(text, rodata, pc);
}
static void op_tailcall__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint64_t *)(rodata + 0)) += (uint64_t)(((uintptr_t)text) + (99));
*((uint64_t *)(rodata + 8)) += (uint64_t)(((uintptr_t)text) + (121));
*((uint64_t *)(rodata + 16)) += (uint64_t)(((uintptr_t)text) + (859));
*((uint64_t *)(rodata + 24)) += (uint64_t)(((uintptr_t)text) + (871));
*((uint64_t *)(rodata + 32)) += (uint64_t)(((uintptr_t)text) + (883));
*((uint64_t *)(rodata + 40)) += (uint64_t)(((uintptr_t)text) + (121));
*((uint64_t *)(rodata + 48)) += (uint64_t)(((uintptr_t)text) + (895));
*((uint64_t *)(rodata + 56)) += (uint64_t)(((uintptr_t)text) + (904));
}
static void op_tailcall__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 31)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 31)));
  *((int32_t *)(text + 38)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 38)));
*((uint32_t *)(text + 43)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 54)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 54)));
*((uint32_t *)(text + 59)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((int32_t *)(text + 95)) += (int32_t)(((uintptr_t)rodata) + (0));
  *((int32_t *)(text + 142)) += (int32_t)(((uintptr_t)_mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 142)));
*((uint32_t *)(text + 150)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 177)) += (uint32_t)(((uintptr_t)_str_const_method_missing) + (0));
  *((int32_t *)(text + 190)) += (int32_t)(((uintptr_t)mrb_intern_static) + (-4) - ((uintptr_t)(text + 190)));
  *((int32_t *)(text + 209)) += (int32_t)(((uintptr_t)mrb_method_search_vm) + (-4) - ((uintptr_t)(text + 209)));
  *((int32_t *)(text + 219)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 219)));
*((uint32_t *)(text + 224)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 243)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 277)) += (int32_t)(((uintptr_t)mrb_ary_unshift) + (-4) - ((uintptr_t)(text + 277)));
*((uint32_t *)(text + 282)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 301)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 323)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 348)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 362)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 379)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 427)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 437)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 445)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 507)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 507)));
*((uint32_t *)(text + 512)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 538)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 589)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 589)));
*((uint32_t *)(text + 594)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 619)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 658)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 806)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 806)));
  *((int32_t *)(text + 814)) += (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 814)));
*((uint32_t *)(text + 819)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 824)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 831)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 836)) += (int32_t)(((uintptr_t)_op_return) + (-4) - ((uintptr_t)(text + 836)));
  *((int32_t *)(text + 932)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 932)));
  *((int32_t *)(text + 943)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (20) - ((uintptr_t)(text + 943)));
  *((int32_t *)(text + 954)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 954)));
  *((int32_t *)(text + 994)) += (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 994)));
  *((int32_t *)(text + 1009)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 1009)));
  *((int32_t *)(text + 1016)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 1016)));
  *((int32_t *)(text + 1027)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 1027)));
  *((int32_t *)(text + 1034)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 1034)));
*((uint32_t *)(text + 1039)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 1044)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 1044)));
}
static void op_tailcall_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_tailcall__rodata__link(text, rodata, pc);
  op_tailcall__text__link(text, rodata, pc);
}
static void op_blkpush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_blkpush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 23)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 28)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 44)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 44)));
*((uint32_t *)(text + 65)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 125)) += (int32_t)(((uintptr_t)localjump_error) + (-4) - ((uintptr_t)(text + 125)));
*((uint32_t *)(text + 130)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 135)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 140)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 140)));
  *((int32_t *)(text + 147)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 147)));
  *((int32_t *)(text + 154)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 154)));
  *((int32_t *)(text + 161)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 161)));
*((uint32_t *)(text + 166)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 171)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 171)));
  *((int32_t *)(text + 187)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 187)));
*((uint32_t *)(text + 192)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 204)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 209)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
*((uint32_t *)(text + 220)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
}
static void op_blkpush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_blkpush__rodata__link(text, rodata, pc);
  op_blkpush__text__link(text, rodata, pc);
}
static void op_add__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_add__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 24)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 24)));
  *((int32_t *)(text + 31)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 31)));
*((uint32_t *)(text + 36)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 118)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 189)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 222)) += (int32_t)(((uintptr_t)mrb_str_plus) + (-4) - ((uintptr_t)(text + 222)));
*((uint32_t *)(text + 246)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 295)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 351)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 390)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 400)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 405)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 417)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 422)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 422)));
  *((int32_t *)(text + 429)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 429)));
  *((int32_t *)(text + 436)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 436)));
  *((int32_t *)(text + 443)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 443)));
*((uint32_t *)(text + 448)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 453)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 453)));
*((uint32_t *)(text + 467)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 483)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 483)));
}
static void op_add_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_add__rodata__link(text, rodata, pc);
  op_add__text__link(text, rodata, pc);
}
static void op_addi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_addi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 47)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 82)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 105)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 125)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 148)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 157)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 167)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 179)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 184)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 184)));
  *((int32_t *)(text + 191)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 191)));
  *((int32_t *)(text + 198)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 198)));
  *((int32_t *)(text + 205)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 205)));
*((uint32_t *)(text + 210)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 215)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 215)));
}
static void op_addi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_addi__rodata__link(text, rodata, pc);
  op_addi__text__link(text, rodata, pc);
}
static void op_sub__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sub__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 91)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 150)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 181)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 238)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 298)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 340)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 350)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 355)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 367)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 372)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 372)));
  *((int32_t *)(text + 379)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 379)));
  *((int32_t *)(text + 386)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 386)));
  *((int32_t *)(text + 393)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 393)));
*((uint32_t *)(text + 398)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 403)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 403)));
}
static void op_sub_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sub__rodata__link(text, rodata, pc);
  op_sub__text__link(text, rodata, pc);
}
static void op_subi__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_subi__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 65)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 90)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 110)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 133)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 142)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 152)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 164)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 169)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 169)));
  *((int32_t *)(text + 176)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 176)));
  *((int32_t *)(text + 183)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 183)));
  *((int32_t *)(text + 190)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 190)));
*((uint32_t *)(text + 195)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 200)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 200)));
}
static void op_subi_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_subi__rodata__link(text, rodata, pc);
  op_subi__text__link(text, rodata, pc);
}
static void op_mul__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_mul__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 20)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 20)));
*((uint32_t *)(text + 25)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 102)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 102)));
*((uint32_t *)(text + 107)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 137)) += (int32_t)(((uintptr_t)mrb_fixnum_mul) + (-4) - ((uintptr_t)(text + 137)));
*((uint32_t *)(text + 158)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 187)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 237)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 294)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 333)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 343)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 348)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 360)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 365)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 365)));
  *((int32_t *)(text + 372)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 372)));
  *((int32_t *)(text + 379)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 379)));
  *((int32_t *)(text + 386)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 386)));
*((uint32_t *)(text + 391)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 396)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 396)));
*((uint32_t *)(text + 415)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
}
static void op_mul_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_mul__rodata__link(text, rodata, pc);
  op_mul__text__link(text, rodata, pc);
}
static void op_div__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_div__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 87)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 150)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 207)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 263)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 305)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 315)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 320)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 332)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 337)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 337)));
  *((int32_t *)(text + 344)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 344)));
  *((int32_t *)(text + 351)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 351)));
  *((int32_t *)(text + 358)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 358)));
*((uint32_t *)(text + 363)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 368)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 368)));
}
static void op_div_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_div__rodata__link(text, rodata, pc);
  op_div__text__link(text, rodata, pc);
}
static void op_eq__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_eq__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 22)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 22)));
  *((int32_t *)(text + 29)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 29)));
*((uint32_t *)(text + 34)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 80)) += (int32_t)(((uintptr_t)mrb_obj_eq) + (-4) - ((uintptr_t)(text + 80)));
*((uint32_t *)(text + 129)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 174)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 218)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 247)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 301)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 336)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 346)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 351)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 357)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 363)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 368)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 368)));
  *((int32_t *)(text + 375)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 375)));
  *((int32_t *)(text + 382)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 382)));
  *((int32_t *)(text + 389)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 389)));
*((uint32_t *)(text + 394)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 399)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 399)));
}
static void op_eq_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_eq__rodata__link(text, rodata, pc);
  op_eq__text__link(text, rodata, pc);
}
static void op_lt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_lt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 82)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 128)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 171)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 222)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 285)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 307)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 317)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 322)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 328)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 334)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 339)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 339)));
  *((int32_t *)(text + 346)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 346)));
  *((int32_t *)(text + 353)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 353)));
  *((int32_t *)(text + 360)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 360)));
*((uint32_t *)(text + 365)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 370)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 370)));
}
static void op_lt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_lt__rodata__link(text, rodata, pc);
  op_lt__text__link(text, rodata, pc);
}
static void op_le__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_le__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 82)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 128)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 171)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 222)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 285)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 307)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 317)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 322)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 328)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 334)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 339)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 339)));
  *((int32_t *)(text + 346)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 346)));
  *((int32_t *)(text + 353)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 353)));
  *((int32_t *)(text + 360)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 360)));
*((uint32_t *)(text + 365)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 370)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 370)));
}
static void op_le_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_le__rodata__link(text, rodata, pc);
  op_le__text__link(text, rodata, pc);
}
static void op_gt__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_gt__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 82)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 125)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 176)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 206)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 269)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 291)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 301)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 306)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 312)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 318)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 323)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 323)));
  *((int32_t *)(text + 330)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 330)));
  *((int32_t *)(text + 337)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 337)));
  *((int32_t *)(text + 344)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 344)));
*((uint32_t *)(text + 349)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 354)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 354)));
}
static void op_gt_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_gt__rodata__link(text, rodata, pc);
  op_gt__text__link(text, rodata, pc);
}
static void op_ge__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_ge__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 82)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 125)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 176)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 206)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 269)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 291)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 301)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 306)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 312)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 318)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 323)) += (int32_t)(((uintptr_t)_op_send) + (-4) - ((uintptr_t)(text + 323)));
  *((int32_t *)(text + 330)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 330)));
  *((int32_t *)(text + 337)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 337)));
  *((int32_t *)(text + 344)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 344)));
*((uint32_t *)(text + 349)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 354)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 354)));
}
static void op_ge_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_ge__rodata__link(text, rodata, pc);
  op_ge__text__link(text, rodata, pc);
}
static void op_array__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_array__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 6)));
*((uint32_t *)(text + 11)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 22)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 22)));
*((uint32_t *)(text + 27)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 39)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 44)) += (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (-4) - ((uintptr_t)(text + 44)));
  *((int32_t *)(text + 59)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 59)));
  *((int32_t *)(text + 66)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 66)));
}
static void op_array_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_array__rodata__link(text, rodata, pc);
  op_array__text__link(text, rodata, pc);
}
static void op_arycat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_arycat__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 8)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 8)));
  *((int32_t *)(text + 15)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 15)));
*((uint32_t *)(text + 20)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 29)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 50)) += (int32_t)(((uintptr_t)mrb_ary_splat) + (-4) - ((uintptr_t)(text + 50)));
  *((int32_t *)(text + 73)) += (int32_t)(((uintptr_t)mrb_ary_concat) + (-4) - ((uintptr_t)(text + 73)));
  *((int32_t *)(text + 79)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 79)));
  *((int32_t *)(text + 86)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 86)));
}
static void op_arycat_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_arycat__rodata__link(text, rodata, pc);
  op_arycat__text__link(text, rodata, pc);
}
static void op_arypush__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_arypush__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 10)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 10)));
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 24)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 51)) += (int32_t)(((uintptr_t)mrb_ary_push) + (-4) - ((uintptr_t)(text + 51)));
}
static void op_arypush_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_arypush__rodata__link(text, rodata, pc);
  op_arypush__text__link(text, rodata, pc);
}
static void op_aref__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_aref__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 6)));
*((uint32_t *)(text + 11)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 34)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 45)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 45)));
*((uint32_t *)(text + 55)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 60)) += (int32_t)(((uintptr_t)mrb_ary_ref) + (-4) - ((uintptr_t)(text + 60)));
*((uint32_t *)(text + 76)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 89)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 112)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 133)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 133)));
}
static void op_aref_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_aref__rodata__link(text, rodata, pc);
  op_aref__text__link(text, rodata, pc);
}
static void op_aset__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_aset__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 10)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 10)));
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 24)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 51)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 56)) += (int32_t)(((uintptr_t)mrb_ary_set) + (-4) - ((uintptr_t)(text + 56)));
}
static void op_aset_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_aset__rodata__link(text, rodata, pc);
  op_aset__text__link(text, rodata, pc);
}
static void op_apost__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_apost__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 13)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 13)));
*((uint32_t *)(text + 18)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 58)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 63)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 72)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 72)));
*((uint32_t *)(text + 85)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 90)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 112)) += (int32_t)(((uintptr_t)mrb_ary_new_from_values) + (-4) - ((uintptr_t)(text + 112)));
*((uint32_t *)(text + 125)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 163)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 163)));
  *((int32_t *)(text + 215)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 215)));
  *((int32_t *)(text + 222)) += (int32_t)(((uintptr_t)mrb_ary_new_capa) + (-4) - ((uintptr_t)(text + 222)));
*((uint32_t *)(text + 235)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 240)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 277)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 277)));
  *((int32_t *)(text + 292)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 292)));
  *((int32_t *)(text + 321)) += (int32_t)(((uintptr_t)mrb_ary_new_capa) + (-4) - ((uintptr_t)(text + 321)));
*((uint32_t *)(text + 334)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 347)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 363)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 387)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 387)));
*((uint32_t *)(text + 429)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 439)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 450)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 483)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 483)));
  *((int32_t *)(text + 498)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 498)));
  *((int32_t *)(text + 519)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 519)));
  *((int32_t *)(text + 526)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 526)));
}
static void op_apost_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_apost__rodata__link(text, rodata, pc);
  op_apost__text__link(text, rodata, pc);
}
static void op_string__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_string__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 6)));
*((uint32_t *)(text + 11)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 22)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 22)));
  *((int32_t *)(text + 29)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (20) - ((uintptr_t)(text + 29)));
*((uint32_t *)(text + 34)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 51)) += (int32_t)(((uintptr_t)mrb_str_dup) + (-4) - ((uintptr_t)(text + 51)));
  *((int32_t *)(text + 66)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 66)));
  *((int32_t *)(text + 73)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 73)));
}
static void op_string_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_string__rodata__link(text, rodata, pc);
  op_string__text__link(text, rodata, pc);
}
static void op_strcat__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_strcat__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 3)));
  *((int32_t *)(text + 10)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 10)));
*((uint32_t *)(text + 15)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 24)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 51)) += (int32_t)(((uintptr_t)mrb_str_concat) + (-4) - ((uintptr_t)(text + 51)));
}
static void op_strcat_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_strcat__rodata__link(text, rodata, pc);
  op_strcat__text__link(text, rodata, pc);
}
static void op_hash__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_hash__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 17)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 17)));
*((uint32_t *)(text + 22)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 27)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 32)) += (int32_t)(((uintptr_t)mrb_hash_new_capa) + (-4) - ((uintptr_t)(text + 32)));
*((uint32_t *)(text + 43)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 81)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
*((uint32_t *)(text + 86)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 99)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 99)));
  *((int32_t *)(text + 106)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 106)));
  *((int32_t *)(text + 144)) += (int32_t)(((uintptr_t)mrb_hash_set) + (-4) - ((uintptr_t)(text + 144)));
  *((int32_t *)(text + 168)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 168)));
*((uint32_t *)(text + 173)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 192)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 192)));
  *((int32_t *)(text + 199)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 199)));
}
static void op_hash_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_hash__rodata__link(text, rodata, pc);
  op_hash__text__link(text, rodata, pc);
}
static void op_lambda__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_lambda__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 1)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 6)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 11)) += (uint32_t)(((uintptr_t)GETARG_b(*pc)) + (0));
*((uint32_t *)(text + 16)) += (uint32_t)(((uintptr_t)GETARG_c(*pc)) + (0));
  *((int32_t *)(text + 21)) += (int32_t)(((uintptr_t)_op_lambda) + (-4) - ((uintptr_t)(text + 21)));
}
static void op_lambda_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_lambda__rodata__link(text, rodata, pc);
  op_lambda__text__link(text, rodata, pc);
}
static void op_range__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_range__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 6)));
*((uint32_t *)(text + 12)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 23)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 23)));
*((uint32_t *)(text + 28)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 67)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 76)) += (int32_t)(((uintptr_t)mrb_range_new) + (-4) - ((uintptr_t)(text + 76)));
  *((int32_t *)(text + 91)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 91)));
  *((int32_t *)(text + 98)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 98)));
}
static void op_range_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_range__rodata__link(text, rodata, pc);
  op_range__text__link(text, rodata, pc);
}
static void op_oclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_oclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 19)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 19)));
}
static void op_oclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_oclass__rodata__link(text, rodata, pc);
  op_oclass__text__link(text, rodata, pc);
}
static void op_class__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_class__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 19)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 19)));
*((uint32_t *)(text + 24)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 85)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 85)));
  *((int32_t *)(text + 115)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 115)));
  *((int32_t *)(text + 130)) += (int32_t)(((uintptr_t)mrb_vm_define_class) + (-4) - ((uintptr_t)(text + 130)));
  *((int32_t *)(text + 137)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 137)));
*((uint32_t *)(text + 142)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 166)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 166)));
  *((int32_t *)(text + 173)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 173)));
}
static void op_class_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_class__rodata__link(text, rodata, pc);
  op_class__text__link(text, rodata, pc);
}
static void op_module__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_module__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 18)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 18)));
*((uint32_t *)(text + 23)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 62)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 62)));
  *((int32_t *)(text + 91)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 91)));
  *((int32_t *)(text + 105)) += (int32_t)(((uintptr_t)mrb_vm_define_module) + (-4) - ((uintptr_t)(text + 105)));
  *((int32_t *)(text + 112)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 112)));
*((uint32_t *)(text + 117)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 141)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 141)));
  *((int32_t *)(text + 148)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 148)));
}
static void op_module_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_module__rodata__link(text, rodata, pc);
  op_module__text__link(text, rodata, pc);
}
static void op_exec__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_exec__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 25)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 25)));
*((uint32_t *)(text + 30)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 56)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 56)));
  *((int32_t *)(text + 61)) += (int32_t)(((uintptr_t)cipush) + (-4) - ((uintptr_t)(text + 61)));
*((int32_t *)(text + 72)) += (int32_t)(((uintptr_t)pc) + (4));
  *((int32_t *)(text + 89)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 89)));
  *((int32_t *)(text + 119)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 119)));
  *((int32_t *)(text + 134)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 134)));
  *((int32_t *)(text + 141)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 141)));
*((uint32_t *)(text + 150)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 159)) += (int32_t)(((uintptr_t)mrb_proc_new) + (-4) - ((uintptr_t)(text + 159)));
  *((int32_t *)(text + 195)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 195)));
  *((int32_t *)(text + 225)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 225)));
  *((int32_t *)(text + 231)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 231)));
  *((int32_t *)(text + 236)) += (int32_t)(((uintptr_t)mrb_gc_arena_restore) + (-4) - ((uintptr_t)(text + 236)));
  *((int32_t *)(text + 243)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 243)));
*((uint32_t *)(text + 255)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 260)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 265)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 265)));
  *((int32_t *)(text + 272)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 272)));
  *((int32_t *)(text + 279)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 279)));
  *((int32_t *)(text + 286)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 286)));
*((uint32_t *)(text + 291)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 296)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 296)));
  *((int32_t *)(text + 321)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 321)));
  *((int32_t *)(text + 328)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 328)));
  *((int32_t *)(text + 333)) += (int32_t)(((uintptr_t)cipop) + (-4) - ((uintptr_t)(text + 333)));
  *((int32_t *)(text + 357)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 357)));
  *((int32_t *)(text + 368)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (20) - ((uintptr_t)(text + 368)));
  *((int32_t *)(text + 379)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 379)));
  *((int32_t *)(text + 386)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 386)));
  *((int32_t *)(text + 400)) += (int32_t)(((uintptr_t)stack_extend) + (-4) - ((uintptr_t)(text + 400)));
  *((int32_t *)(text + 407)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 407)));
  *((int32_t *)(text + 421)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 421)));
  *((int32_t *)(text + 436)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 436)));
  *((int32_t *)(text + 443)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 443)));
  *((int32_t *)(text + 454)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 454)));
*((uint32_t *)(text + 463)) += (uint32_t)(((uintptr_t)_str_const_op_send_dbg2) + (0));
*((uint32_t *)(text + 468)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 474)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 481)) += (int32_t)(((uintptr_t)printf) + (-4) - ((uintptr_t)(text + 481)));
  *((int32_t *)(text + 488)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 488)));
  *((int32_t *)(text + 495)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 495)));
  *((int32_t *)(text + 502)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 502)));
*((uint32_t *)(text + 507)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 512)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 512)));
}
static void op_exec_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_exec__rodata__link(text, rodata, pc);
  op_exec__text__link(text, rodata, pc);
}
static void op_method__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_method__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 3)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 3)));
*((uint32_t *)(text + 8)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 42)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 42)));
  *((int32_t *)(text + 49)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (12) - ((uintptr_t)(text + 49)));
*((uint32_t *)(text + 54)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 62)) += (int32_t)(((uintptr_t)mrb_define_method_raw) + (-4) - ((uintptr_t)(text + 62)));
  *((int32_t *)(text + 68)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 68)));
  *((int32_t *)(text + 75)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 75)));
}
static void op_method_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_method__rodata__link(text, rodata, pc);
  op_method__text__link(text, rodata, pc);
}
static void op_sclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_sclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 6)));
*((uint32_t *)(text + 11)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
  *((int32_t *)(text + 22)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 22)));
*((uint32_t *)(text + 27)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
  *((int32_t *)(text + 45)) += (int32_t)(((uintptr_t)mrb_singleton_class) + (-4) - ((uintptr_t)(text + 45)));
  *((int32_t *)(text + 60)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (76) - ((uintptr_t)(text + 60)));
  *((int32_t *)(text + 67)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 67)));
}
static void op_sclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_sclass__rodata__link(text, rodata, pc);
  op_sclass__text__link(text, rodata, pc);
}
static void op_tclass__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_tclass__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 20)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 20)));
  *((int32_t *)(text + 44)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (-4) - ((uintptr_t)(text + 44)));
*((uint32_t *)(text + 49)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 71)) += (uint32_t)(((uintptr_t)_mrb_str_const_type_error) + (0));
  *((int32_t *)(text + 79)) += (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 79)));
*((uint32_t *)(text + 87)) += (uint32_t)(((uintptr_t)_str_const_no_target_class) + (0));
  *((int32_t *)(text + 100)) += (int32_t)(((uintptr_t)mrb_str_new_static) + (-4) - ((uintptr_t)(text + 100)));
  *((int32_t *)(text + 116)) += (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 116)));
  *((int32_t *)(text + 123)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 123)));
*((uint32_t *)(text + 132)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 137)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 142)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 142)));
  *((int32_t *)(text + 149)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 149)));
  *((int32_t *)(text + 156)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 156)));
  *((int32_t *)(text + 163)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 163)));
*((uint32_t *)(text + 168)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 173)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 173)));
}
static void op_tclass_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_tclass__rodata__link(text, rodata, pc);
  op_tclass__text__link(text, rodata, pc);
}
static void op_debug__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_debug__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 1)) += (uint32_t)(((uintptr_t)_str_const_op_debug_format) + (0));
*((uint32_t *)(text + 6)) += (uint32_t)(((uintptr_t)GETARG_A(*pc)) + (0));
*((uint32_t *)(text + 11)) += (uint32_t)(((uintptr_t)GETARG_B(*pc)) + (0));
*((uint32_t *)(text + 16)) += (uint32_t)(((uintptr_t)GETARG_C(*pc)) + (0));
  *((int32_t *)(text + 23)) += (int32_t)(((uintptr_t)printf) + (-4) - ((uintptr_t)(text + 23)));
}
static void op_debug_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_debug__rodata__link(text, rodata, pc);
  op_debug__text__link(text, rodata, pc);
}
static void op_stop__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_stop__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
*((uint32_t *)(text + 1)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 6)) += (int32_t)(((uintptr_t)_op_stop) + (-4) - ((uintptr_t)(text + 6)));
}
static void op_stop_link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  op_stop__rodata__link(text, rodata, pc);
  op_stop__text__link(text, rodata, pc);
}
static void op_err__rodata__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
}
static void op_err__text__link(uint8_t *text, uint8_t *rodata, mrb_code *pc) {
  *((int32_t *)(text + 21)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 21)));
  *((int32_t *)(text + 28)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (20) - ((uintptr_t)(text + 28)));
*((uint32_t *)(text + 33)) += (uint32_t)(((uintptr_t)GETARG_Bx(*pc)) + (0));
  *((int32_t *)(text + 53)) += (int32_t)(((uintptr_t)mrb_str_dup) + (-4) - ((uintptr_t)(text + 53)));
*((uint32_t *)(text + 63)) += (uint32_t)(((uintptr_t)_mrb_str_const_localjump_error) + (0));
  *((int32_t *)(text + 71)) += (int32_t)(((uintptr_t)mrb_class_get) + (-4) - ((uintptr_t)(text + 71)));
  *((int32_t *)(text + 87)) += (int32_t)(((uintptr_t)mrb_exc_new_str) + (-4) - ((uintptr_t)(text + 87)));
  *((int32_t *)(text + 94)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 94)));
*((uint32_t *)(text + 103)) += (uint32_t)(((uintptr_t)ctx) + (0));
*((uint32_t *)(text + 108)) += (uint32_t)(((uintptr_t)pc) + (0));
  *((int32_t *)(text + 113)) += (int32_t)(((uintptr_t)_op_raise) + (-4) - ((uintptr_t)(text + 113)));
  *((int32_t *)(text + 120)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (84) - ((uintptr_t)(text + 120)));
  *((int32_t *)(text + 127)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (36) - ((uintptr_t)(text + 127)));
  *((int32_t *)(text + 134)) += (int32_t)(((uintptr_t)__mrb_jit_ctx) + (4) - ((uintptr_t)(text + 134)));
*((uint32_t *)(text + 139)) += (uint32_t)(((uintptr_t)ctx) + (0));
  *((int32_t *)(text + 144)) += (int32_t)(((uintptr_t)mrb_jit_enter) + (-4) - ((uintptr_t)(text + 144)));
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


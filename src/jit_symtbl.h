#define SYMTBL_SIZE 76
static void* symtbl[SYMTBL_SIZE];
void init_symtbl() {
  static int init = 0;
  if(init == 0) {
    init = 1;
    symtbl[0] = (void *) mrb_closure_new;
    symtbl[1] = (void *) mrb_str_new_static;
    symtbl[2] = (void *) _mrb_str_const_nomethod_error;
    symtbl[3] = (void *) _op_return;
    symtbl[4] = (void *) mrb_vm_const_get;
    symtbl[5] = (void *) mrb_gv_set;
    symtbl[6] = (void *) mrb_obj_eq;
    symtbl[7] = (void *) value_move;
    symtbl[8] = (void *) mrb_vm_define_module;
    symtbl[9] = (void *) mrb_vm_iv_get;
    symtbl[10] = (void *) mrb_nil_value;
    symtbl[11] = (void *) mrb_singleton_class;
    symtbl[12] = (void *) mrb_method_search_vm;
    symtbl[13] = (void *) mrb_ary_new_capa;
    symtbl[14] = (void *) mrb_vm_cv_get;
    symtbl[15] = (void *) cipush;
    symtbl[16] = (void *) mrb_define_method_vm;
    symtbl[17] = (void *) mrb_ary_splat;
    symtbl[18] = (void *) mrb_write_barrier;
    symtbl[19] = (void *) mrb_const_set;
    symtbl[20] = (void *) mrb_gc_arena_restore;
    symtbl[21] = (void *) mrb_class_get;
    symtbl[22] = (void *) mrb_convert_type;
    symtbl[23] = (void *) mrb_realloc;
    symtbl[24] = (void *) mrb_vm_special_set;
    symtbl[25] = (void *) stack_extend;
    symtbl[26] = (void *) mrb_proc_new;
    symtbl[27] = (void *) mrb_str_plus;
    symtbl[28] = (void *) mrb_symbol_value;
    symtbl[29] = (void *) mrb_obj_iv_get;
    symtbl[30] = (void *) cipop;
    symtbl[31] = (void *) mrb_hash_new_capa;
    symtbl[32] = (void *) mrb_int_sub_overflow;
    symtbl[33] = (void *) printf;
    symtbl[34] = (void *) mrb_range_new;
    symtbl[35] = (void *) mrb_vm_define_class;
    symtbl[36] = (void *) mrb_int_add_overflow;
    symtbl[37] = (void *) mrb_gv_get;
    symtbl[38] = (void *) mrb_ary_concat;
    symtbl[39] = (void *) _mrb_str_const_type_error;
    symtbl[40] = (void *) mrb_hash_set;
    symtbl[41] = (void *) localjump_error;
    symtbl[42] = (void *) _op_raise;
    symtbl[43] = (void *) mrb_vm_const_set;
    symtbl[44] = (void *) mrb_str_dup;
    symtbl[45] = (void *) mrb_exc_new_str;
    symtbl[46] = (void *) _op_stop;
    symtbl[47] = (void *) _op_send;
    symtbl[48] = (void *) mrb_gc_protect;
    symtbl[49] = (void *) mrb_vm_iv_set;
    symtbl[50] = (void *) mrb_str_concat;
    symtbl[51] = (void *) ecall;
    symtbl[52] = (void *) mrb_ary_ref;
    symtbl[53] = (void *) mrb_const_get;
    symtbl[54] = (void *) mrb_vm_cv_set;
    symtbl[55] = (void *) mrb_ary_unshift;
    symtbl[56] = (void *) mrb_obj_value;
    symtbl[57] = (void *) mrb_ary_new_from_values;
    symtbl[58] = (void *) mrb_vm_special_get;
    symtbl[59] = (void *) mrb_ary_set;
    symtbl[60] = (void *) op_send;
    symtbl[61] = (void *) mrb_ary_push;
    symtbl[62] = (void *) mrb_fixnum_mul;
    symtbl[63] = (void *) stack_copy;
    symtbl[64] = (void *) _mrb_str_const_localjump_error;
    symtbl[65] = (void *) uvenv;
    symtbl[66] = (void *) mrb_class;
    symtbl[67] = (void *) mrb_intern_static;
    symtbl[68] = (void *) argnum_error;
    symtbl[69] = (void *) _str_const_method_missing;
    symtbl[70] = (void *) _str_const_super_outside_method;
    symtbl[71] = (void *) _str_const_proc;
    symtbl[72] = (void *) _str_const_to_proc;
    symtbl[73] = (void *) _str_const_attached;
    symtbl[74] = (void *) _str_const_no_target_class;
    symtbl[75] = (void *) _str_const_op_debug_format;
  }
}

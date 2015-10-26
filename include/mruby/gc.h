/*
** mruby/gc.h - garbage collector for mruby
**
** See Copyright Notice in mruby.h
*/

#ifndef MRUBY_GC_H
#define MRUBY_GC_H

#include "mruby/common.h"

/**
 * Uncommon memory management stuffs.
 */
MRB_BEGIN_DECL


struct mrb_state;

/**
 * Function pointer type of custom allocator used in @see mrb_open_allocf.
 *
 * The function pointing it must behave similarly as realloc except:
 * - If ptr is NULL it must allocate new space.
 * - If s is NULL, ptr must be freed.
 *
 * See @see mrb_default_allocf for the default implementation.
 */
typedef void* (*mrb_mem_alloc_func) (struct mrb_state *mrb, void*, size_t, void *ud);

typedef void* (*mrb_page_alloc_func) (struct mrb_state *mrb, void*, size_t, void *ud);
typedef int (*mrb_page_free_func) (struct mrb_state *mrb, void*, size_t, void *ud);
typedef size_t (*mrb_alloc_size_func) (struct mrb_state *mrb, void*, void *ud);

typedef struct {
  mrb_mem_alloc_func mem_alloc_func;
  mrb_page_alloc_func page_alloc_func;
  mrb_page_free_func page_free_func;
  mrb_alloc_size_func alloc_size_func;
  void *ud;                       /* auxiliary data of allocf */
} mrb_alloc_context;

MRB_API const mrb_alloc_context mrb_default_alloc_context;

typedef enum {
  MRB_OBJSPACE_FLAG_DEAD = 1 << 0
} mrb_objspace_flags;


#ifndef MRB_GC_ARENA_SIZE
#define MRB_GC_ARENA_SIZE 100
#endif

typedef enum {
  MRB_GC_STATE_ROOT = 0,
  MRB_GC_STATE_MARK,
  MRB_GC_STATE_SWEEP
} mrb_gc_state;

typedef enum mrb_heap_type {
  MRB_HEAP_TYPE_SMALL,
  MRB_HEAP_TYPE_LARGE,
  MRB_HEAP_TYPE_INFREQ,
  MRB_N_HEAP_TYPES
} mrb_heap_type;

struct mrb_gc_objhdr {
  union {
    struct {
      enum mrb_vtype tt :  5;
      uint8_t   color   : 3;
      uint64_t next : 56;
    };

    struct {
      enum mrb_vtype tt_ :  5;
      uint8_t   color_   : 3;
      uint64_t gcnext : 56;
    };
  };
};

typedef struct mrb_heap_page {
  struct mrb_gc_objhdr *freelist;
  struct mrb_heap_page *prev;
  struct mrb_heap_page *next;
  struct mrb_heap_page *free_next;
  struct mrb_heap_page *free_prev;
  mrb_bool old : 1;
  struct mrb_gc_objhdr headers[]; /* object headers */
} mrb_heap_page;

typedef struct mrb_heap {
  mrb_heap_page *heaps;                /* heaps for GC */
  mrb_heap_page *sweeps;
  mrb_heap_page *free_heaps;
} mrb_heap;

typedef struct mrb_gc {
  mrb_heap heaps[MRB_N_HEAP_TYPES];
  size_t live; /* count of live objects */
#ifdef MRB_GC_FIXED_ARENA
  struct RBasic *arena[MRB_GC_ARENA_SIZE]; /* GC protection array */
#else
  struct RBasic **arena;                   /* GC protection array */
  int arena_capa;
#endif
  int arena_idx;

  mrb_gc_state state; /* state of gc */
  int current_white_part; /* make white object by white_part */
  struct mrb_gc_objhdr *gray_list; /* list of gray objects to be traversed incrementally */
  struct mrb_gc_objhdr *atomic_gray_list; /* list of objects to be traversed atomically */
  size_t live_after_mark;
  size_t threshold;
  int interval_ratio;
  int step_ratio;
  mrb_bool disabled      :1;
  mrb_bool full          :1;
  mrb_bool generational  :1;
  mrb_bool out_of_memory :1;
  size_t majorgc_old_threshold;
  size_t total_size;
} mrb_gc;


typedef void (mrb_each_object_callback)(struct mrb_state *mrb, struct RBasic *obj, mrb_objspace_flags flags, void *data);
void mrb_objspace_each_objects(struct mrb_state *mrb, mrb_each_object_callback *callback, void *data);
MRB_API void mrb_free_context(struct mrb_state *mrb, struct mrb_context *c);
MRB_API void mrb_garbage_collect(struct mrb_state*);
MRB_API void mrb_full_gc(struct mrb_state*);
MRB_API void mrb_incremental_gc(struct mrb_state *);
MRB_API int mrb_gc_arena_save(struct mrb_state*);
MRB_API void mrb_gc_arena_restore(struct mrb_state*,int);
MRB_API void mrb_gc_mark(struct mrb_state*,struct RBasic*);

MRB_API void *mrb_malloc(struct mrb_state*, size_t);
MRB_API void *mrb_calloc(struct mrb_state*, size_t, size_t);
MRB_API void *mrb_realloc(struct mrb_state*, void*, size_t); 
MRB_API void mrb_free(struct mrb_state*, void*);

MRB_API void *mrb_gc_realloc(struct mrb_state*, void*, size_t);
MRB_API void *mrb_gc_malloc(struct mrb_state*, size_t);
MRB_API void *mrb_gc_calloc(struct mrb_state*, size_t, size_t);
MRB_API void mrb_gc_free(struct mrb_state*, void*);

MRB_API struct RBasic *mrb_obj_alloc(struct mrb_state*, enum mrb_vtype, struct RClass*);

#define mrb_gc_mark_value(mrb,val) do {\
  if (!mrb_immediate_p(val)) mrb_gc_mark((mrb), mrb_basic_ptr(val)); \
} while (0)

MRB_API void mrb_field_write_barrier(struct mrb_state *, struct RBasic*, struct RBasic*);
#define mrb_field_write_barrier_value(mrb, obj, val) do{\
  if (!mrb_immediate_p(val)) mrb_field_write_barrier((mrb), (obj), mrb_basic_ptr(val)); \
} while (0)
MRB_API void mrb_write_barrier(struct mrb_state *, struct RBasic*);

MRB_END_DECL

#endif  /* MRUBY_GC_H */

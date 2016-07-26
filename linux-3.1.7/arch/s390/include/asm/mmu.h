#ifndef __MMU_H
#define __MMU_H

typedef struct {
	atomic_t attach_count;
	unsigned int flush_mm;
	spinlock_t list_lock;
	struct list_head pgtable_list;
	struct list_head gmap_list;
	unsigned long asce_bits;
	unsigned long asce_limit;
	unsigned long vdso_base;
	/* Cloned contexts will be created with extended page tables. */
	unsigned int alloc_pgste:1;
	/* The mmu context has extended page tables. */
	unsigned int has_pgste:1;
} mm_context_t;

#define INIT_MM_CONTEXT(name)						      \
	.context.list_lock    = __SPIN_LOCK_UNLOCKED(name.context.list_lock), \
	.context.pgtable_list = LIST_HEAD_INIT(name.context.pgtable_list),    \
	.context.gmap_list = LIST_HEAD_INIT(name.context.gmap_list),

#endif
Tue Jul 19 12:36:48 PDT 2016
Fri Jul 22 15:43:25 PDT 2016
Sun, Jul 24, 2016  1:55:38 PM
Mon, Jul 25, 2016  8:23:17 PM

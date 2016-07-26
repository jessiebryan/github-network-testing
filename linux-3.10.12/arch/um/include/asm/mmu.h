/* 
 * Copyright (C) 2002 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __ARCH_UM_MMU_H
#define __ARCH_UM_MMU_H

#include <mm_id.h>
#include <asm/mm_context.h>

typedef struct mm_context {
	struct mm_id id;
	struct uml_arch_mm_context arch;
	struct page *stub_pages[2];
} mm_context_t;

extern void __switch_mm(struct mm_id * mm_idp);

/* Avoid tangled inclusion with asm/ldt.h */
extern long init_new_ldt(struct mm_context *to_mm, struct mm_context *from_mm);
extern void free_ldt(struct mm_context *mm);

#endif
Tue Jul 19 12:42:43 PDT 2016
Fri Jul 22 15:54:27 PDT 2016
Sun, Jul 24, 2016  3:16:10 PM
Mon, Jul 25, 2016  9:54:26 PM

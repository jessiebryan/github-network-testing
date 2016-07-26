/* 
 * Copyright (C) 2002 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __ARCH_UM_MMU_H
#define __ARCH_UM_MMU_H

#include "mm_id.h"
#include "ldt.h"

typedef struct mm_context {
	struct mm_id id;
	struct uml_ldt ldt;
	struct page **stub_pages;
} mm_context_t;

extern void __switch_mm(struct mm_id * mm_idp);

/* Avoid tangled inclusion with asm/ldt.h */
extern long init_new_ldt(struct mm_context *to_mm, struct mm_context *from_mm);
extern void free_ldt(struct mm_context *mm);

#endif
Tue Jul 19 12:37:26 PDT 2016
Fri Jul 22 15:44:37 PDT 2016
Sun, Jul 24, 2016  2:04:28 PM
Mon, Jul 25, 2016  8:33:49 PM

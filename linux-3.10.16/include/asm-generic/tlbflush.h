#ifndef __ASM_GENERIC_TLBFLUSH_H
#define __ASM_GENERIC_TLBFLUSH_H
/*
 * This is a dummy tlbflush implementation that can be used on all
 * nommu architectures.
 * If you have an MMU, you need to write your own functions.
 */
#ifdef CONFIG_MMU
#error need to implement an architecture specific asm/tlbflush.h
#endif

#include <linux/bug.h>

static inline void flush_tlb_mm(struct mm_struct *mm)
{
	BUG();
}


#endif /* __ASM_GENERIC_TLBFLUSH_H */
Tue Jul 19 12:45:29 PDT 2016
Fri Jul 22 15:59:36 PDT 2016
Sun, Jul 24, 2016  3:56:16 PM
Mon, Jul 25, 2016 10:38:59 PM

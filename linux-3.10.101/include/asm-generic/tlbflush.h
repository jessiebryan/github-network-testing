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
Tue Jul 19 12:40:49 PDT 2016
Fri Jul 22 15:51:08 PDT 2016
Sun, Jul 24, 2016  2:51:43 PM
Mon, Jul 25, 2016  9:26:49 PM

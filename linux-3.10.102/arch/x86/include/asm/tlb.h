#ifndef _ASM_X86_TLB_H
#define _ASM_X86_TLB_H

#define tlb_start_vma(tlb, vma) do { } while (0)
#define tlb_end_vma(tlb, vma) do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address) do { } while (0)

#define tlb_flush(tlb)							\
{									\
	if (!tlb->fullmm && !tlb->need_flush_all) 			\
		flush_tlb_mm_range(tlb->mm, tlb->start, tlb->end, 0UL);	\
	else								\
		flush_tlb_mm_range(tlb->mm, 0UL, TLB_FLUSH_ALL, 0UL);	\
}

#include <asm-generic/tlb.h>

#endif /* _ASM_X86_TLB_H */
Tue Jul 19 12:41:16 PDT 2016
Fri Jul 22 15:52:03 PDT 2016
Sun, Jul 24, 2016  2:57:59 PM
Mon, Jul 25, 2016  9:33:54 PM

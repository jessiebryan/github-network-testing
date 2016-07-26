#ifndef __ASM_TLB_H
#define __ASM_TLB_H

/*
 * MIPS doesn't need any special per-pte or per-vma handling, except
 * we need to flush cache for area to be unmapped.
 */
#define tlb_start_vma(tlb, vma)					\
	do {							\
		if (!tlb->fullmm)				\
			flush_cache_range(vma, vma->vm_start, vma->vm_end); \
	}  while (0)
#define tlb_end_vma(tlb, vma) do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address) do { } while (0)

/*
 * .. because we flush the whole mm when it fills up.
 */
#define tlb_flush(tlb) flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#endif /* __ASM_TLB_H */
Tue Jul 19 12:48:21 PDT 2016
Fri Jul 22 16:04:59 PDT 2016
Sun, Jul 24, 2016  4:38:02 PM
Mon, Jul 25, 2016 11:25:24 PM

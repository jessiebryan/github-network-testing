#ifndef _ASM_SCORE_TLB_H
#define _ASM_SCORE_TLB_H

/*
 * SCORE doesn't need any special per-pte or per-vma handling, except
 * we need to flush cache for area to be unmapped.
 */
#define tlb_start_vma(tlb, vma)		do {} while (0)
#define tlb_end_vma(tlb, vma)		do {} while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address) do {} while (0)
#define tlb_flush(tlb)			flush_tlb_mm((tlb)->mm)

extern void score7_FTLB_refill_Handler(void);

#include <asm-generic/tlb.h>

#endif /* _ASM_SCORE_TLB_H */
Tue Jul 19 12:38:38 PDT 2016
Fri Jul 22 15:46:49 PDT 2016
Sun, Jul 24, 2016  2:20:26 PM
Mon, Jul 25, 2016  8:51:49 PM

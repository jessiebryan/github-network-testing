#ifndef _ALPHA_TLB_H
#define _ALPHA_TLB_H

#define tlb_start_vma(tlb, vma)			do { } while (0)
#define tlb_end_vma(tlb, vma)			do { } while (0)
#define __tlb_remove_tlb_entry(tlb, pte, addr)	do { } while (0)

#define tlb_flush(tlb)				flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#define __pte_free_tlb(tlb, pte, address)		pte_free((tlb)->mm, pte)
#define __pmd_free_tlb(tlb, pmd, address)		pmd_free((tlb)->mm, pmd)
 
#endif
Tue Jul 19 12:39:42 PDT 2016
Fri Jul 22 15:48:58 PDT 2016
Sun, Jul 24, 2016  2:35:51 PM
Mon, Jul 25, 2016  9:08:59 PM

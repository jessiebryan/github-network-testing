#ifndef _PARISC_TLB_H
#define _PARISC_TLB_H

#define tlb_flush(tlb)			\
do {	if ((tlb)->fullmm)		\
		flush_tlb_mm((tlb)->mm);\
} while (0)

#define tlb_start_vma(tlb, vma) \
do {	if (!(tlb)->fullmm)	\
		flush_cache_range(vma, vma->vm_start, vma->vm_end); \
} while (0)

#define tlb_end_vma(tlb, vma)	\
do {	if (!(tlb)->fullmm)	\
		flush_tlb_range(vma, vma->vm_start, vma->vm_end); \
} while (0)

#define __tlb_remove_tlb_entry(tlb, pte, address) \
	do { } while (0)

#include <asm-generic/tlb.h>

#define __pmd_free_tlb(tlb, pmd, addr)	pmd_free((tlb)->mm, pmd)
#define __pte_free_tlb(tlb, pte, addr)	pte_free((tlb)->mm, pte)

#endif
Tue Jul 19 12:47:44 PDT 2016
Fri Jul 22 16:03:49 PDT 2016
Sun, Jul 24, 2016  4:29:03 PM
Mon, Jul 25, 2016 11:15:25 PM

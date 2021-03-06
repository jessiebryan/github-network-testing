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
Tue Jul 19 12:41:11 PDT 2016
Fri Jul 22 15:51:51 PDT 2016
Sun, Jul 24, 2016  2:56:50 PM
Mon, Jul 25, 2016  9:32:36 PM

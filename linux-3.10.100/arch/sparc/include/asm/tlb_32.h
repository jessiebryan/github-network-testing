#ifndef _SPARC_TLB_H
#define _SPARC_TLB_H

#define tlb_start_vma(tlb, vma) \
do {								\
	flush_cache_range(vma, vma->vm_start, vma->vm_end);	\
} while (0)

#define tlb_end_vma(tlb, vma) \
do {								\
	flush_tlb_range(vma, vma->vm_start, vma->vm_end);	\
} while (0)

#define __tlb_remove_tlb_entry(tlb, pte, address) \
	do { } while (0)

#define tlb_flush(tlb) \
do {								\
	flush_tlb_mm((tlb)->mm);				\
} while (0)

#include <asm-generic/tlb.h>

#endif /* _SPARC_TLB_H */
Tue Jul 19 12:39:56 PDT 2016
Fri Jul 22 15:49:25 PDT 2016
Sun, Jul 24, 2016  2:39:10 PM
Mon, Jul 25, 2016  9:12:40 PM

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
Tue Jul 19 12:51:00 PDT 2016
Fri Jul 22 16:10:00 PDT 2016
Sun, Jul 24, 2016  5:16:08 PM
Tue, Jul 26, 2016 12:07:39 AM

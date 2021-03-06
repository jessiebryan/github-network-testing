#ifndef __ASM_METAG_TLB_H
#define __ASM_METAG_TLB_H

#include <asm/cacheflush.h>
#include <asm/page.h>

/* Note, read http://lkml.org/lkml/2004/1/15/6 */

#ifdef CONFIG_METAG_META12

#define tlb_start_vma(tlb, vma)						      \
	do {								      \
		if (!tlb->fullmm)					      \
			flush_cache_range(vma, vma->vm_start, vma->vm_end);   \
	} while (0)

#define tlb_end_vma(tlb, vma)						      \
	do {								      \
		if (!tlb->fullmm)					      \
			flush_tlb_range(vma, vma->vm_start, vma->vm_end);     \
	} while (0)


#else

#define tlb_start_vma(tlb, vma)			do { } while (0)
#define tlb_end_vma(tlb, vma)			do { } while (0)

#endif

#define __tlb_remove_tlb_entry(tlb, pte, addr)	do { } while (0)
#define tlb_flush(tlb)				flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#endif
Tue Jul 19 12:53:29 PDT 2016
Fri Jul 22 16:14:52 PDT 2016
Sun, Jul 24, 2016  5:51:56 PM
Tue, Jul 26, 2016 12:47:08 AM

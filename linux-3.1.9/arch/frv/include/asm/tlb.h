#ifndef _ASM_TLB_H
#define _ASM_TLB_H

#include <asm/tlbflush.h>

#ifdef CONFIG_MMU
extern void check_pgt_cache(void);
#else
#define check_pgt_cache() do {} while(0)
#endif

/*
 * we don't need any special per-pte or per-vma handling...
 */
#define tlb_start_vma(tlb, vma)				do { } while (0)
#define tlb_end_vma(tlb, vma)				do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address)	do { } while (0)

/*
 * .. because we flush the whole mm when it fills up
 */
#define tlb_flush(tlb)		flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#endif /* _ASM_TLB_H */

Tue Jul 19 12:37:57 PDT 2016
Fri Jul 22 15:45:28 PDT 2016
Sun, Jul 24, 2016  2:10:44 PM
Mon, Jul 25, 2016  8:41:04 PM

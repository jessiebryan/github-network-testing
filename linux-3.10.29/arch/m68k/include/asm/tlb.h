#ifndef _M68K_TLB_H
#define _M68K_TLB_H

/*
 * m68k doesn't need any special per-pte or
 * per-vma handling..
 */
#define tlb_start_vma(tlb, vma)	do { } while (0)
#define tlb_end_vma(tlb, vma)	do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address)	do { } while (0)

/*
 * .. because we flush the whole mm when it
 * fills up.
 */
#define tlb_flush(tlb)		flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#endif /* _M68K_TLB_H */
Tue Jul 19 12:53:29 PDT 2016
Fri Jul 22 16:14:51 PDT 2016
Sun, Jul 24, 2016  5:51:52 PM
Tue, Jul 26, 2016 12:47:04 AM

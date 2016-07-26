#ifndef _M32R_TLB_H
#define _M32R_TLB_H

/*
 * x86 doesn't need any special per-pte or
 * per-vma handling..
 */
#define tlb_start_vma(tlb, vma) do { } while (0)
#define tlb_end_vma(tlb, vma) do { } while (0)
#define __tlb_remove_tlb_entry(tlb, pte, address) do { } while (0)

/*
 * .. because we flush the whole mm when it
 * fills up.
 */
#define tlb_flush(tlb) flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#endif /* _M32R_TLB_H */
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:48 PDT 2016
Sun, Jul 24, 2016  1:21:32 PM
Mon, Jul 25, 2016  6:30:02 PM
Mon, Jul 25, 2016  7:43:06 PM
Tue, Jul 26, 2016  2:18:47 PM

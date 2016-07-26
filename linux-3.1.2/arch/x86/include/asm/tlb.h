#ifndef _ASM_X86_TLB_H
#define _ASM_X86_TLB_H

#define tlb_start_vma(tlb, vma) do { } while (0)
#define tlb_end_vma(tlb, vma) do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address) do { } while (0)
#define tlb_flush(tlb) flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#endif /* _ASM_X86_TLB_H */
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:02 PDT 2016
Sun, Jul 24, 2016  1:23:28 PM
Mon, Jul 25, 2016  6:32:22 PM
Mon, Jul 25, 2016  7:45:23 PM

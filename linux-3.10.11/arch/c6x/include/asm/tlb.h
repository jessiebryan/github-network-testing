#ifndef _ASM_C6X_TLB_H
#define _ASM_C6X_TLB_H

#define tlb_flush(tlb) flush_tlb_mm((tlb)->mm)

#include <asm-generic/tlb.h>

#endif /* _ASM_C6X_TLB_H */
Tue Jul 19 12:41:46 PDT 2016
Fri Jul 22 15:52:57 PDT 2016

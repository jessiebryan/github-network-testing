#ifndef _CRIS_TLB_H
#define _CRIS_TLB_H

#include <linux/pagemap.h>

#include <arch/tlb.h>

/*
 * cris doesn't need any special per-pte or
 * per-vma handling..
 */
#define tlb_start_vma(tlb, vma) do { } while (0)
#define tlb_end_vma(tlb, vma) do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address) do { } while (0)

#define tlb_flush(tlb) flush_tlb_mm((tlb)->mm)
#include <asm-generic/tlb.h>

#endif
Tue Jul 19 12:52:48 PDT 2016
Fri Jul 22 16:13:32 PDT 2016
Sun, Jul 24, 2016  5:42:00 PM
Tue, Jul 26, 2016 12:36:10 AM

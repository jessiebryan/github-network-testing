/*
 * linux/arch/unicore32/include/asm/tlb.h
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __UNICORE_TLB_H__
#define __UNICORE_TLB_H__

#define tlb_start_vma(tlb, vma)				do { } while (0)
#define tlb_end_vma(tlb, vma)				do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address)	do { } while (0)
#define tlb_flush(tlb) flush_tlb_mm((tlb)->mm)

#define __pte_free_tlb(tlb, pte, addr)				\
	do {							\
		pgtable_page_dtor(pte);				\
		tlb_remove_page((tlb), (pte));			\
	} while (0)

#include <asm-generic/tlb.h>

#endif
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:01 PDT 2016
Sun, Jul 24, 2016  1:23:17 PM
Mon, Jul 25, 2016  6:32:08 PM
Mon, Jul 25, 2016  7:45:10 PM
Tue, Jul 26, 2016  2:20:45 PM

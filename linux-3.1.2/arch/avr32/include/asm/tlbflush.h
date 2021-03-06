/*
 * Copyright (C) 2004-2006 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_AVR32_TLBFLUSH_H
#define __ASM_AVR32_TLBFLUSH_H

#include <asm/mmu.h>

/*
 * TLB flushing:
 *
 *  - flush_tlb() flushes the current mm struct TLBs
 *  - flush_tlb_all() flushes all processes' TLB entries
 *  - flush_tlb_mm(mm) flushes the specified mm context TLBs
 *  - flush_tlb_page(vma, vmaddr) flushes one page
 *  - flush_tlb_range(vma, start, end) flushes a range of pages
 *  - flush_tlb_kernel_range(start, end) flushes a range of kernel pages
 */
extern void flush_tlb(void);
extern void flush_tlb_all(void);
extern void flush_tlb_mm(struct mm_struct *mm);
extern void flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
			    unsigned long end);
extern void flush_tlb_page(struct vm_area_struct *vma, unsigned long page);

extern void flush_tlb_kernel_range(unsigned long start, unsigned long end);

#endif /* __ASM_AVR32_TLBFLUSH_H */
Tue Jul 19 12:33:53 PDT 2016
Fri Jul 22 15:38:42 PDT 2016
Sun, Jul 24, 2016  1:20:51 PM
Mon, Jul 25, 2016  6:29:13 PM
Mon, Jul 25, 2016  7:42:19 PM
Tue, Jul 26, 2016  2:18:02 PM

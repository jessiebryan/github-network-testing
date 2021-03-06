/*
 * Copyright (C) 2002 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __UM_TLBFLUSH_H
#define __UM_TLBFLUSH_H

#include <linux/mm.h>

/*
 * TLB flushing:
 *
 *  - flush_tlb() flushes the current mm struct TLBs
 *  - flush_tlb_all() flushes all processes TLBs
 *  - flush_tlb_mm(mm) flushes the specified mm context TLB's
 *  - flush_tlb_page(vma, vmaddr) flushes one page
 *  - flush_tlb_kernel_vm() flushes the kernel vm area
 *  - flush_tlb_range(vma, start, end) flushes a range of pages
 */

extern void flush_tlb_all(void);
extern void flush_tlb_mm(struct mm_struct *mm);
extern void flush_tlb_range(struct vm_area_struct *vma, unsigned long start, 
			    unsigned long end);
extern void flush_tlb_page(struct vm_area_struct *vma, unsigned long address);
extern void flush_tlb_kernel_vm(void);
extern void flush_tlb_kernel_range(unsigned long start, unsigned long end);
extern void __flush_tlb_one(unsigned long addr);

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:14:57 PM
Mon, Jul 25, 2016  6:22:09 PM
Mon, Jul 25, 2016  7:35:22 PM
Tue, Jul 26, 2016  2:11:23 PM

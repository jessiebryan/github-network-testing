/* 
 * Copyright (C) 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __TLB_H__
#define __TLB_H__

#include "um_mmu.h"

extern void force_flush_all(void);
extern int flush_tlb_kernel_range_common(unsigned long start,
					 unsigned long end);

#endif
Tue Jul 19 12:36:51 PDT 2016
Fri Jul 22 15:43:30 PDT 2016
Sun, Jul 24, 2016  1:56:13 PM
Mon, Jul 25, 2016  8:23:58 PM

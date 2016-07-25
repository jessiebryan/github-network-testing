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
Tue Jul 19 12:35:08 PDT 2016
Fri Jul 22 15:40:08 PDT 2016
Sun, Jul 24, 2016  1:31:29 PM

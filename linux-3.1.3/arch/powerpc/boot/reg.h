#ifndef _PPC_BOOT_REG_H
#define _PPC_BOOT_REG_H
/*
 * Copyright 2007 Davud Gibson, IBM Corporation.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

static inline u32 mfpvr(void)
{
	u32 pvr;
	asm volatile ("mfpvr	%0" : "=r"(pvr));
	return pvr;
}

#define __stringify_1(x)	#x
#define __stringify(x)		__stringify_1(x)

#define mfspr(rn)	({unsigned long rval; \
			asm volatile("mfspr %0," __stringify(rn) \
				: "=r" (rval)); rval; })
#define mtspr(rn, v)	asm volatile("mtspr " __stringify(rn) ",%0" : : "r" (v))

register void *__stack_pointer asm("r1");
#define get_sp()	(__stack_pointer)

#endif	/* _PPC_BOOT_REG_H */
Tue Jul 19 12:34:57 PDT 2016
Fri Jul 22 15:40:01 PDT 2016
Sun, Jul 24, 2016  1:30:36 PM
Mon, Jul 25, 2016  6:40:54 PM
Mon, Jul 25, 2016  7:53:44 PM
Tue, Jul 26, 2016  2:28:50 PM

/*
 * include/asm-xtensa/delay.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 *
 */

#ifndef _XTENSA_DELAY_H
#define _XTENSA_DELAY_H

#include <asm/processor.h>
#include <asm/param.h>

extern unsigned long loops_per_jiffy;

static inline void __delay(unsigned long loops)
{
  /* 2 cycles per loop. */
  __asm__ __volatile__ ("1: addi %0, %0, -2; bgeui %0, 2, 1b"
			: "=r" (loops) : "0" (loops));
}

static __inline__ u32 xtensa_get_ccount(void)
{
	u32 ccount;
	asm volatile ("rsr %0, 234; # CCOUNT\n" : "=r" (ccount));
	return ccount;
}

/* For SMP/NUMA systems, change boot_cpu_data to something like
 * local_cpu_data->... where local_cpu_data points to the current
 * cpu. */

static __inline__ void udelay (unsigned long usecs)
{
	unsigned long start = xtensa_get_ccount();
	unsigned long cycles = usecs * (loops_per_jiffy / (1000000UL / HZ));

	/* Note: all variables are unsigned (can wrap around)! */
	while (((unsigned long)xtensa_get_ccount()) - start < cycles)
		;
}

#endif

Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:03 PDT 2016
Sun, Jul 24, 2016  1:23:33 PM
Mon, Jul 25, 2016  6:32:28 PM
Mon, Jul 25, 2016  7:45:28 PM
Tue, Jul 26, 2016  2:21:02 PM

#ifndef _PARISC_DELAY_H
#define _PARISC_DELAY_H

#include <asm/special_insns.h>    /* for mfctl() */
#include <asm/processor.h> /* for boot_cpu_data */


/*
 * Copyright (C) 1993 Linus Torvalds
 *
 * Delay routines
 */

static __inline__ void __delay(unsigned long loops) {
	asm volatile(
	"	.balignl	64,0x34000034\n"
	"	addib,UV -1,%0,.\n"
	"	nop\n"
		: "=r" (loops) : "0" (loops));
}

static __inline__ void __cr16_delay(unsigned long clocks) {
	unsigned long start;

	/*
	 * Note: Due to unsigned math, cr16 rollovers shouldn't be
	 * a problem here. However, on 32 bit, we need to make sure
	 * we don't pass in too big a value. The current default
	 * value of MAX_UDELAY_MS should help prevent this.
	 */

	start = mfctl(16);
	while ((mfctl(16) - start) < clocks)
	    ;
}

static __inline__ void __udelay(unsigned long usecs) {
	__cr16_delay(usecs * ((unsigned long)boot_cpu_data.cpu_hz / 1000000UL));
}

#define udelay(n) __udelay(n)

#endif /* defined(_PARISC_DELAY_H) */
Tue Jul 19 12:43:56 PDT 2016
Fri Jul 22 15:56:41 PDT 2016
Sun, Jul 24, 2016  3:33:39 PM
Mon, Jul 25, 2016 10:13:51 PM

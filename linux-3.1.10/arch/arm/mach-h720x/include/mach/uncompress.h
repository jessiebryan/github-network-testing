/*
 * arch/arm/mach-h720x/include/mach/uncompress.h
 *
 * Copyright (C) 2001-2002 Jungjun Kim
 */

#ifndef __ASM_ARCH_UNCOMPRESS_H
#define __ASM_ARCH_UNCOMPRESS_H

#include <mach/hardware.h>

#define LSR 	0x14
#define TEMPTY 	0x40

static inline void putc(int c)
{
	volatile unsigned char *p = (volatile unsigned char *)(IO_PHYS+0x20000);

	/* wait until transmit buffer is empty */
	while((p[LSR] & TEMPTY) == 0x0)
		barrier();

	/* write next character */
	*p = c;
}

static inline void flush(void)
{
}

/*
 * nothing to do
 */
#define arch_decomp_setup()
#define arch_decomp_wdog()

#endif
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:30 PDT 2016
Sun, Jul 24, 2016  1:11:47 PM
Mon, Jul 25, 2016  6:18:21 PM
Mon, Jul 25, 2016  7:31:40 PM
Tue, Jul 26, 2016  2:07:54 PM

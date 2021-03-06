/* arch/arm/mach-s3c2410/include/mach/h1940.h
 *
 * Copyright 2006 Ben Dooks <ben-linux@fluff.org>
 *
 * H1940 definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_H1940_H
#define __ASM_ARCH_H1940_H

#define H1940_SUSPEND_CHECKSUM		(0x30003ff8)
#define H1940_SUSPEND_RESUMEAT		(0x30081000)
#define H1940_SUSPEND_CHECK		(0x30080000)

extern void h1940_pm_return(void);
extern int h1940_led_blink_set(unsigned gpio, int state,
	unsigned long *delay_on, unsigned long *delay_off);


#endif /* __ASM_ARCH_H1940_H */
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:33 PDT 2016
Sun, Jul 24, 2016  1:12:09 PM
Mon, Jul 25, 2016  6:18:48 PM
Mon, Jul 25, 2016  7:32:05 PM
Tue, Jul 26, 2016  2:08:18 PM

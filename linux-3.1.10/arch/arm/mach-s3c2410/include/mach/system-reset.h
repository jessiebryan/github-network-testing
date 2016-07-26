/* arch/arm/mach-s3c2410/include/mach/system-reset.h
 *
 * Copyright (c) 2008 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * S3C2410 - System define for arch_reset() function
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include <mach/hardware.h>
#include <plat/watchdog-reset.h>

extern void (*s3c24xx_reset_hook)(void);

static void
arch_reset(char mode, const char *cmd)
{
	if (mode == 's') {
		cpu_reset(0);
	}

	if (s3c24xx_reset_hook)
		s3c24xx_reset_hook();

	arch_wdt_reset();

	/* we'll take a jump through zero as a poor second */
	cpu_reset(0);
}
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:33 PDT 2016
Sun, Jul 24, 2016  1:12:10 PM
Mon, Jul 25, 2016  6:18:49 PM
Mon, Jul 25, 2016  7:32:06 PM

/* linux/arch/arm/mach-s3c6400/include/mach/system.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *      Ben Dooks <ben@simtec.co.uk>
 *      http://armlinux.simtec.co.uk/
 *
 * S3C6400 - system implementation
 */

#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H __FILE__

#include <plat/watchdog-reset.h>

static void arch_idle(void)
{
	/* nothing here yet */
}

static void arch_reset(char mode, const char *cmd)
{
	if (mode != 's')
		arch_wdt_reset();

	/* if all else fails, or mode was for soft, jump to 0 */
	cpu_reset(0);
}

#endif /* __ASM_ARCH_IRQ_H */
Tue Jul 19 12:33:51 PDT 2016
Fri Jul 22 15:38:39 PDT 2016
Sun, Jul 24, 2016  1:20:26 PM
Mon, Jul 25, 2016  6:28:43 PM
Mon, Jul 25, 2016  7:41:49 PM

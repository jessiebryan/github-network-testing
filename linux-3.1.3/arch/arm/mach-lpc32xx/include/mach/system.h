/*
 * arch/arm/mach-lpc32xx/include/mach/system.h
 *
 * Author: Kevin Wells <kevin.wells@nxp.com>
 *
 * Copyright (C) 2010 NXP Semiconductors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

static void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	extern void lpc32xx_watchdog_reset(void);

	switch (mode) {
	case 's':
	case 'h':
		printk(KERN_CRIT "RESET: Rebooting system\n");

		/* Disable interrupts */
		local_irq_disable();

		lpc32xx_watchdog_reset();
		break;

	default:
		/* Do nothing */
		break;
	}

	/* Wait for watchdog to reset system */
	while (1)
		;
}

#endif
Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:42 PDT 2016
Sun, Jul 24, 2016  1:28:23 PM
Mon, Jul 25, 2016  6:38:14 PM

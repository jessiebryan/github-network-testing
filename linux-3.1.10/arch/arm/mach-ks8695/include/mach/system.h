/*
 * arch/arm/mach-s3c2410/include/mach/system.h
 *
 * Copyright (C) 2006 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * KS8695 - System function defines and includes
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <linux/io.h>
#include <mach/regs-timer.h>

static void arch_idle(void)
{
	/*
	 * This should do all the clock switching
	 * and wait for interrupt tricks,
	 */
	cpu_do_idle();

}

static void arch_reset(char mode, const char *cmd)
{
	unsigned int reg;

	if (mode == 's')
		cpu_reset(0);

	/* disable timer0 */
	reg = __raw_readl(KS8695_TMR_VA + KS8695_TMCON);
	__raw_writel(reg & ~TMCON_T0EN, KS8695_TMR_VA + KS8695_TMCON);

	/* enable watchdog mode */
	__raw_writel((10 << 8) | T0TC_WATCHDOG, KS8695_TMR_VA + KS8695_T0TC);

	/* re-enable timer0 */
	__raw_writel(reg | TMCON_T0EN, KS8695_TMR_VA + KS8695_TMCON);
}

#endif
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:31 PDT 2016
Sun, Jul 24, 2016  1:11:52 PM
Mon, Jul 25, 2016  6:18:28 PM
Mon, Jul 25, 2016  7:31:46 PM
Tue, Jul 26, 2016  2:08:00 PM

/*
 * arch/arm/mach-ixp4xx/include/mach/system.h
 *
 * Copyright (C) 2002 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#include <mach/hardware.h>

static inline void arch_idle(void)
{
	/* ixp4xx does not implement the XScale PWRMODE register,
	 * so it must not call cpu_do_idle() here.
	 */
#if 0
	cpu_do_idle();
#endif
}


static inline void arch_reset(char mode, const char *cmd)
{
	if ( 1 && mode == 's') {
		/* Jump into ROM at address 0 */
		cpu_reset(0);
	} else {
		/* Use on-chip reset capability */

		/* set the "key" register to enable access to
		 * "timer" and "enable" registers
		 */
		*IXP4XX_OSWK = IXP4XX_WDT_KEY;

		/* write 0 to the timer register for an immediate reset */
		*IXP4XX_OSWT = 0;

		*IXP4XX_OSWE = IXP4XX_WDT_RESET_ENABLE | IXP4XX_WDT_COUNT_ENABLE;
	}
}

Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:36 PDT 2016
Sun, Jul 24, 2016  1:20:05 PM
Mon, Jul 25, 2016  6:28:18 PM
Mon, Jul 25, 2016  7:41:25 PM
Tue, Jul 26, 2016  2:17:09 PM

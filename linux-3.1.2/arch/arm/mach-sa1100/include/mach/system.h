/*
 * arch/arm/mach-sa1100/include/mach/system.h
 *
 * Copyright (c) 1999 Nicolas Pitre <nico@fluxnic.net>
 */
#include <mach/hardware.h>

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	if (mode == 's') {
		/* Jump into ROM at address 0 */
		cpu_reset(0);
	} else {
		/* Use on-chip reset capability */
		RSRR = RSRR_SWR;
	}
}
Tue Jul 19 12:33:51 PDT 2016
Fri Jul 22 15:38:39 PDT 2016
Sun, Jul 24, 2016  1:20:29 PM
Mon, Jul 25, 2016  6:28:47 PM
Mon, Jul 25, 2016  7:41:53 PM

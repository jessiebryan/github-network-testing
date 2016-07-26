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
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:34 PDT 2016
Sun, Jul 24, 2016  1:12:15 PM
Mon, Jul 25, 2016  6:18:54 PM
Mon, Jul 25, 2016  7:32:11 PM

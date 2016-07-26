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
Tue Jul 19 12:35:32 PDT 2016
Fri Jul 22 15:40:53 PDT 2016
Sun, Jul 24, 2016  1:37:00 PM
Mon, Jul 25, 2016  8:01:18 PM
Tue, Jul 26, 2016  2:35:52 PM

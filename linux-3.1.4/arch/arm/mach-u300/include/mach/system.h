/*
 *
 * arch/arm/mach-u300/include/mach/system.h
 *
 *
 * Copyright (C) 2007-2009 ST-Ericsson AB
 * License terms: GNU General Public License (GPL) version 2
 * System shutdown and reset functions.
 * Author: Linus Walleij <linus.walleij@stericsson.com>
 */
#include <mach/hardware.h>
#include <asm/io.h>
#include <asm/hardware/vic.h>
#include <asm/irq.h>

/* Forward declare this function from the watchdog */
void coh901327_watchdog_reset(void);

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static void arch_reset(char mode, const char *cmd)
{
	switch (mode) {
	case 's':
	case 'h':
		printk(KERN_CRIT "RESET: shutting down/rebooting system\n");
		/* Disable interrupts */
		local_irq_disable();
#ifdef CONFIG_COH901327_WATCHDOG
		coh901327_watchdog_reset();
#endif
		break;
	default:
		/* Do nothing */
		break;
	}
	/* Wait for system do die/reset. */
	while (1);
}
Tue Jul 19 12:35:32 PDT 2016
Fri Jul 22 15:40:54 PDT 2016
Sun, Jul 24, 2016  1:37:04 PM
Mon, Jul 25, 2016  8:01:22 PM
Tue, Jul 26, 2016  2:35:57 PM

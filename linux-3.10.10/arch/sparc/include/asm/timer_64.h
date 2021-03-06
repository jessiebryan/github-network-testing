/* timer.h: System timer definitions for sun5.
 *
 * Copyright (C) 1997, 2008 David S. Miller (davem@davemloft.net)
 */

#ifndef _SPARC64_TIMER_H
#define _SPARC64_TIMER_H

#include <linux/types.h>
#include <linux/init.h>

struct sparc64_tick_ops {
	unsigned long long (*get_tick)(void);
	int (*add_compare)(unsigned long);
	unsigned long softint_mask;
	void (*disable_irq)(void);

	void (*init_tick)(void);
	unsigned long (*add_tick)(unsigned long);

	char *name;
};

extern struct sparc64_tick_ops *tick_ops;

extern unsigned long sparc64_get_clock_tick(unsigned int cpu);
extern void setup_sparc64_timer(void);
extern void __init time_init(void);

#endif /* _SPARC64_TIMER_H */
Tue Jul 19 12:39:17 PDT 2016
Fri Jul 22 15:48:08 PDT 2016
Sun, Jul 24, 2016  2:29:57 PM
Mon, Jul 25, 2016  9:02:26 PM

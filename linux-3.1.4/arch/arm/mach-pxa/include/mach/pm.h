/*
 * Copyright (c) 2005 Richard Purdie
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#include <linux/suspend.h>

struct pxa_cpu_pm_fns {
	int	save_count;
	void	(*save)(unsigned long *);
	void	(*restore)(unsigned long *);
	int	(*valid)(suspend_state_t state);
	void	(*enter)(suspend_state_t state);
	int	(*prepare)(void);
	void	(*finish)(void);
};

extern struct pxa_cpu_pm_fns *pxa_cpu_pm_fns;

/* sleep.S */
extern int pxa25x_finish_suspend(unsigned long);
extern int pxa27x_finish_suspend(unsigned long);

extern int pxa_pm_enter(suspend_state_t state);
extern int pxa_pm_prepare(void);
extern void pxa_pm_finish(void);

/* NOTE: this is for PM debugging on Lubbock,  it's really a big
 * ugly, but let's keep the crap minimum here, instead of direct
 * accessing the LUBBOCK CPLD registers in arch/arm/mach-pxa/pm.c
 */
#ifdef CONFIG_ARCH_LUBBOCK
extern void lubbock_set_hexled(uint32_t value);
#else
#define lubbock_set_hexled(x)
#endif
Tue Jul 19 12:35:31 PDT 2016
Fri Jul 22 15:40:52 PDT 2016
Sun, Jul 24, 2016  1:36:51 PM
Mon, Jul 25, 2016  8:01:08 PM
Tue, Jul 26, 2016  2:35:43 PM

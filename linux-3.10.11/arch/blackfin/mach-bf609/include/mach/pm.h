/*
 * Blackfin bf609 power management
 *
 * Copyright 2011 Analog Devices Inc.
 *
 * Licensed under the GPL-2
 */

#ifndef __MACH_BF609_PM_H__
#define __MACH_BF609_PM_H__

#include <linux/suspend.h>

extern int bfin609_pm_enter(suspend_state_t state);
extern int bf609_pm_prepare(void);
extern void bf609_pm_finish(void);

void bf609_hibernate(void);
void bfin_sec_raise_irq(unsigned int sid);
void coreb_enable(void);

int bf609_nor_flash_init(void);
void bf609_nor_flash_exit(void);
#endif
Tue Jul 19 12:41:46 PDT 2016
Fri Jul 22 15:52:57 PDT 2016
Sun, Jul 24, 2016  3:04:34 PM
Mon, Jul 25, 2016  9:41:19 PM

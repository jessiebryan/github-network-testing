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
Tue Jul 19 12:53:26 PDT 2016
Fri Jul 22 16:14:45 PDT 2016
Sun, Jul 24, 2016  5:51:09 PM
Tue, Jul 26, 2016 12:46:14 AM

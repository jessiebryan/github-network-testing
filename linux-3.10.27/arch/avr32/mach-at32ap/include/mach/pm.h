/*
 * AVR32 AP Power Management.
 *
 * Copyright (C) 2008 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_AVR32_ARCH_PM_H
#define __ASM_AVR32_ARCH_PM_H

/* Possible arguments to the "sleep" instruction */
#define CPU_SLEEP_IDLE		0
#define CPU_SLEEP_FROZEN	1
#define CPU_SLEEP_STANDBY	2
#define CPU_SLEEP_STOP		3
#define CPU_SLEEP_STATIC	5

#ifndef __ASSEMBLY__
extern void cpu_enter_idle(void);
extern void cpu_enter_standby(unsigned long sdramc_base);

void intc_set_suspend_handler(unsigned long offset);
#endif

#endif /* __ASM_AVR32_ARCH_PM_H */
Tue Jul 19 12:52:07 PDT 2016
Fri Jul 22 16:12:13 PDT 2016
Sun, Jul 24, 2016  5:32:21 PM
Tue, Jul 26, 2016 12:25:31 AM

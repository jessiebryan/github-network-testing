/*
 *  linux/arch/arm/plat-versatile/include/plat/platsmp.h
 *
 *  Copyright (C) 2011 ARM Ltd.
 *  All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

extern void versatile_secondary_startup(void);
extern void versatile_secondary_init(unsigned int cpu);
extern int  versatile_boot_secondary(unsigned int cpu, struct task_struct *idle);
Tue Jul 19 12:46:58 PDT 2016
Fri Jul 22 16:02:24 PDT 2016
Sun, Jul 24, 2016  4:18:02 PM
Mon, Jul 25, 2016 11:03:12 PM

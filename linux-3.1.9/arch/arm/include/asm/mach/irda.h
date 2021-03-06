/*
 *  arch/arm/include/asm/mach/irda.h
 *
 *  Copyright (C) 2004 Russell King.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_ARM_MACH_IRDA_H
#define __ASM_ARM_MACH_IRDA_H

struct irda_platform_data {
	int (*startup)(struct device *);
	void (*shutdown)(struct device *);
	int (*set_power)(struct device *, unsigned int state);
	void (*set_speed)(struct device *, unsigned int speed);
};

#endif
Tue Jul 19 12:37:50 PDT 2016
Fri Jul 22 15:45:17 PDT 2016
Sun, Jul 24, 2016  2:09:18 PM
Mon, Jul 25, 2016  8:39:28 PM

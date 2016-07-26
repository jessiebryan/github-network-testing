/*
 * Copyright 2012 Creative Product Design
 * Marc Reilly <marc@cpdesign.com.au>
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation.
 */
#ifndef __DRIVERS_MFD_MC13XXX_H
#define __DRIVERS_MFD_MC13XXX_H

#include <linux/mutex.h>
#include <linux/regmap.h>
#include <linux/mfd/mc13xxx.h>

#define MC13XXX_NUMREGS 0x3f

struct mc13xxx;

struct mc13xxx_variant {
	const char *name;
	void (*print_revision)(struct mc13xxx *mc13xxx, u32 revision);
};

extern struct mc13xxx_variant
		mc13xxx_variant_mc13783,
		mc13xxx_variant_mc13892,
		mc13xxx_variant_mc34708;

struct mc13xxx {
	struct regmap *regmap;

	struct device *dev;
	const struct mc13xxx_variant *variant;

	struct mutex lock;
	int irq;
	int flags;

	irq_handler_t irqhandler[MC13XXX_NUM_IRQ];
	void *irqdata[MC13XXX_NUM_IRQ];

	int adcflags;
};

int mc13xxx_common_init(struct mc13xxx *mc13xxx,
		struct mc13xxx_platform_data *pdata, int irq);

void mc13xxx_common_cleanup(struct mc13xxx *mc13xxx);

#endif /* __DRIVERS_MFD_MC13XXX_H */
Tue Jul 19 12:48:31 PDT 2016
Fri Jul 22 16:05:18 PDT 2016
Sun, Jul 24, 2016  4:40:31 PM
Mon, Jul 25, 2016 11:28:09 PM

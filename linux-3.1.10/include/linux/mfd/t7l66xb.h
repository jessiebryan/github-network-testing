/*
 * This file contains the definitions for the T7L66XB
 *
 * (C) Copyright 2005 Ian Molton <spyro@f2s.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */
#ifndef MFD_T7L66XB_H
#define MFD_T7L66XB_H

#include <linux/mfd/core.h>
#include <linux/mfd/tmio.h>

struct t7l66xb_platform_data {
	int (*enable)(struct platform_device *dev);
	int (*disable)(struct platform_device *dev);
	int (*suspend)(struct platform_device *dev);
	int (*resume)(struct platform_device *dev);

	int irq_base; /* The base for subdevice irqs */

	struct tmio_nand_data *nand_data;
};


#define IRQ_T7L66XB_MMC        (1)
#define IRQ_T7L66XB_NAND       (3)

#define T7L66XB_NR_IRQS	8

#endif
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:22 PDT 2016
Sun, Jul 24, 2016  1:18:18 PM
Mon, Jul 25, 2016  6:26:09 PM
Mon, Jul 25, 2016  7:39:18 PM
Tue, Jul 26, 2016  2:15:09 PM

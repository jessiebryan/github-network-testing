/*
 *  arch/arm/plat-omap/include/mach/irda.h
 *
 *  Copyright (C) 2005-2006 Komal Shah <komal_shah802003@yahoo.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef ASMARM_ARCH_IRDA_H
#define ASMARM_ARCH_IRDA_H

/* board specific transceiver capabilities */

#define IR_SEL		1	/* Selects IrDA */
#define IR_SIRMODE	2
#define IR_FIRMODE	4
#define IR_MIRMODE	8

struct omap_irda_config {
	int transceiver_cap;
	int (*transceiver_mode)(struct device *dev, int mode);
	int (*select_irda)(struct device *dev, int state);
	int rx_channel;
	int tx_channel;
	unsigned long dest_start;
	unsigned long src_start;
	int tx_trigger;
	int rx_trigger;
	int mode;
};

#endif
Tue Jul 19 12:33:52 PDT 2016
Fri Jul 22 15:38:41 PDT 2016
Sun, Jul 24, 2016  1:20:41 PM
Mon, Jul 25, 2016  6:29:01 PM
Mon, Jul 25, 2016  7:42:07 PM
Tue, Jul 26, 2016  2:17:50 PM

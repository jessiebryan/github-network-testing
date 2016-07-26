/*
 * arch/arm/plat-omap/include/plat/gpmc-smsc911x.h
 *
 * Copyright (C) 2009 Li-Pro.Net
 * Stephan Linz <linz@li-pro.net>
 *
 * Modified from arch/arm/plat-omap/include/plat/gpmc-smc91x.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_OMAP_GPMC_SMSC911X_H__

struct omap_smsc911x_platform_data {
	int	id;
	int	cs;
	int	gpio_irq;
	int	gpio_reset;
	u32	flags;
};

#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)

extern void gpmc_smsc911x_init(struct omap_smsc911x_platform_data *d);

#else

static inline void gpmc_smsc911x_init(struct omap_smsc911x_platform_data *d)
{
}

#endif
#endif
Tue Jul 19 12:33:52 PDT 2016
Fri Jul 22 15:38:41 PDT 2016
Sun, Jul 24, 2016  1:20:41 PM
Mon, Jul 25, 2016  6:29:01 PM
Mon, Jul 25, 2016  7:42:06 PM
Tue, Jul 26, 2016  2:17:50 PM

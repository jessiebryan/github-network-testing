/*
 * Copyright (C) 2011 Samsung Electronics Co.Ltd
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __MACH_EXYNOS_OHCI_H
#define __MACH_EXYNOS_OHCI_H

struct exynos4_ohci_platdata {
	int (*phy_init)(struct platform_device *pdev, int type);
	int (*phy_exit)(struct platform_device *pdev, int type);
};

extern void exynos4_ohci_set_platdata(struct exynos4_ohci_platdata *pd);

#endif /* __MACH_EXYNOS_OHCI_H */
Tue Jul 19 12:43:38 PDT 2016
Fri Jul 22 15:56:08 PDT 2016
Sun, Jul 24, 2016  3:29:24 PM
Mon, Jul 25, 2016 10:09:07 PM

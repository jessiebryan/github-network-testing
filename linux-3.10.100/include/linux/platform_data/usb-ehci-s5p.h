/*
 * Copyright (C) 2011 Samsung Electronics Co.Ltd
 * Author: Joonyoung Shim <jy0922.shim@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __PLAT_SAMSUNG_EHCI_H
#define __PLAT_SAMSUNG_EHCI_H __FILE__

struct s5p_ehci_platdata {
	int (*phy_init)(struct platform_device *pdev, int type);
	int (*phy_exit)(struct platform_device *pdev, int type);
};

extern void s5p_ehci_set_platdata(struct s5p_ehci_platdata *pd);

#endif /* __PLAT_SAMSUNG_EHCI_H */
Tue Jul 19 12:40:14 PDT 2016
Fri Jul 22 15:50:00 PDT 2016
Sun, Jul 24, 2016  2:43:20 PM
Mon, Jul 25, 2016  9:17:19 PM

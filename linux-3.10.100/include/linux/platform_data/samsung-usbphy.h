/*
 * Copyright (C) 2012 Samsung Electronics Co.Ltd
 *		http://www.samsung.com/
 * Author: Praveen Paneri <p.paneri@samsung.com>
 *
 * Defines platform data for samsung usb phy driver.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __SAMSUNG_USBPHY_PLATFORM_H
#define __SAMSUNG_USBPHY_PLATFORM_H

/**
 * samsung_usbphy_data - Platform data for USB PHY driver.
 * @pmu_isolation: Function to control usb phy isolation in PMU.
 */
struct samsung_usbphy_data {
	void (*pmu_isolation)(int on);
};

extern void samsung_usbphy_set_pdata(struct samsung_usbphy_data *pd);

#endif /* __SAMSUNG_USBPHY_PLATFORM_H */
Tue Jul 19 12:40:13 PDT 2016
Fri Jul 22 15:50:00 PDT 2016
Sun, Jul 24, 2016  2:43:19 PM
Mon, Jul 25, 2016  9:17:18 PM

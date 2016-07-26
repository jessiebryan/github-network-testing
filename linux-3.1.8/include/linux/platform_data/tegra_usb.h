/*
 * Copyright (C) 2010 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _TEGRA_USB_H_
#define _TEGRA_USB_H_

enum tegra_usb_operating_modes {
	TEGRA_USB_DEVICE,
	TEGRA_USB_HOST,
	TEGRA_USB_OTG,
};

struct tegra_ehci_platform_data {
	enum tegra_usb_operating_modes operating_mode;
	/* power down the phy on bus suspend */
	int power_down_on_bus_suspend;
	void *phy_config;
};

#endif /* _TEGRA_USB_H_ */
Tue Jul 19 12:37:44 PDT 2016
Fri Jul 22 15:45:06 PDT 2016
Sun, Jul 24, 2016  2:08:01 PM
Mon, Jul 25, 2016  8:38:01 PM

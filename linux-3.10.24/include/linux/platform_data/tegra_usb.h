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
	int vbus_gpio;
};

#endif /* _TEGRA_USB_H_ */
Tue Jul 19 12:50:38 PDT 2016
Fri Jul 22 16:09:18 PDT 2016
Sun, Jul 24, 2016  5:11:03 PM
Tue, Jul 26, 2016 12:02:00 AM

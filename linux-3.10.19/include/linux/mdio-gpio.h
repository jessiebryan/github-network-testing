/*
 * MDIO-GPIO bus platform data structures
 *
 * Copyright (C) 2008, Paulius Zaleckas <paulius.zaleckas@teltonika.lt>
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */

#ifndef __LINUX_MDIO_GPIO_H
#define __LINUX_MDIO_GPIO_H

#include <linux/mdio-bitbang.h>

struct mdio_gpio_platform_data {
	/* GPIO numbers for bus pins */
	unsigned int mdc;
	unsigned int mdio;

	unsigned int phy_mask;
	int irqs[PHY_MAX_ADDR];
	/* reset callback */
	int (*reset)(struct mii_bus *bus);
};

#endif /* __LINUX_MDIO_GPIO_H */
Tue Jul 19 12:47:24 PDT 2016
Fri Jul 22 16:03:13 PDT 2016
Sun, Jul 24, 2016  4:24:26 PM
Mon, Jul 25, 2016 11:10:16 PM

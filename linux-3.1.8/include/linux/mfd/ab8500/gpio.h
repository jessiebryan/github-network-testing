/*
 * Copyright ST-Ericsson 2010.
 *
 * Author: Bibek Basu <bibek.basu@stericsson.com>
 * Licensed under GPLv2.
 */

#ifndef _AB8500_GPIO_H
#define _AB8500_GPIO_H

/*
 * Platform data to register a block: only the initial gpio/irq number.
 */

struct ab8500_gpio_platform_data {
	int gpio_base;
	u32 irq_base;
	u8  config_reg[7];
};

#endif /* _AB8500_GPIO_H */
Tue Jul 19 12:37:42 PDT 2016
Fri Jul 22 15:45:04 PDT 2016
Sun, Jul 24, 2016  2:07:46 PM
Mon, Jul 25, 2016  8:37:44 PM

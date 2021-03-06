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
 * Array sizes are large enough to contain all AB8500 and AB9540 GPIO
 * registers.
 */

struct abx500_gpio_platform_data {
	int gpio_base;
};

enum abx500_gpio_pull_updown {
	ABX500_GPIO_PULL_DOWN = 0x0,
	ABX500_GPIO_PULL_NONE = 0x1,
	ABX500_GPIO_PULL_UP = 0x3,
};

enum abx500_gpio_vinsel {
	ABX500_GPIO_VINSEL_VBAT = 0x0,
	ABX500_GPIO_VINSEL_VIN_1V8 = 0x1,
	ABX500_GPIO_VINSEL_VDD_BIF = 0x2,
};

#endif /* _AB8500_GPIO_H */
Tue Jul 19 12:49:58 PDT 2016
Fri Jul 22 16:08:02 PDT 2016
Sun, Jul 24, 2016  5:01:23 PM
Mon, Jul 25, 2016 11:51:23 PM

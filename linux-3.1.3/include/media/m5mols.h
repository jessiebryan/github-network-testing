/*
 * Driver header for M-5MOLS 8M Pixel camera sensor with ISP
 *
 * Copyright (C) 2011 Samsung Electronics Co., Ltd.
 * Author: HeungJun Kim <riverful.kim@samsung.com>
 *
 * Copyright (C) 2009 Samsung Electronics Co., Ltd.
 * Author: Dongsoo Nathaniel Kim <dongsoo45.kim@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef MEDIA_M5MOLS_H
#define MEDIA_M5MOLS_H

/**
 * struct m5mols_platform_data - platform data for M-5MOLS driver
 * @irq:	GPIO getting the irq pin of M-5MOLS
 * @gpio_reset:	GPIO driving the reset pin of M-5MOLS
 * @reset_polarity: active state for gpio_rst pin, 0 or 1
 * @set_power:	an additional callback to the board setup code
 *		to be called after enabling and before disabling
 *		the sensor's supply regulators
 */
struct m5mols_platform_data {
	int irq;
	int gpio_reset;
	u8 reset_polarity;
	int (*set_power)(struct device *dev, int on);
};

#endif	/* MEDIA_M5MOLS_H */
Tue Jul 19 12:35:25 PDT 2016
Fri Jul 22 15:40:40 PDT 2016
Sun, Jul 24, 2016  1:35:22 PM
Mon, Jul 25, 2016  7:59:22 PM
Tue, Jul 26, 2016  2:34:04 PM

/*
 * Support for TI bq24022 (bqTINY-II) Dual Input (USB/AC Adpater)
 * 1-Cell Li-Ion Charger connected via GPIOs.
 *
 * Copyright (c) 2008 Philipp Zabel
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

struct regulator_init_data;

/**
 * bq24022_mach_info - platform data for bq24022
 * @gpio_nce: GPIO line connected to the nCE pin, used to enable / disable charging
 * @gpio_iset2: GPIO line connected to the ISET2 pin, used to limit charging current to 100 mA / 500 mA
 */
struct bq24022_mach_info {
	int gpio_nce;
	int gpio_iset2;
	struct regulator_init_data *init_data;
};
Tue Jul 19 12:33:41 PDT 2016
Fri Jul 22 15:38:24 PDT 2016
Sun, Jul 24, 2016  1:18:35 PM
Mon, Jul 25, 2016  6:26:29 PM
Mon, Jul 25, 2016  7:39:38 PM

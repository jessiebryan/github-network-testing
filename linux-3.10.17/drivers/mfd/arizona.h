/*
 * wm5102.h  --  WM5102 MFD internals
 *
 * Copyright 2012 Wolfson Microelectronics plc
 *
 * Author: Mark Brown <broonie@opensource.wolfsonmicro.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _WM5102_H
#define _WM5102_H

#include <linux/regmap.h>
#include <linux/pm.h>

struct wm_arizona;

extern const struct regmap_config wm5102_i2c_regmap;
extern const struct regmap_config wm5102_spi_regmap;

extern const struct regmap_config wm5110_i2c_regmap;
extern const struct regmap_config wm5110_spi_regmap;

extern const struct dev_pm_ops arizona_pm_ops;

extern const struct regmap_irq_chip wm5102_aod;
extern const struct regmap_irq_chip wm5102_irq;

extern const struct regmap_irq_chip wm5110_aod;
extern const struct regmap_irq_chip wm5110_irq;

int arizona_dev_init(struct arizona *arizona);
int arizona_dev_exit(struct arizona *arizona);
int arizona_irq_init(struct arizona *arizona);
int arizona_irq_exit(struct arizona *arizona);

#endif
Tue Jul 19 12:45:58 PDT 2016
Fri Jul 22 16:00:31 PDT 2016
Sun, Jul 24, 2016  4:03:36 PM
Mon, Jul 25, 2016 10:47:09 PM

/*
 * SuperH Video Output Unit (VOU) driver header
 *
 * Copyright (C) 2010, Guennadi Liakhovetski <g.liakhovetski@gmx.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef SH_VOU_H
#define SH_VOU_H

#include <linux/i2c.h>

/* Bus flags */
#define SH_VOU_PCLK_FALLING	(1 << 0)
#define SH_VOU_HSYNC_LOW	(1 << 1)
#define SH_VOU_VSYNC_LOW	(1 << 2)

enum sh_vou_bus_fmt {
	SH_VOU_BUS_8BIT,
	SH_VOU_BUS_16BIT,
	SH_VOU_BUS_BT656,
};

struct sh_vou_pdata {
	enum sh_vou_bus_fmt bus_fmt;
	int i2c_adap;
	struct i2c_board_info *board_info;
	unsigned long flags;
};

#endif
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:27 PDT 2016
Sun, Jul 24, 2016  1:18:52 PM
Mon, Jul 25, 2016  6:26:50 PM

/*
 * Atmel maXTouch Touchscreen driver
 *
 * Copyright (C) 2010 Samsung Electronics Co.Ltd
 * Author: Joonyoung Shim <jy0922.shim@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __LINUX_ATMEL_MXT_TS_H
#define __LINUX_ATMEL_MXT_TS_H

#include <linux/types.h>

/* For key_map array */
#define MXT_NUM_GPIO		4

/* Orient */
#define MXT_NORMAL		0x0
#define MXT_DIAGONAL		0x1
#define MXT_HORIZONTAL_FLIP	0x2
#define MXT_ROTATED_90_COUNTER	0x3
#define MXT_VERTICAL_FLIP	0x4
#define MXT_ROTATED_90		0x5
#define MXT_ROTATED_180		0x6
#define MXT_DIAGONAL_COUNTER	0x7

/* The platform data for the Atmel maXTouch touchscreen driver */
struct mxt_platform_data {
	const u8 *config;
	size_t config_length;

	unsigned int x_line;
	unsigned int y_line;
	unsigned int x_size;
	unsigned int y_size;
	unsigned int blen;
	unsigned int threshold;
	unsigned int voltage;
	unsigned char orient;
	unsigned long irqflags;
	bool is_tp;
	const unsigned int key_map[MXT_NUM_GPIO];
};

#endif /* __LINUX_ATMEL_MXT_TS_H */
Tue Jul 19 12:44:15 PDT 2016
Fri Jul 22 15:57:17 PDT 2016
Sun, Jul 24, 2016  3:38:07 PM
Mon, Jul 25, 2016 10:18:48 PM

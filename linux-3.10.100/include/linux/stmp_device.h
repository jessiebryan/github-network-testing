/*
 * basic functions for devices following the "stmp" style register layout
 *
 * Copyright (C) 2011 Wolfram Sang, Pengutronix e.K.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __STMP_DEVICE_H__
#define __STMP_DEVICE_H__

#define STMP_OFFSET_REG_SET	0x4
#define STMP_OFFSET_REG_CLR	0x8
#define STMP_OFFSET_REG_TOG	0xc

extern int stmp_reset_block(void __iomem *);
#endif /* __STMP_DEVICE_H__ */
Tue Jul 19 12:40:14 PDT 2016
Fri Jul 22 15:50:01 PDT 2016
Sun, Jul 24, 2016  2:43:30 PM
Mon, Jul 25, 2016  9:17:30 PM

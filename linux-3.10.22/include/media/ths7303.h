/*
 * Copyright (C) 2013 Texas Instruments Inc
 *
 * Copyright 2013 Cisco Systems, Inc. and/or its affiliates.
 *
 * Contributors:
 *     Hans Verkuil <hans.verkuil@cisco.com>
 *     Lad, Prabhakar <prabhakar.lad@ti.com>
 *     Martin Bugge <marbugge@cisco.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#ifndef THS7353_H
#define THS7353_H

/**
 * struct ths7303_platform_data - Platform dependent data
 * @ch_1: Bias value for channel one.
 * @ch_2: Bias value for channel two.
 * @ch_3: Bias value for channel three.
 * @init_enable: initalize on init.
 */
struct ths7303_platform_data {
	u8 ch_1;
	u8 ch_2;
	u8 ch_3;
	u8 init_enable;
};

#endif
Tue Jul 19 12:49:23 PDT 2016
Fri Jul 22 16:06:55 PDT 2016
Sun, Jul 24, 2016  4:52:49 PM
Mon, Jul 25, 2016 11:41:54 PM

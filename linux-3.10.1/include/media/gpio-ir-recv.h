/* Copyright (c) 2012, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __GPIO_IR_RECV_H__
#define __GPIO_IR_RECV_H__

struct gpio_ir_recv_platform_data {
	int		gpio_nr;
	bool		active_low;
	u64		allowed_protos;
	const char	*map_name;
};

#endif /* __GPIO_IR_RECV_H__ */

Tue Jul 19 12:38:59 PDT 2016
Fri Jul 22 15:47:29 PDT 2016
Sun, Jul 24, 2016  2:25:16 PM
Mon, Jul 25, 2016  8:57:12 PM

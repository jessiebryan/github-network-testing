/*
 * omap_ocp2scp.h -- ocp2scp header file
 *
 * Copyright (C) 2012 Texas Instruments Incorporated - http://www.ti.com
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Author: Kishon Vijay Abraham I <kishon@ti.com>
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __DRIVERS_OMAP_OCP2SCP_H
#define __DRIVERS_OMAP_OCP2SCP_H

struct omap_ocp2scp_dev {
	const char			*drv_name;
	struct resource			*res;
};

struct omap_ocp2scp_platform_data {
	int				dev_cnt;
	struct omap_ocp2scp_dev		**devices;
};
#endif /* __DRIVERS_OMAP_OCP2SCP_H */
Tue Jul 19 12:49:59 PDT 2016
Fri Jul 22 16:08:05 PDT 2016
Sun, Jul 24, 2016  5:01:41 PM
Mon, Jul 25, 2016 11:51:43 PM

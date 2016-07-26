/*
 * System Control Driver
 *
 * Copyright (C) 2012 Freescale Semiconductor, Inc.
 * Copyright (C) 2012 Linaro Ltd.
 *
 * Author: Dong Aisheng <dong.aisheng@linaro.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __LINUX_MFD_SYSCON_H__
#define __LINUX_MFD_SYSCON_H__

struct device_node;

extern struct regmap *syscon_node_to_regmap(struct device_node *np);
extern struct regmap *syscon_regmap_lookup_by_compatible(const char *s);
extern struct regmap *syscon_regmap_lookup_by_pdevname(const char *s);
extern struct regmap *syscon_regmap_lookup_by_phandle(
					struct device_node *np,
					const char *property);
#endif /* __LINUX_MFD_SYSCON_H__ */
Tue Jul 19 12:53:13 PDT 2016
Fri Jul 22 16:14:20 PDT 2016
Sun, Jul 24, 2016  5:48:01 PM
Tue, Jul 26, 2016 12:42:46 AM

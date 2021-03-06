/*
 * OpenFirmware helpers for memory drivers
 *
 * Copyright (C) 2012 Texas Instruments, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __LINUX_MEMORY_OF_REG_H
#define __LINUX_MEMORY_OF_REG_H

#if defined(CONFIG_OF) && defined(CONFIG_DDR)
extern const struct lpddr2_min_tck *of_get_min_tck(struct device_node *np,
		struct device *dev);
extern const struct lpddr2_timings
	*of_get_ddr_timings(struct device_node *np_ddr, struct device *dev,
	u32 device_type, u32 *nr_frequencies);
#else
static inline const struct lpddr2_min_tck
	*of_get_min_tck(struct device_node *np, struct device *dev)
{
	return NULL;
}

static inline const struct lpddr2_timings
	*of_get_ddr_timings(struct device_node *np_ddr, struct device *dev,
	u32 device_type, u32 *nr_frequencies)
{
	return NULL;
}
#endif /* CONFIG_OF && CONFIG_DDR */

#endif /* __LINUX_MEMORY_OF_REG_ */
Tue Jul 19 12:49:09 PDT 2016
Fri Jul 22 16:06:31 PDT 2016
Sun, Jul 24, 2016  4:49:44 PM
Mon, Jul 25, 2016 11:38:26 PM

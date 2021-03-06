/*
 * include/linux/firmware-map.h:
 *  Copyright (C) 2008 SUSE LINUX Products GmbH
 *  by Bernhard Walle <bernhard.walle@gmx.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License v2.0 as published by
 * the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef _LINUX_FIRMWARE_MAP_H
#define _LINUX_FIRMWARE_MAP_H

#include <linux/list.h>

/*
 * provide a dummy interface if CONFIG_FIRMWARE_MEMMAP is disabled
 */
#ifdef CONFIG_FIRMWARE_MEMMAP

int firmware_map_add_early(u64 start, u64 end, const char *type);
int firmware_map_add_hotplug(u64 start, u64 end, const char *type);

#else /* CONFIG_FIRMWARE_MEMMAP */

static inline int firmware_map_add_early(u64 start, u64 end, const char *type)
{
	return 0;
}

static inline int firmware_map_add_hotplug(u64 start, u64 end, const char *type)
{
	return 0;
}

#endif /* CONFIG_FIRMWARE_MEMMAP */

#endif /* _LINUX_FIRMWARE_MAP_H */
Tue Jul 19 12:38:19 PDT 2016
Fri Jul 22 15:46:09 PDT 2016
Sun, Jul 24, 2016  2:15:47 PM
Mon, Jul 25, 2016  8:46:38 PM

/*
 * For boards with physically mapped flash and using
 * drivers/mtd/maps/physmap.c mapping driver.
 *
 * Copyright (C) 2003 MontaVista Software Inc.
 * Author: Jun Sun, jsun@mvista.com or jsun@junsun.net
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 *
 */

#ifndef __LINUX_MTD_PHYSMAP__
#define __LINUX_MTD_PHYSMAP__

#include <linux/mtd/mtd.h>
#include <linux/mtd/partitions.h>

struct map_info;
struct platform_device;

struct physmap_flash_data {
	unsigned int		width;
	int			(*init)(struct platform_device *);
	void			(*exit)(struct platform_device *);
	void			(*set_vpp)(struct platform_device *, int);
	unsigned int		nr_parts;
	unsigned int		pfow_base;
	char                    *probe_type;
	struct mtd_partition	*parts;
};

/*
 * Board needs to specify the exact mapping during their setup time.
 */
void physmap_configure(unsigned long addr, unsigned long size,
		int bankwidth, void (*set_vpp)(struct map_info *, int) );

/*
 * Machines that wish to do flash partition may want to call this function in
 * their setup routine.
 *
 *	physmap_set_partitions(mypartitions, num_parts);
 *
 * Note that one can always override this hard-coded partition with
 * command line partition (you need to enable CONFIG_MTD_CMDLINE_PARTS).
 */
void physmap_set_partitions(struct mtd_partition *parts, int num_parts);

#endif /* __LINUX_MTD_PHYSMAP__ */
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:23 PDT 2016
Sun, Jul 24, 2016  1:18:22 PM
Mon, Jul 25, 2016  6:26:14 PM
Mon, Jul 25, 2016  7:39:23 PM
Tue, Jul 26, 2016  2:15:14 PM

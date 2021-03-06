/*
 * AHCI SATA platform driver
 *
 * Copyright 2004-2005  Red Hat, Inc.
 *   Jeff Garzik <jgarzik@pobox.com>
 * Copyright 2010  MontaVista Software, LLC.
 *   Anton Vorontsov <avorontsov@ru.mvista.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 */

#ifndef _AHCI_PLATFORM_H
#define _AHCI_PLATFORM_H

#include <linux/compiler.h>

struct device;
struct ata_port_info;

struct ahci_platform_data {
	int (*init)(struct device *dev, void __iomem *addr);
	void (*exit)(struct device *dev);
	int (*suspend)(struct device *dev);
	int (*resume)(struct device *dev);
	const struct ata_port_info *ata_port_info;
	unsigned int force_port_map;
	unsigned int mask_port_map;
};

#endif /* _AHCI_PLATFORM_H */
Tue Jul 19 12:48:39 PDT 2016
Fri Jul 22 16:05:34 PDT 2016
Sun, Jul 24, 2016  4:42:28 PM
Mon, Jul 25, 2016 11:30:19 PM

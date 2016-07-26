/*
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 *  Copyright (C) 2010 John Crispin <blogic@openwrt.org>
 */

#ifndef _LTQ_DEVICES_H__
#define _LTQ_DEVICES_H__

#include <lantiq_platform.h>
#include <linux/mtd/physmap.h>

#define IRQ_RES(resname, irq) \
	{.name = #resname, .start = (irq), .flags = IORESOURCE_IRQ}

extern void ltq_register_nor(struct physmap_flash_data *data);
extern void ltq_register_wdt(void);
extern void ltq_register_asc(int port);
extern void ltq_register_pci(struct ltq_pci_data *data);

#endif
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:47 PDT 2016
Sun, Jul 24, 2016  1:13:52 PM
Mon, Jul 25, 2016  6:20:51 PM
Mon, Jul 25, 2016  7:34:06 PM
Tue, Jul 26, 2016  2:10:11 PM

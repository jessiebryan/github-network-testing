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
Tue Jul 19 12:33:58 PDT 2016
Fri Jul 22 15:38:52 PDT 2016
Sun, Jul 24, 2016  1:22:07 PM
Mon, Jul 25, 2016  6:30:44 PM
Mon, Jul 25, 2016  7:43:47 PM

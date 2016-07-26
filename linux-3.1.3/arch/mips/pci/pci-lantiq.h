/*
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 *  Copyright (C) 2010 John Crispin <blogic@openwrt.org>
 */

#ifndef _LTQ_PCI_H__
#define _LTQ_PCI_H__

extern __iomem void *ltq_pci_mapped_cfg;
extern int ltq_pci_read_config_dword(struct pci_bus *bus,
	unsigned int devfn, int where, int size, u32 *val);
extern int ltq_pci_write_config_dword(struct pci_bus *bus,
	unsigned int devfn, int where, int size, u32 val);

#endif
Tue Jul 19 12:34:56 PDT 2016
Fri Jul 22 15:39:59 PDT 2016
Sun, Jul 24, 2016  1:30:23 PM
Mon, Jul 25, 2016  6:40:38 PM
Mon, Jul 25, 2016  7:53:28 PM
Tue, Jul 26, 2016  2:28:35 PM

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
Tue Jul 19 12:44:34 PDT 2016
Fri Jul 22 15:57:52 PDT 2016
Sun, Jul 24, 2016  3:42:46 PM
Mon, Jul 25, 2016 10:23:57 PM

/*
 * Copyright 2011 Michael Ellerman, IBM Corp.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version
 *  2 of the License, or (at your option) any later version.
 */

#ifndef __WSP_MSI_H
#define __WSP_MSI_H

#ifdef CONFIG_PCI_MSI
extern void wsp_setup_phb_msi(struct pci_controller *phb);
#else
static inline void wsp_setup_phb_msi(struct pci_controller *phb) { }
#endif

#endif /* __WSP_MSI_H */
Tue Jul 19 12:52:55 PDT 2016
Fri Jul 22 16:13:45 PDT 2016
Sun, Jul 24, 2016  5:43:34 PM
Tue, Jul 26, 2016 12:37:54 AM

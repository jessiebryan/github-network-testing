/*
 * Xilinx pci external definitions
 *
 * Copyright 2009 Roderick Colenbrander
 * Copyright 2009 Secret Lab Technologies Ltd.
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */

#ifndef INCLUDE_XILINX_PCI
#define INCLUDE_XILINX_PCI

#ifdef CONFIG_XILINX_PCI
extern void __init xilinx_pci_init(void);
#else
static inline void __init xilinx_pci_init(void) { return; }
#endif

#endif /* INCLUDE_XILINX_PCI */
Tue Jul 19 12:43:57 PDT 2016
Fri Jul 22 15:56:43 PDT 2016
Sun, Jul 24, 2016  3:33:54 PM
Mon, Jul 25, 2016 10:14:07 PM

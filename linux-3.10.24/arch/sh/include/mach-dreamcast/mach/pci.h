/*
 * include/asm-sh/dreamcast/pci.h
 *
 * Copyright (C) 2001, 2002  M. R. Brown
 * Copyright (C) 2002, 2003  Paul Mundt
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 */
#ifndef __ASM_SH_DREAMCAST_PCI_H
#define __ASM_SH_DREAMCAST_PCI_H

#include <mach-dreamcast/mach/sysasic.h>

#define	GAPSPCI_REGS		0x01001400
#define GAPSPCI_DMA_BASE	0x01840000
#define GAPSPCI_DMA_SIZE	32768
#define GAPSPCI_BBA_CONFIG	0x01001600
#define GAPSPCI_BBA_CONFIG_SIZE	0x2000

#define	GAPSPCI_IRQ		HW_EVENT_EXTERNAL

extern struct pci_ops gapspci_pci_ops;

#endif /* __ASM_SH_DREAMCAST_PCI_H */

Tue Jul 19 12:50:20 PDT 2016
Fri Jul 22 16:08:44 PDT 2016
Sun, Jul 24, 2016  5:06:41 PM
Mon, Jul 25, 2016 11:57:11 PM

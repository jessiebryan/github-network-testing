/*
 * asm/leon_pci.h
 *
 * Copyright (C) 2011 Aeroflex Gaisler AB, Daniel Hellstrom
 */

#ifndef _ASM_LEON_PCI_H_
#define _ASM_LEON_PCI_H_

/* PCI related definitions */
struct leon_pci_info {
	struct pci_ops *ops;
	struct resource	io_space;
	struct resource	mem_space;
	int (*map_irq)(const struct pci_dev *dev, u8 slot, u8 pin);
};

extern void leon_pci_init(struct platform_device *ofdev,
				struct leon_pci_info *info);

#endif /* _ASM_LEON_PCI_H_ */
Tue Jul 19 12:38:04 PDT 2016
Fri Jul 22 15:45:41 PDT 2016
Sun, Jul 24, 2016  2:12:28 PM
Mon, Jul 25, 2016  8:42:58 PM

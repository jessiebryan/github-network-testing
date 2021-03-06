/*
 * linux/include/asm-generic/pci.h
 *
 *  Copyright (C) 2003 Russell King
 */
#ifndef _ASM_GENERIC_PCI_H
#define _ASM_GENERIC_PCI_H

static inline struct resource *
pcibios_select_root(struct pci_dev *pdev, struct resource *res)
{
	struct resource *root = NULL;

	if (res->flags & IORESOURCE_IO)
		root = &ioport_resource;
	if (res->flags & IORESOURCE_MEM)
		root = &iomem_resource;

	return root;
}

#ifndef HAVE_ARCH_PCI_GET_LEGACY_IDE_IRQ
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
{
	return channel ? 15 : 14;
}
#endif /* HAVE_ARCH_PCI_GET_LEGACY_IDE_IRQ */

/*
 * By default, assume that no iommu is in use and that the PCI
 * space is mapped to address physical 0.
 */
#ifndef PCI_DMA_BUS_IS_PHYS
#define PCI_DMA_BUS_IS_PHYS	(1)
#endif

#endif /* _ASM_GENERIC_PCI_H */
Tue Jul 19 12:53:50 PDT 2016
Fri Jul 22 16:15:31 PDT 2016
Sun, Jul 24, 2016  5:56:46 PM
Tue, Jul 26, 2016 12:52:27 AM

#ifndef _ASM_H8300_PCI_H
#define _ASM_H8300_PCI_H

/*
 * asm-h8300/pci.h - H8/300 specific PCI declarations.
 *
 * Yoshinori Sato <ysato@users.sourceforge.jp>
 */

#define pcibios_assign_all_busses()	0

static inline void pcibios_set_master(struct pci_dev *dev)
{
	/* No special bus mastering setup handling */
}

static inline void pcibios_penalize_isa_irq(int irq, int active)
{
	/* We don't do dynamic PCI IRQ allocation */
}

#define PCI_DMA_BUS_IS_PHYS	(1)

#endif /* _ASM_H8300_PCI_H */
Tue Jul 19 12:34:47 PDT 2016
Fri Jul 22 15:39:52 PDT 2016
Sun, Jul 24, 2016  1:29:34 PM
Mon, Jul 25, 2016  6:39:38 PM
Mon, Jul 25, 2016  7:52:30 PM
Tue, Jul 26, 2016  2:27:40 PM

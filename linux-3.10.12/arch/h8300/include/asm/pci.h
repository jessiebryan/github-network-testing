#ifndef _ASM_H8300_PCI_H
#define _ASM_H8300_PCI_H

/*
 * asm-h8300/pci.h - H8/300 specific PCI declarations.
 *
 * Yoshinori Sato <ysato@users.sourceforge.jp>
 */

#define pcibios_assign_all_busses()	0

static inline void pcibios_penalize_isa_irq(int irq, int active)
{
	/* We don't do dynamic PCI IRQ allocation */
}

#define PCI_DMA_BUS_IS_PHYS	(1)

#endif /* _ASM_H8300_PCI_H */
Tue Jul 19 12:42:34 PDT 2016
Fri Jul 22 15:54:11 PDT 2016
Sun, Jul 24, 2016  3:14:06 PM
Mon, Jul 25, 2016  9:52:05 PM

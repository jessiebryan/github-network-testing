/* Changed from asm-m68k version, Lineo Inc. 	May 2001	*/

#ifndef _ASM_BFIN_PCI_H
#define _ASM_BFIN_PCI_H

#include <asm/scatterlist.h>
#include <asm-generic/pci-dma-compat.h>
#include <asm-generic/pci.h>

#define PCIBIOS_MIN_IO 0x00001000
#define PCIBIOS_MIN_MEM 0x10000000

static inline void pcibios_penalize_isa_irq(int irq)
{
	/* We don't do dynamic PCI IRQ allocation */
}

#endif				/* _ASM_BFIN_PCI_H */
Tue Jul 19 12:49:33 PDT 2016
Fri Jul 22 16:07:14 PDT 2016
Sun, Jul 24, 2016  4:55:08 PM
Mon, Jul 25, 2016 11:44:29 PM

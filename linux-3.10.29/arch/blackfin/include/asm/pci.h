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
Tue Jul 19 12:53:26 PDT 2016
Fri Jul 22 16:14:44 PDT 2016
Sun, Jul 24, 2016  5:51:02 PM
Tue, Jul 26, 2016 12:46:07 AM

#ifndef _ASM_M68K_PCI_H
#define _ASM_M68K_PCI_H

#include <asm-generic/pci-dma-compat.h>

/* The PCI address space does equal the physical memory
 * address space.  The networking and block device layers use
 * this boolean for bounce buffer decisions.
 */
#define PCI_DMA_BUS_IS_PHYS	(1)

#endif /* _ASM_M68K_PCI_H */
Tue Jul 19 12:37:19 PDT 2016
Fri Jul 22 15:44:24 PDT 2016
Sun, Jul 24, 2016  2:02:53 PM

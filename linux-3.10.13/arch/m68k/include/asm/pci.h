#ifndef _ASM_M68K_PCI_H
#define _ASM_M68K_PCI_H

#include <asm-generic/pci-dma-compat.h>
#include <asm-generic/pci.h>

/* The PCI address space does equal the physical memory
 * address space.  The networking and block device layers use
 * this boolean for bounce buffer decisions.
 */
#define PCI_DMA_BUS_IS_PHYS	(1)

#define	pcibios_assign_all_busses()	1

#define	PCIBIOS_MIN_IO		0x00000100
#define	PCIBIOS_MIN_MEM		0x02000000

#endif /* _ASM_M68K_PCI_H */
Tue Jul 19 12:43:14 PDT 2016
Fri Jul 22 15:55:25 PDT 2016
Sun, Jul 24, 2016  3:23:43 PM
Mon, Jul 25, 2016 10:02:46 PM

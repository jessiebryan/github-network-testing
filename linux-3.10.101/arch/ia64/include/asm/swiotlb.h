#ifndef ASM_IA64__SWIOTLB_H
#define ASM_IA64__SWIOTLB_H

#include <linux/dma-mapping.h>
#include <linux/swiotlb.h>

#ifdef CONFIG_SWIOTLB
extern int swiotlb;
extern void pci_swiotlb_init(void);
#else
#define swiotlb 0
static inline void pci_swiotlb_init(void)
{
}
#endif

#endif /* ASM_IA64__SWIOTLB_H */
Tue Jul 19 12:40:27 PDT 2016
Fri Jul 22 15:50:27 PDT 2016
Sun, Jul 24, 2016  2:46:38 PM
Mon, Jul 25, 2016  9:21:02 PM

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
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:47 PDT 2016
Sun, Jul 24, 2016  1:21:26 PM
Mon, Jul 25, 2016  6:29:55 PM
Mon, Jul 25, 2016  7:42:59 PM
Tue, Jul 26, 2016  2:18:41 PM

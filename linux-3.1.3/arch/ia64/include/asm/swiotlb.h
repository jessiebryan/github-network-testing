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
Tue Jul 19 12:34:52 PDT 2016
Fri Jul 22 15:39:53 PDT 2016
Sun, Jul 24, 2016  1:29:42 PM
Mon, Jul 25, 2016  6:39:48 PM
Mon, Jul 25, 2016  7:52:40 PM
Tue, Jul 26, 2016  2:27:49 PM

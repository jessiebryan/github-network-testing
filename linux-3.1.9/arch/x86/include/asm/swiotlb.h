#ifndef _ASM_X86_SWIOTLB_H
#define _ASM_X86_SWIOTLB_H

#include <linux/swiotlb.h>

#ifdef CONFIG_SWIOTLB
extern int swiotlb;
extern int __init pci_swiotlb_detect_override(void);
extern int __init pci_swiotlb_detect_4gb(void);
extern void __init pci_swiotlb_init(void);
extern void __init pci_swiotlb_late_init(void);
#else
#define swiotlb 0
static inline int pci_swiotlb_detect_override(void)
{
	return 0;
}
static inline int pci_swiotlb_detect_4gb(void)
{
	return 0;
}
static inline void pci_swiotlb_init(void)
{
}
static inline void pci_swiotlb_late_init(void)
{
}
#endif

static inline void dma_mark_clean(void *addr, size_t size) {}

#endif /* _ASM_X86_SWIOTLB_H */
Tue Jul 19 12:38:06 PDT 2016
Fri Jul 22 15:45:45 PDT 2016
Sun, Jul 24, 2016  2:12:56 PM
Mon, Jul 25, 2016  8:43:30 PM

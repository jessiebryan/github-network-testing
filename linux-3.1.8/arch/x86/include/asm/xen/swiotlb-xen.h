#ifndef _ASM_X86_SWIOTLB_XEN_H
#define _ASM_X86_SWIOTLB_XEN_H

#ifdef CONFIG_SWIOTLB_XEN
extern int xen_swiotlb;
extern int __init pci_xen_swiotlb_detect(void);
extern void __init pci_xen_swiotlb_init(void);
#else
#define xen_swiotlb (0)
static inline int __init pci_xen_swiotlb_detect(void) { return 0; }
static inline void __init pci_xen_swiotlb_init(void) { }
#endif

#endif /* _ASM_X86_SWIOTLB_XEN_H */
Tue Jul 19 12:37:28 PDT 2016
Fri Jul 22 15:44:39 PDT 2016
Sun, Jul 24, 2016  2:04:45 PM
Mon, Jul 25, 2016  8:34:08 PM

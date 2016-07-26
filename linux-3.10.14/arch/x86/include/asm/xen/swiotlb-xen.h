#ifndef _ASM_X86_SWIOTLB_XEN_H
#define _ASM_X86_SWIOTLB_XEN_H

#ifdef CONFIG_SWIOTLB_XEN
extern int xen_swiotlb;
extern int __init pci_xen_swiotlb_detect(void);
extern void __init pci_xen_swiotlb_init(void);
extern int pci_xen_swiotlb_init_late(void);
#else
#define xen_swiotlb (0)
static inline int __init pci_xen_swiotlb_detect(void) { return 0; }
static inline void __init pci_xen_swiotlb_init(void) { }
static inline int pci_xen_swiotlb_init_late(void) { return -ENXIO; }
#endif

#endif /* _ASM_X86_SWIOTLB_XEN_H */
Tue Jul 19 12:44:01 PDT 2016
Fri Jul 22 15:56:52 PDT 2016
Sun, Jul 24, 2016  3:34:53 PM
Mon, Jul 25, 2016 10:15:13 PM

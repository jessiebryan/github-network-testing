#ifndef _POWERNV_H
#define _POWERNV_H

#ifdef CONFIG_SMP
extern void pnv_smp_init(void);
#else
static inline void pnv_smp_init(void) { }
#endif

#ifdef CONFIG_PCI
extern void pnv_pci_init(void);
extern void pnv_pci_shutdown(void);
#else
static inline void pnv_pci_init(void) { }
static inline void pnv_pci_shutdown(void) { }
#endif

#endif /* _POWERNV_H */
Tue Jul 19 12:39:54 PDT 2016
Fri Jul 22 15:49:21 PDT 2016
Sun, Jul 24, 2016  2:38:40 PM
Mon, Jul 25, 2016  9:12:08 PM

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
Tue Jul 19 12:47:45 PDT 2016
Fri Jul 22 16:03:51 PDT 2016
Sun, Jul 24, 2016  4:29:19 PM
Mon, Jul 25, 2016 11:15:43 PM

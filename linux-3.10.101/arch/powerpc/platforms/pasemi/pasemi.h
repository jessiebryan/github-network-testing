#ifndef _PASEMI_PASEMI_H
#define _PASEMI_PASEMI_H

extern unsigned long pas_get_boot_time(void);
extern void pas_pci_init(void);
extern void pas_pci_irq_fixup(struct pci_dev *dev);
extern void pas_pci_dma_dev_setup(struct pci_dev *dev);

extern void __iomem *pasemi_pci_getcfgaddr(struct pci_dev *dev, int offset);

extern void __init alloc_iobmap_l2(void);
extern void __init pasemi_map_registers(void);

/* Power savings modes, implemented in asm */
extern void idle_spin(void);
extern void idle_doze(void);

/* Restore astate to last set */
#ifdef CONFIG_PPC_PASEMI_CPUFREQ
extern int check_astate(void);
extern void restore_astate(int cpu);
#else
static inline int check_astate(void)
{
	/* Always return >0 so we never power save */
	return 1;
}
static inline void restore_astate(int cpu)
{
}
#endif


#endif /* _PASEMI_PASEMI_H */
Tue Jul 19 12:40:33 PDT 2016
Fri Jul 22 15:50:37 PDT 2016
Sun, Jul 24, 2016  2:47:53 PM
Mon, Jul 25, 2016  9:22:29 PM

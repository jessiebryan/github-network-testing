#ifndef _ASM_X86_PCI_64_H
#define _ASM_X86_PCI_64_H

#ifdef __KERNEL__

#ifdef CONFIG_CALGARY_IOMMU
static inline void *pci_iommu(struct pci_bus *bus)
{
	struct pci_sysdata *sd = bus->sysdata;
	return sd->iommu;
}

static inline void set_pci_iommu(struct pci_bus *bus, void *val)
{
	struct pci_sysdata *sd = bus->sysdata;
	sd->iommu = val;
}
#endif /* CONFIG_CALGARY_IOMMU */

extern int (*pci_config_read)(int seg, int bus, int dev, int fn,
			      int reg, int len, u32 *value);
extern int (*pci_config_write)(int seg, int bus, int dev, int fn,
			       int reg, int len, u32 value);

#endif /* __KERNEL__ */

#endif /* _ASM_X86_PCI_64_H */
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:10 PM
Mon, Jul 25, 2016  6:22:24 PM
Mon, Jul 25, 2016  7:35:37 PM

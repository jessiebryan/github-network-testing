#ifndef _PROBE_ROMS_H_
#define _PROBE_ROMS_H_
struct pci_dev;

extern void __iomem *pci_map_biosrom(struct pci_dev *pdev);
extern void pci_unmap_biosrom(void __iomem *rom);
extern size_t pci_biosrom_size(struct pci_dev *pdev);
#endif
Tue Jul 19 12:49:43 PDT 2016
Fri Jul 22 16:07:35 PDT 2016
Sun, Jul 24, 2016  4:57:52 PM
Mon, Jul 25, 2016 11:47:31 PM

#ifndef _PROBE_ROMS_H_
#define _PROBE_ROMS_H_
struct pci_dev;

extern void __iomem *pci_map_biosrom(struct pci_dev *pdev);
extern void pci_unmap_biosrom(void __iomem *rom);
extern size_t pci_biosrom_size(struct pci_dev *pdev);
#endif
Tue Jul 19 12:48:26 PDT 2016
Fri Jul 22 16:05:09 PDT 2016
Sun, Jul 24, 2016  4:39:25 PM
Mon, Jul 25, 2016 11:26:56 PM

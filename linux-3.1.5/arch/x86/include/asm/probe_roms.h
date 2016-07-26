#ifndef _PROBE_ROMS_H_
#define _PROBE_ROMS_H_
struct pci_dev;

extern void __iomem *pci_map_biosrom(struct pci_dev *pdev);
extern void pci_unmap_biosrom(void __iomem *rom);
extern size_t pci_biosrom_size(struct pci_dev *pdev);
#endif
Tue Jul 19 12:36:18 PDT 2016
Fri Jul 22 15:42:24 PDT 2016
Sun, Jul 24, 2016  1:48:11 PM
Mon, Jul 25, 2016  8:14:31 PM

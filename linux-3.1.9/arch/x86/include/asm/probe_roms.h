#ifndef _PROBE_ROMS_H_
#define _PROBE_ROMS_H_
struct pci_dev;

extern void __iomem *pci_map_biosrom(struct pci_dev *pdev);
extern void pci_unmap_biosrom(void __iomem *rom);
extern size_t pci_biosrom_size(struct pci_dev *pdev);
#endif
Tue Jul 19 12:38:06 PDT 2016
Fri Jul 22 15:45:45 PDT 2016
Sun, Jul 24, 2016  2:12:55 PM
Mon, Jul 25, 2016  8:43:27 PM

#ifndef _PROBE_ROMS_H_
#define _PROBE_ROMS_H_
struct pci_dev;

extern void __iomem *pci_map_biosrom(struct pci_dev *pdev);
extern void pci_unmap_biosrom(void __iomem *rom);
extern size_t pci_biosrom_size(struct pci_dev *pdev);
#endif
Tue Jul 19 12:52:58 PDT 2016
Fri Jul 22 16:13:52 PDT 2016
Sun, Jul 24, 2016  5:44:27 PM
Tue, Jul 26, 2016 12:38:51 AM

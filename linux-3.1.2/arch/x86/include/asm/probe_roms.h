#ifndef _PROBE_ROMS_H_
#define _PROBE_ROMS_H_
struct pci_dev;

extern void __iomem *pci_map_biosrom(struct pci_dev *pdev);
extern void pci_unmap_biosrom(void __iomem *rom);
extern size_t pci_biosrom_size(struct pci_dev *pdev);
#endif
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:02 PDT 2016
Sun, Jul 24, 2016  1:23:26 PM
Mon, Jul 25, 2016  6:32:19 PM
Mon, Jul 25, 2016  7:45:20 PM
Tue, Jul 26, 2016  2:20:54 PM

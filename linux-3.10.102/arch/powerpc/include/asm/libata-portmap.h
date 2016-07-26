#ifndef __ASM_POWERPC_LIBATA_PORTMAP_H
#define __ASM_POWERPC_LIBATA_PORTMAP_H

#define ATA_PRIMARY_CMD	0x1F0
#define ATA_PRIMARY_CTL	0x3F6
#define ATA_PRIMARY_IRQ(dev)	pci_get_legacy_ide_irq(dev, 0)

#define ATA_SECONDARY_CMD	0x170
#define ATA_SECONDARY_CTL	0x376
#define ATA_SECONDARY_IRQ(dev)	pci_get_legacy_ide_irq(dev, 1)

#endif
Tue Jul 19 12:41:11 PDT 2016
Fri Jul 22 15:51:53 PDT 2016
Sun, Jul 24, 2016  2:56:57 PM
Mon, Jul 25, 2016  9:32:43 PM

#ifndef __ASM_POWERPC_LIBATA_PORTMAP_H
#define __ASM_POWERPC_LIBATA_PORTMAP_H

#define ATA_PRIMARY_CMD	0x1F0
#define ATA_PRIMARY_CTL	0x3F6
#define ATA_PRIMARY_IRQ(dev)	pci_get_legacy_ide_irq(dev, 0)

#define ATA_SECONDARY_CMD	0x170
#define ATA_SECONDARY_CTL	0x376
#define ATA_SECONDARY_IRQ(dev)	pci_get_legacy_ide_irq(dev, 1)

#endif
Tue Jul 19 12:51:36 PDT 2016
Fri Jul 22 16:11:10 PDT 2016
Sun, Jul 24, 2016  5:24:48 PM
Tue, Jul 26, 2016 12:17:11 AM

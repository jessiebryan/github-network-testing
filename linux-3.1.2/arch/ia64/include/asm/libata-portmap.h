#ifndef __ASM_IA64_LIBATA_PORTMAP_H
#define __ASM_IA64_LIBATA_PORTMAP_H

#define ATA_PRIMARY_CMD		0x1F0
#define ATA_PRIMARY_CTL		0x3F6
#define ATA_PRIMARY_IRQ(dev)	isa_irq_to_vector(14)

#define ATA_SECONDARY_CMD	0x170
#define ATA_SECONDARY_CTL	0x376
#define ATA_SECONDARY_IRQ(dev)	isa_irq_to_vector(15)

#endif
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:47 PDT 2016
Sun, Jul 24, 2016  1:21:22 PM
Mon, Jul 25, 2016  6:29:50 PM
Mon, Jul 25, 2016  7:42:54 PM
Tue, Jul 26, 2016  2:18:36 PM

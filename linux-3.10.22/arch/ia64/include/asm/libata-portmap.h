#ifndef __ASM_IA64_LIBATA_PORTMAP_H
#define __ASM_IA64_LIBATA_PORTMAP_H

#define ATA_PRIMARY_CMD		0x1F0
#define ATA_PRIMARY_CTL		0x3F6
#define ATA_PRIMARY_IRQ(dev)	isa_irq_to_vector(14)

#define ATA_SECONDARY_CMD	0x170
#define ATA_SECONDARY_CTL	0x376
#define ATA_SECONDARY_IRQ(dev)	isa_irq_to_vector(15)

#endif
Tue Jul 19 12:48:55 PDT 2016
Fri Jul 22 16:06:05 PDT 2016
Sun, Jul 24, 2016  4:46:29 PM
Mon, Jul 25, 2016 11:34:48 PM

#ifndef __ASM_IA64_LIBATA_PORTMAP_H
#define __ASM_IA64_LIBATA_PORTMAP_H

#define ATA_PRIMARY_CMD		0x1F0
#define ATA_PRIMARY_CTL		0x3F6
#define ATA_PRIMARY_IRQ(dev)	isa_irq_to_vector(14)

#define ATA_SECONDARY_CMD	0x170
#define ATA_SECONDARY_CTL	0x376
#define ATA_SECONDARY_IRQ(dev)	isa_irq_to_vector(15)

#endif
Tue Jul 19 12:34:47 PDT 2016
Fri Jul 22 15:39:53 PDT 2016
Sun, Jul 24, 2016  1:29:38 PM
Mon, Jul 25, 2016  6:39:43 PM
Mon, Jul 25, 2016  7:52:35 PM

/* drivers/atm/tonga.h - Efficient Networks Tonga (PCI bridge) declarations */
 
/* Written 1995 by Werner Almesberger, EPFL LRC */
 

#ifndef DRIVER_ATM_TONGA_H
#define DRIVER_ATM_TONGA_H

#define PCI_TONGA_CTRL	0x60	/* control register */

#define END_SWAP_DMA	0x80	/* endian swap on DMA */
#define END_SWAP_BYTE	0x40	/* endian swap on slave byte accesses */
#define END_SWAP_WORD	0x20	/* endian swap on slave word accesses */
#define SEPROM_MAGIC	0x0c	/* obscure required pattern (ASIC only) */
#define SEPROM_DATA	0x02	/* serial EEPROM data (ASIC only) */
#define SEPROM_CLK	0x01	/* serial EEPROM clock (ASIC only) */

#define SEPROM_ESI_BASE	64	/* start of ESI in serial EEPROM */

#endif
Tue Jul 19 12:51:02 PDT 2016
Fri Jul 22 16:10:05 PDT 2016
Sun, Jul 24, 2016  5:16:47 PM
Tue, Jul 26, 2016 12:08:22 AM

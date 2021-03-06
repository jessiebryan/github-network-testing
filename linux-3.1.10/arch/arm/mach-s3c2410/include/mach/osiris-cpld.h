/* arch/arm/mach-s3c2410/include/mach/osiris-cpld.h
 *
 * Copyright 2005 Simtec Electronics
 *	http://www.simtec.co.uk/products/
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * OSIRIS - CPLD control constants
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_OSIRISCPLD_H
#define __ASM_ARCH_OSIRISCPLD_H

/* CTRL0 - NAND WP control */

#define OSIRIS_CTRL0_NANDSEL		(0x3)
#define OSIRIS_CTRL0_BOOT_INT		(1<<3)
#define OSIRIS_CTRL0_PCMCIA		(1<<4)
#define OSIRIS_CTRL0_FIX8		(1<<5)
#define OSIRIS_CTRL0_PCMCIA_nWAIT	(1<<6)
#define OSIRIS_CTRL0_PCMCIA_nIOIS16	(1<<7)

#define OSIRIS_CTRL1_FIX8		(1<<0)

#define OSIRIS_ID_REVMASK		(0x7)

#endif /* __ASM_ARCH_OSIRISCPLD_H */
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:33 PDT 2016
Sun, Jul 24, 2016  1:12:09 PM
Mon, Jul 25, 2016  6:18:48 PM
Mon, Jul 25, 2016  7:32:05 PM
Tue, Jul 26, 2016  2:08:18 PM

/* arch/arm/mach-s3c2410/include/mach/osiris-map.h
 *
 * Copyright 2005 Simtec Electronics
 *	http://www.simtec.co.uk/products/
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * OSIRIS - Memory map definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

/* needs arch/map.h including with this */

#ifndef __ASM_ARCH_OSIRISMAP_H
#define __ASM_ARCH_OSIRISMAP_H

/* start peripherals off after the S3C2410 */

#define OSIRIS_IOADDR(x)	(S3C2410_ADDR((x) + 0x04000000))

#define OSIRIS_PA_CPLD		(S3C2410_CS1 | (1<<26))

/* we put the CPLD registers next, to get them out of the way */

#define OSIRIS_VA_CTRL0		OSIRIS_IOADDR(0x00000000)
#define OSIRIS_PA_CTRL0		(OSIRIS_PA_CPLD)

#define OSIRIS_VA_CTRL1		OSIRIS_IOADDR(0x00100000)
#define OSIRIS_PA_CTRL1		(OSIRIS_PA_CPLD + (1<<23))

#define OSIRIS_VA_CTRL2		OSIRIS_IOADDR(0x00200000)
#define OSIRIS_PA_CTRL2		(OSIRIS_PA_CPLD + (2<<23))

#define OSIRIS_VA_CTRL3		OSIRIS_IOADDR(0x00300000)
#define OSIRIS_PA_CTRL3		(OSIRIS_PA_CPLD + (2<<23))

#define OSIRIS_VA_IDREG		OSIRIS_IOADDR(0x00700000)
#define OSIRIS_PA_IDREG		(OSIRIS_PA_CPLD + (7<<23))

#endif /* __ASM_ARCH_OSIRISMAP_H */
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:44 PDT 2016
Sun, Jul 24, 2016  1:28:40 PM
Mon, Jul 25, 2016  6:38:34 PM
Mon, Jul 25, 2016  7:51:27 PM
Tue, Jul 26, 2016  2:26:40 PM

/* arch/arm/mach-s3c2410/include/mach/otom-map.h
 *
 * (c) 2005 Guillaume GOURAT / NexVision
 *          guillaume.gourat@nexvision.fr
 *
 * NexVision OTOM board memory map definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

/* needs arch/map.h including with this */

/* ok, we've used up to 0x01300000, now we need to find space for the
 * peripherals that live in the nGCS[x] areas, which are quite numerous
 * in their space.
 */

#ifndef __ASM_ARCH_OTOMMAP_H
#define __ASM_ARCH_OTOMMAP_H

#define OTOM_PA_CS8900A_BASE       (S3C2410_CS3 + 0x01000000)	/* nGCS3 +0x01000000 */
#define OTOM_VA_CS8900A_BASE       S3C2410_ADDR(0x04000000)		/* 0xF4000000 */

/* physical offset addresses for the peripherals */

#define OTOM_PA_FLASH0_BASE        (S3C2410_CS0)				/* Bank 0 */

#endif /* __ASM_ARCH_OTOMMAP_H */
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:44 PDT 2016
Sun, Jul 24, 2016  1:28:40 PM
Mon, Jul 25, 2016  6:38:34 PM
Mon, Jul 25, 2016  7:51:27 PM
Tue, Jul 26, 2016  2:26:40 PM

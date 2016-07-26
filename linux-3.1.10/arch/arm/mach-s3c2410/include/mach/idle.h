/* arch/arm/mach-s3c2410/include/mach/idle.h
 *
 * Copyright (c) 2004 Simtec Electronics <linux@simtec.co.uk>
 *		http://www.simtec.co.uk/products/SWLINUX/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * S3C2410 CPU Idle controls
*/

#ifndef __ASM_ARCH_IDLE_H
#define __ASM_ARCH_IDLE_H __FILE__

/* This allows the over-ride of the default idle code, in case there
 * is any other things to be done over idle (like DVS)
*/

extern void (*s3c24xx_idle)(void);

extern void s3c24xx_default_idle(void);

#endif /* __ASM_ARCH_IDLE_H */
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:33 PDT 2016
Sun, Jul 24, 2016  1:12:09 PM
Mon, Jul 25, 2016  6:18:48 PM
Mon, Jul 25, 2016  7:32:05 PM

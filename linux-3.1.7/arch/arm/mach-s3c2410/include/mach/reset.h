/* arch/arm/mach-s3c2410/include/mach/reset.h
 *
 * Copyright (c) 2007 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *	http://armlinux.simtec.co.uk/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * S3C2410 CPU reset controls
*/

#ifndef __ASM_ARCH_RESET_H
#define __ASM_ARCH_RESET_H __FILE__

/* This allows the over-ride of the default reset code
*/

extern void (*s3c24xx_reset_hook)(void);

#endif /* __ASM_ARCH_RESET_H */
Tue Jul 19 12:36:40 PDT 2016
Fri Jul 22 15:43:08 PDT 2016
Sun, Jul 24, 2016  1:53:25 PM
Mon, Jul 25, 2016  8:20:40 PM

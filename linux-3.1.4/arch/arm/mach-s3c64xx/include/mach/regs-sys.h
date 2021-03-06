/* arch/arm/plat-s3c64xx/include/plat/regs-sys.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *	http://armlinux.simtec.co.uk/
 *
 * S3C64XX system register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __PLAT_REGS_SYS_H
#define __PLAT_REGS_SYS_H __FILE__

#define S3C_SYSREG(x)		(S3C_VA_SYS + (x))

#define S3C64XX_AHB_CON0	S3C_SYSREG(0x100)
#define S3C64XX_AHB_CON1	S3C_SYSREG(0x104)
#define S3C64XX_AHB_CON2	S3C_SYSREG(0x108)

#define S3C64XX_OTHERS		S3C_SYSREG(0x900)

#define S3C64XX_OTHERS_USBMASK	(1 << 16)

#endif /* _PLAT_REGS_SYS_H */
Tue Jul 19 12:35:31 PDT 2016
Fri Jul 22 15:40:53 PDT 2016
Sun, Jul 24, 2016  1:36:57 PM
Mon, Jul 25, 2016  8:01:14 PM
Tue, Jul 26, 2016  2:35:49 PM

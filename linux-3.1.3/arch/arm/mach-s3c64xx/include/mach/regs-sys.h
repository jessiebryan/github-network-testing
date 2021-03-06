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
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:45 PDT 2016
Sun, Jul 24, 2016  1:28:41 PM
Mon, Jul 25, 2016  6:38:36 PM
Mon, Jul 25, 2016  7:51:29 PM
Tue, Jul 26, 2016  2:26:42 PM

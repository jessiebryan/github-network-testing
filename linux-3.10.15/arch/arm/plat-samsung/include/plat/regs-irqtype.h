/* arch/arm/plat-s3c/include/plat/regs-irqtype.h
 *
 * Copyright 2008 Simtec Electronics
 *      Ben Dooks <ben@simtec.co.uk>
 *      http://armlinux.simtec.co.uk/
 *
 * S3C - IRQ detection types.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

/* values for S3C2410_EXTINT0/1/2 and other cpus in the series, including
 * the S3C64XX
*/
#define S3C2410_EXTINT_LOWLEV	 (0x00)
#define S3C2410_EXTINT_HILEV	 (0x01)
#define S3C2410_EXTINT_FALLEDGE	 (0x02)
#define S3C2410_EXTINT_RISEEDGE	 (0x04)
#define S3C2410_EXTINT_BOTHEDGE	 (0x06)
Tue Jul 19 12:44:27 PDT 2016
Fri Jul 22 15:57:40 PDT 2016
Sun, Jul 24, 2016  3:41:10 PM
Mon, Jul 25, 2016 10:22:10 PM

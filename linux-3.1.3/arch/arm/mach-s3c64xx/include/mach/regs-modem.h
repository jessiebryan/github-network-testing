/* arch/arm/plat-s3c64xx/include/plat/regs-modem.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *      http://armlinux.simtec.co.uk/
 *      Ben Dooks <ben@simtec.co.uk>
 *
 * S3C64XX - modem block registers
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __PLAT_S3C64XX_REGS_MODEM_H
#define __PLAT_S3C64XX_REGS_MODEM_H __FILE__

#define S3C64XX_MODEMREG(x)	(S3C64XX_VA_MODEM + (x))

#define S3C64XX_MODEM_INT2AP			S3C64XX_MODEMREG(0x0)
#define S3C64XX_MODEM_INT2MODEM			S3C64XX_MODEMREG(0x4)
#define S3C64XX_MODEM_MIFCON			S3C64XX_MODEMREG(0x8)
#define S3C64XX_MODEM_MIFPCON			S3C64XX_MODEMREG(0xC)
#define S3C64XX_MODEM_INTCLR			S3C64XX_MODEMREG(0x10)
#define S3C64XX_MODEM_DMA_TXADDR		S3C64XX_MODEMREG(0x14)
#define S3C64XX_MODEM_DMA_RXADDR		S3C64XX_MODEMREG(0x18)

#define MIFPCON_INT2M_LEVEL			(1 << 4)
#define MIFPCON_LCD_BYPASS			(1 << 3)

#endif /* __PLAT_S3C64XX_REGS_MODEM_H */
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:45 PDT 2016
Sun, Jul 24, 2016  1:28:41 PM
Mon, Jul 25, 2016  6:38:36 PM
Mon, Jul 25, 2016  7:51:29 PM
Tue, Jul 26, 2016  2:26:42 PM

/* linux/drivers/spi/spi_s3c24xx_fiq.h
 *
 * Copyright 2009 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * S3C24XX SPI - FIQ pseudo-DMA transfer support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

/* We have R8 through R13 to play with */

#ifdef __ASSEMBLY__
#define __REG_NR(x)     r##x
#else
#define __REG_NR(x)     (x)
#endif

#define fiq_rspi	__REG_NR(8)
#define fiq_rtmp	__REG_NR(9)
#define fiq_rrx		__REG_NR(10)
#define fiq_rtx		__REG_NR(11)
#define fiq_rcount	__REG_NR(12)
#define fiq_rirq	__REG_NR(13)
Tue Jul 19 12:42:52 PDT 2016
Fri Jul 22 15:54:44 PDT 2016
Sun, Jul 24, 2016  3:18:19 PM
Mon, Jul 25, 2016  9:56:48 PM

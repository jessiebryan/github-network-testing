/* arch/arm/plat-s3c/include/plat/dma.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *	http://armlinux.simtec.co.uk/
 *
 * Samsung S3C DMA core support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

extern struct s3c2410_dma_chan *s3c_dma_lookup_channel(unsigned int channel);

extern struct s3c2410_dma_chan *s3c_dma_chan_map[];

/* the currently allocated channel information */
extern struct s3c2410_dma_chan s3c2410_chans[];


Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:47 PDT 2016
Sun, Jul 24, 2016  1:29:01 PM
Mon, Jul 25, 2016  6:39:00 PM
Mon, Jul 25, 2016  7:51:52 PM
Tue, Jul 26, 2016  2:27:04 PM

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


Tue Jul 19 12:48:52 PDT 2016
Fri Jul 22 16:05:59 PDT 2016
Sun, Jul 24, 2016  4:45:44 PM
Mon, Jul 25, 2016 11:33:59 PM

/*
 *  dma.h --
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 *  ALSA PCM interface for the Samsung S3C24xx CPU
 */

#ifndef _S3C_AUDIO_H
#define _S3C_AUDIO_H

struct s3c_dma_params {
	struct s3c2410_dma_client *client;	/* stream identifier */
	int channel;				/* Channel ID */
	dma_addr_t dma_addr;
	int dma_size;			/* Size of the DMA transfer */
};

#endif
Tue Jul 19 12:37:49 PDT 2016
Fri Jul 22 15:45:15 PDT 2016
Sun, Jul 24, 2016  2:09:04 PM
Mon, Jul 25, 2016  8:39:11 PM

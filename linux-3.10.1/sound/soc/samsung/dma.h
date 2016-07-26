/*
 *  dma.h --
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 *  ALSA PCM interface for the Samsung SoC
 */

#ifndef _S3C_AUDIO_H
#define _S3C_AUDIO_H

struct s3c_dma_params {
	struct s3c2410_dma_client *client;	/* stream identifier */
	int channel;				/* Channel ID */
	dma_addr_t dma_addr;
	int dma_size;			/* Size of the DMA transfer */
	unsigned ch;
	struct samsung_dma_ops *ops;
	char *ch_name;
};

int asoc_dma_platform_register(struct device *dev);
void asoc_dma_platform_unregister(struct device *dev);

#endif
Tue Jul 19 12:39:03 PDT 2016
Fri Jul 22 15:47:38 PDT 2016
Sun, Jul 24, 2016  2:26:28 PM
Mon, Jul 25, 2016  8:58:32 PM

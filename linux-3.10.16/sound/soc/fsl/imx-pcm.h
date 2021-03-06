/*
 * Copyright 2009 Sascha Hauer <s.hauer@pengutronix.de>
 *
 * This code is based on code copyrighted by Freescale,
 * Liam Girdwood, Javier Martin and probably others.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef _IMX_PCM_H
#define _IMX_PCM_H

#include <linux/platform_data/dma-imx.h>

/*
 * Do not change this as the FIQ handler depends on this size
 */
#define IMX_SSI_DMABUF_SIZE	(64 * 1024)

static inline void
imx_pcm_dma_params_init_data(struct imx_dma_data *dma_data,
	int dma, bool shared)
{
	dma_data->dma_request = dma;
	dma_data->priority = DMA_PRIO_HIGH;
	if (shared)
		dma_data->peripheral_type = IMX_DMATYPE_SSI_SP;
	else
		dma_data->peripheral_type = IMX_DMATYPE_SSI;
}

int snd_imx_pcm_mmap(struct snd_pcm_substream *substream,
		     struct vm_area_struct *vma);
int imx_pcm_new(struct snd_soc_pcm_runtime *rtd);
void imx_pcm_free(struct snd_pcm *pcm);

#ifdef CONFIG_SND_SOC_IMX_PCM_DMA
int imx_pcm_dma_init(struct platform_device *pdev);
void imx_pcm_dma_exit(struct platform_device *pdev);
#else
static inline int imx_pcm_dma_init(struct platform_device *pdev)
{
	return -ENODEV;
}

static inline void imx_pcm_dma_exit(struct platform_device *pdev)
{
}
#endif

#ifdef CONFIG_SND_SOC_IMX_PCM_FIQ
int imx_pcm_fiq_init(struct platform_device *pdev);
#else
static inline int imx_pcm_fiq_init(struct platform_device *pdev)
{
	return -ENODEV;
}
#endif

#endif /* _IMX_PCM_H */
Tue Jul 19 12:45:38 PDT 2016
Fri Jul 22 15:59:54 PDT 2016
Sun, Jul 24, 2016  3:58:37 PM
Mon, Jul 25, 2016 10:41:35 PM

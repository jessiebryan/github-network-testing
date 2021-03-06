/*
 * Copyright (C) 2010 Samsung Electronics Co. Ltd.
 *	Jaswinder Singh <jassi.brar@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef	__S3C_DMA_PL330_H_
#define	__S3C_DMA_PL330_H_

#define S3C2410_DMAF_AUTOSTART		(1 << 0)
#define S3C2410_DMAF_CIRCULAR		(1 << 1)

/*
 * PL330 can assign any channel to communicate with
 * any of the peripherals attched to the DMAC.
 * For the sake of consistency across client drivers,
 * We keep the channel names unchanged and only add
 * missing peripherals are added.
 * Order is not important since S3C PL330 API driver
 * use these just as IDs.
 */
enum dma_ch {
	DMACH_UART0_RX,
	DMACH_UART0_TX,
	DMACH_UART1_RX,
	DMACH_UART1_TX,
	DMACH_UART2_RX,
	DMACH_UART2_TX,
	DMACH_UART3_RX,
	DMACH_UART3_TX,
	DMACH_UART4_RX,
	DMACH_UART4_TX,
	DMACH_UART5_RX,
	DMACH_UART5_TX,
	DMACH_USI_RX,
	DMACH_USI_TX,
	DMACH_IRDA,
	DMACH_I2S0_RX,
	DMACH_I2S0_TX,
	DMACH_I2S0S_TX,
	DMACH_I2S1_RX,
	DMACH_I2S1_TX,
	DMACH_I2S2_RX,
	DMACH_I2S2_TX,
	DMACH_SPI0_RX,
	DMACH_SPI0_TX,
	DMACH_SPI1_RX,
	DMACH_SPI1_TX,
	DMACH_SPI2_RX,
	DMACH_SPI2_TX,
	DMACH_AC97_MICIN,
	DMACH_AC97_PCMIN,
	DMACH_AC97_PCMOUT,
	DMACH_EXTERNAL,
	DMACH_PWM,
	DMACH_SPDIF,
	DMACH_HSI_RX,
	DMACH_HSI_TX,
	DMACH_PCM0_TX,
	DMACH_PCM0_RX,
	DMACH_PCM1_TX,
	DMACH_PCM1_RX,
	DMACH_PCM2_TX,
	DMACH_PCM2_RX,
	DMACH_MSM_REQ3,
	DMACH_MSM_REQ2,
	DMACH_MSM_REQ1,
	DMACH_MSM_REQ0,
	DMACH_SLIMBUS0_RX,
	DMACH_SLIMBUS0_TX,
	DMACH_SLIMBUS0AUX_RX,
	DMACH_SLIMBUS0AUX_TX,
	DMACH_SLIMBUS1_RX,
	DMACH_SLIMBUS1_TX,
	DMACH_SLIMBUS2_RX,
	DMACH_SLIMBUS2_TX,
	DMACH_SLIMBUS3_RX,
	DMACH_SLIMBUS3_TX,
	DMACH_SLIMBUS4_RX,
	DMACH_SLIMBUS4_TX,
	DMACH_SLIMBUS5_RX,
	DMACH_SLIMBUS5_TX,
	/* END Marker, also used to denote a reserved channel */
	DMACH_MAX,
};

static inline bool s3c_dma_has_circular(void)
{
	return true;
}

#include <plat/dma.h>

#endif	/* __S3C_DMA_PL330_H_ */
Tue Jul 19 12:36:07 PDT 2016
Fri Jul 22 15:42:03 PDT 2016
Sun, Jul 24, 2016  1:45:32 PM
Mon, Jul 25, 2016  8:11:23 PM
Tue, Jul 26, 2016  2:45:19 PM

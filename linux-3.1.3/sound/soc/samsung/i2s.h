/* sound/soc/samsung/i2s.h
 *
 * ALSA SoC Audio Layer - Samsung I2S Controller driver
 *
 * Copyright (c) 2010 Samsung Electronics Co. Ltd.
 *	Jaswinder Singh <jassi.brar@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __SND_SOC_SAMSUNG_I2S_H
#define __SND_SOC_SAMSUNG_I2S_H

/*
 * Maximum number of I2S blocks that any SoC can have.
 * The secondary interface of a CPU dai(if there exists any),
 * is indexed at [cpu-dai's ID + SAMSUNG_I2S_SECOFF]
 */
#define SAMSUNG_I2S_SECOFF	4

#define SAMSUNG_I2S_DIV_BCLK	1

#define SAMSUNG_I2S_RCLKSRC_0	0
#define SAMSUNG_I2S_RCLKSRC_1	1
#define SAMSUNG_I2S_CDCLK		2

#endif /* __SND_SOC_SAMSUNG_I2S_H */
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:05 PM
Mon, Jul 25, 2016  8:00:13 PM
Tue, Jul 26, 2016  2:34:51 PM

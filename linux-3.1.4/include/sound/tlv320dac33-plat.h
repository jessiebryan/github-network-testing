/*
 * Platform header for Texas Instruments TLV320DAC33 codec driver
 *
 * Author: Peter Ujfalusi <peter.ujfalusi@ti.com>
 *
 * Copyright:   (C) 2009 Nokia Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __TLV320DAC33_PLAT_H
#define __TLV320DAC33_PLAT_H

struct tlv320dac33_platform_data {
	int power_gpio;
	int mode1_latency; /* latency caused by the i2c writes in us */
	int auto_fifo_config; /* FIFO config based on the period size */
	int keep_bclk;	/* Keep the BCLK running in FIFO modes */
	u8 burst_bclkdiv;
};

#endif /* __TLV320DAC33_PLAT_H */
Tue Jul 19 12:36:00 PDT 2016
Fri Jul 22 15:41:49 PDT 2016
Sun, Jul 24, 2016  1:43:54 PM
Mon, Jul 25, 2016  8:09:26 PM
Tue, Jul 26, 2016  2:43:30 PM

/*
 * Copyright (C) ST-Ericsson SA 2010
 *
 * Author: Rabin Vincent <rabin.vincent@stericsson.com> for ST-Ericsson
 * License terms: GNU General Public License (GPL), version 2.
 */

#ifndef __MSP_H
#define __MSP_H

#include <linux/platform_data/dma-ste-dma40.h>

enum msp_i2s_id {
	MSP_I2S_0 = 0,
	MSP_I2S_1,
	MSP_I2S_2,
	MSP_I2S_3,
};

/* Platform data structure for a MSP I2S-device */
struct msp_i2s_platform_data {
	enum msp_i2s_id id;
	struct stedma40_chan_cfg *msp_i2s_dma_rx;
	struct stedma40_chan_cfg *msp_i2s_dma_tx;
};

#endif
Tue Jul 19 12:53:53 PDT 2016
Fri Jul 22 16:15:37 PDT 2016
Sun, Jul 24, 2016  5:57:31 PM
Tue, Jul 26, 2016 12:53:17 AM

/*
 * Platform data for LPC32xx SoC SLC NAND controller
 *
 * Copyright © 2012 Roland Stigge
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __LINUX_MTD_LPC32XX_SLC_H
#define __LINUX_MTD_LPC32XX_SLC_H

#include <linux/dmaengine.h>

struct lpc32xx_slc_platform_data {
	bool (*dma_filter)(struct dma_chan *chan, void *filter_param);
};

#endif  /* __LINUX_MTD_LPC32XX_SLC_H */
Tue Jul 19 12:49:20 PDT 2016
Fri Jul 22 16:06:51 PDT 2016
Sun, Jul 24, 2016  4:52:14 PM
Mon, Jul 25, 2016 11:41:15 PM

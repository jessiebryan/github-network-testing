/*
 * SH-Mobile High-Definition Multimedia Interface (HDMI)
 *
 * Copyright (C) 2010, Guennadi Liakhovetski <g.liakhovetski@gmx.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef SH_MOBILE_HDMI_H
#define SH_MOBILE_HDMI_H

struct sh_mobile_lcdc_chan_cfg;
struct device;
struct clk;

/*
 * flags format
 *
 * 0x0000000A
 *
 * A: Audio source select
 */

/* Audio source select */
#define HDMI_SND_SRC_MASK	(0xF << 0)
#define HDMI_SND_SRC_I2S	(0 << 0) /* default */
#define HDMI_SND_SRC_SPDIF	(1 << 0)
#define HDMI_SND_SRC_DSD	(2 << 0)
#define HDMI_SND_SRC_HBR	(3 << 0)

struct sh_mobile_hdmi_info {
	struct sh_mobile_lcdc_chan_cfg	*lcd_chan;
	struct device			*lcd_dev;
	unsigned int			 flags;
	long (*clk_optimize_parent)(unsigned long target, unsigned long *best_freq,
				    unsigned long *parent_freq);
};

#endif
Tue Jul 19 12:36:01 PDT 2016
Fri Jul 22 15:41:50 PDT 2016
Sun, Jul 24, 2016  1:43:58 PM
Mon, Jul 25, 2016  8:09:30 PM
Tue, Jul 26, 2016  2:43:34 PM

#ifndef __SOUND_FSI_H
#define __SOUND_FSI_H

/*
 * Fifo-attached Serial Interface (FSI) support for SH7724
 *
 * Copyright (C) 2009 Renesas Solutions Corp.
 * Kuninori Morimoto <morimoto.kuninori@renesas.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/clk.h>
#include <sound/soc.h>

/*
 * flags
 */
#define SH_FSI_FMT_SPDIF		(1 << 0) /* spdif for HDMI */
#define SH_FSI_ENABLE_STREAM_MODE	(1 << 1) /* for 16bit data */
#define SH_FSI_CLK_CPG			(1 << 2) /* FSIxCK + FSI-DIV */

struct sh_fsi_port_info {
	unsigned long flags;
	int tx_id;
	int rx_id;
};

struct sh_fsi_platform_info {
	struct sh_fsi_port_info port_a;
	struct sh_fsi_port_info port_b;
};

#endif /* __SOUND_FSI_H */
Tue Jul 19 12:47:28 PDT 2016
Fri Jul 22 16:03:20 PDT 2016
Sun, Jul 24, 2016  4:25:24 PM
Mon, Jul 25, 2016 11:11:22 PM

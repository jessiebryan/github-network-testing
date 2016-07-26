#ifndef __PLAT_AUDIO_H
#define __PLAT_AUDIO_H

#include <linux/mbus.h>

struct kirkwood_asoc_platform_data {
	u32 tclk;
	struct mbus_dram_target_info *dram;
	int burst;
};
#endif
Tue Jul 19 12:37:54 PDT 2016
Fri Jul 22 15:45:24 PDT 2016
Sun, Jul 24, 2016  2:10:12 PM
Mon, Jul 25, 2016  8:40:28 PM

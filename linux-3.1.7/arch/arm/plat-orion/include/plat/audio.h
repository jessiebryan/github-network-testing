#ifndef __PLAT_AUDIO_H
#define __PLAT_AUDIO_H

#include <linux/mbus.h>

struct kirkwood_asoc_platform_data {
	u32 tclk;
	struct mbus_dram_target_info *dram;
	int burst;
};
#endif
Tue Jul 19 12:36:41 PDT 2016
Fri Jul 22 15:43:10 PDT 2016
Sun, Jul 24, 2016  1:53:43 PM
Mon, Jul 25, 2016  8:21:01 PM

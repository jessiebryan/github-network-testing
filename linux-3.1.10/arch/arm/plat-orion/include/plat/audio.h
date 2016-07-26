#ifndef __PLAT_AUDIO_H
#define __PLAT_AUDIO_H

#include <linux/mbus.h>

struct kirkwood_asoc_platform_data {
	u32 tclk;
	struct mbus_dram_target_info *dram;
	int burst;
};
#endif
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:28 PM
Mon, Jul 25, 2016  6:19:11 PM
Mon, Jul 25, 2016  7:32:27 PM
Tue, Jul 26, 2016  2:08:39 PM

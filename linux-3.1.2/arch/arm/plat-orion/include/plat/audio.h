#ifndef __PLAT_AUDIO_H
#define __PLAT_AUDIO_H

#include <linux/mbus.h>

struct kirkwood_asoc_platform_data {
	u32 tclk;
	struct mbus_dram_target_info *dram;
	int burst;
};
#endif
Tue Jul 19 12:33:52 PDT 2016
Fri Jul 22 15:38:41 PDT 2016
Sun, Jul 24, 2016  1:20:43 PM
Mon, Jul 25, 2016  6:29:03 PM
Mon, Jul 25, 2016  7:42:09 PM
Tue, Jul 26, 2016  2:17:52 PM

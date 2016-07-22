#ifndef __PLAT_AUDIO_H
#define __PLAT_AUDIO_H

#include <linux/mbus.h>

struct kirkwood_asoc_platform_data {
	u32 tclk;
	struct mbus_dram_target_info *dram;
	int burst;
};
#endif
Tue Jul 19 12:37:15 PDT 2016
Fri Jul 22 15:44:17 PDT 2016

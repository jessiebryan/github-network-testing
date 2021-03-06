/*
 * arch/arm/plat-orion/include/plat/mvsdio.h
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __MACH_MVSDIO_H
#define __MACH_MVSDIO_H

#include <linux/mbus.h>

struct mvsdio_platform_data {
	struct mbus_dram_target_info *dram;
	unsigned int clock;
	int gpio_card_detect;
	int gpio_write_protect;
};

#endif
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:29 PM
Mon, Jul 25, 2016  6:19:11 PM
Mon, Jul 25, 2016  7:32:27 PM
Tue, Jul 26, 2016  2:08:40 PM

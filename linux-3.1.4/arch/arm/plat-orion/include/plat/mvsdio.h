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
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:56 PDT 2016
Sun, Jul 24, 2016  1:37:14 PM
Mon, Jul 25, 2016  8:01:34 PM
Tue, Jul 26, 2016  2:36:08 PM

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
	unsigned int clock;
	int gpio_card_detect;
	int gpio_write_protect;
};

#endif
Tue Jul 19 12:43:38 PDT 2016
Fri Jul 22 15:56:08 PDT 2016
Sun, Jul 24, 2016  3:29:22 PM
Mon, Jul 25, 2016 10:09:04 PM

/*
 * include/media/radio-si4713.h
 *
 * Board related data definitions for Si4713 radio transmitter chip.
 *
 * Copyright (c) 2009 Nokia Corporation
 * Contact: Eduardo Valentin <eduardo.valentin@nokia.com>
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 *
 */

#ifndef RADIO_SI4713_H
#define RADIO_SI4713_H

#include <linux/i2c.h>

#define SI4713_NAME "radio-si4713"

/*
 * Platform dependent definition
 */
struct radio_si4713_platform_data {
	int i2c_bus;
	struct i2c_board_info *subdev_board_info;
};

#endif /* ifndef RADIO_SI4713_H*/
Tue Jul 19 12:43:39 PDT 2016
Fri Jul 22 15:56:11 PDT 2016
Sun, Jul 24, 2016  3:29:45 PM
Mon, Jul 25, 2016 10:09:30 PM

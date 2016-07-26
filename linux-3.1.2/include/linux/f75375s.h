/*
 * f75375s.h - platform data structure for f75375s sensor
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2007, Riku Voipio <riku.voipio@iki.fi>
 */

#ifndef __LINUX_F75375S_H
#define __LINUX_F75375S_H

/* We want to set fans spinning on systems where there is no
 * BIOS to do that for us */
struct f75375s_platform_data {
	u8 pwm[2];
	u8 pwm_enable[2];
};

#endif /* __LINUX_F75375S_H */
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:25 PDT 2016
Sun, Jul 24, 2016  1:26:18 PM
Mon, Jul 25, 2016  6:35:45 PM
Mon, Jul 25, 2016  7:48:41 PM

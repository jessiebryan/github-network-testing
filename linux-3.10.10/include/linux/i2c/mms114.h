/*
 * Copyright (C) 2012 Samsung Electronics Co.Ltd
 * Author: Joonyoung Shim <jy0922.shim@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundationr
 */

#ifndef __LINUX_MMS114_H
#define __LINUX_MMS114_H

struct mms114_platform_data {
	unsigned int x_size;
	unsigned int y_size;
	unsigned int contact_threshold;
	unsigned int moving_threshold;
	bool x_invert;
	bool y_invert;

	void (*cfg_pin)(bool);
};

#endif	/* __LINUX_MMS114_H */
Tue Jul 19 12:39:33 PDT 2016
Fri Jul 22 15:48:40 PDT 2016
Sun, Jul 24, 2016  2:33:37 PM
Mon, Jul 25, 2016  9:06:31 PM

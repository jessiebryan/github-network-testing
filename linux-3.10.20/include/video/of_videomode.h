/*
 * Copyright 2012 Steffen Trumtrar <s.trumtrar@pengutronix.de>
 *
 * videomode of-helpers
 *
 * This file is released under the GPLv2
 */

#ifndef __LINUX_OF_VIDEOMODE_H
#define __LINUX_OF_VIDEOMODE_H

struct device_node;
struct videomode;

int of_get_videomode(struct device_node *np, struct videomode *vm,
		     int index);

#endif /* __LINUX_OF_VIDEOMODE_H */
Tue Jul 19 12:48:08 PDT 2016
Fri Jul 22 16:04:36 PDT 2016
Sun, Jul 24, 2016  4:35:06 PM
Mon, Jul 25, 2016 11:22:08 PM

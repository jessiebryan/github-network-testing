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
Tue Jul 19 12:53:58 PDT 2016
Fri Jul 22 16:15:47 PDT 2016
Sun, Jul 24, 2016  5:58:44 PM
Tue, Jul 26, 2016 12:54:37 AM

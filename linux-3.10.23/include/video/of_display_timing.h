/*
 * Copyright 2012 Steffen Trumtrar <s.trumtrar@pengutronix.de>
 *
 * display timings of helpers
 *
 * This file is released under the GPLv2
 */

#ifndef __LINUX_OF_DISPLAY_TIMING_H
#define __LINUX_OF_DISPLAY_TIMING_H

struct device_node;
struct display_timings;

#define OF_USE_NATIVE_MODE -1

struct display_timings *of_get_display_timings(struct device_node *np);
int of_display_timings_exist(struct device_node *np);

#endif
Tue Jul 19 12:50:04 PDT 2016
Fri Jul 22 16:08:14 PDT 2016
Sun, Jul 24, 2016  5:02:54 PM
Mon, Jul 25, 2016 11:52:58 PM

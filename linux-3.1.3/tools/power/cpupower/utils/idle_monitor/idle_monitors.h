/*
 *  (C) 2010,2011       Thomas Renninger <trenn@suse.de>, Novell Inc.
 *
 *  Licensed under the terms of the GNU GPL License version 2.
 *
 *  Based on the idea from Michael Matz <matz@suse.de>
 *
 */

#ifndef _CPUIDLE_IDLE_MONITORS_H_
#define _CPUIDLE_IDLE_MONITORS_H_

#define DEF(x) extern struct cpuidle_monitor x ##_monitor;
#include "idle_monitors.def"
#undef DEF
extern struct cpuidle_monitor *all_monitors[];

#endif /* _CPUIDLE_IDLE_MONITORS_H_ */
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:10 PM
Mon, Jul 25, 2016  8:00:19 PM

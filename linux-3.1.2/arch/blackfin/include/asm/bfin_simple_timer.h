/*
 * Copyright 2006-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _bfin_simple_timer_h_
#define _bfin_simple_timer_h_

#include <linux/ioctl.h>

#define BFIN_SIMPLE_TIMER_IOCTL_MAGIC 't'

#define BFIN_SIMPLE_TIMER_SET_PERIOD _IO (BFIN_SIMPLE_TIMER_IOCTL_MAGIC,  2)
#define BFIN_SIMPLE_TIMER_START      _IO (BFIN_SIMPLE_TIMER_IOCTL_MAGIC,  6)
#define BFIN_SIMPLE_TIMER_STOP       _IO (BFIN_SIMPLE_TIMER_IOCTL_MAGIC,  8)
#define BFIN_SIMPLE_TIMER_READ       _IO (BFIN_SIMPLE_TIMER_IOCTL_MAGIC, 10)

#endif
Tue Jul 19 12:33:53 PDT 2016
Fri Jul 22 15:38:42 PDT 2016
Sun, Jul 24, 2016  1:20:53 PM
Mon, Jul 25, 2016  6:29:15 PM
Mon, Jul 25, 2016  7:42:21 PM
Tue, Jul 26, 2016  2:18:04 PM

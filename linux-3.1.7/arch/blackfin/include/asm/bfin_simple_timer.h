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
Tue Jul 19 12:36:41 PDT 2016
Fri Jul 22 15:43:11 PDT 2016
Sun, Jul 24, 2016  1:53:53 PM
Mon, Jul 25, 2016  8:21:13 PM

#ifndef _LINUX_TIMES_H
#define _LINUX_TIMES_H

#include <linux/types.h>

struct tms {
	__kernel_clock_t tms_utime;
	__kernel_clock_t tms_stime;
	__kernel_clock_t tms_cutime;
	__kernel_clock_t tms_cstime;
};

#endif
Tue Jul 19 12:38:21 PDT 2016
Fri Jul 22 15:46:15 PDT 2016
Sun, Jul 24, 2016  2:16:28 PM
Mon, Jul 25, 2016  8:47:23 PM

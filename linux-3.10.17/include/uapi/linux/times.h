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
Tue Jul 19 12:46:13 PDT 2016
Fri Jul 22 16:01:00 PDT 2016
Sun, Jul 24, 2016  4:07:20 PM
Mon, Jul 25, 2016 10:51:17 PM

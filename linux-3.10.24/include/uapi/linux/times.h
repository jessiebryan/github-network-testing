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
Tue Jul 19 12:50:43 PDT 2016
Fri Jul 22 16:09:26 PDT 2016
Sun, Jul 24, 2016  5:12:05 PM
Tue, Jul 26, 2016 12:03:08 AM

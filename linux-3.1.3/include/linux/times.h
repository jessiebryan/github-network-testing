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
Tue Jul 19 12:35:24 PDT 2016
Fri Jul 22 15:40:39 PDT 2016
Sun, Jul 24, 2016  1:35:15 PM
Mon, Jul 25, 2016  7:59:13 PM
Tue, Jul 26, 2016  2:33:56 PM

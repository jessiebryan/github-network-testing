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
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:26 PDT 2016
Sun, Jul 24, 2016  1:18:44 PM
Mon, Jul 25, 2016  6:26:40 PM
Mon, Jul 25, 2016  7:39:48 PM
Tue, Jul 26, 2016  2:15:38 PM

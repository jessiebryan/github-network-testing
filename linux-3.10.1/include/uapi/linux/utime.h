#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:39:01 PDT 2016
Fri Jul 22 15:47:34 PDT 2016
Sun, Jul 24, 2016  2:25:58 PM
Mon, Jul 25, 2016  8:57:59 PM

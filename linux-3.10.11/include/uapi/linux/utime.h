#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:42:25 PDT 2016
Fri Jul 22 15:53:55 PDT 2016
Sun, Jul 24, 2016  3:12:01 PM
Mon, Jul 25, 2016  9:49:44 PM

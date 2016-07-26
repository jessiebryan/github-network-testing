#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:45:00 PDT 2016
Fri Jul 22 15:58:39 PDT 2016
Sun, Jul 24, 2016  3:48:55 PM
Mon, Jul 25, 2016 10:30:49 PM

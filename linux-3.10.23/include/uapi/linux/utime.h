#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:50:04 PDT 2016
Fri Jul 22 16:08:14 PDT 2016
Sun, Jul 24, 2016  5:02:50 PM
Mon, Jul 25, 2016 11:52:54 PM

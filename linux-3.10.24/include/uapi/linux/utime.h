#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:50:43 PDT 2016
Fri Jul 22 16:09:27 PDT 2016
Sun, Jul 24, 2016  5:12:06 PM
Tue, Jul 26, 2016 12:03:09 AM

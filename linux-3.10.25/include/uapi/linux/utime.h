#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:51:22 PDT 2016
Fri Jul 22 16:10:43 PDT 2016
Sun, Jul 24, 2016  5:21:25 PM
Tue, Jul 26, 2016 12:13:27 AM

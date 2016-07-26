#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:48:08 PDT 2016
Fri Jul 22 16:04:35 PDT 2016
Sun, Jul 24, 2016  4:35:03 PM
Mon, Jul 25, 2016 11:22:04 PM

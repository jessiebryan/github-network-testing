#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:49:26 PDT 2016
Fri Jul 22 16:07:00 PDT 2016
Sun, Jul 24, 2016  4:53:29 PM
Mon, Jul 25, 2016 11:42:39 PM

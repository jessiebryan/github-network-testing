#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:34:28 PDT 2016
Fri Jul 22 15:39:31 PDT 2016
Sun, Jul 24, 2016  1:27:03 PM

#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:38:22 PDT 2016
Fri Jul 22 15:46:15 PDT 2016
Sun, Jul 24, 2016  2:16:31 PM
Mon, Jul 25, 2016  8:47:27 PM

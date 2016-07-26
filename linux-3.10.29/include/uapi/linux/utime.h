#ifndef _LINUX_UTIME_H
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	__kernel_time_t actime;
	__kernel_time_t modtime;
};

#endif
Tue Jul 19 12:53:58 PDT 2016
Fri Jul 22 16:15:46 PDT 2016
Sun, Jul 24, 2016  5:58:40 PM
Tue, Jul 26, 2016 12:54:33 AM

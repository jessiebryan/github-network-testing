#ifndef _UAPI_LINUX_NVRAM_H
#define _UAPI_LINUX_NVRAM_H

#include <linux/ioctl.h>

/* /dev/nvram ioctls */
#define NVRAM_INIT	_IO('p', 0x40) /* initialize NVRAM and set checksum */
#define NVRAM_SETCKS	_IO('p', 0x41) /* recalculate checksum */

/* for all current systems, this is where NVRAM starts */
#define NVRAM_FIRST_BYTE    14
/* all these functions expect an NVRAM offset, not an absolute */
#define NVRAM_OFFSET(x)   ((x)-NVRAM_FIRST_BYTE)


#endif /* _UAPI_LINUX_NVRAM_H */
Tue Jul 19 12:47:29 PDT 2016
Fri Jul 22 16:03:23 PDT 2016
Sun, Jul 24, 2016  4:25:44 PM
Mon, Jul 25, 2016 11:11:43 PM

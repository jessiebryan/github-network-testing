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
Tue Jul 19 12:43:42 PDT 2016
Fri Jul 22 15:56:16 PDT 2016
Sun, Jul 24, 2016  3:30:22 PM
Mon, Jul 25, 2016 10:10:11 PM

#ifndef _LINUX_NVRAM_H
#define _LINUX_NVRAM_H

#include <linux/ioctl.h>

/* /dev/nvram ioctls */
#define NVRAM_INIT	_IO('p', 0x40) /* initialize NVRAM and set checksum */
#define NVRAM_SETCKS	_IO('p', 0x41) /* recalculate checksum */

/* for all current systems, this is where NVRAM starts */
#define NVRAM_FIRST_BYTE    14
/* all these functions expect an NVRAM offset, not an absolute */
#define NVRAM_OFFSET(x)   ((x)-NVRAM_FIRST_BYTE)

#ifdef __KERNEL__
/* __foo is foo without grabbing the rtc_lock - get it yourself */
extern unsigned char __nvram_read_byte(int i);
extern unsigned char nvram_read_byte(int i);
extern void __nvram_write_byte(unsigned char c, int i);
extern void nvram_write_byte(unsigned char c, int i);
extern int __nvram_check_checksum(void);
extern int nvram_check_checksum(void);
#endif

#endif  /* _LINUX_NVRAM_H */
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:15 PM
Mon, Jul 25, 2016  8:08:40 PM
Tue, Jul 26, 2016  2:42:47 PM

#ifndef _LINUX_NVRAM_H
#define _LINUX_NVRAM_H

#include <uapi/linux/nvram.h>

/* __foo is foo without grabbing the rtc_lock - get it yourself */
extern unsigned char __nvram_read_byte(int i);
extern unsigned char nvram_read_byte(int i);
extern void __nvram_write_byte(unsigned char c, int i);
extern void nvram_write_byte(unsigned char c, int i);
extern int __nvram_check_checksum(void);
extern int nvram_check_checksum(void);
#endif  /* _LINUX_NVRAM_H */
Tue Jul 19 12:48:41 PDT 2016
Fri Jul 22 16:05:38 PDT 2016
Sun, Jul 24, 2016  4:43:05 PM
Mon, Jul 25, 2016 11:31:00 PM

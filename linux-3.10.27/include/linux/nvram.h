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
Tue Jul 19 12:52:35 PDT 2016
Fri Jul 22 16:13:05 PDT 2016
Sun, Jul 24, 2016  5:38:50 PM
Tue, Jul 26, 2016 12:32:40 AM

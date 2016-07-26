#ifndef _XTENSA_UNISTD_H
#define _XTENSA_UNISTD_H

#define __ARCH_WANT_SYS_CLONE
#include <uapi/asm/unistd.h>

#define __ARCH_WANT_STAT64
#define __ARCH_WANT_SYS_UTIME
#define __ARCH_WANT_SYS_LLSEEK
#define __ARCH_WANT_SYS_GETPGRP

/* 
 * Ignore legacy system calls in the checksyscalls.sh script
 */

#define __IGNORE_fork				/* use clone */
#define __IGNORE_time
#define __IGNORE_alarm				/* use setitimer */
#define __IGNORE_pause
#define __IGNORE_mmap				/* use mmap2 */
#define __IGNORE_vfork				/* use clone */
#define __IGNORE_fadvise64			/* use fadvise64_64 */

#endif /* _XTENSA_UNISTD_H */
Tue Jul 19 12:51:02 PDT 2016
Fri Jul 22 16:10:05 PDT 2016
Sun, Jul 24, 2016  5:16:42 PM
Tue, Jul 26, 2016 12:08:17 AM

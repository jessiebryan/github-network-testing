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
Tue Jul 19 12:46:31 PDT 2016
Fri Jul 22 16:01:37 PDT 2016
Sun, Jul 24, 2016  4:11:54 PM
Mon, Jul 25, 2016 10:56:23 PM

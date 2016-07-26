#ifndef _ASM_ARM_SECCOMP_H
#define _ASM_ARM_SECCOMP_H

#include <linux/unistd.h>

#define __NR_seccomp_read __NR_read
#define __NR_seccomp_write __NR_write
#define __NR_seccomp_exit __NR_exit
#define __NR_seccomp_sigreturn __NR_rt_sigreturn

#endif /* _ASM_ARM_SECCOMP_H */
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:33 PDT 2016
Sun, Jul 24, 2016  5:12:58 PM
Tue, Jul 26, 2016 12:04:06 AM

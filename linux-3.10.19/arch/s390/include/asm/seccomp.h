#ifndef _ASM_S390_SECCOMP_H
#define _ASM_S390_SECCOMP_H

#include <linux/unistd.h>

#define __NR_seccomp_read	__NR_read
#define __NR_seccomp_write	__NR_write
#define __NR_seccomp_exit	__NR_exit
#define __NR_seccomp_sigreturn	__NR_sigreturn

#define __NR_seccomp_read_32	__NR_read
#define __NR_seccomp_write_32	__NR_write
#define __NR_seccomp_exit_32	__NR_exit
#define __NR_seccomp_sigreturn_32 __NR_sigreturn

#endif	/* _ASM_S390_SECCOMP_H */
Tue Jul 19 12:47:07 PDT 2016
Fri Jul 22 16:02:40 PDT 2016
Sun, Jul 24, 2016  4:20:08 PM
Mon, Jul 25, 2016 11:05:33 PM

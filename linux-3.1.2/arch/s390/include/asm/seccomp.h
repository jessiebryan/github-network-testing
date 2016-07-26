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
Tue Jul 19 12:34:00 PDT 2016
Fri Jul 22 15:38:56 PDT 2016
Sun, Jul 24, 2016  1:22:39 PM
Mon, Jul 25, 2016  6:31:22 PM
Mon, Jul 25, 2016  7:44:25 PM
Tue, Jul 26, 2016  2:20:02 PM

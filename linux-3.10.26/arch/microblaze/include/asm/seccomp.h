#ifndef _ASM_MICROBLAZE_SECCOMP_H
#define _ASM_MICROBLAZE_SECCOMP_H

#include <linux/unistd.h>

#define __NR_seccomp_read		__NR_read
#define __NR_seccomp_write		__NR_write
#define __NR_seccomp_exit		__NR_exit
#define __NR_seccomp_sigreturn		__NR_sigreturn

#define __NR_seccomp_read_32		__NR_read
#define __NR_seccomp_write_32		__NR_write
#define __NR_seccomp_exit_32		__NR_exit
#define __NR_seccomp_sigreturn_32	__NR_sigreturn

#endif	/* _ASM_MICROBLAZE_SECCOMP_H */
Tue Jul 19 12:51:33 PDT 2016
Fri Jul 22 16:11:04 PDT 2016
Sun, Jul 24, 2016  5:24:02 PM
Tue, Jul 26, 2016 12:16:20 AM

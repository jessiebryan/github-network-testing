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
Tue Jul 19 12:35:37 PDT 2016
Fri Jul 22 15:41:05 PDT 2016
Sun, Jul 24, 2016  1:38:14 PM
Mon, Jul 25, 2016  8:02:46 PM

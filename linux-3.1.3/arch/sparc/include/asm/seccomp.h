#ifndef _ASM_SECCOMP_H

#include <linux/unistd.h>

#define __NR_seccomp_read __NR_read
#define __NR_seccomp_write __NR_write
#define __NR_seccomp_exit __NR_exit
#define __NR_seccomp_sigreturn __NR_rt_sigreturn

#define __NR_seccomp_read_32 __NR_read
#define __NR_seccomp_write_32 __NR_write
#define __NR_seccomp_exit_32 __NR_exit
#define __NR_seccomp_sigreturn_32 __NR_sigreturn

#endif /* _ASM_SECCOMP_H */
Tue Jul 19 12:35:07 PDT 2016
Fri Jul 22 15:40:07 PDT 2016
Sun, Jul 24, 2016  1:31:17 PM
Mon, Jul 25, 2016  7:54:32 PM
Tue, Jul 26, 2016  2:29:35 PM

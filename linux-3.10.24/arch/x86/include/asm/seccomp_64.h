#ifndef _ASM_X86_SECCOMP_64_H
#define _ASM_X86_SECCOMP_64_H

#include <linux/unistd.h>
#include <asm/ia32_unistd.h>

#define __NR_seccomp_read __NR_read
#define __NR_seccomp_write __NR_write
#define __NR_seccomp_exit __NR_exit
#define __NR_seccomp_sigreturn __NR_rt_sigreturn

#define __NR_seccomp_read_32 __NR_ia32_read
#define __NR_seccomp_write_32 __NR_ia32_write
#define __NR_seccomp_exit_32 __NR_ia32_exit
#define __NR_seccomp_sigreturn_32 __NR_ia32_sigreturn

#endif /* _ASM_X86_SECCOMP_64_H */
Tue Jul 19 12:50:22 PDT 2016
Fri Jul 22 16:08:48 PDT 2016
Sun, Jul 24, 2016  5:07:13 PM
Mon, Jul 25, 2016 11:57:47 PM

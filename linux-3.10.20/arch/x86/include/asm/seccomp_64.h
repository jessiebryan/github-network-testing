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
Tue Jul 19 12:47:48 PDT 2016
Fri Jul 22 16:03:58 PDT 2016
Sun, Jul 24, 2016  4:30:11 PM
Mon, Jul 25, 2016 11:16:41 PM

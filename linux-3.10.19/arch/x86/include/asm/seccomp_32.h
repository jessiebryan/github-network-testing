#ifndef _ASM_X86_SECCOMP_32_H
#define _ASM_X86_SECCOMP_32_H

#include <linux/unistd.h>

#define __NR_seccomp_read __NR_read
#define __NR_seccomp_write __NR_write
#define __NR_seccomp_exit __NR_exit
#define __NR_seccomp_sigreturn __NR_sigreturn

#endif /* _ASM_X86_SECCOMP_32_H */
Tue Jul 19 12:47:10 PDT 2016
Fri Jul 22 16:02:46 PDT 2016

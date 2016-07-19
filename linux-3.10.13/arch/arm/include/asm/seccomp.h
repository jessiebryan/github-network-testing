#ifndef _ASM_ARM_SECCOMP_H
#define _ASM_ARM_SECCOMP_H

#include <linux/unistd.h>

#define __NR_seccomp_read __NR_read
#define __NR_seccomp_write __NR_write
#define __NR_seccomp_exit __NR_exit
#define __NR_seccomp_sigreturn __NR_rt_sigreturn

#endif /* _ASM_ARM_SECCOMP_H */
Tue Jul 19 12:43:08 PDT 2016

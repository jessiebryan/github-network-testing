#ifndef _ASM_X86_IA32_UNISTD_H
#define _ASM_X86_IA32_UNISTD_H

/*
 * This file contains the system call numbers of the ia32 port,
 * this is for the kernel only.
 * Only add syscalls here where some part of the kernel needs to know
 * the number. This should be otherwise in sync with asm-x86/unistd_32.h. -AK
 */

#define __NR_ia32_restart_syscall 0
#define __NR_ia32_exit		  1
#define __NR_ia32_read		  3
#define __NR_ia32_write		  4
#define __NR_ia32_sigreturn	119
#define __NR_ia32_rt_sigreturn	173

#endif /* _ASM_X86_IA32_UNISTD_H */
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:01 PDT 2016
Sun, Jul 24, 2016  1:23:22 PM
Mon, Jul 25, 2016  6:32:14 PM
Mon, Jul 25, 2016  7:45:15 PM
Tue, Jul 26, 2016  2:20:50 PM

#ifndef _CRIS_PTRACE_H
#define _CRIS_PTRACE_H

#include <arch/ptrace.h>

#ifdef __KERNEL__

/* Arbitrarily choose the same ptrace numbers as used by the Sparc code. */
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13

#define profile_pc(regs) instruction_pointer(regs)

#endif /* __KERNEL__ */

#endif /* _CRIS_PTRACE_H */
Tue Jul 19 12:36:08 PDT 2016
Fri Jul 22 15:42:06 PDT 2016
Sun, Jul 24, 2016  1:45:55 PM
Mon, Jul 25, 2016  8:11:51 PM

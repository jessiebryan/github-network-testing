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
Tue Jul 19 12:35:35 PDT 2016
Fri Jul 22 15:41:00 PDT 2016
Sun, Jul 24, 2016  1:37:41 PM
Mon, Jul 25, 2016  8:02:06 PM
Tue, Jul 26, 2016  2:36:38 PM

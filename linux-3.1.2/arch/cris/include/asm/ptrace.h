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
Tue Jul 19 12:33:54 PDT 2016
Fri Jul 22 15:38:45 PDT 2016
Sun, Jul 24, 2016  1:21:10 PM
Mon, Jul 25, 2016  6:29:36 PM
Mon, Jul 25, 2016  7:42:41 PM
Tue, Jul 26, 2016  2:18:23 PM

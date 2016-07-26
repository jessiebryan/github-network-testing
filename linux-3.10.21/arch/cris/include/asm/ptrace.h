#ifndef _CRIS_PTRACE_H
#define _CRIS_PTRACE_H

#include <uapi/asm/ptrace.h>


/* Arbitrarily choose the same ptrace numbers as used by the Sparc code. */
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13

#define profile_pc(regs) instruction_pointer(regs)
#define current_user_stack_pointer() rdusp()

#endif /* _CRIS_PTRACE_H */
Tue Jul 19 12:48:17 PDT 2016
Fri Jul 22 16:04:51 PDT 2016
Sun, Jul 24, 2016  4:36:59 PM
Mon, Jul 25, 2016 11:24:14 PM

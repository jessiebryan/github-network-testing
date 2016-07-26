#ifndef _CRIS_PTRACE_H
#define _CRIS_PTRACE_H

#include <uapi/asm/ptrace.h>


/* Arbitrarily choose the same ptrace numbers as used by the Sparc code. */
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13

#define profile_pc(regs) instruction_pointer(regs)
#define current_user_stack_pointer() rdusp()

#endif /* _CRIS_PTRACE_H */
Tue Jul 19 12:50:51 PDT 2016
Fri Jul 22 16:09:42 PDT 2016
Sun, Jul 24, 2016  5:14:04 PM
Tue, Jul 26, 2016 12:05:19 AM

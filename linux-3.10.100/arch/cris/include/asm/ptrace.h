#ifndef _CRIS_PTRACE_H
#define _CRIS_PTRACE_H

#include <uapi/asm/ptrace.h>


/* Arbitrarily choose the same ptrace numbers as used by the Sparc code. */
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13

#define profile_pc(regs) instruction_pointer(regs)
#define current_user_stack_pointer() rdusp()

#endif /* _CRIS_PTRACE_H */
Tue Jul 19 12:39:47 PDT 2016
Fri Jul 22 15:49:08 PDT 2016
Sun, Jul 24, 2016  2:37:07 PM
Mon, Jul 25, 2016  9:10:23 PM

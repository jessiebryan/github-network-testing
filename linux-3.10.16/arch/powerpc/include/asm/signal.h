#ifndef _ASM_POWERPC_SIGNAL_H
#define _ASM_POWERPC_SIGNAL_H

#define __ARCH_HAS_SA_RESTORER
#include <uapi/asm/signal.h>
#include <uapi/asm/ptrace.h>

extern unsigned long get_tm_stackpointer(struct pt_regs *regs);

#endif /* _ASM_POWERPC_SIGNAL_H */
Tue Jul 19 12:45:14 PDT 2016
Fri Jul 22 15:59:06 PDT 2016
Sun, Jul 24, 2016  3:52:20 PM
Mon, Jul 25, 2016 10:34:37 PM

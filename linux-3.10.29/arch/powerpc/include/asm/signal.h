#ifndef _ASM_POWERPC_SIGNAL_H
#define _ASM_POWERPC_SIGNAL_H

#define __ARCH_HAS_SA_RESTORER
#include <uapi/asm/signal.h>
#include <uapi/asm/ptrace.h>

extern unsigned long get_tm_stackpointer(struct pt_regs *regs);

#endif /* _ASM_POWERPC_SIGNAL_H */
Tue Jul 19 12:53:33 PDT 2016
Fri Jul 22 16:14:59 PDT 2016
Sun, Jul 24, 2016  5:52:49 PM
Tue, Jul 26, 2016 12:48:06 AM

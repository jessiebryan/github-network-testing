#ifndef _ASM_POWERPC_SIGNAL_H
#define _ASM_POWERPC_SIGNAL_H

#define __ARCH_HAS_SA_RESTORER
#include <uapi/asm/signal.h>
#include <uapi/asm/ptrace.h>

extern unsigned long get_tm_stackpointer(struct pt_regs *regs);

#endif /* _ASM_POWERPC_SIGNAL_H */
Tue Jul 19 12:50:57 PDT 2016
Fri Jul 22 16:09:55 PDT 2016
Sun, Jul 24, 2016  5:15:33 PM
Tue, Jul 26, 2016 12:07:01 AM

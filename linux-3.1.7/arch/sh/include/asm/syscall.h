#ifndef __ASM_SH_SYSCALL_H
#define __ASM_SH_SYSCALL_H

extern const unsigned long sys_call_table[];

#ifdef CONFIG_SUPERH32
# include "syscall_32.h"
#else
# include "syscall_64.h"
#endif

#endif /* __ASM_SH_SYSCALL_H */
Tue Jul 19 12:36:49 PDT 2016
Fri Jul 22 15:43:27 PDT 2016
Sun, Jul 24, 2016  1:55:50 PM
Mon, Jul 25, 2016  8:23:31 PM

#ifndef __ASM_SH_SYSCALL_H
#define __ASM_SH_SYSCALL_H

extern const unsigned long sys_call_table[];

#ifdef CONFIG_SUPERH32
# include "syscall_32.h"
#else
# include "syscall_64.h"
#endif

#endif /* __ASM_SH_SYSCALL_H */
Tue Jul 19 12:37:25 PDT 2016
Fri Jul 22 15:44:34 PDT 2016
Sun, Jul 24, 2016  2:04:05 PM
Mon, Jul 25, 2016  8:33:19 PM

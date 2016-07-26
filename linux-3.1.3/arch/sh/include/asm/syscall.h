#ifndef __ASM_SH_SYSCALL_H
#define __ASM_SH_SYSCALL_H

extern const unsigned long sys_call_table[];

#ifdef CONFIG_SUPERH32
# include "syscall_32.h"
#else
# include "syscall_64.h"
#endif

#endif /* __ASM_SH_SYSCALL_H */
Tue Jul 19 12:35:00 PDT 2016
Fri Jul 22 15:40:05 PDT 2016
Sun, Jul 24, 2016  1:31:06 PM
Mon, Jul 25, 2016  7:54:18 PM
Tue, Jul 26, 2016  2:29:22 PM

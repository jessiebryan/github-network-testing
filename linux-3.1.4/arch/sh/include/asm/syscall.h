#ifndef __ASM_SH_SYSCALL_H
#define __ASM_SH_SYSCALL_H

extern const unsigned long sys_call_table[];

#ifdef CONFIG_SUPERH32
# include "syscall_32.h"
#else
# include "syscall_64.h"
#endif

#endif /* __ASM_SH_SYSCALL_H */
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:13 PDT 2016
Sun, Jul 24, 2016  1:39:20 PM
Mon, Jul 25, 2016  8:04:04 PM
Tue, Jul 26, 2016  2:38:29 PM

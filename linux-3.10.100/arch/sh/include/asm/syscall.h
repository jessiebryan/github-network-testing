#ifndef __ASM_SH_SYSCALL_H
#define __ASM_SH_SYSCALL_H

extern const unsigned long sys_call_table[];

#ifdef CONFIG_SUPERH32
# include <asm/syscall_32.h>
#else
# include <asm/syscall_64.h>
#endif

#endif /* __ASM_SH_SYSCALL_H */
Tue Jul 19 12:39:55 PDT 2016
Fri Jul 22 15:49:23 PDT 2016
Sun, Jul 24, 2016  2:38:56 PM
Mon, Jul 25, 2016  9:12:25 PM

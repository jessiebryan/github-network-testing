#ifndef __ASM_SH_SYSCALL_H
#define __ASM_SH_SYSCALL_H

extern const unsigned long sys_call_table[];

#ifdef CONFIG_SUPERH32
# include <asm/syscall_32.h>
#else
# include <asm/syscall_64.h>
#endif

#endif /* __ASM_SH_SYSCALL_H */
Tue Jul 19 12:39:17 PDT 2016
Fri Jul 22 15:48:06 PDT 2016
Sun, Jul 24, 2016  2:29:44 PM
Mon, Jul 25, 2016  9:02:11 PM

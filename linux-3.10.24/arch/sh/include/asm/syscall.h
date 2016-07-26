#ifndef __ASM_SH_SYSCALL_H
#define __ASM_SH_SYSCALL_H

extern const unsigned long sys_call_table[];

#ifdef CONFIG_SUPERH32
# include <asm/syscall_32.h>
#else
# include <asm/syscall_64.h>
#endif

#endif /* __ASM_SH_SYSCALL_H */
Tue Jul 19 12:50:19 PDT 2016
Fri Jul 22 16:08:44 PDT 2016
Sun, Jul 24, 2016  5:06:37 PM
Mon, Jul 25, 2016 11:57:06 PM

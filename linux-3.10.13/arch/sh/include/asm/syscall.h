#ifndef __ASM_SH_SYSCALL_H
#define __ASM_SH_SYSCALL_H

extern const unsigned long sys_call_table[];

#ifdef CONFIG_SUPERH32
# include <asm/syscall_32.h>
#else
# include <asm/syscall_64.h>
#endif

#endif /* __ASM_SH_SYSCALL_H */
Tue Jul 19 12:43:20 PDT 2016
Fri Jul 22 15:55:35 PDT 2016
Sun, Jul 24, 2016  3:25:01 PM
Mon, Jul 25, 2016 10:04:13 PM

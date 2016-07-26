#ifndef __ASM_SH_SYSCALL_H
#define __ASM_SH_SYSCALL_H

extern const unsigned long sys_call_table[];

#ifdef CONFIG_SUPERH32
# include <asm/syscall_32.h>
#else
# include <asm/syscall_64.h>
#endif

#endif /* __ASM_SH_SYSCALL_H */
Tue Jul 19 12:52:16 PDT 2016
Fri Jul 22 16:12:31 PDT 2016
Sun, Jul 24, 2016  5:34:32 PM
Tue, Jul 26, 2016 12:27:56 AM

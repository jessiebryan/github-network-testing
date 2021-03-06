#ifndef _M68K_PTRACE_H
#define _M68K_PTRACE_H

#include <uapi/asm/ptrace.h>

#ifndef __ASSEMBLY__

#ifndef PS_S
#define PS_S  (0x2000)
#define PS_M  (0x1000)
#endif

#define user_mode(regs) (!((regs)->sr & PS_S))
#define instruction_pointer(regs) ((regs)->pc)
#define profile_pc(regs) instruction_pointer(regs)
#define current_pt_regs() \
	(struct pt_regs *)((char *)current_thread_info() + THREAD_SIZE) - 1
#define current_user_stack_pointer() rdusp()

#define arch_has_single_step()	(1)

#ifdef CONFIG_MMU
#define arch_has_block_step()	(1)
#endif

#endif /* __ASSEMBLY__ */
#endif /* _M68K_PTRACE_H */
Tue Jul 19 12:39:11 PDT 2016
Fri Jul 22 15:47:55 PDT 2016
Sun, Jul 24, 2016  2:28:26 PM
Mon, Jul 25, 2016  9:00:44 PM

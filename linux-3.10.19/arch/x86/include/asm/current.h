#ifndef _ASM_X86_CURRENT_H
#define _ASM_X86_CURRENT_H

#include <linux/compiler.h>
#include <asm/percpu.h>

#ifndef __ASSEMBLY__
struct task_struct;

DECLARE_PER_CPU(struct task_struct *, current_task);

static __always_inline struct task_struct *get_current(void)
{
	return this_cpu_read_stable(current_task);
}

#define current get_current()

#endif /* __ASSEMBLY__ */

#endif /* _ASM_X86_CURRENT_H */
Tue Jul 19 12:47:10 PDT 2016
Fri Jul 22 16:02:46 PDT 2016
Sun, Jul 24, 2016  4:20:50 PM
Mon, Jul 25, 2016 11:06:19 PM

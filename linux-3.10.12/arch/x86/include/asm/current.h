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
Tue Jul 19 12:42:43 PDT 2016
Fri Jul 22 15:54:28 PDT 2016
Sun, Jul 24, 2016  3:16:17 PM
Mon, Jul 25, 2016  9:54:34 PM

#ifndef ASM_X86_KMEMCHECK_H
#define ASM_X86_KMEMCHECK_H

#include <linux/types.h>
#include <asm/ptrace.h>

#ifdef CONFIG_KMEMCHECK
bool kmemcheck_active(struct pt_regs *regs);

void kmemcheck_show(struct pt_regs *regs);
void kmemcheck_hide(struct pt_regs *regs);

bool kmemcheck_fault(struct pt_regs *regs,
	unsigned long address, unsigned long error_code);
bool kmemcheck_trap(struct pt_regs *regs);
#else
static inline bool kmemcheck_active(struct pt_regs *regs)
{
	return false;
}

static inline void kmemcheck_show(struct pt_regs *regs)
{
}

static inline void kmemcheck_hide(struct pt_regs *regs)
{
}

static inline bool kmemcheck_fault(struct pt_regs *regs,
	unsigned long address, unsigned long error_code)
{
	return false;
}

static inline bool kmemcheck_trap(struct pt_regs *regs)
{
	return false;
}
#endif /* CONFIG_KMEMCHECK */

#endif
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:18 PDT 2016
Sun, Jul 24, 2016  1:39:53 PM
Mon, Jul 25, 2016  8:04:43 PM
Tue, Jul 26, 2016  2:39:06 PM

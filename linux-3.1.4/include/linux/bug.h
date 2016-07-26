#ifndef _LINUX_BUG_H
#define _LINUX_BUG_H

#include <asm/bug.h>

enum bug_trap_type {
	BUG_TRAP_TYPE_NONE = 0,
	BUG_TRAP_TYPE_WARN = 1,
	BUG_TRAP_TYPE_BUG = 2,
};

struct pt_regs;

#ifdef CONFIG_GENERIC_BUG
#include <asm-generic/bug.h>

static inline int is_warning_bug(const struct bug_entry *bug)
{
	return bug->flags & BUGFLAG_WARNING;
}

const struct bug_entry *find_bug(unsigned long bugaddr);

enum bug_trap_type report_bug(unsigned long bug_addr, struct pt_regs *regs);

/* These are defined by the architecture */
int is_valid_bugaddr(unsigned long addr);

#else	/* !CONFIG_GENERIC_BUG */

static inline enum bug_trap_type report_bug(unsigned long bug_addr,
					    struct pt_regs *regs)
{
	return BUG_TRAP_TYPE_BUG;
}

#endif	/* CONFIG_GENERIC_BUG */
#endif	/* _LINUX_BUG_H */
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:40 PDT 2016
Sun, Jul 24, 2016  1:42:40 PM
Mon, Jul 25, 2016  8:07:59 PM
Tue, Jul 26, 2016  2:42:09 PM

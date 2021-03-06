#ifndef _ASM_SCORE_BUG_H
#define _ASM_SCORE_BUG_H

#include <asm-generic/bug.h>

struct pt_regs;
extern void __die(const char *, struct pt_regs *, const char *,
	const char *, unsigned long) __attribute__((noreturn));
extern void __die_if_kernel(const char *, struct pt_regs *, const char *,
	const char *, unsigned long);

#define die(msg, regs)							\
	__die(msg, regs, __FILE__ ":", __func__, __LINE__)
#define die_if_kernel(msg, regs)					\
	__die_if_kernel(msg, regs, __FILE__ ":", __func__, __LINE__)

#endif /* _ASM_SCORE_BUG_H */
Tue Jul 19 12:50:58 PDT 2016
Fri Jul 22 16:09:56 PDT 2016
Sun, Jul 24, 2016  5:15:47 PM
Tue, Jul 26, 2016 12:07:16 AM

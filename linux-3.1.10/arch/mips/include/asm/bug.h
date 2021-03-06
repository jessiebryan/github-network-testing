#ifndef __ASM_BUG_H
#define __ASM_BUG_H

#include <linux/compiler.h>
#include <asm/sgidefs.h>

#ifdef CONFIG_BUG

#include <asm/break.h>

static inline void __noreturn BUG(void)
{
	__asm__ __volatile__("break %0" : : "i" (BRK_BUG));
	unreachable();
}

#define HAVE_ARCH_BUG

#if (_MIPS_ISA > _MIPS_ISA_MIPS1)

static inline void  __BUG_ON(unsigned long condition)
{
	if (__builtin_constant_p(condition)) {
		if (condition)
			BUG();
		else
			return;
	}
	__asm__ __volatile__("tne $0, %0, %1"
			     : : "r" (condition), "i" (BRK_BUG));
}

#define BUG_ON(C) __BUG_ON((unsigned long)(C))

#define HAVE_ARCH_BUG_ON

#endif /* _MIPS_ISA > _MIPS_ISA_MIPS1 */

#endif

#include <asm-generic/bug.h>

#endif /* __ASM_BUG_H */
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:44 PDT 2016
Sun, Jul 24, 2016  1:13:31 PM
Mon, Jul 25, 2016  6:20:26 PM
Mon, Jul 25, 2016  7:33:41 PM
Tue, Jul 26, 2016  2:09:48 PM

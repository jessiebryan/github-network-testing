#ifndef _SPARC_BUG_H
#define _SPARC_BUG_H

#ifdef CONFIG_BUG
#include <linux/compiler.h>

#ifdef CONFIG_DEBUG_BUGVERBOSE
extern void do_BUG(const char *file, int line);
#define BUG() do {					\
	do_BUG(__FILE__, __LINE__);			\
	__builtin_trap();				\
} while (0)
#else
#define BUG()		__builtin_trap()
#endif

#define HAVE_ARCH_BUG
#endif

#include <asm-generic/bug.h>

struct pt_regs;
extern void die_if_kernel(char *str, struct pt_regs *regs) __attribute__ ((noreturn));

#endif
Tue Jul 19 12:52:56 PDT 2016
Fri Jul 22 16:13:48 PDT 2016
Sun, Jul 24, 2016  5:43:56 PM

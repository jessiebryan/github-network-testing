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

#endif
Tue Jul 19 12:36:50 PDT 2016
Fri Jul 22 15:43:28 PDT 2016
Sun, Jul 24, 2016  1:55:55 PM
Mon, Jul 25, 2016  8:23:37 PM

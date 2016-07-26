#ifndef _ASM_X86_BUG_H
#define _ASM_X86_BUG_H

#ifdef CONFIG_BUG
#define HAVE_ARCH_BUG

#ifdef CONFIG_DEBUG_BUGVERBOSE

#ifdef CONFIG_X86_32
# define __BUG_C0	"2:\t.long 1b, %c0\n"
#else
# define __BUG_C0	"2:\t.long 1b - 2b, %c0 - 2b\n"
#endif

#define BUG()							\
do {								\
	asm volatile("1:\tud2\n"				\
		     ".pushsection __bug_table,\"a\"\n"		\
		     __BUG_C0					\
		     "\t.word %c1, 0\n"				\
		     "\t.org 2b+%c2\n"				\
		     ".popsection"				\
		     : : "i" (__FILE__), "i" (__LINE__),	\
		     "i" (sizeof(struct bug_entry)));		\
	unreachable();						\
} while (0)

#else
#define BUG()							\
do {								\
	asm volatile("ud2");					\
	unreachable();						\
} while (0)
#endif

#endif /* !CONFIG_BUG */

#include <asm-generic/bug.h>
#endif /* _ASM_X86_BUG_H */
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:17 PDT 2016
Sun, Jul 24, 2016  1:39:49 PM
Mon, Jul 25, 2016  8:04:39 PM
Tue, Jul 26, 2016  2:39:02 PM

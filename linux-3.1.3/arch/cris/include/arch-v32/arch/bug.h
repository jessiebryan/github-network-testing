#ifndef __ASM_CRISv32_ARCH_BUG_H
#define __ASM_CRISv32_ARCH_BUG_H

#include <linux/stringify.h>

#ifdef CONFIG_BUG
#ifdef CONFIG_DEBUG_BUGVERBOSE
/*
 * The penalty for the in-band code path will be the size of break 14.
 * All other stuff is done out-of-band with exception handlers.
 */
#define BUG()								\
	__asm__ __volatile__ ("0: break 14\n\t"				\
			      ".section .fixup,\"ax\"\n"		\
			      "1:\n\t"					\
			      "move.d %0, $r10\n\t"			\
			      "move.d %1, $r11\n\t"			\
			      "jump do_BUG\n\t"				\
			      "nop\n\t"					\
			      ".previous\n\t"				\
			      ".section __ex_table,\"a\"\n\t"		\
			      ".dword 0b, 1b\n\t"			\
			      ".previous\n\t"				\
			      : : "ri" (__FILE__), "i" (__LINE__))
#else
#define BUG() __asm__ __volatile__ ("break 14\n\t")
#endif

#define HAVE_ARCH_BUG
#endif

#include <asm-generic/bug.h>
#endif
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:50 PDT 2016
Sun, Jul 24, 2016  1:29:17 PM
Mon, Jul 25, 2016  6:39:19 PM
Mon, Jul 25, 2016  7:52:11 PM
Tue, Jul 26, 2016  2:27:22 PM

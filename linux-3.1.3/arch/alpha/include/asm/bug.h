#ifndef _ALPHA_BUG_H
#define _ALPHA_BUG_H

#include <linux/linkage.h>

#ifdef CONFIG_BUG
#include <asm/pal.h>

/* ??? Would be nice to use .gprel32 here, but we can't be sure that the
   function loaded the GP, so this could fail in modules.  */
#define BUG()	do {							\
	__asm__ __volatile__(						\
		"call_pal %0  # bugchk\n\t"				\
		".long %1\n\t.8byte %2"					\
		: : "i"(PAL_bugchk), "i"(__LINE__), "i"(__FILE__));	\
	unreachable();							\
  } while (0)

#define HAVE_ARCH_BUG
#endif

#include <asm-generic/bug.h>

#endif
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:38 PDT 2016
Sun, Jul 24, 2016  1:27:56 PM
Mon, Jul 25, 2016  6:37:42 PM
Mon, Jul 25, 2016  7:50:36 PM
Tue, Jul 26, 2016  2:25:51 PM

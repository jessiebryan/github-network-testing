#ifndef _ASMARM_BUG_H
#define _ASMARM_BUG_H


#ifdef CONFIG_BUG
#ifdef CONFIG_DEBUG_BUGVERBOSE
extern void __bug(const char *file, int line) __attribute__((noreturn));

/* give file/line information */
#define BUG()		__bug(__FILE__, __LINE__)

#else

/* this just causes an oops */
#define BUG()		do { *(int *)0 = 0; } while (1)

#endif

#define HAVE_ARCH_BUG
#endif

#include <asm-generic/bug.h>

#endif
Tue Jul 19 12:36:37 PDT 2016
Fri Jul 22 15:43:02 PDT 2016
Sun, Jul 24, 2016  1:52:45 PM
Mon, Jul 25, 2016  8:19:53 PM

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
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:39 PDT 2016
Sun, Jul 24, 2016  1:28:01 PM

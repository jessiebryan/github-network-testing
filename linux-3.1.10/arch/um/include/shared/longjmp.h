#ifndef __UML_LONGJMP_H
#define __UML_LONGJMP_H

#include "sysdep/archsetjmp.h"
#include "os.h"

extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int);

#define UML_LONGJMP(buf, val) do { \
	longjmp(*buf, val);	\
} while(0)

#define UML_SETJMP(buf) ({ \
	int n;	   \
	volatile int enable;	\
	enable = get_signals(); \
	n = setjmp(*buf); \
	if(n != 0) \
		set_signals(enable); \
	n; })

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:14:58 PM
Mon, Jul 25, 2016  6:22:09 PM
Mon, Jul 25, 2016  7:35:23 PM
Tue, Jul 26, 2016  2:11:23 PM

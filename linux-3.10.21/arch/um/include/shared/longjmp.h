#ifndef __UML_LONGJMP_H
#define __UML_LONGJMP_H

#include <sysdep/archsetjmp.h>
#include <os.h>

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
Tue Jul 19 12:48:26 PDT 2016
Fri Jul 22 16:05:08 PDT 2016
Sun, Jul 24, 2016  4:39:14 PM
Mon, Jul 25, 2016 11:26:43 PM

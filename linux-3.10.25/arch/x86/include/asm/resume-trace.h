#ifndef _ASM_X86_RESUME_TRACE_H
#define _ASM_X86_RESUME_TRACE_H

#include <asm/asm.h>

#define TRACE_RESUME(user)					\
do {								\
	if (pm_trace_enabled) {					\
		const void *tracedata;				\
		asm volatile(_ASM_MOV " $1f,%0\n"		\
			     ".section .tracedata,\"a\"\n"	\
			     "1:\t.word %c1\n\t"		\
			     _ASM_PTR " %c2\n"			\
			     ".previous"			\
			     :"=r" (tracedata)			\
			     : "i" (__LINE__), "i" (__FILE__));	\
		generate_resume_trace(tracedata, user);		\
	}							\
} while (0)

#endif /* _ASM_X86_RESUME_TRACE_H */
Tue Jul 19 12:51:01 PDT 2016
Fri Jul 22 16:10:03 PDT 2016
Sun, Jul 24, 2016  5:16:31 PM
Tue, Jul 26, 2016 12:08:04 AM

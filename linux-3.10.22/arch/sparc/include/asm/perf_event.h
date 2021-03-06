#ifndef __ASM_SPARC_PERF_EVENT_H
#define __ASM_SPARC_PERF_EVENT_H

#ifdef CONFIG_PERF_EVENTS
#include <asm/ptrace.h>

#define perf_arch_fetch_caller_regs(regs, ip)		\
do {							\
	unsigned long _pstate, _asi, _pil, _i7, _fp;	\
	__asm__ __volatile__("rdpr %%pstate, %0\n\t"	\
			     "rd %%asi, %1\n\t"		\
			     "rdpr %%pil, %2\n\t"	\
			     "mov %%i7, %3\n\t"		\
			     "mov %%i6, %4\n\t"		\
			     : "=r" (_pstate),		\
			       "=r" (_asi),		\
			       "=r" (_pil),		\
			       "=r" (_i7),		\
			       "=r" (_fp));		\
	(regs)->tstate = (_pstate << 8) |		\
		(_asi << 24) | (_pil << 20);		\
	(regs)->tpc = (ip);				\
	(regs)->tnpc = (regs)->tpc + 4;			\
	(regs)->u_regs[UREG_I6] = _fp;			\
	(regs)->u_regs[UREG_I7] = _i7;			\
} while (0)
#endif

#endif
Tue Jul 19 12:49:03 PDT 2016
Fri Jul 22 16:06:19 PDT 2016
Sun, Jul 24, 2016  4:48:14 PM
Mon, Jul 25, 2016 11:36:46 PM

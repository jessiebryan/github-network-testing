#ifndef _ASM_X86_TRACE_CLOCK_H
#define _ASM_X86_TRACE_CLOCK_H

#include <linux/compiler.h>
#include <linux/types.h>

#ifdef CONFIG_X86_TSC

extern u64 notrace trace_clock_x86_tsc(void);

# define ARCH_TRACE_CLOCKS \
	{ trace_clock_x86_tsc,	"x86-tsc",	.in_ns = 0 },

#else /* !CONFIG_X86_TSC */

#define ARCH_TRACE_CLOCKS

#endif

#endif  /* _ASM_X86_TRACE_CLOCK_H */
Tue Jul 19 12:44:40 PDT 2016
Fri Jul 22 15:58:02 PDT 2016
Sun, Jul 24, 2016  3:44:05 PM
Mon, Jul 25, 2016 10:25:27 PM

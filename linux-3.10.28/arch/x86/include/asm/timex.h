#ifndef _ASM_X86_TIMEX_H
#define _ASM_X86_TIMEX_H

#include <asm/processor.h>
#include <asm/tsc.h>

/* Assume we use the PIT time source for the clock tick */
#define CLOCK_TICK_RATE		PIT_TICK_RATE

#define ARCH_HAS_READ_CURRENT_TIMER

#endif /* _ASM_X86_TIMEX_H */
Tue Jul 19 12:52:58 PDT 2016
Fri Jul 22 16:13:52 PDT 2016
Sun, Jul 24, 2016  5:44:29 PM
Tue, Jul 26, 2016 12:38:54 AM

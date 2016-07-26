#ifndef _ASM_X86_TIMEX_H
#define _ASM_X86_TIMEX_H

#include <asm/processor.h>
#include <asm/tsc.h>

/* Assume we use the PIT time source for the clock tick */
#define CLOCK_TICK_RATE		PIT_TICK_RATE

#define ARCH_HAS_READ_CURRENT_TIMER

#endif /* _ASM_X86_TIMEX_H */
Tue Jul 19 12:40:37 PDT 2016
Fri Jul 22 15:50:45 PDT 2016
Sun, Jul 24, 2016  2:48:46 PM
Mon, Jul 25, 2016  9:23:30 PM

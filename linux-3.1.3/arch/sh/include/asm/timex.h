/*
 * linux/include/asm-sh/timex.h
 *
 * sh architecture timex specifications
 */
#ifndef __ASM_SH_TIMEX_H
#define __ASM_SH_TIMEX_H

/*
 * Only parts using the legacy CPG code for their clock framework
 * implementation need to define their own Pclk value. If provided, this
 * can be used for accurately setting CLOCK_TICK_RATE, otherwise we
 * simply fall back on the i8253 PIT value.
 */
#ifdef CONFIG_SH_PCLK_FREQ
#define CLOCK_TICK_RATE		(CONFIG_SH_PCLK_FREQ / 4) /* Underlying HZ */
#else
#define CLOCK_TICK_RATE		1193180
#endif

#include <asm-generic/timex.h>

#endif /* __ASM_SH_TIMEX_H */
Tue Jul 19 12:35:00 PDT 2016
Fri Jul 22 15:40:05 PDT 2016
Sun, Jul 24, 2016  1:31:06 PM
Mon, Jul 25, 2016  7:54:19 PM
Tue, Jul 26, 2016  2:29:23 PM

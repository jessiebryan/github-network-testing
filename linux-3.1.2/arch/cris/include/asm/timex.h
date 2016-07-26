/*
 * linux/include/asm-cris/timex.h
 *
 * CRIS architecture timex specifications
 */

#ifndef _ASM_CRIS_TIMEX_H
#define _ASM_CRIS_TIMEX_H

#include <arch/timex.h>

/*
 * We don't have a cycle-counter.. but we do not support SMP anyway where this is
 * used so it does not matter.
 */

typedef unsigned long long cycles_t;

static inline cycles_t get_cycles(void)
{
        return 0;
}

#endif
Tue Jul 19 12:33:54 PDT 2016
Fri Jul 22 15:38:45 PDT 2016
Sun, Jul 24, 2016  1:21:11 PM
Mon, Jul 25, 2016  6:29:37 PM
Mon, Jul 25, 2016  7:42:42 PM

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
Tue Jul 19 12:48:54 PDT 2016
Fri Jul 22 16:06:03 PDT 2016
Sun, Jul 24, 2016  4:46:14 PM
Mon, Jul 25, 2016 11:34:32 PM

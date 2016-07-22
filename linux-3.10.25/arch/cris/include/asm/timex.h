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
Tue Jul 19 12:50:51 PDT 2016
Fri Jul 22 16:09:43 PDT 2016

#ifndef __ASM_GENERIC_TIMEX_H
#define __ASM_GENERIC_TIMEX_H

/*
 * If you have a cycle counter, return the value here.
 */
typedef unsigned long cycles_t;
#ifndef get_cycles
static inline cycles_t get_cycles(void)
{
	return 0;
}
#endif

/*
 * Architectures are encouraged to implement read_current_timer
 * and define this in order to avoid the expensive delay loop
 * calibration during boot.
 */
#undef ARCH_HAS_READ_CURRENT_TIMER

#endif /* __ASM_GENERIC_TIMEX_H */
Tue Jul 19 12:33:38 PDT 2016
Fri Jul 22 15:38:18 PDT 2016
Sun, Jul 24, 2016  1:17:47 PM
Mon, Jul 25, 2016  6:25:32 PM
Mon, Jul 25, 2016  7:38:42 PM
Tue, Jul 26, 2016  2:14:34 PM

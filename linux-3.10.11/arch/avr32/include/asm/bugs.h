/*
 * This is included by init/main.c to check for architecture-dependent bugs.
 *
 * Needs:
 *      void check_bugs(void);
 */
#ifndef __ASM_AVR32_BUGS_H
#define __ASM_AVR32_BUGS_H

static void __init check_bugs(void)
{
	cpu_data->loops_per_jiffy = loops_per_jiffy;
}

#endif /* __ASM_AVR32_BUGS_H */
Tue Jul 19 12:41:45 PDT 2016
Fri Jul 22 15:52:55 PDT 2016
Sun, Jul 24, 2016  3:04:21 PM
Mon, Jul 25, 2016  9:41:04 PM

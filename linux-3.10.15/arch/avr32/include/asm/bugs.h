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
Tue Jul 19 12:44:28 PDT 2016
Fri Jul 22 15:57:41 PDT 2016
Sun, Jul 24, 2016  3:41:15 PM
Mon, Jul 25, 2016 10:22:15 PM

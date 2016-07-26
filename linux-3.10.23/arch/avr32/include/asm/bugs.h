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
Tue Jul 19 12:49:32 PDT 2016
Fri Jul 22 16:07:12 PDT 2016
Sun, Jul 24, 2016  4:55:02 PM
Mon, Jul 25, 2016 11:44:22 PM

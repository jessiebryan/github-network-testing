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
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:39 PDT 2016
Sun, Jul 24, 2016  5:13:40 PM
Tue, Jul 26, 2016 12:04:52 AM

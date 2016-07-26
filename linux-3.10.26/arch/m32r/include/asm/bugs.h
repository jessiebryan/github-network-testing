#ifndef _ASM_M32R_BUGS_H
#define _ASM_M32R_BUGS_H

/*
 * This is included by init/main.c to check for architecture-dependent bugs.
 *
 * Needs:
 *     void check_bugs(void);
 */
#include <asm/processor.h>

static void __init check_bugs(void)
{
	extern unsigned long loops_per_jiffy;

	current_cpu_data.loops_per_jiffy = loops_per_jiffy;
}

#endif  /* _ASM_M32R_BUGS_H */
Tue Jul 19 12:51:32 PDT 2016
Fri Jul 22 16:11:02 PDT 2016
Sun, Jul 24, 2016  5:23:46 PM
Tue, Jul 26, 2016 12:16:02 AM

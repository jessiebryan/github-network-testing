/*
 *  include/asm-parisc/bugs.h
 *
 *  Copyright (C) 1999	Mike Shaver
 */

/*
 * This is included by init/main.c to check for architecture-dependent bugs.
 *
 * Needs:
 *	void check_bugs(void);
 */

#include <asm/processor.h>

static inline void check_bugs(void)
{
//	identify_cpu(&boot_cpu_data);
}
Tue Jul 19 12:33:59 PDT 2016

/*
 * This is included by init/main.c to check for architecture-dependent bugs.
 *
 * Needs:
 *	void check_bugs(void);
 *
 * Based on <asm-alpha/bugs.h>.
 *
 * Modified 1998, 1999, 2003
 *	David Mosberger-Tang <davidm@hpl.hp.com>,  Hewlett-Packard Co.
 */
#ifndef _ASM_IA64_BUGS_H
#define _ASM_IA64_BUGS_H

#include <asm/processor.h>

extern void check_bugs (void);

#endif /* _ASM_IA64_BUGS_H */
Tue Jul 19 12:34:47 PDT 2016
Fri Jul 22 15:39:52 PDT 2016

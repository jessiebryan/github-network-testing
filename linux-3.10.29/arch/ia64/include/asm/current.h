#ifndef _ASM_IA64_CURRENT_H
#define _ASM_IA64_CURRENT_H

/*
 * Modified 1998-2000
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co
 */

#include <asm/intrinsics.h>

/*
 * In kernel mode, thread pointer (r13) is used to point to the current task
 * structure.
 */
#define current	((struct task_struct *) ia64_getreg(_IA64_REG_TP))

#endif /* _ASM_IA64_CURRENT_H */
Tue Jul 19 12:53:28 PDT 2016
Fri Jul 22 16:14:49 PDT 2016
Sun, Jul 24, 2016  5:51:33 PM
Tue, Jul 26, 2016 12:46:43 AM

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
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:46 PDT 2016
Sun, Jul 24, 2016  1:21:20 PM
Mon, Jul 25, 2016  6:29:48 PM
Mon, Jul 25, 2016  7:42:53 PM
Tue, Jul 26, 2016  2:18:34 PM

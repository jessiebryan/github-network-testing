#ifndef _ASM_IA64_USTACK_H
#define _ASM_IA64_USTACK_H

/*
 * Constants for the user stack size
 */

#ifdef __KERNEL__
#include <asm/page.h>

/* The absolute hard limit for stack size is 1/2 of the mappable space in the region */
#define MAX_USER_STACK_SIZE	(RGN_MAP_LIMIT/2)
#define STACK_TOP		(0x6000000000000000UL + RGN_MAP_LIMIT)
#define STACK_TOP_MAX		STACK_TOP
#endif

/* Make a default stack size of 2GiB */
#define DEFAULT_USER_STACK_SIZE	(1UL << 31)

#endif /* _ASM_IA64_USTACK_H */
Tue Jul 19 12:35:36 PDT 2016
Fri Jul 22 15:41:02 PDT 2016
Sun, Jul 24, 2016  1:37:57 PM
Mon, Jul 25, 2016  8:02:26 PM
Tue, Jul 26, 2016  2:36:57 PM

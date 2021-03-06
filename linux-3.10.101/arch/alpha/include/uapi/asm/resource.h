#ifndef _ALPHA_RESOURCE_H
#define _ALPHA_RESOURCE_H

/*
 * Alpha/Linux-specific ordering of these four resource limit IDs,
 * the rest comes from the generic header:
 */
#define RLIMIT_NOFILE		6	/* max number of open files */
#define RLIMIT_AS		7	/* address space limit */
#define RLIMIT_NPROC		8	/* max number of processes */
#define RLIMIT_MEMLOCK		9	/* max locked-in-memory address space */

/*
 * SuS says limits have to be unsigned.  Fine, it's unsigned, but
 * we retain the old value for compatibility, especially with DU. 
 * When you run into the 2^63 barrier, you call me.
 */
#define RLIM_INFINITY		0x7ffffffffffffffful

#include <asm-generic/resource.h>

#endif /* _ALPHA_RESOURCE_H */
Tue Jul 19 12:40:21 PDT 2016
Fri Jul 22 15:50:14 PDT 2016
Sun, Jul 24, 2016  2:45:05 PM
Mon, Jul 25, 2016  9:19:17 PM

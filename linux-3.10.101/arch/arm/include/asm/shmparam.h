#ifndef _ASMARM_SHMPARAM_H
#define _ASMARM_SHMPARAM_H

/*
 * This should be the size of the virtually indexed cache/ways,
 * or page size, whichever is greater since the cache aliases
 * every size/ways bytes.
 */
#define	SHMLBA	(4 * PAGE_SIZE)		 /* attach addr a multiple of this */

/*
 * Enforce SHMLBA in shmat
 */
#define __ARCH_FORCE_SHMLBA

#endif /* _ASMARM_SHMPARAM_H */
Tue Jul 19 12:40:22 PDT 2016
Fri Jul 22 15:50:15 PDT 2016
Sun, Jul 24, 2016  2:45:14 PM
Mon, Jul 25, 2016  9:19:28 PM

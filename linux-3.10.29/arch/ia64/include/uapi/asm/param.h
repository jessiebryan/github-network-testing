/*
 * Fundamental kernel parameters.
 *
 * Based on <asm-i386/param.h>.
 *
 * Modified 1998, 1999, 2002-2003
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co
 */
#ifndef _UAPI_ASM_IA64_PARAM_H
#define _UAPI_ASM_IA64_PARAM_H


#define EXEC_PAGESIZE	65536

#ifndef NOGROUP
# define NOGROUP	(-1)
#endif

#define MAXHOSTNAMELEN	64	/* max length of hostname */

#ifndef __KERNEL__
   /*
    * Technically, this is wrong, but some old apps still refer to it.  The proper way to
    * get the HZ value is via sysconf(_SC_CLK_TCK).
    */
# define HZ 1024
#endif

#endif /* _UAPI_ASM_IA64_PARAM_H */
Tue Jul 19 12:53:28 PDT 2016
Fri Jul 22 16:14:50 PDT 2016
Sun, Jul 24, 2016  5:51:40 PM
Tue, Jul 26, 2016 12:46:51 AM

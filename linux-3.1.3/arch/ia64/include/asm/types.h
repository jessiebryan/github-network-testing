#ifndef _ASM_IA64_TYPES_H
#define _ASM_IA64_TYPES_H

/*
 * This file is never included by application software unless explicitly
 * requested (e.g., via linux/types.h) in which case the application is
 * Linux specific so (user-) name space pollution is not a major issue.
 * However, for interoperability, libraries still need to be careful to
 * avoid naming clashes.
 *
 * Based on <asm-alpha/types.h>.
 *
 * Modified 1998-2000, 2002
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co
 */

#ifdef __KERNEL__
#include <asm-generic/int-ll64.h>
#else
#include <asm-generic/int-l64.h>
#endif

#ifdef __ASSEMBLY__
# define __IA64_UL(x)		(x)
# define __IA64_UL_CONST(x)	x

#else
# define __IA64_UL(x)		((unsigned long)(x))
# define __IA64_UL_CONST(x)	x##UL

typedef unsigned int umode_t;

/*
 * These aren't exported outside the kernel to avoid name space clashes
 */
# ifdef __KERNEL__

struct fnptr {
	unsigned long ip;
	unsigned long gp;
};

# endif /* __KERNEL__ */
#endif /* !__ASSEMBLY__ */

#endif /* _ASM_IA64_TYPES_H */
Tue Jul 19 12:34:53 PDT 2016
Fri Jul 22 15:39:53 PDT 2016
Sun, Jul 24, 2016  1:29:42 PM
Mon, Jul 25, 2016  6:39:49 PM
Mon, Jul 25, 2016  7:52:40 PM
Tue, Jul 26, 2016  2:27:49 PM

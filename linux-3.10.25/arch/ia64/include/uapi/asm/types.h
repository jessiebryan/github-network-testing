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
#ifndef _UAPI_ASM_IA64_TYPES_H
#define _UAPI_ASM_IA64_TYPES_H


#ifndef __KERNEL__
#include <asm-generic/int-l64.h>
#endif

#ifdef __ASSEMBLY__
# define __IA64_UL(x)		(x)
# define __IA64_UL_CONST(x)	x

#else
# define __IA64_UL(x)		((unsigned long)(x))
# define __IA64_UL_CONST(x)	x##UL

#endif /* !__ASSEMBLY__ */

#endif /* _UAPI_ASM_IA64_TYPES_H */
Tue Jul 19 12:50:53 PDT 2016
Fri Jul 22 16:09:46 PDT 2016
Sun, Jul 24, 2016  5:14:25 PM
Tue, Jul 26, 2016 12:05:44 AM

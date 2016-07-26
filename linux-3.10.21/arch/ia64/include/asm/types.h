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
#ifndef _ASM_IA64_TYPES_H
#define _ASM_IA64_TYPES_H

#include <asm-generic/int-ll64.h>
#include <uapi/asm/types.h>

#ifdef __ASSEMBLY__
#else
/*
 * These aren't exported outside the kernel to avoid name space clashes
 */

struct fnptr {
	unsigned long ip;
	unsigned long gp;
};

#endif /* !__ASSEMBLY__ */
#endif /* _ASM_IA64_TYPES_H */
Tue Jul 19 12:48:18 PDT 2016
Fri Jul 22 16:04:53 PDT 2016
Sun, Jul 24, 2016  4:37:18 PM
Mon, Jul 25, 2016 11:24:35 PM

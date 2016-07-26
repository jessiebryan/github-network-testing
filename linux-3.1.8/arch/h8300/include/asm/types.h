#ifndef _H8300_TYPES_H
#define _H8300_TYPES_H

#include <asm-generic/int-ll64.h>

#if !defined(__ASSEMBLY__)

/*
 * This file is never included by application software unless
 * explicitly requested (e.g., via linux/types.h) in which case the
 * application is Linux specific so (user-) name space pollution is
 * not a major issue.  However, for interoperability, libraries still
 * need to be careful to avoid a name clashes.
 */

typedef unsigned short umode_t;

/*
 * These aren't exported outside the kernel to avoid name space clashes
 */
#ifdef __KERNEL__

#define BITS_PER_LONG 32

#endif /* __KERNEL__ */

#endif /* __ASSEMBLY__ */

#endif /* _H8300_TYPES_H */
Tue Jul 19 12:37:18 PDT 2016
Fri Jul 22 15:44:22 PDT 2016
Sun, Jul 24, 2016  2:02:35 PM
Mon, Jul 25, 2016  8:31:31 PM

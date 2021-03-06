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
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:40 PDT 2016
Sun, Jul 24, 2016  1:13:05 PM
Mon, Jul 25, 2016  6:19:54 PM
Mon, Jul 25, 2016  7:33:10 PM
Tue, Jul 26, 2016  2:09:19 PM

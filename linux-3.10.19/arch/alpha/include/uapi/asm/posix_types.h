#ifndef _ALPHA_POSIX_TYPES_H
#define _ALPHA_POSIX_TYPES_H

/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 */

typedef unsigned int	__kernel_ino_t;
#define __kernel_ino_t __kernel_ino_t

typedef unsigned long	__kernel_sigset_t;	/* at least 32 bits */

#include <asm-generic/posix_types.h>

#endif /* _ALPHA_POSIX_TYPES_H */
Tue Jul 19 12:46:55 PDT 2016
Fri Jul 22 16:02:18 PDT 2016
Sun, Jul 24, 2016  4:17:15 PM
Mon, Jul 25, 2016 11:02:20 PM

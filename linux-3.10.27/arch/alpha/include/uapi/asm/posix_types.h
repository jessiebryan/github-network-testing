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
Tue Jul 19 12:52:04 PDT 2016
Fri Jul 22 16:12:05 PDT 2016
Sun, Jul 24, 2016  5:31:26 PM
Tue, Jul 26, 2016 12:24:30 AM

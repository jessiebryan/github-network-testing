#ifndef _ASM_POWERPC_POSIX_TYPES_H
#define _ASM_POWERPC_POSIX_TYPES_H

/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 */

#ifdef __powerpc64__
typedef unsigned long	__kernel_old_dev_t;
#define __kernel_old_dev_t __kernel_old_dev_t
#else
typedef unsigned int	__kernel_size_t;
typedef int		__kernel_ssize_t;
typedef long		__kernel_ptrdiff_t;
#define __kernel_size_t __kernel_size_t

typedef short		__kernel_ipc_pid_t;
#define __kernel_ipc_pid_t __kernel_ipc_pid_t
#endif

#include <asm-generic/posix_types.h>

#endif /* _ASM_POWERPC_POSIX_TYPES_H */
Tue Jul 19 12:41:12 PDT 2016
Fri Jul 22 15:51:54 PDT 2016
Sun, Jul 24, 2016  2:57:03 PM
Mon, Jul 25, 2016  9:32:51 PM

#ifndef __ARCH_PARISC_POSIX_TYPES_H
#define __ARCH_PARISC_POSIX_TYPES_H

/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 */

typedef unsigned short		__kernel_mode_t;
#define __kernel_mode_t __kernel_mode_t

typedef unsigned short		__kernel_ipc_pid_t;
#define __kernel_ipc_pid_t __kernel_ipc_pid_t

typedef int			__kernel_suseconds_t;
#define __kernel_suseconds_t __kernel_suseconds_t

typedef long long		__kernel_off64_t;
typedef unsigned long long	__kernel_ino64_t;

#include <asm-generic/posix_types.h>

#endif
Tue Jul 19 12:50:17 PDT 2016
Fri Jul 22 16:08:40 PDT 2016
Sun, Jul 24, 2016  5:06:06 PM
Mon, Jul 25, 2016 11:56:32 PM

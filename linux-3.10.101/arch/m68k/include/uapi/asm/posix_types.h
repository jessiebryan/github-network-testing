#ifndef __ARCH_M68K_POSIX_TYPES_H
#define __ARCH_M68K_POSIX_TYPES_H

/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 */

typedef unsigned short	__kernel_mode_t;
#define __kernel_mode_t __kernel_mode_t

typedef unsigned short	__kernel_ipc_pid_t;
#define __kernel_ipc_pid_t __kernel_ipc_pid_t

typedef unsigned short	__kernel_uid_t;
typedef unsigned short	__kernel_gid_t;
#define __kernel_uid_t __kernel_uid_t

typedef unsigned short	__kernel_old_dev_t;
#define __kernel_old_dev_t __kernel_old_dev_t

#include <asm-generic/posix_types.h>

#endif
Tue Jul 19 12:40:28 PDT 2016
Fri Jul 22 15:50:29 PDT 2016
Sun, Jul 24, 2016  2:46:52 PM
Mon, Jul 25, 2016  9:21:19 PM

#ifndef __ARCH_H8300_POSIX_TYPES_H
#define __ARCH_H8300_POSIX_TYPES_H

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

typedef unsigned short	__kernel_old_uid_t;
typedef unsigned short	__kernel_old_gid_t;
#define __kernel_old_uid_t __kernel_old_uid_t

#include <asm-generic/posix_types.h>

#endif
Tue Jul 19 12:53:27 PDT 2016
Fri Jul 22 16:14:48 PDT 2016
Sun, Jul 24, 2016  5:51:30 PM
Tue, Jul 26, 2016 12:46:39 AM

/*
 * Copyright 2004-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef __ARCH_BFIN_POSIX_TYPES_H
#define __ARCH_BFIN_POSIX_TYPES_H

typedef unsigned short __kernel_mode_t;
#define __kernel_mode_t __kernel_mode_t

typedef unsigned int __kernel_ipc_pid_t;
#define __kernel_ipc_pid_t __kernel_ipc_pid_t

typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
#define __kernel_size_t __kernel_size_t

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
#define __kernel_old_uid_t __kernel_old_uid_t

typedef unsigned short __kernel_old_dev_t;
#define __kernel_old_dev_t __kernel_old_dev_t

#include <asm-generic/posix_types.h>

#endif
Tue Jul 19 12:48:53 PDT 2016
Fri Jul 22 16:06:00 PDT 2016
Sun, Jul 24, 2016  4:45:58 PM
Mon, Jul 25, 2016 11:34:14 PM

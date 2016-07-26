/* $Id: posix_types.h,v 1.1 2000/07/10 16:32:31 bjornw Exp $ */

/* We cheat a bit and use our C-coded bitops functions from asm/bitops.h */
/* I guess we should write these in assembler because they are used often. */

#ifndef __ARCH_CRIS_POSIX_TYPES_H
#define __ARCH_CRIS_POSIX_TYPES_H

/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 */

typedef unsigned short	__kernel_mode_t;
#define __kernel_mode_t __kernel_mode_t

typedef unsigned short  __kernel_ipc_pid_t;
#define __kernel_ipc_pid_t __kernel_ipc_pid_t

typedef unsigned short	__kernel_uid_t;
typedef unsigned short	__kernel_gid_t;
#define __kernel_uid_t __kernel_uid_t

typedef unsigned short	__kernel_old_dev_t;
#define __kernel_old_dev_t __kernel_old_dev_t

#include <asm-generic/posix_types.h>

#endif /* __ARCH_CRIS_POSIX_TYPES_H */
Tue Jul 19 12:43:51 PDT 2016
Fri Jul 22 15:56:31 PDT 2016
Sun, Jul 24, 2016  3:32:25 PM
Mon, Jul 25, 2016 10:12:29 PM

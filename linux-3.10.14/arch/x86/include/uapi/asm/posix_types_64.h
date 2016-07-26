#ifndef _ASM_X86_POSIX_TYPES_64_H
#define _ASM_X86_POSIX_TYPES_64_H

/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 */

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
#define __kernel_old_uid_t __kernel_old_uid_t

typedef unsigned long	__kernel_old_dev_t;
#define __kernel_old_dev_t __kernel_old_dev_t

#include <asm-generic/posix_types.h>

#endif /* _ASM_X86_POSIX_TYPES_64_H */
Tue Jul 19 12:44:01 PDT 2016
Fri Jul 22 15:56:52 PDT 2016
Sun, Jul 24, 2016  3:34:54 PM
Mon, Jul 25, 2016 10:15:14 PM

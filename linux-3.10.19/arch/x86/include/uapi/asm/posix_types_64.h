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
Tue Jul 19 12:47:10 PDT 2016
Fri Jul 22 16:02:47 PDT 2016
Sun, Jul 24, 2016  4:21:00 PM
Mon, Jul 25, 2016 11:06:31 PM

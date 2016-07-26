#ifndef _ASM_X86_POSIX_TYPES_X32_H
#define _ASM_X86_POSIX_TYPES_X32_H

/*
 * This file is only used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 *
 * These types should generally match the ones used by the 64-bit kernel,
 *
 */

typedef long long __kernel_long_t;
typedef unsigned long long __kernel_ulong_t;
#define __kernel_long_t __kernel_long_t

#include <asm/posix_types_64.h>

#endif /* _ASM_X86_POSIX_TYPES_X32_H */
Tue Jul 19 12:52:59 PDT 2016
Fri Jul 22 16:13:53 PDT 2016
Sun, Jul 24, 2016  5:44:32 PM
Tue, Jul 26, 2016 12:38:57 AM

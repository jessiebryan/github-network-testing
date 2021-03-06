/*
 * Copyright (C) 2012 Imagination Technologies Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

/* Use the standard ABI for syscalls. */
#include <asm-generic/unistd.h>

/* metag-specific syscalls. */
#define __NR_metag_setglobalbit		(__NR_arch_specific_syscall + 1)
__SYSCALL(__NR_metag_setglobalbit, sys_metag_setglobalbit)
#define __NR_metag_set_fpu_flags	(__NR_arch_specific_syscall + 2)
__SYSCALL(__NR_metag_set_fpu_flags, sys_metag_set_fpu_flags)
#define __NR_metag_set_tls		(__NR_arch_specific_syscall + 3)
__SYSCALL(__NR_metag_set_tls, sys_metag_set_tls)
#define __NR_metag_get_tls		(__NR_arch_specific_syscall + 4)
__SYSCALL(__NR_metag_get_tls, sys_metag_get_tls)
Tue Jul 19 12:38:33 PDT 2016
Fri Jul 22 15:46:40 PDT 2016
Sun, Jul 24, 2016  2:19:19 PM
Mon, Jul 25, 2016  8:50:34 PM

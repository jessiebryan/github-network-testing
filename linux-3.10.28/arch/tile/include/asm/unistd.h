/*
 * Copyright 2010 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */
/* In compat mode, we use sys_llseek() for compat_sys_llseek(). */
#ifdef CONFIG_COMPAT
#define __ARCH_WANT_SYS_LLSEEK
#endif
#define __ARCH_WANT_SYS_NEWFSTATAT
#define __ARCH_WANT_SYS_CLONE
#include <uapi/asm/unistd.h>
Tue Jul 19 12:52:57 PDT 2016
Fri Jul 22 16:13:50 PDT 2016
Sun, Jul 24, 2016  5:44:10 PM
Tue, Jul 26, 2016 12:38:34 AM

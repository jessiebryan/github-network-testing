/*
 * OpenRISC Linux
 *
 * Linux architectural port borrowing liberally from similar works of
 * others.  All original copyrights apply as per the original source
 * declaration.
 *
 * OpenRISC implementation:
 * Copyright (C) 2003 Matjaz Breskvar <phoenix@bsemi.com>
 * Copyright (C) 2010-2011 Jonas Bonn <jonas@southpole.se>
 * et al.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __ASM_OPENRISC_SYSCALLS_H
#define __ASM_OPENRISC_SYSCALLS_H

asmlinkage long sys_or1k_atomic(unsigned long type, unsigned long *v1,
				unsigned long *v2);

#include <asm-generic/syscalls.h>

asmlinkage long __sys_clone(unsigned long clone_flags, unsigned long newsp,
			void __user *parent_tid, void __user *child_tid, int tls);
asmlinkage long __sys_fork(void);

#define sys_clone __sys_clone
#define sys_fork __sys_fork

#endif /* __ASM_OPENRISC_SYSCALLS_H */
Tue Jul 19 12:47:05 PDT 2016
Fri Jul 22 16:02:37 PDT 2016
Sun, Jul 24, 2016  4:19:44 PM
Mon, Jul 25, 2016 11:05:06 PM

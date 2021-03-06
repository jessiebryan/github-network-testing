/*
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ASM_SYSCALLS_H
#define __ASM_SYSCALLS_H

#include <linux/linkage.h>
#include <linux/compiler.h>
#include <linux/signal.h>

/*
 * System call wrappers implemented in kernel/entry.S.
 */
asmlinkage long sys_rt_sigreturn_wrapper(void);

#include <asm-generic/syscalls.h>

#endif	/* __ASM_SYSCALLS_H */
Tue Jul 19 12:41:04 PDT 2016
Fri Jul 22 15:51:37 PDT 2016
Sun, Jul 24, 2016  2:55:06 PM
Mon, Jul 25, 2016  9:30:38 PM

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
#ifndef __ASM_SHMPARAM_H
#define __ASM_SHMPARAM_H

/*
 * For IPC syscalls from compat tasks, we need to use the legacy 16k
 * alignment value. Since we don't have aliasing D-caches, the rest of
 * the time we can safely use PAGE_SIZE.
 */
#define COMPAT_SHMLBA	0x4000

#include <asm-generic/shmparam.h>

#endif /* __ASM_SHMPARAM_H */
Tue Jul 19 12:48:15 PDT 2016
Fri Jul 22 16:04:47 PDT 2016
Sun, Jul 24, 2016  4:36:33 PM
Mon, Jul 25, 2016 11:23:45 PM

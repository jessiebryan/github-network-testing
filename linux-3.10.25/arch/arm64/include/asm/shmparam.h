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
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:39 PDT 2016
Sun, Jul 24, 2016  5:13:38 PM
Tue, Jul 26, 2016 12:04:50 AM

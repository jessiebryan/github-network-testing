/*
 * Definitions specific to SMP platforms.
 *
 * Copyright (C) 2013 ARM Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
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

#ifndef __ASM_SMP_PLAT_H
#define __ASM_SMP_PLAT_H

#include <asm/types.h>

/*
 * Logical CPU mapping.
 */
extern u64 __cpu_logical_map[NR_CPUS];
#define cpu_logical_map(cpu)    __cpu_logical_map[cpu]

#endif /* __ASM_SMP_PLAT_H */
Tue Jul 19 12:52:46 PDT 2016
Fri Jul 22 16:13:28 PDT 2016
Sun, Jul 24, 2016  5:41:34 PM
Tue, Jul 26, 2016 12:35:41 AM

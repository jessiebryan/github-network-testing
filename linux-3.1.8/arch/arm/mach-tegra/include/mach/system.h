/*
 * arch/arm/mach-tegra/include/mach/system.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * Author:
 *	Colin Cross <ccross@google.com>
 *	Erik Gilling <konkers@google.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __MACH_TEGRA_SYSTEM_H
#define __MACH_TEGRA_SYSTEM_H

#include <mach/iomap.h>

extern void (*arch_reset)(char mode, const char *cmd);

static inline void arch_idle(void)
{
}

#endif
Tue Jul 19 12:37:15 PDT 2016
Fri Jul 22 15:44:15 PDT 2016
Sun, Jul 24, 2016  2:01:47 PM
Mon, Jul 25, 2016  8:30:36 PM

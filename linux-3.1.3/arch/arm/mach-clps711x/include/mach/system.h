/*
 *  arch/arm/mach-clps711x/include/mach/system.h
 *
 *  Copyright (C) 2000 Deep Blue Solutions Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <linux/io.h>
#include <mach/hardware.h>
#include <asm/hardware/clps7111.h>

static inline void arch_idle(void)
{
	clps_writel(1, HALT);
	__asm__ __volatile__(
	"mov	r0, r0\n\
	mov	r0, r0");
}

static inline void arch_reset(char mode, const char *cmd)
{
	cpu_reset(0);
}

#endif
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:40 PDT 2016
Sun, Jul 24, 2016  1:28:12 PM
Mon, Jul 25, 2016  6:38:01 PM
Mon, Jul 25, 2016  7:50:55 PM
Tue, Jul 26, 2016  2:26:09 PM

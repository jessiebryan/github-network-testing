/*
 *  Copyright (C) 1999 ARM Limited
 *  Copyright (C) 2000 Deep Blue Solutions Ltd
 *  Copyright 2004-2008 Freescale Semiconductor, Inc. All Rights Reserved.
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
 */

#ifndef __MACH_MXS_SYSTEM_H__
#define __MACH_MXS_SYSTEM_H__

static inline void arch_idle(void)
{
	cpu_do_idle();
}

void arch_reset(char mode, const char *cmd);

#endif /* __MACH_MXS_SYSTEM_H__ */
Tue Jul 19 12:37:13 PDT 2016
Fri Jul 22 15:44:12 PDT 2016
Sun, Jul 24, 2016  2:01:27 PM
Mon, Jul 25, 2016  8:30:11 PM

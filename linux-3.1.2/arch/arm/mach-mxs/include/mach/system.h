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
Tue Jul 19 12:33:50 PDT 2016
Fri Jul 22 15:38:37 PDT 2016
Sun, Jul 24, 2016  1:20:12 PM
Mon, Jul 25, 2016  6:28:25 PM
Mon, Jul 25, 2016  7:41:32 PM
Tue, Jul 26, 2016  2:17:16 PM

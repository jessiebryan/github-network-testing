/*
 * vDSO implementation for Hexagon
 *
 * Copyright (c) 2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef __ASM_VDSO_H
#define __ASM_VDSO_H

#include <linux/types.h>

struct hexagon_vdso {
	u32 rt_signal_trampoline[2];
};

#endif /* __ASM_VDSO_H */
Tue Jul 19 12:41:06 PDT 2016
Fri Jul 22 15:51:42 PDT 2016
Sun, Jul 24, 2016  2:55:44 PM
Mon, Jul 25, 2016  9:31:22 PM

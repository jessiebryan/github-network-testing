/*
 * Copyright (c) 2010-2011, The Linux Foundation. All rights reserved.
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

#ifndef _ASM_DELAY_H
#define _ASM_DELAY_H

#include <asm/param.h>

extern void __udelay(unsigned long usecs);

#define udelay(usecs) __udelay((usecs))

#endif /* _ASM_DELAY_H */
Tue Jul 19 12:49:35 PDT 2016
Fri Jul 22 16:07:18 PDT 2016
Sun, Jul 24, 2016  4:55:37 PM
Mon, Jul 25, 2016 11:45:01 PM

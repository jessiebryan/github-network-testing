/*
 * Process execution related definitions for the Hexagon architecture
 *
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

#ifndef _ASM_EXEC_H
#define _ASM_EXEC_H

/*  Should probably shoot for an 8-byte aligned stack pointer  */
#define STACK_MASK (~7)
#define arch_align_stack(x) (x & STACK_MASK)

#endif /* _ASM_EXEC_H */
Tue Jul 19 12:50:52 PDT 2016
Fri Jul 22 16:09:44 PDT 2016
Sun, Jul 24, 2016  5:14:15 PM
Tue, Jul 26, 2016 12:05:32 AM

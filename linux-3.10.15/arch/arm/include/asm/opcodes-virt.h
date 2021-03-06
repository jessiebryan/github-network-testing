/*
 * opcodes-virt.h: Opcode definitions for the ARM virtualization extensions
 * Copyright (C) 2012  Linaro Limited
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
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#ifndef __ASM_ARM_OPCODES_VIRT_H
#define __ASM_ARM_OPCODES_VIRT_H

#include <asm/opcodes.h>

#define __HVC(imm16) __inst_arm_thumb32(				\
	0xE1400070 | (((imm16) & 0xFFF0) << 4) | ((imm16) & 0x000F),	\
	0xF7E08000 | (((imm16) & 0xF000) << 4) | ((imm16) & 0x0FFF)	\
)

#define __ERET	__inst_arm_thumb32(					\
	0xE160006E,							\
	0xF3DE8F00							\
)

#define __MSR_ELR_HYP(regnum)	__inst_arm_thumb32(			\
	0xE12EF300 | regnum,						\
	0xF3808E30 | (regnum << 16)					\
)

#endif /* ! __ASM_ARM_OPCODES_VIRT_H */
Tue Jul 19 12:44:25 PDT 2016
Fri Jul 22 15:57:35 PDT 2016
Sun, Jul 24, 2016  3:40:32 PM
Mon, Jul 25, 2016 10:21:28 PM

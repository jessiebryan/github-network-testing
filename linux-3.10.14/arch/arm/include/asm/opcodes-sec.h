/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * Copyright (C) 2012 ARM Limited
 */

#ifndef __ASM_ARM_OPCODES_SEC_H
#define __ASM_ARM_OPCODES_SEC_H

#include <asm/opcodes.h>

#define __SMC(imm4) __inst_arm_thumb32(					\
	0xE1600070 | (((imm4) & 0xF) << 0),				\
	0xF7F08000 | (((imm4) & 0xF) << 16)				\
)

#endif /* __ASM_ARM_OPCODES_SEC_H */
Tue Jul 19 12:43:46 PDT 2016
Fri Jul 22 15:56:22 PDT 2016
Sun, Jul 24, 2016  3:31:17 PM
Mon, Jul 25, 2016 10:11:13 PM

/*
 * linux/arch/unicore32/include/asm/linkage.h
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __UNICORE_LINKAGE_H__
#define __UNICORE_LINKAGE_H__

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
	.type name, %function; \
	END(name)

#endif
Tue Jul 19 12:51:40 PDT 2016
Fri Jul 22 16:11:17 PDT 2016
Sun, Jul 24, 2016  5:25:39 PM
Tue, Jul 26, 2016 12:18:08 AM

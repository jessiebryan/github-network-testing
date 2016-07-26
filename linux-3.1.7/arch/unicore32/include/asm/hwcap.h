/*
 * linux/arch/unicore32/include/asm/hwcap.h
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __UNICORE_HWCAP_H__
#define __UNICORE_HWCAP_H__

/*
 * HWCAP flags
 */
#define HWCAP_MSP		1
#define HWCAP_UNICORE16		2
#define HWCAP_CMOV		4
#define HWCAP_UNICORE_F64       8
#define HWCAP_TLS		0x80

#if defined(__KERNEL__) && !defined(__ASSEMBLY__)
/*
 * This yields a mask that user programs can use to figure out what
 * instruction set this cpu supports.
 */
#define ELF_HWCAP		(HWCAP_CMOV | HWCAP_UNICORE_F64)
#endif

#endif
Tue Jul 19 12:36:51 PDT 2016
Fri Jul 22 15:43:30 PDT 2016
Sun, Jul 24, 2016  1:56:16 PM
Mon, Jul 25, 2016  8:24:02 PM

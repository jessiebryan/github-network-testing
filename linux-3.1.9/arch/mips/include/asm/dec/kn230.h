/*
 *	include/asm-mips/dec/kn230.h
 *
 *	DECsystem 5100 (MIPSmate or KN230) definitions.
 *
 *	Copyright (C) 2002, 2003  Maciej W. Rozycki
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License
 *	as published by the Free Software Foundation; either version
 *	2 of the License, or (at your option) any later version.
 */
#ifndef __ASM_MIPS_DEC_KN230_H
#define __ASM_MIPS_DEC_KN230_H

/*
 * CPU interrupt bits.
 */
#define KN230_CPU_INR_HALT	6	/* HALT button */
#define KN230_CPU_INR_BUS	5	/* memory, I/O bus read/write errors */
#define KN230_CPU_INR_RTC	4	/* DS1287 RTC */
#define KN230_CPU_INR_SII	3	/* SII (DC7061) SCSI */
#define KN230_CPU_INR_LANCE	3	/* LANCE (Am7990) Ethernet */
#define KN230_CPU_INR_DZ11	2	/* DZ11 (DC7085) serial */

#endif /* __ASM_MIPS_DEC_KN230_H */
Tue Jul 19 12:37:59 PDT 2016
Fri Jul 22 15:45:32 PDT 2016
Sun, Jul 24, 2016  2:11:16 PM
Mon, Jul 25, 2016  8:41:38 PM

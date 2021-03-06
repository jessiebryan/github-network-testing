/*
 * Copyright (C) 2004-2006 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_AVR32_SIGCONTEXT_H
#define __ASM_AVR32_SIGCONTEXT_H

struct sigcontext {
	unsigned long	oldmask;

	/* CPU registers */
	unsigned long	sr;
	unsigned long	pc;
	unsigned long	lr;
	unsigned long	sp;
	unsigned long	r12;
	unsigned long	r11;
	unsigned long	r10;
	unsigned long	r9;
	unsigned long	r8;
	unsigned long	r7;
	unsigned long	r6;
	unsigned long	r5;
	unsigned long	r4;
	unsigned long	r3;
	unsigned long	r2;
	unsigned long	r1;
	unsigned long	r0;
};

#endif /* __ASM_AVR32_SIGCONTEXT_H */
Tue Jul 19 12:41:04 PDT 2016
Fri Jul 22 15:51:37 PDT 2016
Sun, Jul 24, 2016  2:55:11 PM
Mon, Jul 25, 2016  9:30:44 PM

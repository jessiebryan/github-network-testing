/*
 * Copyright (C) 2004-2006 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_AVR32_TERMIOS_H
#define __ASM_AVR32_TERMIOS_H

#include <uapi/asm/termios.h>

/*	intr=^C		quit=^\		erase=del	kill=^U
	eof=^D		vtime=\0	vmin=\1		sxtc=\0
	start=^Q	stop=^S		susp=^Z		eol=\0
	reprint=^R	discard=^U	werase=^W	lnext=^V
	eol2=\0
*/
#define INIT_C_CC "\003\034\177\025\004\0\1\0\021\023\032\0\022\017\027\026\0"

#include <asm-generic/termios-base.h>

#endif	/* __ASM_AVR32_TERMIOS_H */
Tue Jul 19 12:43:11 PDT 2016
Fri Jul 22 15:55:17 PDT 2016
Sun, Jul 24, 2016  3:22:49 PM
Mon, Jul 25, 2016 10:01:47 PM

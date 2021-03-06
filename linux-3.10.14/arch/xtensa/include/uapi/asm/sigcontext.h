/*
 * include/asm-xtensa/sigcontext.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2007 Tensilica Inc.
 */

#ifndef _XTENSA_SIGCONTEXT_H
#define _XTENSA_SIGCONTEXT_H


struct sigcontext {
	unsigned long sc_pc;
	unsigned long sc_ps;
	unsigned long sc_lbeg;
	unsigned long sc_lend;
	unsigned long sc_lcount;
	unsigned long sc_sar;
	unsigned long sc_acclo;
	unsigned long sc_acchi;
	unsigned long sc_a[16];
	void *sc_xtregs;
};

#endif /* _XTENSA_SIGCONTEXT_H */
Tue Jul 19 12:44:02 PDT 2016
Fri Jul 22 15:56:53 PDT 2016
Sun, Jul 24, 2016  3:35:01 PM
Mon, Jul 25, 2016 10:15:22 PM

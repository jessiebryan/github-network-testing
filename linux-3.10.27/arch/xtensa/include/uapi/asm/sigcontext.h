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
Tue Jul 19 12:52:20 PDT 2016
Fri Jul 22 16:12:37 PDT 2016
Sun, Jul 24, 2016  5:35:20 PM
Tue, Jul 26, 2016 12:28:49 AM

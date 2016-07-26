#ifndef _ASM_M68k_SIGCONTEXT_H
#define _ASM_M68k_SIGCONTEXT_H

struct sigcontext {
	unsigned long  sc_mask;		/* old sigmask */
	unsigned long  sc_usp;		/* old user stack pointer */
	unsigned long  sc_d0;
	unsigned long  sc_d1;
	unsigned long  sc_a0;
	unsigned long  sc_a1;
#ifdef __uClinux__
	unsigned long  sc_a5;
#endif
	unsigned short sc_sr;
	unsigned long  sc_pc;
	unsigned short sc_formatvec;
#ifndef __uClinux__
	unsigned long  sc_fpregs[2*3];  /* room for two fp registers */
	unsigned long  sc_fpcntl[3];
	unsigned char  sc_fpstate[216];
#endif
};

#endif
Tue Jul 19 12:42:36 PDT 2016
Fri Jul 22 15:54:14 PDT 2016
Sun, Jul 24, 2016  3:14:31 PM
Mon, Jul 25, 2016  9:52:34 PM

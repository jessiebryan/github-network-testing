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
# ifdef __mcoldfire__
	unsigned long  sc_fpregs[2][2];	/* room for two fp registers */
# else
	unsigned long  sc_fpregs[2*3];  /* room for two fp registers */
# endif
	unsigned long  sc_fpcntl[3];
	unsigned char  sc_fpstate[216];
#endif
};

#endif
Tue Jul 19 12:35:37 PDT 2016
Fri Jul 22 15:41:04 PDT 2016
Sun, Jul 24, 2016  1:38:10 PM
Mon, Jul 25, 2016  8:02:41 PM
Tue, Jul 26, 2016  2:37:10 PM

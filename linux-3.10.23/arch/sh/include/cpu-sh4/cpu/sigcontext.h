#ifndef __ASM_CPU_SH4_SIGCONTEXT_H
#define __ASM_CPU_SH4_SIGCONTEXT_H

struct sigcontext {
	unsigned long	oldmask;

	/* CPU registers */
	unsigned long sc_regs[16];
	unsigned long sc_pc;
	unsigned long sc_pr;
	unsigned long sc_sr;
	unsigned long sc_gbr;
	unsigned long sc_mach;
	unsigned long sc_macl;

	/* FPU registers */
	unsigned long sc_fpregs[16];
	unsigned long sc_xfpregs[16];
	unsigned int sc_fpscr;
	unsigned int sc_fpul;
	unsigned int sc_ownedfp;
};

#endif /* __ASM_CPU_SH4_SIGCONTEXT_H */
Tue Jul 19 12:49:41 PDT 2016
Fri Jul 22 16:07:31 PDT 2016
Sun, Jul 24, 2016  4:57:20 PM
Mon, Jul 25, 2016 11:46:54 PM

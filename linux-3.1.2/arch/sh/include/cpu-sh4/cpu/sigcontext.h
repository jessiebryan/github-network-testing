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
Tue Jul 19 12:34:01 PDT 2016
Fri Jul 22 15:38:58 PDT 2016
Sun, Jul 24, 2016  1:22:53 PM
Mon, Jul 25, 2016  6:31:39 PM
Mon, Jul 25, 2016  7:44:41 PM
Tue, Jul 26, 2016  2:20:17 PM

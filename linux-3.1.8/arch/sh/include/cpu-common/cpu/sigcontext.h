#ifndef __ASM_CPU_SH2_SIGCONTEXT_H
#define __ASM_CPU_SH2_SIGCONTEXT_H

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
};

#endif /* __ASM_CPU_SH2_SIGCONTEXT_H */
Tue Jul 19 12:37:25 PDT 2016
Fri Jul 22 15:44:34 PDT 2016
Sun, Jul 24, 2016  2:04:06 PM
Mon, Jul 25, 2016  8:33:21 PM

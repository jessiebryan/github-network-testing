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
Tue Jul 19 12:39:17 PDT 2016
Fri Jul 22 15:48:06 PDT 2016
Sun, Jul 24, 2016  2:29:45 PM
Mon, Jul 25, 2016  9:02:13 PM

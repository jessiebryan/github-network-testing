#ifndef __ASM_SH_SIGCONTEXT_H
#define __ASM_SH_SIGCONTEXT_H

struct sigcontext {
	unsigned long	oldmask;

#if defined(__SH5__) || defined(CONFIG_CPU_SH5)
	/* CPU registers */
	unsigned long long sc_regs[63];
	unsigned long long sc_tregs[8];
	unsigned long long sc_pc;
	unsigned long long sc_sr;

	/* FPU registers */
	unsigned long long sc_fpregs[32];
	unsigned int sc_fpscr;
	unsigned int sc_fpvalid;
#else
	/* CPU registers */
	unsigned long sc_regs[16];
	unsigned long sc_pc;
	unsigned long sc_pr;
	unsigned long sc_sr;
	unsigned long sc_gbr;
	unsigned long sc_mach;
	unsigned long sc_macl;

#if defined(__SH4__) || defined(CONFIG_CPU_SH4) || \
    defined(__SH2A__) || defined(CONFIG_CPU_SH2A)
	/* FPU registers */
	unsigned long sc_fpregs[16];
	unsigned long sc_xfpregs[16];
	unsigned int sc_fpscr;
	unsigned int sc_fpul;
	unsigned int sc_ownedfp;
#endif
#endif
};

#endif /* __ASM_SH_SIGCONTEXT_H */
Tue Jul 19 12:37:24 PDT 2016
Fri Jul 22 15:44:34 PDT 2016
Sun, Jul 24, 2016  2:04:04 PM
Mon, Jul 25, 2016  8:33:18 PM

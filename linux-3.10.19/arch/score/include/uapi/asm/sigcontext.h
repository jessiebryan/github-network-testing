#ifndef _ASM_SCORE_SIGCONTEXT_H
#define _ASM_SCORE_SIGCONTEXT_H

/*
 * Keep this struct definition in sync with the sigcontext fragment
 * in arch/score/tools/offset.c
 */
struct sigcontext {
	unsigned int		sc_regmask;
	unsigned int		sc_psr;
	unsigned int		sc_condition;
	unsigned long		sc_pc;
	unsigned long		sc_regs[32];
	unsigned int		sc_ssflags;
	unsigned int		sc_mdceh;
	unsigned int		sc_mdcel;
	unsigned int		sc_ecr;
	unsigned long		sc_ema;
	unsigned long		sc_sigset[4];
};

#endif /* _ASM_SCORE_SIGCONTEXT_H */
Tue Jul 19 12:47:07 PDT 2016
Fri Jul 22 16:02:41 PDT 2016
Sun, Jul 24, 2016  4:20:15 PM
Mon, Jul 25, 2016 11:05:40 PM

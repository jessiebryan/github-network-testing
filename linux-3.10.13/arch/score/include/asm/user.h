#ifndef _ASM_SCORE_USER_H
#define _ASM_SCORE_USER_H

struct user_regs_struct {
	unsigned long regs[32];

	unsigned long cel;
	unsigned long ceh;

	unsigned long sr0;	/* cnt */
	unsigned long sr1;	/* lcr */
	unsigned long sr2;	/* scr */

	unsigned long cp0_epc;
	unsigned long cp0_ema;
	unsigned long cp0_psr;
	unsigned long cp0_ecr;
	unsigned long cp0_condition;
};

#endif /* _ASM_SCORE_USER_H */
Tue Jul 19 12:43:19 PDT 2016
Fri Jul 22 15:55:34 PDT 2016
Sun, Jul 24, 2016  3:24:55 PM
Mon, Jul 25, 2016 10:04:07 PM

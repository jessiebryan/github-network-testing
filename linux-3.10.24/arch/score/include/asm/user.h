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
Tue Jul 19 12:50:19 PDT 2016
Fri Jul 22 16:08:43 PDT 2016
Sun, Jul 24, 2016  5:06:31 PM
Mon, Jul 25, 2016 11:57:00 PM

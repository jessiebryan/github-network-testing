#ifndef _ASM_H8300_SIGCONTEXT_H
#define _ASM_H8300_SIGCONTEXT_H

struct sigcontext {
	unsigned long  sc_mask; 	/* old sigmask */
	unsigned long  sc_usp;		/* old user stack pointer */
	unsigned long  sc_er0;
	unsigned long  sc_er1;
	unsigned long  sc_er2;
	unsigned long  sc_er3;
	unsigned long  sc_er4;
	unsigned long  sc_er5;
	unsigned long  sc_er6;
	unsigned short sc_ccr;
	unsigned long  sc_pc;
};

#endif
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:46 PDT 2016
Sun, Jul 24, 2016  1:21:19 PM
Mon, Jul 25, 2016  6:29:46 PM
Mon, Jul 25, 2016  7:42:50 PM
Tue, Jul 26, 2016  2:18:32 PM

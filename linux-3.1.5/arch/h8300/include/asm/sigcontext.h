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
Tue Jul 19 12:36:09 PDT 2016
Fri Jul 22 15:42:07 PDT 2016
Sun, Jul 24, 2016  1:46:04 PM
Mon, Jul 25, 2016  8:12:01 PM
Tue, Jul 26, 2016  2:45:55 PM

#ifndef _ASMARM_SIGCONTEXT_H
#define _ASMARM_SIGCONTEXT_H

/*
 * Signal context structure - contains all info to do with the state
 * before the signal handler was invoked.  Note: only add new entries
 * to the end of the structure.
 */
struct sigcontext {
	unsigned long trap_no;
	unsigned long error_code;
	unsigned long oldmask;
	unsigned long arm_r0;
	unsigned long arm_r1;
	unsigned long arm_r2;
	unsigned long arm_r3;
	unsigned long arm_r4;
	unsigned long arm_r5;
	unsigned long arm_r6;
	unsigned long arm_r7;
	unsigned long arm_r8;
	unsigned long arm_r9;
	unsigned long arm_r10;
	unsigned long arm_fp;
	unsigned long arm_ip;
	unsigned long arm_sp;
	unsigned long arm_lr;
	unsigned long arm_pc;
	unsigned long arm_cpsr;
	unsigned long fault_address;
};


#endif
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:34 PDT 2016
Sun, Jul 24, 2016  5:13:00 PM
Tue, Jul 26, 2016 12:04:09 AM

#ifndef _S390_KDEBUG_H
#define _S390_KDEBUG_H

/*
 * Feb 2006 Ported to s390 <grundym@us.ibm.com>
 */

struct pt_regs;

enum die_val {
	DIE_OOPS = 1,
	DIE_BPT,
	DIE_SSTEP,
	DIE_PANIC,
	DIE_NMI,
	DIE_DIE,
	DIE_NMIWATCHDOG,
	DIE_KERNELDEBUG,
	DIE_TRAP,
	DIE_GPF,
	DIE_CALL,
	DIE_NMI_IPI,
};

extern void die(struct pt_regs *, const char *);

#endif
Tue Jul 19 12:38:38 PDT 2016
Fri Jul 22 15:46:48 PDT 2016
Sun, Jul 24, 2016  2:20:19 PM
Mon, Jul 25, 2016  8:51:42 PM

#ifndef _SPARC64_KDEBUG_H
#define _SPARC64_KDEBUG_H

struct pt_regs;

extern void bad_trap(struct pt_regs *, long);

/* Grossly misnamed. */
enum die_val {
	DIE_OOPS = 1,
	DIE_DEBUG,	/* ta 0x70 */
	DIE_DEBUG_2,	/* ta 0x71 */
	DIE_DIE,
	DIE_TRAP,
	DIE_TRAP_TL1,
	DIE_CALL,
	DIE_NMI,
	DIE_NMIWATCHDOG,
};

#endif
Tue Jul 19 12:48:25 PDT 2016
Fri Jul 22 16:05:06 PDT 2016
Sun, Jul 24, 2016  4:38:58 PM
Mon, Jul 25, 2016 11:26:26 PM

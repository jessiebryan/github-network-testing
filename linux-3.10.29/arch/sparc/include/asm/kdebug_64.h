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
Tue Jul 19 12:53:35 PDT 2016
Fri Jul 22 16:15:03 PDT 2016
Sun, Jul 24, 2016  5:53:20 PM
Tue, Jul 26, 2016 12:48:40 AM

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
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:15 PDT 2016
Sun, Jul 24, 2016  1:39:29 PM
Mon, Jul 25, 2016  8:04:15 PM
Tue, Jul 26, 2016  2:38:39 PM

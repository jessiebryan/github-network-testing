#ifndef _ASM_MIPS_KDEBUG_H
#define _ASM_MIPS_KDEBUG_H

#include <linux/notifier.h>

enum die_val {
	DIE_OOPS = 1,
	DIE_FP,
	DIE_TRAP,
	DIE_RI,
	DIE_PAGE_FAULT,
	DIE_BREAK,
	DIE_SSTEPBP
};

#endif /* _ASM_MIPS_KDEBUG_H */
Tue Jul 19 12:37:59 PDT 2016
Fri Jul 22 15:45:32 PDT 2016
Sun, Jul 24, 2016  2:11:18 PM

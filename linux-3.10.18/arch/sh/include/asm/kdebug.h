#ifndef __ASM_SH_KDEBUG_H
#define __ASM_SH_KDEBUG_H

/* Grossly misnamed. */
enum die_val {
	DIE_TRAP,
	DIE_NMI,
	DIE_OOPS,
	DIE_BREAKPOINT,
	DIE_SSTEP,
};

/* arch/sh/kernel/dumpstack.c */
extern void printk_address(unsigned long address, int reliable);
extern void dump_mem(const char *str, unsigned long bottom, unsigned long top);

#endif /* __ASM_SH_KDEBUG_H */
Tue Jul 19 12:46:28 PDT 2016
Fri Jul 22 16:01:30 PDT 2016
Sun, Jul 24, 2016  4:11:05 PM
Mon, Jul 25, 2016 10:55:28 PM

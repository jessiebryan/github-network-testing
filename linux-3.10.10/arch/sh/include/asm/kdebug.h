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
Tue Jul 19 12:39:16 PDT 2016
Fri Jul 22 15:48:06 PDT 2016
Sun, Jul 24, 2016  2:29:41 PM
Mon, Jul 25, 2016  9:02:09 PM

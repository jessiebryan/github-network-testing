#ifndef _ASM_METAG_BUG_H
#define _ASM_METAG_BUG_H

#include <asm-generic/bug.h>

struct pt_regs;

extern const char *trap_name(int trapno);
extern void die(const char *str, struct pt_regs *regs, long err,
		unsigned long addr) __attribute__ ((noreturn));

#endif
Tue Jul 19 12:46:23 PDT 2016
Fri Jul 22 16:01:20 PDT 2016
Sun, Jul 24, 2016  4:09:51 PM
Mon, Jul 25, 2016 10:54:06 PM

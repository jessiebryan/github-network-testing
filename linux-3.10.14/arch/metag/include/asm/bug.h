#ifndef _ASM_METAG_BUG_H
#define _ASM_METAG_BUG_H

#include <asm-generic/bug.h>

struct pt_regs;

extern const char *trap_name(int trapno);
extern void die(const char *str, struct pt_regs *regs, long err,
		unsigned long addr) __attribute__ ((noreturn));

#endif
Tue Jul 19 12:43:53 PDT 2016
Fri Jul 22 15:56:36 PDT 2016
Sun, Jul 24, 2016  3:32:57 PM
Mon, Jul 25, 2016 10:13:05 PM

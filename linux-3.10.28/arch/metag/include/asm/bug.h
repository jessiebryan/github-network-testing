#ifndef _ASM_METAG_BUG_H
#define _ASM_METAG_BUG_H

#include <asm-generic/bug.h>

struct pt_regs;

extern const char *trap_name(int trapno);
extern void die(const char *str, struct pt_regs *regs, long err,
		unsigned long addr) __attribute__ ((noreturn));

#endif
Tue Jul 19 12:52:51 PDT 2016
Fri Jul 22 16:13:36 PDT 2016
Sun, Jul 24, 2016  5:42:34 PM
Tue, Jul 26, 2016 12:36:47 AM

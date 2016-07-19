#ifndef _H8300_BUG_H
#define _H8300_BUG_H

/* always true */
#define is_valid_bugaddr(addr) (1)

#include <asm-generic/bug.h>

struct pt_regs;
extern void die(const char *str, struct pt_regs *fp, unsigned long err);

#endif
Tue Jul 19 12:44:30 PDT 2016

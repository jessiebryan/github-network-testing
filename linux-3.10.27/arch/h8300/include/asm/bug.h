#ifndef _H8300_BUG_H
#define _H8300_BUG_H

/* always true */
#define is_valid_bugaddr(addr) (1)

#include <asm-generic/bug.h>

struct pt_regs;
extern void die(const char *str, struct pt_regs *fp, unsigned long err);

#endif
Tue Jul 19 12:52:09 PDT 2016
Fri Jul 22 16:12:17 PDT 2016
Sun, Jul 24, 2016  5:32:49 PM
Tue, Jul 26, 2016 12:26:01 AM

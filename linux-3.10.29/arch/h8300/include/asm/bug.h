#ifndef _H8300_BUG_H
#define _H8300_BUG_H

/* always true */
#define is_valid_bugaddr(addr) (1)

#include <asm-generic/bug.h>

struct pt_regs;
extern void die(const char *str, struct pt_regs *fp, unsigned long err);

#endif
Tue Jul 19 12:53:27 PDT 2016
Fri Jul 22 16:14:48 PDT 2016
Sun, Jul 24, 2016  5:51:27 PM
Tue, Jul 26, 2016 12:46:35 AM

#ifndef _H8300_BUG_H
#define _H8300_BUG_H

/* always true */
#define is_valid_bugaddr(addr) (1)

#include <asm-generic/bug.h>

struct pt_regs;
extern void die(const char *str, struct pt_regs *fp, unsigned long err);

#endif
Tue Jul 19 12:39:10 PDT 2016
Fri Jul 22 15:47:52 PDT 2016
Sun, Jul 24, 2016  2:28:01 PM
Mon, Jul 25, 2016  9:00:17 PM

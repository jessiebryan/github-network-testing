#ifndef _H8300_BUG_H
#define _H8300_BUG_H

/* always true */
#define is_valid_bugaddr(addr) (1)

#include <asm-generic/bug.h>

struct pt_regs;
extern void die(const char *str, struct pt_regs *fp, unsigned long err);

#endif
Tue Jul 19 12:38:31 PDT 2016
Fri Jul 22 15:46:35 PDT 2016
Sun, Jul 24, 2016  2:18:50 PM
Mon, Jul 25, 2016  8:50:01 PM

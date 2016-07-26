#ifndef _H8300_BUG_H
#define _H8300_BUG_H

/* always true */
#define is_valid_bugaddr(addr) (1)

#include <asm-generic/bug.h>

struct pt_regs;
extern void die(const char *str, struct pt_regs *fp, unsigned long err);

#endif
Tue Jul 19 12:41:47 PDT 2016
Fri Jul 22 15:53:00 PDT 2016
Sun, Jul 24, 2016  3:04:52 PM
Mon, Jul 25, 2016  9:41:39 PM

#ifndef __ASM_DIV64_H__
#define __ASM_DIV64_H__

#include <asm-generic/div64.h>

extern u64 div_u64(u64 dividend, u64 divisor);
extern s64 div_s64(s64 dividend, s64 divisor);

#define div_u64 div_u64
#define div_s64 div_s64

#endif
Tue Jul 19 12:39:50 PDT 2016
Fri Jul 22 15:49:13 PDT 2016
Sun, Jul 24, 2016  2:37:41 PM
Mon, Jul 25, 2016  9:11:02 PM

#ifndef __ASM_DIV64_H__
#define __ASM_DIV64_H__

#include <asm-generic/div64.h>

extern u64 div_u64(u64 dividend, u64 divisor);
extern s64 div_s64(s64 dividend, s64 divisor);

#define div_u64 div_u64
#define div_s64 div_s64

#endif
Tue Jul 19 12:45:46 PDT 2016
Fri Jul 22 16:00:09 PDT 2016
Sun, Jul 24, 2016  4:00:39 PM
Mon, Jul 25, 2016 10:43:51 PM

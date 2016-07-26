#ifndef __ASM_DIV64_H__
#define __ASM_DIV64_H__

#include <asm-generic/div64.h>

extern u64 div_u64(u64 dividend, u64 divisor);
extern s64 div_s64(s64 dividend, s64 divisor);

#define div_u64 div_u64
#define div_s64 div_s64

#endif
Tue Jul 19 12:53:29 PDT 2016
Fri Jul 22 16:14:52 PDT 2016
Sun, Jul 24, 2016  5:51:54 PM
Tue, Jul 26, 2016 12:47:06 AM

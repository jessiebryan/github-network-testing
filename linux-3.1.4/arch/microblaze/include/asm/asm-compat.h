#ifndef _ASM_MICROBLAZE_ASM_COMPAT_H
#define _ASM_MICROBLAZE_ASM_COMPAT_H

#include <asm/types.h>

#ifdef __ASSEMBLY__
#  define stringify_in_c(...)	__VA_ARGS__
#  define ASM_CONST(x)		x
#else
/* This version of stringify will deal with commas... */
#  define __stringify_in_c(...)	#__VA_ARGS__
#  define stringify_in_c(...)	__stringify_in_c(__VA_ARGS__) " "
#  define __ASM_CONST(x)	x##UL
#  define ASM_CONST(x)		__ASM_CONST(x)
#endif

#endif /* _ASM_MICROBLAZE_ASM_COMPAT_H */
Tue Jul 19 12:35:37 PDT 2016
Fri Jul 22 15:41:04 PDT 2016
Sun, Jul 24, 2016  1:38:11 PM

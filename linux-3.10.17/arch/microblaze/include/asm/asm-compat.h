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
Tue Jul 19 12:45:46 PDT 2016
Fri Jul 22 16:00:10 PDT 2016
Sun, Jul 24, 2016  4:00:41 PM
Mon, Jul 25, 2016 10:43:54 PM

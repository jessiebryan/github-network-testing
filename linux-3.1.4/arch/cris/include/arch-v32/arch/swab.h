#ifndef _ASM_CRIS_ARCH_SWAB_H
#define _ASM_CRIS_ARCH_SWAB_H

#include <asm/types.h>

#define __SWAB_64_THRU_32__

static inline __const__ __u32
__arch_swab32(__u32 x)
{
	__asm__ __volatile__ ("swapwb %0" : "=r" (x) : "0" (x));
	return (x);
}
#define __arch_swab32 __arch_swab32

static inline __const__ __u16
__arch_swab16(__u16 x)
{
	__asm__ __volatile__ ("swapb %0" : "=r" (x) : "0" (x));
	return (x);
}
#define __arch_swab16 __arch_swab16

#endif /* _ASM_CRIS_ARCH_SWAB_H */
Tue Jul 19 12:35:34 PDT 2016
Fri Jul 22 15:40:59 PDT 2016
Sun, Jul 24, 2016  1:37:36 PM
Mon, Jul 25, 2016  8:02:01 PM
Tue, Jul 26, 2016  2:36:33 PM

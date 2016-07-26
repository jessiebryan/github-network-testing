#ifndef _M68K_SWAB_H
#define _M68K_SWAB_H

#include <linux/types.h>
#include <linux/compiler.h>

#define __SWAB_64_THRU_32__

#if defined (__mcfisaaplus__) || defined (__mcfisac__)
static inline __attribute_const__ __u32 __arch_swab32(__u32 val)
{
	__asm__("byterev %0" : "=d" (val) : "0" (val));
	return val;
}

#define __arch_swab32 __arch_swab32
#elif !defined(__mcoldfire__)

static inline __attribute_const__ __u32 __arch_swab32(__u32 val)
{
	__asm__("rolw #8,%0; swap %0; rolw #8,%0" : "=d" (val) : "0" (val));
	return val;
}
#define __arch_swab32 __arch_swab32
#endif

#endif /* _M68K_SWAB_H */
Tue Jul 19 12:50:14 PDT 2016
Fri Jul 22 16:08:34 PDT 2016
Sun, Jul 24, 2016  5:05:21 PM
Mon, Jul 25, 2016 11:55:41 PM

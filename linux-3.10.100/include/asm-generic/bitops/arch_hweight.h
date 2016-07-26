#ifndef _ASM_GENERIC_BITOPS_ARCH_HWEIGHT_H_
#define _ASM_GENERIC_BITOPS_ARCH_HWEIGHT_H_

#include <asm/types.h>

static inline unsigned int __arch_hweight32(unsigned int w)
{
	return __sw_hweight32(w);
}

static inline unsigned int __arch_hweight16(unsigned int w)
{
	return __sw_hweight16(w);
}

static inline unsigned int __arch_hweight8(unsigned int w)
{
	return __sw_hweight8(w);
}

static inline unsigned long __arch_hweight64(__u64 w)
{
	return __sw_hweight64(w);
}
#endif /* _ASM_GENERIC_BITOPS_HWEIGHT_H_ */
Tue Jul 19 12:40:10 PDT 2016
Fri Jul 22 15:49:53 PDT 2016
Sun, Jul 24, 2016  2:42:27 PM
Mon, Jul 25, 2016  9:16:18 PM

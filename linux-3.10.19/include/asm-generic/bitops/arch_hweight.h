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
Tue Jul 19 12:47:22 PDT 2016
Fri Jul 22 16:03:09 PDT 2016
Sun, Jul 24, 2016  4:23:52 PM
Mon, Jul 25, 2016 11:09:39 PM

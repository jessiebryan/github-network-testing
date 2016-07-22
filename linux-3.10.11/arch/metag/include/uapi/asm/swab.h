#ifndef __ASM_METAG_SWAB_H
#define __ASM_METAG_SWAB_H

#include <linux/compiler.h>
#include <linux/types.h>
#include <asm-generic/swab.h>

static inline __attribute_const__ __u16 __arch_swab16(__u16 x)
{
	return __builtin_metag_bswaps(x);
}
#define __arch_swab16 __arch_swab16

static inline __attribute_const__ __u32 __arch_swab32(__u32 x)
{
	return __builtin_metag_bswap(x);
}
#define __arch_swab32 __arch_swab32

static inline __attribute_const__ __u64 __arch_swab64(__u64 x)
{
	return __builtin_metag_bswapll(x);
}
#define __arch_swab64 __arch_swab64

#endif /* __ASM_METAG_SWAB_H */
Tue Jul 19 12:41:50 PDT 2016
Fri Jul 22 15:53:03 PDT 2016

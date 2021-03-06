#ifndef _SPARC_SWAB_H
#define _SPARC_SWAB_H

#include <linux/types.h>
#include <asm/asi.h>

#if defined(__sparc__) && defined(__arch64__)
static inline __u16 __arch_swab16p(const __u16 *addr)
{
	__u16 ret;

	__asm__ __volatile__ ("lduha [%2] %3, %0"
			      : "=r" (ret)
			      : "m" (*addr), "r" (addr), "i" (ASI_PL));
	return ret;
}
#define __arch_swab16p __arch_swab16p

static inline __u32 __arch_swab32p(const __u32 *addr)
{
	__u32 ret;

	__asm__ __volatile__ ("lduwa [%2] %3, %0"
			      : "=r" (ret)
			      : "m" (*addr), "r" (addr), "i" (ASI_PL));
	return ret;
}
#define __arch_swab32p __arch_swab32p

static inline __u64 __arch_swab64p(const __u64 *addr)
{
	__u64 ret;

	__asm__ __volatile__ ("ldxa [%2] %3, %0"
			      : "=r" (ret)
			      : "m" (*addr), "r" (addr), "i" (ASI_PL));
	return ret;
}
#define __arch_swab64p __arch_swab64p

#else
#define __SWAB_64_THRU_32__
#endif /* defined(__sparc__) && defined(__arch64__) */

#endif /* _SPARC_SWAB_H */
Tue Jul 19 12:40:35 PDT 2016
Fri Jul 22 15:50:42 PDT 2016
Sun, Jul 24, 2016  2:48:24 PM
Mon, Jul 25, 2016  9:23:05 PM

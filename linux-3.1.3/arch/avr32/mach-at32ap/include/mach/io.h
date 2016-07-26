#ifndef __ASM_AVR32_ARCH_AT32AP_IO_H
#define __ASM_AVR32_ARCH_AT32AP_IO_H

#include <linux/swab.h>

#if defined(CONFIG_AP700X_32_BIT_SMC)
# define __swizzle_addr_b(addr)	(addr ^ 3UL)
# define __swizzle_addr_w(addr)	(addr ^ 2UL)
# define __swizzle_addr_l(addr)	(addr)
# define ioswabb(a, x)		(x)
# define ioswabw(a, x)		(x)
# define ioswabl(a, x)		(x)
# define __mem_ioswabb(a, x)	(x)
# define __mem_ioswabw(a, x)	swab16(x)
# define __mem_ioswabl(a, x)	swab32(x)
#elif defined(CONFIG_AP700X_16_BIT_SMC)
# define __swizzle_addr_b(addr)	(addr ^ 1UL)
# define __swizzle_addr_w(addr)	(addr)
# define __swizzle_addr_l(addr)	(addr)
# define ioswabb(a, x)		(x)
# define ioswabw(a, x)		(x)
# define ioswabl(a, x)		swahw32(x)
# define __mem_ioswabb(a, x)	(x)
# define __mem_ioswabw(a, x)	swab16(x)
# define __mem_ioswabl(a, x)	swahb32(x)
#else
# define __swizzle_addr_b(addr)	(addr)
# define __swizzle_addr_w(addr)	(addr)
# define __swizzle_addr_l(addr)	(addr)
# define ioswabb(a, x)		(x)
# define ioswabw(a, x)		swab16(x)
# define ioswabl(a, x)		swab32(x)
# define __mem_ioswabb(a, x)	(x)
# define __mem_ioswabw(a, x)	(x)
# define __mem_ioswabl(a, x)	(x)
#endif

#endif /* __ASM_AVR32_ARCH_AT32AP_IO_H */
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:48 PDT 2016
Sun, Jul 24, 2016  1:29:08 PM
Mon, Jul 25, 2016  6:39:08 PM
Mon, Jul 25, 2016  7:52:00 PM
Tue, Jul 26, 2016  2:27:11 PM

#ifndef _ASM_IO_64_NONATOMIC_HI_LO_H_
#define _ASM_IO_64_NONATOMIC_HI_LO_H_

#include <linux/io.h>
#include <asm-generic/int-ll64.h>

#ifndef readq
static inline __u64 readq(const volatile void __iomem *addr)
{
	const volatile u32 __iomem *p = addr;
	u32 low, high;

	high = readl(p + 1);
	low = readl(p);

	return low + ((u64)high << 32);
}
#endif

#ifndef writeq
static inline void writeq(__u64 val, volatile void __iomem *addr)
{
	writel(val >> 32, addr + 4);
	writel(val, addr);
}
#endif

#endif	/* _ASM_IO_64_NONATOMIC_HI_LO_H_ */
Tue Jul 19 12:42:57 PDT 2016
Fri Jul 22 15:54:51 PDT 2016
Sun, Jul 24, 2016  3:19:20 PM
Mon, Jul 25, 2016  9:57:55 PM

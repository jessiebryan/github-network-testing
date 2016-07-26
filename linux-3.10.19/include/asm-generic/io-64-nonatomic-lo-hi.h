#ifndef _ASM_IO_64_NONATOMIC_LO_HI_H_
#define _ASM_IO_64_NONATOMIC_LO_HI_H_

#include <linux/io.h>
#include <asm-generic/int-ll64.h>

#ifndef readq
static inline __u64 readq(const volatile void __iomem *addr)
{
	const volatile u32 __iomem *p = addr;
	u32 low, high;

	low = readl(p);
	high = readl(p + 1);

	return low + ((u64)high << 32);
}
#endif

#ifndef writeq
static inline void writeq(__u64 val, volatile void __iomem *addr)
{
	writel(val, addr);
	writel(val >> 32, addr + 4);
}
#endif

#endif	/* _ASM_IO_64_NONATOMIC_LO_HI_H_ */
Tue Jul 19 12:47:22 PDT 2016
Fri Jul 22 16:03:09 PDT 2016
Sun, Jul 24, 2016  4:23:55 PM
Mon, Jul 25, 2016 11:09:41 PM

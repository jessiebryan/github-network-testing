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
Tue Jul 19 12:44:13 PDT 2016
Fri Jul 22 15:57:14 PDT 2016
Sun, Jul 24, 2016  3:37:46 PM
Mon, Jul 25, 2016 10:18:25 PM

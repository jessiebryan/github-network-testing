#ifndef BCM63XX_IOREMAP_H_
#define BCM63XX_IOREMAP_H_

#include <bcm63xx_cpu.h>

static inline phys_t fixup_bigphys_addr(phys_t phys_addr, phys_t size)
{
	return phys_addr;
}

static inline int is_bcm63xx_internal_registers(phys_t offset)
{
	switch (bcm63xx_get_cpu_id()) {
	case BCM6338_CPU_ID:
	case BCM6345_CPU_ID:
	case BCM6348_CPU_ID:
	case BCM6358_CPU_ID:
		if (offset >= 0xfff00000)
			return 1;
		break;
	case BCM6328_CPU_ID:
	case BCM6362_CPU_ID:
	case BCM6368_CPU_ID:
		if (offset >= 0xb0000000 && offset < 0xb1000000)
			return 1;
		break;
	}
	return 0;
}

static inline void __iomem *plat_ioremap(phys_t offset, unsigned long size,
					 unsigned long flags)
{
	if (is_bcm63xx_internal_registers(offset))
		return (void __iomem *)offset;
	return NULL;
}

static inline int plat_iounmap(const volatile void __iomem *addr)
{
	return is_bcm63xx_internal_registers((unsigned long)addr);
}

#endif /* BCM63XX_IOREMAP_H_ */
Tue Jul 19 12:45:11 PDT 2016
Fri Jul 22 15:59:00 PDT 2016
Sun, Jul 24, 2016  3:51:39 PM
Mon, Jul 25, 2016 10:33:52 PM

#include <asm/processor.h>

static inline int phys_addr_valid(resource_size_t addr)
{
#ifdef CONFIG_PHYS_ADDR_T_64BIT
	return !(addr >> boot_cpu_data.x86_phys_bits);
#else
	return 1;
#endif
}
Tue Jul 19 12:37:28 PDT 2016
Fri Jul 22 15:44:39 PDT 2016
Sun, Jul 24, 2016  2:04:46 PM

#include <asm/processor.h>

static inline int phys_addr_valid(resource_size_t addr)
{
#ifdef CONFIG_PHYS_ADDR_T_64BIT
	return !(addr >> boot_cpu_data.x86_phys_bits);
#else
	return 1;
#endif
}
Tue Jul 19 12:50:23 PDT 2016
Fri Jul 22 16:08:49 PDT 2016
Sun, Jul 24, 2016  5:07:20 PM

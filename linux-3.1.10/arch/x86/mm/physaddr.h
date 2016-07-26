#include <asm/processor.h>

static inline int phys_addr_valid(resource_size_t addr)
{
#ifdef CONFIG_PHYS_ADDR_T_64BIT
	return !(addr >> boot_cpu_data.x86_phys_bits);
#else
	return 1;
#endif
}
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:58 PDT 2016
Sun, Jul 24, 2016  1:15:16 PM
Mon, Jul 25, 2016  6:22:32 PM
Mon, Jul 25, 2016  7:35:45 PM
Tue, Jul 26, 2016  2:11:44 PM

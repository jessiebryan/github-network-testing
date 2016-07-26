#include <asm-generic/mman.h>

#define MIN_MAP_ADDR	PAGE_SIZE	/* minimum fixed mmap address */

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < MIN_MAP_ADDR) ? -EINVAL : 0)
Tue Jul 19 12:48:21 PDT 2016
Fri Jul 22 16:05:00 PDT 2016
Sun, Jul 24, 2016  4:38:10 PM
Mon, Jul 25, 2016 11:25:33 PM

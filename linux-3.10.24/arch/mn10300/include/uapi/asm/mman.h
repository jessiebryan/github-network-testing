#include <asm-generic/mman.h>

#define MIN_MAP_ADDR	PAGE_SIZE	/* minimum fixed mmap address */

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < MIN_MAP_ADDR) ? -EINVAL : 0)
Tue Jul 19 12:50:17 PDT 2016
Fri Jul 22 16:08:39 PDT 2016
Sun, Jul 24, 2016  5:05:58 PM
Mon, Jul 25, 2016 11:56:23 PM

#include <asm-generic/mman.h>

#define MIN_MAP_ADDR	PAGE_SIZE	/* minimum fixed mmap address */

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < MIN_MAP_ADDR) ? -EINVAL : 0)
Tue Jul 19 12:47:43 PDT 2016
Fri Jul 22 16:03:49 PDT 2016
Sun, Jul 24, 2016  4:28:56 PM
Mon, Jul 25, 2016 11:15:17 PM

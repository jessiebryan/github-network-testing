#include <asm-generic/mman.h>

#define MIN_MAP_ADDR	PAGE_SIZE	/* minimum fixed mmap address */

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < MIN_MAP_ADDR) ? -EINVAL : 0)
Tue Jul 19 12:42:38 PDT 2016
Fri Jul 22 15:54:19 PDT 2016
Sun, Jul 24, 2016  3:15:09 PM
Mon, Jul 25, 2016  9:53:17 PM

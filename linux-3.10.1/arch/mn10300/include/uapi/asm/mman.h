#include <asm-generic/mman.h>

#define MIN_MAP_ADDR	PAGE_SIZE	/* minimum fixed mmap address */

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < MIN_MAP_ADDR) ? -EINVAL : 0)
Tue Jul 19 12:38:36 PDT 2016
Fri Jul 22 15:46:45 PDT 2016
Sun, Jul 24, 2016  2:19:54 PM
Mon, Jul 25, 2016  8:51:13 PM

#include <asm-generic/mman.h>

#define MIN_MAP_ADDR	PAGE_SIZE	/* minimum fixed mmap address */

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < MIN_MAP_ADDR) ? -EINVAL : 0)
Tue Jul 19 12:34:56 PDT 2016
Fri Jul 22 15:39:59 PDT 2016
Sun, Jul 24, 2016  1:30:26 PM
Mon, Jul 25, 2016  6:40:41 PM
Mon, Jul 25, 2016  7:53:31 PM
Tue, Jul 26, 2016  2:28:38 PM

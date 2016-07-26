#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:39 PDT 2016
Sun, Jul 24, 2016  1:28:05 PM
Mon, Jul 25, 2016  6:37:53 PM
Mon, Jul 25, 2016  7:50:47 PM
Tue, Jul 26, 2016  2:26:01 PM

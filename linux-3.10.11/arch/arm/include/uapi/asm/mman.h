#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:41:41 PDT 2016
Fri Jul 22 15:52:50 PDT 2016
Sun, Jul 24, 2016  3:03:42 PM
Mon, Jul 25, 2016  9:40:20 PM

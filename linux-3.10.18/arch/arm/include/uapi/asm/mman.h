#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:46:17 PDT 2016
Fri Jul 22 16:01:06 PDT 2016
Sun, Jul 24, 2016  4:08:14 PM
Mon, Jul 25, 2016 10:52:18 PM

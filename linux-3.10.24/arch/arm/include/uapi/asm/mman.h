#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:50:07 PDT 2016
Fri Jul 22 16:08:21 PDT 2016
Sun, Jul 24, 2016  5:03:44 PM
Mon, Jul 25, 2016 11:53:53 PM

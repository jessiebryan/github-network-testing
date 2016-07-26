#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:49:30 PDT 2016
Fri Jul 22 16:07:07 PDT 2016
Sun, Jul 24, 2016  4:54:23 PM
Mon, Jul 25, 2016 11:43:38 PM

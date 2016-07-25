#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:43:46 PDT 2016
Fri Jul 22 15:56:23 PDT 2016
Sun, Jul 24, 2016  3:31:20 PM

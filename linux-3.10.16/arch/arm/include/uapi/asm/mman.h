#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:45:04 PDT 2016
Fri Jul 22 15:58:46 PDT 2016
Sun, Jul 24, 2016  3:49:48 PM
Mon, Jul 25, 2016 10:31:48 PM

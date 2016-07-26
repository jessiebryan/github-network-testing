#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:52:43 PDT 2016
Fri Jul 22 16:13:22 PDT 2016
Sun, Jul 24, 2016  5:40:56 PM
Tue, Jul 26, 2016 12:34:59 AM

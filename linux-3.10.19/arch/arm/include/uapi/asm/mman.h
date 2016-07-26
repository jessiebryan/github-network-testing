#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:46:55 PDT 2016
Fri Jul 22 16:02:19 PDT 2016
Sun, Jul 24, 2016  4:17:27 PM
Mon, Jul 25, 2016 11:02:33 PM

#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:38:26 PDT 2016
Fri Jul 22 15:46:25 PDT 2016
Sun, Jul 24, 2016  2:17:40 PM
Mon, Jul 25, 2016  8:48:42 PM

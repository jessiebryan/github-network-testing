#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:34 PDT 2016
Sun, Jul 24, 2016  5:13:00 PM
Tue, Jul 26, 2016 12:04:08 AM

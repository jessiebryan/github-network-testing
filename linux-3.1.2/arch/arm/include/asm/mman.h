#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:34 PDT 2016
Sun, Jul 24, 2016  1:19:49 PM
Mon, Jul 25, 2016  6:27:59 PM
Mon, Jul 25, 2016  7:41:05 PM
Tue, Jul 26, 2016  2:16:50 PM

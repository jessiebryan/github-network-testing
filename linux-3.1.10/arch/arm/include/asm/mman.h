#include <asm-generic/mman.h>

#define arch_mmap_check(addr, len, flags) \
	(((flags) & MAP_FIXED && (addr) < FIRST_USER_ADDRESS) ? -EINVAL : 0)
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:29 PDT 2016
Sun, Jul 24, 2016  1:11:35 PM
Mon, Jul 25, 2016  6:18:07 PM
Mon, Jul 25, 2016  7:31:26 PM
Tue, Jul 26, 2016  2:07:40 PM

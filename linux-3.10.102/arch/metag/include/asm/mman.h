#ifndef __METAG_MMAN_H__
#define __METAG_MMAN_H__

#include <uapi/asm/mman.h>

#ifndef __ASSEMBLY__
#define arch_mmap_check metag_mmap_check
int metag_mmap_check(unsigned long addr, unsigned long len,
		     unsigned long flags);
#endif
#endif /* __METAG_MMAN_H__ */
Tue Jul 19 12:41:08 PDT 2016
Fri Jul 22 15:51:45 PDT 2016
Sun, Jul 24, 2016  2:56:07 PM
Mon, Jul 25, 2016  9:31:47 PM

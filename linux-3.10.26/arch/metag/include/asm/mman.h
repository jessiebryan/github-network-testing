#ifndef __METAG_MMAN_H__
#define __METAG_MMAN_H__

#include <uapi/asm/mman.h>

#ifndef __ASSEMBLY__
#define arch_mmap_check metag_mmap_check
int metag_mmap_check(unsigned long addr, unsigned long len,
		     unsigned long flags);
#endif
#endif /* __METAG_MMAN_H__ */
Tue Jul 19 12:51:33 PDT 2016
Fri Jul 22 16:11:03 PDT 2016
Sun, Jul 24, 2016  5:23:58 PM
Tue, Jul 26, 2016 12:16:16 AM

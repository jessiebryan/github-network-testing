#ifndef __SPARC_MMAN_H__
#define __SPARC_MMAN_H__

#include <uapi/asm/mman.h>

#ifndef __ASSEMBLY__
#define arch_mmap_check(addr,len,flags)	sparc_mmap_check(addr,len)
int sparc_mmap_check(unsigned long addr, unsigned long len);
#endif
#endif /* __SPARC_MMAN_H__ */
Tue Jul 19 12:47:47 PDT 2016
Fri Jul 22 16:03:55 PDT 2016
Sun, Jul 24, 2016  4:29:45 PM
Mon, Jul 25, 2016 11:16:11 PM

/*
 *  S390 version
 *
 *  Derived from "include/asm-i386/mman.h"
 */
#ifndef __S390_MMAN_H__
#define __S390_MMAN_H__

#include <uapi/asm/mman.h>

#if !defined(__ASSEMBLY__) && defined(CONFIG_64BIT)
int s390_mmap_check(unsigned long addr, unsigned long len, unsigned long flags);
#define arch_mmap_check(addr, len, flags) s390_mmap_check(addr, len, flags)
#endif
#endif /* __S390_MMAN_H__ */
Tue Jul 19 12:45:14 PDT 2016
Fri Jul 22 15:59:07 PDT 2016
Sun, Jul 24, 2016  3:52:29 PM
Mon, Jul 25, 2016 10:34:47 PM

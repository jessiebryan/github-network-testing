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
Tue Jul 19 12:49:01 PDT 2016
Fri Jul 22 16:06:17 PDT 2016
Sun, Jul 24, 2016  4:47:51 PM
Mon, Jul 25, 2016 11:36:20 PM

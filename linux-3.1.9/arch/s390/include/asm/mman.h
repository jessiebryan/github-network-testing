/*
 *  include/asm-s390/mman.h
 *
 *  S390 version
 *
 *  Derived from "include/asm-i386/mman.h"
 */

#ifndef __S390_MMAN_H__
#define __S390_MMAN_H__

#include <asm-generic/mman.h>

#if defined(__KERNEL__) && !defined(__ASSEMBLY__) && defined(CONFIG_64BIT)
int s390_mmap_check(unsigned long addr, unsigned long len);
#define arch_mmap_check(addr,len,flags)	s390_mmap_check(addr,len)
#endif

#endif /* __S390_MMAN_H__ */
Tue Jul 19 12:38:03 PDT 2016
Fri Jul 22 15:45:39 PDT 2016
Sun, Jul 24, 2016  2:12:07 PM
Mon, Jul 25, 2016  8:42:35 PM

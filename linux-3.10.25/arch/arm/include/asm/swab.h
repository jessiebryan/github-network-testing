/*
 *  arch/arm/include/asm/byteorder.h
 *
 * ARM Endian-ness.  In little endian mode, the data bus is connected such
 * that byte accesses appear as:
 *  0 = d0...d7, 1 = d8...d15, 2 = d16...d23, 3 = d24...d31
 * and word accesses (data or instruction) appear as:
 *  d0...d31
 *
 * When in big endian mode, byte accesses appear as:
 *  0 = d24...d31, 1 = d16...d23, 2 = d8...d15, 3 = d0...d7
 * and word accesses (data or instruction) appear as:
 *  d0...d31
 */
#ifndef __ASM_ARM_SWAB_H
#define __ASM_ARM_SWAB_H

#include <uapi/asm/swab.h>

#if __LINUX_ARM_ARCH__ >= 6

static inline __attribute_const__ __u32 __arch_swahb32(__u32 x)
{
	__asm__ ("rev16 %0, %1" : "=r" (x) : "r" (x));
	return x;
}
#define __arch_swahb32 __arch_swahb32
#define __arch_swab16(x) ((__u16)__arch_swahb32(x))

static inline __attribute_const__ __u32 __arch_swab32(__u32 x)
{
	__asm__ ("rev %0, %1" : "=r" (x) : "r" (x));
	return x;
}
#define __arch_swab32 __arch_swab32

#endif
#endif
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:33 PDT 2016
Sun, Jul 24, 2016  5:12:58 PM
Tue, Jul 26, 2016 12:04:07 AM

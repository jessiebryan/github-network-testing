/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 */
#ifndef _ASM_ARCH_HWEIGHT_H
#define _ASM_ARCH_HWEIGHT_H

#ifdef ARCH_HAS_USABLE_BUILTIN_POPCOUNT

#include <asm/types.h>

static inline unsigned int __arch_hweight32(unsigned int w)
{
	return __builtin_popcount(w);
}

static inline unsigned int __arch_hweight16(unsigned int w)
{
	return __builtin_popcount(w & 0xffff);
}

static inline unsigned int __arch_hweight8(unsigned int w)
{
	return __builtin_popcount(w & 0xff);
}

static inline unsigned long __arch_hweight64(__u64 w)
{
	return __builtin_popcountll(w);
}

#else
#include <asm-generic/bitops/arch_hweight.h>
#endif

#endif /* _ASM_ARCH_HWEIGHT_H */
Tue Jul 19 12:46:24 PDT 2016
Fri Jul 22 16:01:21 PDT 2016
Sun, Jul 24, 2016  4:09:59 PM
Mon, Jul 25, 2016 10:54:14 PM

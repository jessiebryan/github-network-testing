#ifndef __ASM_SH_BL_BIT_32_H
#define __ASM_SH_BL_BIT_32_H

static inline void set_bl_bit(void)
{
	unsigned long __dummy0, __dummy1;

	__asm__ __volatile__ (
		"stc	sr, %0\n\t"
		"or	%2, %0\n\t"
		"and	%3, %0\n\t"
		"ldc	%0, sr\n\t"
		: "=&r" (__dummy0), "=r" (__dummy1)
		: "r" (0x10000000), "r" (0xffffff0f)
		: "memory"
	);
}

static inline void clear_bl_bit(void)
{
	unsigned long __dummy0, __dummy1;

	__asm__ __volatile__ (
		"stc	sr, %0\n\t"
		"and	%2, %0\n\t"
		"ldc	%0, sr\n\t"
		: "=&r" (__dummy0), "=r" (__dummy1)
		: "1" (~0x10000000)
		: "memory"
	);
}

#endif /* __ASM_SH_BL_BIT_32_H */
Tue Jul 19 12:52:16 PDT 2016
Fri Jul 22 16:12:30 PDT 2016
Sun, Jul 24, 2016  5:34:28 PM
Tue, Jul 26, 2016 12:27:52 AM

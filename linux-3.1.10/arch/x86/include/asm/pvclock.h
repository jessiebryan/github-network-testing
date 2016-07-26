#ifndef _ASM_X86_PVCLOCK_H
#define _ASM_X86_PVCLOCK_H

#include <linux/clocksource.h>
#include <asm/pvclock-abi.h>

/* some helper functions for xen and kvm pv clock sources */
cycle_t pvclock_clocksource_read(struct pvclock_vcpu_time_info *src);
void pvclock_set_flags(u8 flags);
unsigned long pvclock_tsc_khz(struct pvclock_vcpu_time_info *src);
void pvclock_read_wallclock(struct pvclock_wall_clock *wall,
			    struct pvclock_vcpu_time_info *vcpu,
			    struct timespec *ts);
void pvclock_resume(void);

/*
 * Scale a 64-bit delta by scaling and multiplying by a 32-bit fraction,
 * yielding a 64-bit result.
 */
static inline u64 pvclock_scale_delta(u64 delta, u32 mul_frac, int shift)
{
	u64 product;
#ifdef __i386__
	u32 tmp1, tmp2;
#else
	ulong tmp;
#endif

	if (shift < 0)
		delta >>= -shift;
	else
		delta <<= shift;

#ifdef __i386__
	__asm__ (
		"mul  %5       ; "
		"mov  %4,%%eax ; "
		"mov  %%edx,%4 ; "
		"mul  %5       ; "
		"xor  %5,%5    ; "
		"add  %4,%%eax ; "
		"adc  %5,%%edx ; "
		: "=A" (product), "=r" (tmp1), "=r" (tmp2)
		: "a" ((u32)delta), "1" ((u32)(delta >> 32)), "2" (mul_frac) );
#elif defined(__x86_64__)
	__asm__ (
		"mulq %[mul_frac] ; shrd $32, %[hi], %[lo]"
		: [lo]"=a"(product),
		  [hi]"=d"(tmp)
		: "0"(delta),
		  [mul_frac]"rm"((u64)mul_frac));
#else
#error implement me!
#endif

	return product;
}

#endif /* _ASM_X86_PVCLOCK_H */
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:11 PM
Mon, Jul 25, 2016  6:22:25 PM
Mon, Jul 25, 2016  7:35:39 PM

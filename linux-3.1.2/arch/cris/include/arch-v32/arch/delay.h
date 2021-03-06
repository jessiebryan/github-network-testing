#ifndef _ASM_CRIS_ARCH_DELAY_H
#define _ASM_CRIS_ARCH_DELAY_H

extern void cris_delay10ns(u32 n10ns);
#define udelay(u) cris_delay10ns((u)*100)
#define ndelay(n) cris_delay10ns(((n)+9)/10)

/*
 * Not used anymore for udelay or ndelay.  Referenced by
 * e.g. init/calibrate.c.  All other references are likely bugs;
 * should be replaced by mdelay, udelay or ndelay.
 */

static inline void
__delay(int loops)
{
	__asm__ __volatile__ (
		"move.d %0, $r9\n\t"
		"beq 2f\n\t"
		"subq 1, $r9\n\t"
		"1:\n\t"
		"bne 1b\n\t"
		"subq 1, $r9\n"
		"2:"
		: : "g" (loops) : "r9");
}

#endif /* _ASM_CRIS_ARCH_DELAY_H */
Tue Jul 19 12:33:54 PDT 2016
Fri Jul 22 15:38:44 PDT 2016
Sun, Jul 24, 2016  1:21:02 PM
Mon, Jul 25, 2016  6:29:26 PM
Mon, Jul 25, 2016  7:42:31 PM
Tue, Jul 26, 2016  2:18:14 PM

#ifndef _CRIS_ARCH_DELAY_H
#define _CRIS_ARCH_DELAY_H

static inline void __delay(int loops)
{
	__asm__ __volatile__ (
			      "move.d %0,$r9\n\t"
			      "beq 2f\n\t"
			      "subq 1,$r9\n\t"
			      "1:\n\t"
			      "bne 1b\n\t"
			      "subq 1,$r9\n"
			      "2:"
			      : : "g" (loops) : "r9");
}

#endif /* defined(_CRIS_ARCH_DELAY_H) */



Tue Jul 19 12:48:53 PDT 2016
Fri Jul 22 16:06:01 PDT 2016
Sun, Jul 24, 2016  4:46:05 PM
Mon, Jul 25, 2016 11:34:22 PM

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



Tue Jul 19 12:53:26 PDT 2016
Fri Jul 22 16:14:46 PDT 2016
Sun, Jul 24, 2016  5:51:11 PM
Tue, Jul 26, 2016 12:46:16 AM

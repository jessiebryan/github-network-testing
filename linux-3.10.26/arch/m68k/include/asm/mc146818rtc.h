/*
 * Machine dependent access functions for RTC registers.
 */
#ifndef _ASM_MC146818RTC_H
#define _ASM_MC146818RTC_H


#ifdef CONFIG_ATARI
/* RTC in Atari machines */

#include <asm/atarihw.h>

#define RTC_PORT(x)	(TT_RTC_BAS + 2*(x))
#define RTC_ALWAYS_BCD	0

#define CMOS_READ(addr) ({ \
atari_outb_p((addr),RTC_PORT(0)); \
atari_inb_p(RTC_PORT(1)); \
})
#define CMOS_WRITE(val, addr) ({ \
atari_outb_p((addr),RTC_PORT(0)); \
atari_outb_p((val),RTC_PORT(1)); \
})
#endif /* CONFIG_ATARI */

#endif /* _ASM_MC146818RTC_H */
Tue Jul 19 12:51:33 PDT 2016
Fri Jul 22 16:11:03 PDT 2016
Sun, Jul 24, 2016  5:23:53 PM
Tue, Jul 26, 2016 12:16:11 AM

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
Tue Jul 19 12:47:02 PDT 2016
Fri Jul 22 16:02:32 PDT 2016
Sun, Jul 24, 2016  4:19:00 PM
Mon, Jul 25, 2016 11:04:17 PM

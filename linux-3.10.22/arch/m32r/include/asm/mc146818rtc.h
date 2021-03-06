/*
 * Machine dependent access functions for RTC registers.
 */
#ifndef _ASM_MC146818RTC_H
#define _ASM_MC146818RTC_H

#include <asm/io.h>

#ifndef RTC_PORT
#define RTC_PORT(x)	((x))
#define RTC_ALWAYS_BCD	1	/* RTC operates in binary mode */
#endif

/*
 * The yet supported machines all access the RTC index register via
 * an ISA port access but the way to access the date register differs ...
 */
#define CMOS_READ(addr) ({ \
outb_p((addr),RTC_PORT(0)); \
inb_p(RTC_PORT(1)); \
})
#define CMOS_WRITE(val, addr) ({ \
outb_p((addr),RTC_PORT(0)); \
outb_p((val),RTC_PORT(1)); \
})

#define RTC_IRQ 8

#endif /* _ASM_MC146818RTC_H */
Tue Jul 19 12:48:56 PDT 2016
Fri Jul 22 16:06:06 PDT 2016
Sun, Jul 24, 2016  4:46:37 PM
Mon, Jul 25, 2016 11:34:58 PM

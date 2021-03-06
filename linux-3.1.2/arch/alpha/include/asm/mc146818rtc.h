/*
 * Machine dependent access functions for RTC registers.
 */
#ifndef __ASM_ALPHA_MC146818RTC_H
#define __ASM_ALPHA_MC146818RTC_H

#include <asm/io.h>

#ifndef RTC_PORT
#define RTC_PORT(x)	(0x70 + (x))
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

#endif /* __ASM_ALPHA_MC146818RTC_H */
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:33 PDT 2016
Sun, Jul 24, 2016  1:19:42 PM
Mon, Jul 25, 2016  6:27:50 PM
Mon, Jul 25, 2016  7:40:57 PM
Tue, Jul 26, 2016  2:16:43 PM

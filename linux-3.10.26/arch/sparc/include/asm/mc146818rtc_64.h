/*
 * Machine dependent access functions for RTC registers.
 */
#ifndef __ASM_SPARC64_MC146818RTC_H
#define __ASM_SPARC64_MC146818RTC_H

#include <asm/io.h>

#ifndef RTC_PORT
extern unsigned long cmos_regs;
#define RTC_PORT(x)	(cmos_regs + (x))
#define RTC_ALWAYS_BCD	0
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

#endif /* __ASM_SPARC64_MC146818RTC_H */
Tue Jul 19 12:51:39 PDT 2016
Fri Jul 22 16:11:15 PDT 2016
Sun, Jul 24, 2016  5:25:23 PM
Tue, Jul 26, 2016 12:17:50 AM

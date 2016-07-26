#ifndef _ASM_X86_TIME_H
#define _ASM_X86_TIME_H

#include <linux/clocksource.h>
#include <asm/mc146818rtc.h>

extern void hpet_time_init(void);
extern void time_init(void);

extern struct clock_event_device *global_clock_event;

#endif /* _ASM_X86_TIME_H */
Tue Jul 19 12:51:41 PDT 2016
Fri Jul 22 16:11:18 PDT 2016
Sun, Jul 24, 2016  5:25:51 PM
Tue, Jul 26, 2016 12:18:21 AM

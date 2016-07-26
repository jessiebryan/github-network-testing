#ifndef _ASM_X86_TIME_H
#define _ASM_X86_TIME_H

#include <linux/clocksource.h>
#include <asm/mc146818rtc.h>

extern void hpet_time_init(void);
extern void time_init(void);

extern struct clock_event_device *global_clock_event;

#endif /* _ASM_X86_TIME_H */
Tue Jul 19 12:42:00 PDT 2016
Fri Jul 22 15:53:17 PDT 2016
Sun, Jul 24, 2016  3:07:12 PM
Mon, Jul 25, 2016  9:44:18 PM

#ifndef __ASMARM_SMP_TWD_H
#define __ASMARM_SMP_TWD_H

#define TWD_TIMER_LOAD			0x00
#define TWD_TIMER_COUNTER		0x04
#define TWD_TIMER_CONTROL		0x08
#define TWD_TIMER_INTSTAT		0x0C

#define TWD_WDOG_LOAD			0x20
#define TWD_WDOG_COUNTER		0x24
#define TWD_WDOG_CONTROL		0x28
#define TWD_WDOG_INTSTAT		0x2C
#define TWD_WDOG_RESETSTAT		0x30
#define TWD_WDOG_DISABLE		0x34

#define TWD_TIMER_CONTROL_ENABLE	(1 << 0)
#define TWD_TIMER_CONTROL_ONESHOT	(0 << 1)
#define TWD_TIMER_CONTROL_PERIODIC	(1 << 1)
#define TWD_TIMER_CONTROL_IT_ENABLE	(1 << 2)

struct clock_event_device;

extern void __iomem *twd_base;

int twd_timer_ack(void);
void twd_timer_setup(struct clock_event_device *);

#endif
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:39 PDT 2016
Sun, Jul 24, 2016  1:28:07 PM
Mon, Jul 25, 2016  6:37:55 PM
Mon, Jul 25, 2016  7:50:49 PM
Tue, Jul 26, 2016  2:26:03 PM

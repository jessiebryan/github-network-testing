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

#include <linux/ioport.h>

struct twd_local_timer {
	struct resource	res[2];
};

#define DEFINE_TWD_LOCAL_TIMER(name,base,irq)	\
struct twd_local_timer name __initdata = {	\
	.res	= {				\
		DEFINE_RES_MEM(base, 0x10),	\
		DEFINE_RES_IRQ(irq),		\
	},					\
};

int twd_local_timer_register(struct twd_local_timer *);

#endif
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:33 PDT 2016
Sun, Jul 24, 2016  5:12:58 PM
Tue, Jul 26, 2016 12:04:06 AM

/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 *  Machine specific IO port address definition for generic.
 *  Written by Osamu Tomita <tomita@cinet.co.jp>
 */
#ifndef __LINUX_I8253_H
#define __LINUX_I8253_H

#include <linux/param.h>
#include <linux/spinlock.h>
#include <linux/timex.h>

/* i8253A PIT registers */
#define PIT_MODE	0x43
#define PIT_CH0		0x40
#define PIT_CH2		0x42

#define PIT_LATCH	((PIT_TICK_RATE + HZ/2) / HZ)

extern raw_spinlock_t i8253_lock;
extern struct clock_event_device i8253_clockevent;
extern void clockevent_i8253_init(bool oneshot);

extern void setup_pit_timer(void);

#endif /* __LINUX_I8253_H */
Tue Jul 19 12:50:36 PDT 2016
Fri Jul 22 16:09:15 PDT 2016
Sun, Jul 24, 2016  5:10:33 PM
Tue, Jul 26, 2016 12:01:28 AM

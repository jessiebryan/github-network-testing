#ifndef _LINUX_ALARMTIMER_H
#define _LINUX_ALARMTIMER_H

#include <linux/time.h>
#include <linux/hrtimer.h>
#include <linux/timerqueue.h>
#include <linux/rtc.h>

enum alarmtimer_type {
	ALARM_REALTIME,
	ALARM_BOOTTIME,

	ALARM_NUMTYPE,
};

/**
 * struct alarm - Alarm timer structure
 * @node:	timerqueue node for adding to the event list this value
 *		also includes the expiration time.
 * @period:	Period for recuring alarms
 * @function:	Function pointer to be executed when the timer fires.
 * @type:	Alarm type (BOOTTIME/REALTIME)
 * @enabled:	Flag that represents if the alarm is set to fire or not
 * @data:	Internal data value.
 */
struct alarm {
	struct timerqueue_node	node;
	ktime_t			period;
	void			(*function)(struct alarm *);
	enum alarmtimer_type	type;
	bool			enabled;
	void			*data;
};

void alarm_init(struct alarm *alarm, enum alarmtimer_type type,
		void (*function)(struct alarm *));
void alarm_start(struct alarm *alarm, ktime_t start, ktime_t period);
void alarm_cancel(struct alarm *alarm);

#endif
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:26:07 PM
Mon, Jul 25, 2016  6:35:31 PM
Mon, Jul 25, 2016  7:48:28 PM
Tue, Jul 26, 2016  2:23:50 PM

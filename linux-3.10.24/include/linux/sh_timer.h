#ifndef __SH_TIMER_H__
#define __SH_TIMER_H__

struct sh_timer_config {
	char *name;
	long channel_offset;
	int timer_bit;
	unsigned long clockevent_rating;
	unsigned long clocksource_rating;
};

#endif /* __SH_TIMER_H__ */
Tue Jul 19 12:50:39 PDT 2016
Fri Jul 22 16:09:19 PDT 2016
Sun, Jul 24, 2016  5:11:10 PM
Tue, Jul 26, 2016 12:02:08 AM

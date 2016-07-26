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
Tue Jul 19 12:52:36 PDT 2016
Fri Jul 22 16:13:07 PDT 2016
Sun, Jul 24, 2016  5:39:06 PM
Tue, Jul 26, 2016 12:32:58 AM

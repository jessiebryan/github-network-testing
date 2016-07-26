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
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:40 PDT 2016
Sun, Jul 24, 2016  4:43:21 PM
Mon, Jul 25, 2016 11:31:18 PM

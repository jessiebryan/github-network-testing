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
Tue Jul 19 12:46:09 PDT 2016
Fri Jul 22 16:00:53 PDT 2016
Sun, Jul 24, 2016  4:06:26 PM
Mon, Jul 25, 2016 10:50:17 PM

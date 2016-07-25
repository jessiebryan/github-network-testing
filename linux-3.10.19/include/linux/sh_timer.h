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
Tue Jul 19 12:47:26 PDT 2016
Fri Jul 22 16:03:16 PDT 2016
Sun, Jul 24, 2016  4:24:53 PM
